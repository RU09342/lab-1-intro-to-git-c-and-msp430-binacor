/*
 * Author: Russell Binaco
 * Created: 9-6-17
 * Edited: 9-7-17
 *
 */
#include<stdio.h>
#include<math.h>
int math(int num1, int num2, char Operator) { //performs Operator operation on num1,num2 and returns int result
    int result = 0;
   switch (Operator){ //changes operation based on char input
       case '+': //addition
       result = num1+num2;
       break;
       case '-': //subtraction
       result = num1-num2;
       break;
       case '*': //multiplication
       result = num1*num2;
       break;
       case '/': //division
       result = num1/num2;
       break;
       case '%': //modulus
       result = num1%num2;
       break;
       default: //invalid entries, result will be zero
       printf("Bad operator");
       break;
       
   }
   return result;
}
