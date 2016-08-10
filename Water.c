# cs50
This repository contains some of my coding projects as part of cs50.

//This is a program that asks the user for the ammount of minutes he\she showers, and then outputs the equivalent ammount of water bottles used. 

#include <stdio.h>
#include <cs50.h>

int main(void)
{
    
    printf("How many minutes do you shower for?\n");
    int m = GetInt();
    
    printf("minutes: %d \n", m);
    
    int b = (12 * m);
    
    printf("bottles: %d \n", b);
    
    
}
