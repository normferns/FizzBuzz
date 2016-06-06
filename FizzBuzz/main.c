//
//  main.c
//  FizzBuzz
//
//  Created by Norm Ferns on 5/06/2016.
//  Copyright (c) 2016 Norm Ferns. All rights reserved.
//
//  Lighthouse Labs
//  Exercise 2.7 - Assignment #1
//  Write a program that prints the numbers from 1 to 100. For the multiples of 3, print "Fizz" instead of the
//  number and for the multiples of 5, print "Buzz" instead of the number. For numbers which are multiples
//  of both 3 and 5 print "FizzBuzz"

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    for (int i = 1; i <= 100; i++) {
        if (i % 15 == 0) {
            printf("FizzBuzz\n");
        } else if (i % 3 == 0) {
            printf("Fizz\n");
        } else if (i % 5 == 0) {
            printf("Buzz\n");
        } else {
            printf("%d\n", i);
        }
    }
    
    return 0;
}
