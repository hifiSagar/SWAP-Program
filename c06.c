#include<stdio.h>
int main(){
    int num1 = 10, num2 = 20;
    int temp;
    printf("values BEFORE swap\n");
    printf("first numbers %d \n",num1);
    printf("second number %d \n",num2);
    temp = num1;
    num1 = num2;
    num2 = temp;
    printf("values AFTER  swap \n");
    printf("first numbers %d \n",num1);
    printf("second number %d \n",num2);
    return 0;
}