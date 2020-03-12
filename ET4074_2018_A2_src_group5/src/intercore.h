
#ifndef _INTERCORE_H_
#define _INTERCORE_H_

// Data structure shared between all the cores.
typedef struct {
    
    // Define your shared data here.
    int test;
    
} intercore_t;

// Access your shared data as "COM.<struct entry>".
#define COM (*((volatile intercore_t *)0x3E000000))

#endif
