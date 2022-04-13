#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "genABP.h"
#include "structABP.h"

int genABP(FILE *arq, No *head)
{
    int *nums;
    int cont = 0;
    char buffer[1024], stp;

    while (fgets(buffer, sizeof(buffer), arq))
    {
        char *token;

        token = strtok(buffer, ";");

        nums = (int *)malloc(sizeof(token));

        while (token != NULL)
        {
            nums[cont] = atoi(token);
            cont++;
            token = strtok(NULL, ";");
        }
    }

    return nums;
    //scanf(" %c", &stp);
}

