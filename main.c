#include <stdio.h>
#include "NumClass.h"


int main(){
    int start , end;
    printf("Enter two numbers :\n");
    scanf("%d" , & start);
    scanf("%d" , & end);
    for (int i = start ; i < end; i++)
    {
        if (isPrime(i))
        {
        printf(",%d" , i);
        }
    }
    printf("\n");
    for (int i = start ; i < end; i++)
    {
        if (isStrong(i))
        {
        printf(",%d" , i);
        }
    }
    printf("\n");
        for (int i = start ; i < end; i++)
    {
        if (isArmstrong(i))
        {
        printf(",%d" , i);
        }
    }
    printf("\n");
        for (int i = start ; i < end; i++)
    {
        if (isPalindrome(i))
        {
        printf(",%d" , i);
        }
    }  
    printf("\n"); 
}
