/*
    Project : Payslip Program
    Author : Vellah Naswa
    Date : Oct,2021
    Compiler : Gcc
    Language : C99
    License : MIT
    */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //  variable declaration
    char name [100];
    int emp_no,hours;
    int normal_pay,overtime_pay,gross;
    float tax,net;
    const int rate = 1000;

    printf("Factor payslip system!\n");
    printf("Employee Name: ");
    gets(name);
    printf("Employee number: ");
    scanf("%d",&emp_no);
    printf("Hours Worked: ");
    scanf("%d",&hours);

    // computation
    if(hours > 40){
        normal_pay = 40 * rate;
        overtime_pay = (hours - 40) * 1.5 * rate;
    }
    else{
        normal_pay = hours * rate;
        overtime_pay = 0;
    }
    gross = normal_pay + overtime_pay;
    tax = 0.16 * gross;
    net = gross - tax;

    // print payslip
    printf("Employee No:\t%d\n",emp_no);
    printf("Employee Name:\t%s\n",name);
    printf("Employee pay:\t%d\n",normal_pay);
    printf("Overtime Pay:\t%d\n",overtime_pay);
    printf("Gross Pay:\t%d\n",gross);
    printf("Tax:\t%f\n",tax);
    printf("Net Pay:\t%f\n",net);

    return 0;
}
