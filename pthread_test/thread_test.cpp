#include "thread_test.h"


Thread_Test::Thread_Test(int cnt)
{
    this->cnt = cnt;
    this->alive = true;
}

void Thread_Test::run()
{
    while(this->alive) {
        cout<<"test: "<<cnt++<<" status: "<<this->alive<<endl;
        sleep(1);
    }
}

void Thread_Test::stop()
{
    this->alive = false;
}

int Thread_Test::get_cnt()
{
    return this->cnt;
}

bool Thread_Test::get_running()
{
    return this->alive;
}