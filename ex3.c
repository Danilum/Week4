//
//  main.c
//  task3
//
//  Created by Daniil Shilintsev on 12/09/2018.
//  Copyright © 2018 Daniil Shilintsev. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    char command[100];
    while (1) {
        printf("$  ");
        scanf("%s", command);
        system(command);
    }
}
