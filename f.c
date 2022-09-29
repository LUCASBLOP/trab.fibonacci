#include <stdio.h>
int main(){
    int i,n,t1=0,t2=1,proxT;
    scanf("%i",&n);
    for(i=1;i<=n;i++){
        printf("%i, f",t1);
        proxT=t1+t2;
        t1=t2;
        t2=proxT;
    };
    return 0;
}