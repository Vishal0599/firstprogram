//  
#include<stdio.h>
int main(){
int a=3,b=5;

a=a^b;
b=a^b;
a=a^b;

printf("%d  %d",a,b);
return 0;
}
