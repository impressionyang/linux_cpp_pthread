#include "thread.h"

int Thread::start()
{
    //创建一个线程(必须是全局函数)
    if (pthread_create(&pid, NULL, start_thread, (void *)this) != 0)
    {
        return -1;
    }
    // pthread_join(pid, NULL);  //使用这个会导致线程不响应
    return 0;
}

void *Thread::start_thread(void *arg) //静态成员函数只能访问静态变量或静态函数，通过传递this指针进行调用
{
    Thread *ptr = (Thread *)arg;
    ptr->run();
    return 0; //线程的实体是run
}

pthread_t Thread::get_thread_id()
{
    return this->pid;
}