//
//  Processes.cpp
//  ITSC 3146
//
//  Created by Bahamon, Julio on 1/12/17.
//


/*
 @file Processes.cpp
 @author student name, student@uncc.edu
 @author student name, student@uncc.edu
 @author student name, student@uncc.edu
 @description: <ADD DESCRIPTION>
 @course: ITSC 3146
 @assignment: in-class activity [n]
 */


#ifndef Processes_cpp
#define Processes_cpp

#include "Processes.h"
#include <sys/types.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>


using namespace std;


// Part 1: Working With Process IDs
pid_t getProcessID(void)
{
   // TODO: Add your code here
   pid_t id = getpid();
   return id;
}


// Part 2: Working With Multiple Processes
string createNewProcess(void)
{
   pid_t id = fork();
   
   // DO NOT CHANGE THIS LINE OF CODE
   process_id = id;
   
   
   if(id == -1)
   {
      return "Error creating process";
   }
   else if (id == 0)
   {
      // TODO: Add your code here
      std::cout << "I am a child process!" << std::endl;

      return "I am bored of my parent, switching programs now";
   }
   else
   {
      // TODO: Add your code here
      std::cout << "I just became a parent!" << std::endl;
      
      waitpid(-1, &id, 0);

      return "My child process just terminated!";
   }
}


// Part 3: Working With External Commands"
void replaceProcess(char * args[])
{
   // Spawn a process to execute the user's command.
   pid_t id = fork();
   
   if (id == -1){
      std::cout<<"Error creating child process\n";
   }else if (id == 0){
      execvp(args[0], args);
   }
   else{
      waitpid(-1, &id, 0);
      std::cout<<"Exiting program";
   }
   // TODO: Add your code here
   
   
}

#endif /* TestProg_cpp */
