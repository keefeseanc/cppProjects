/*
 @file: pthreads_skeleton.cpp
 
 @author: student name1, student2@uncc.edu
 @author: student name2, student2@uncc.edu
 @author: student name3, student3@uncc.edu
 
 @description: A program that demonstrates processes.
 
 @course: ITSC 3146
 @assignment: in-class activity [n]
 */

#include <pthread.h>
#include <iostream>

using namespace std;

int numbers [10];


// This function shows the skeleton that pthread 
// functions must adhere to. 
// Copy this skeleton for any pthread function 
// you need to define. 
// In the copy, modify the name of the function 
// and the function body as needed. 
void *routineName(void *arg)
{
   // TODO: Add code that implements
   //       the thread's functionality
   cout << "Thread is running..." << endl;
   return 0;
}

void *countNegatives (void *arg){
   int count = 0;
   //int i = *((int *)arg);
   int size = sizeof(numbers)/sizeof(numbers[0]);
   for (int i = 0;i<size;i++){
      if( numbers[i] < 0){
         count++;
      }
   }
   
   cout << "Count: " << count << endl;
   return 0;
}

void *average (void *arg){
   int avg = 0;
   int sum = 0;
   int count = 0;
   int size =sizeof(numbers)/sizeof(numbers[0]);
   for (int i = 0;i<size;i++){
     sum = sum + numbers[i];
     count ++;
   }
   avg = (double)(sum/count);
   cout << "Average: " << avg << endl;
   
   return 0;
}

void *reverse (void *arg){
   int size = sizeof(numbers)/sizeof(numbers[0]);
   
   std::cout<< "Numbers in reverse: \n";
   for (int i = size-1;i>0;i--){
      std::cout<< numbers[i]<< endl;
   }
   
   return 0;
}


int main()
{
   // id is used to store a unique thread identifier,
   // returned by the call to create a new POSIX thread
   pthread_t id;
   
   // rc is used to store the code returned by the
   // call to create a new POSIX thread. The value is
   // zero (0) if the call succeeds.
   int rc;
   
   
   // TODO: Add code to perform any needed initialization
   //       or to process user input
   for (int i=0;i<10;i++){
      cout << "\nInput number " << i+1 << " :";
      cin >> numbers[i];
   }

   
   // Create thread(s)
   // TODO: Modify according to assignment requirements
   rc = pthread_create(&id, NULL, countNegatives, NULL);
   rc = pthread_create(&id, NULL, average, NULL);
   rc = pthread_create(&id, NULL, reverse, NULL);

   if (rc){
      cout << "ERROR; return code from pthread_create() is " << rc << endl;
      return -1;
   }
   

   // NOTE: Using exit here will immediately end execution of all threads
   pthread_exit(0);
}
