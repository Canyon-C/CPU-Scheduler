# CPU-Scheduler
In this project, I've created a CPU scheduler simulation that demonstrates the use of a Circular Doubly Linked List data structure. The goal is to provide a practical application of linked lists and showcase how they can be used to manage processes in a computer system.

The scheduler is designed to run a set of processes one after the other, giving each process a specific quantum of time to execute. The list is pre-populated with 5 sample processes, each with a unique name and specific total runtime. Based on the user's inputted quantum time, the scheduler begins executing the processes. After each cycle, the remaining time is updated and any processes that have finished running are automatically removed from the list. The user also has the option to add new processes to the list at the end of each cycle.

# Sample Output:
Enter Quantum Time:5

Prepopulating with processes

1.  Process A 10 seconds
2.  Process B 12 seconds
3.  Process C 8 seconds
4.  Process D 5 seconds
5.  Process E 10 seconds

Add new process? (Enter Y/N):Y

Enter New Process Name:F

Enter Total Process Time:15

Process Added.

Running Cycle 1

After cycle 1 -- 5 second(s) elapses -- state of processes is as follows:

1.  Process A 5 seconds
2.  Process B 7 seconds
3.  Process C 3 seconds
4.  Process E 5 seconds
5.  Process F 10 seconds

Add new process? (Enter Y/N):N

Running Cycle 2

After cycle 2 -- 10 second(s) elapses -- state of processes is as follows:

1.  Process B 2 seconds
2.  Process F 5 seconds

Add new process? (Enter Y/N):N

Running Cycle 3

After cycle 3 -- 15 second(s) elapses -- state of processes is as follows:

All processes are completed
