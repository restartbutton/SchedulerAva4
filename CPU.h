// length of a time quantum
#ifndef CPU_H
#define CPU_H

#define QUANTUM 10
#include "task.h"

// run the specified task for the following time slice
void run(Task *task, int slice);

#endif