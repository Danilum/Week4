//
//  main.c
//  task2
//
//  Created by Daniil Shilintsev on 12/09/2018.
//  Copyright © 2018 Daniil Shilintsev. All rights reserved.
//

#include <stdio.h>
#include <unistd.h>

int main(){
    for (int i=0; i<3; i++) { // in task 2(b) there would be i<5
        fork();
        sleep(5);
    }
    return 0;
}


/*

-+= 23123 daniilshilintsev ./main
 |-+- 23124 daniilshilintsev ./main
 | |-+- 23125 daniilshilintsev ./main
 | | \--- 23128 daniilshilintsev ./main
 | \--- 23127 daniilshilintsev ./main
 |-+- 23126 daniilshilintsev ./main
 | \--- 23129 daniilshilintsev ./main
 \--- 23130 daniilshilintsev ./main

fork() made 3 copies of 1st process, 2 copies of 2nd(copied) process and 1 copy of 3rd(copied) process.
*/

//3 loops --> 8 processes
//5 loops --> 32 processes
