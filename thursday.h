//thursday's primers (multi-threading & concurrency)
#pragma once 
#include "chrono"
#include "thread"

  void sleepNow(int seconds) 
{
  std::this_thread::sleep_for(std::chrono::milliseconds(seconds * 1000));
}

int primer10(void) {
	std::cout << "\nWelcome to Primer 10";
  sleepNow(5);
};

void timer1(int seconds) {
  std::this_thread::sleep_for(std::chrono::milliseconds(seconds * 1000));
}

void timer2(int seconds) {
  std::this_thread::sleep_for(std::chrono::milliseconds(seconds * 1000));
}

void thread_function() {
  cout << "Thread: " << std::this_thread::get_id() << " started\n";
  timer1(5);
  cout << "Thread: " << std::this_thread::get_id() << " ended\n";

}

void thread_function2() {
  cout << "Thread: " << std::this_thread::get_id() << " started\n";
  timer2(10);
  cout << "Thread: " << std::this_thread::get_id() << " ended\n";

}

int primer11(void) {
	std::cout << "\nWelcome to Primer 11 - Joining Threads";
     cout << "Main Thread: " << std::this_thread::get_id() << " Started\n";
   std::thread t(&thread_function);
   std::thread g(&thread_function2);
   cout << "Main Thread: " << std::this_thread::get_id() << " Started\n";
   t.join();
   g.join();
   cout << "Main Thread: " << std::this_thread::get_id() << " Ended\n";
   return 0;
}

int primer12(void) {
	std::cout << "\nWelcome to Primer 12";
     cout << "Main Thread: " << std::this_thread::get_id() << " Started\n";
   std::thread t(&thread_function);
   std::thread g(&thread_function2);
   t.detach();
   cout << "Main Thread: " << std::this_thread::get_id() << " Started\n";
   if (t.joinable()){
     t.join();
   }
   if (g.joinable()){
     g.join();
   }
   cout << "Main Thread: " << std::this_thread::get_id() << " Ended\n";
	return 0;
}