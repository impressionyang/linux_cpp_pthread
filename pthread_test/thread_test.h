#ifndef _THREAD_TEST_CPP_
#define _THREAD_TEST_CPP_

#include <iostream>
#include <unistd.h>
#include "thread.h"

using namespace std;

class Thread_Test: public Thread
{
public:
    Thread_Test(int cnt);
    void stop();
    int get_cnt();
    bool get_running();

protected:
    void run();

private:
    int cnt;
    bool alive;
};
#endif // _THREAD_TEST_CPP_