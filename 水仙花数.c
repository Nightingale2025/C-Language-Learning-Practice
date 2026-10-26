#include <stdio.h>
#include <windows.h>

int main(){
    int a,b,c,d;
    a=100;
    do{
        b=a%10;
        c=a/10%10;
        d=a/100%10;
        if(b*b*b+c*c*c+d*d*d==a){
            printf("%d\n",a);
            a=a+1;
        }else{
            a=a+1;
        }
    }
    while(a<=999);

    return 0;
}

