#include<stdio.h>
void printDigits(int n) {
if (n < 10)
{
printf("%d", n);
}
else 
{
printDigits(n / 10);
printf("%d", n % 10);
}
}

int main()
{
printDigits(12345);
}
