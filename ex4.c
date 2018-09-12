//
//  main.c
//  task4
//
//  Created by Daniil Shilintsev on 12/09/2018.
//  Copyright © 2018 Daniil Shilintsev. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char command[100];
    while(1){
        printf("$  ");
        fgets(command, 100, stdin);
        system(command);
    }
    return 0;
}
