#include <iostream>
#include "thread_test.h"

using namespace std;

int main(int argc, char **argv)
{
    Thread_Test test(10);
    int ret = test.start();
    if (!ret) {
        cout<<"thread add succeed!"<<endl;
    }else {
        cout<<"thread add faild!"<<endl;
    }

    while(test.get_running()) {
        if (20 <= test.get_cnt()) {
            test.stop();
        }
    }
    return 0;
}