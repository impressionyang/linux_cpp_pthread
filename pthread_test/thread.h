#ifndef _THREAD_H_
#define _THREAD_H_

#include <pthread.h>

class Thread
{
private:
    pthread_t pid;

private:
    static void *start_thread(void *arg); //静态成员函数
public:
    int start();
    virtual void run() = 0; //基类中的虚函数要么实现，要么是纯虚函数（绝对不允许声明不实现，也不纯虚）
    pthread_t get_thread_id();
};

#endif // _THREAD_H_