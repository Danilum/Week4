//
//  main.c
//  task1
//
//  Created by Daniil Shilintsev on 12/09/2018.
//  Copyright © 2018 Daniil Shilintsev. All rights reserved.
//

#include <stdio.h>
#include <zconf.h>
#include <unistd.h>

int main(){
    int n = 99;
    int pid = getpid();
    fork();
    
    if (pid == getpid())
        printf("Hello from parent %d\n", (pid - n));
    else
        printf("Hello from child %d\n", (getpid() - n));
    return 0;
}


/*
Hello from parent 20483
Hello from child 20484
Hello from parent 20485
Hello from child 20486
Hello from parent 20487
Hello from child 20488
Hello from parent 20489
Hello from child 20490
Hello from parent 20491
Hello from child 20492
Hello from parent 20493
Hello from child 20494
Hello from parent 20495
Hello from child 20496
Hello from parent 20497
Hello from child 20498
Hello from parent 20499
Hello from child 20500
Hello from parent 20501
Hello from child 20502
*/

//Each cycle the program starts a new process and its child process, which PID is the next available number.
