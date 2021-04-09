#include <stdio.h>
int a,b,c,d;
void init(){
a=2, b=3, c=4, d=5;
}
int main(){
    int a=2, b=3, c=4, d=5;
    a = ++a + ++a;
    printf("1번: %d\n", a);
// a= a+1; a=a+1; c=a+a; a=c;
    b=++b - --c;
    printf("2번: %d\n", b);
//b=b+1; c=c-1; x=b-c; b=x;
    c=++b /b++;
    printf("3번: %d\n", c);

    d=10 %c++;
    printf("4번: %d\n", d);
//10/c; c=c+1; c=d
    a= ++c + c++ + c++;
    printf("5번: %d\n", a);

    b= 10 + ++a;
    printf("6번: %d\n", b);

    c= 10 - --d;
    printf("7번: %d\n", c);

    c= ++a * b++;
    printf("8번: %d\n", c);

    return 0;
}
