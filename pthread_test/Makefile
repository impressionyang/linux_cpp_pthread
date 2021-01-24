object = main.o thread.o thread_test.o
run_target = thread_test
LFLAG = -lpthread

main : $(object)
	g++ -o $(run_target) $(object) $(LFLAG)

main.o : main.cpp
thread.o : thread.h thread.cpp
thread_test.o: thread_test.h thread_test.cpp

.PHONY : clean
clean:
	rm $(object) 