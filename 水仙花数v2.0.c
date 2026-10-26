#include <stdio.h>

int main(){

    int a,b,c,d;

    for (a=100;a<=999;a++) {
        b=a%10;
        c=a/10%10;
        d=a/100;
        if(b*b*b+c*c*c+d*d*d==a){
            printf("%d\n",a);
        }                
    }
    return 0;
}