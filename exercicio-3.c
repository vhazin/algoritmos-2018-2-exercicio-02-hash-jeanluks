#include <stdio.h>
int main(){

    unsigned int t=0;
    unsigned long long a=0, b=0, x=0, n=0, c=0, d=0, m=0,cont=0,resultado=0;
    scanf("%d",&t);
    while(t--){
        scanf("%llu %llu %llu %llu %llu %llu %llu",&a,&b,&x,&n,&c,&d,&m);
        for(unsigned long long i=0;i <=n;i++){
            resultado = (a * (x + i) + b)%m;
            unsigned long long verdadeiro = ((c<=resultado) && (resultado<=d));
            if(verdadeiro){
                cont++;
            }
        }
        printf("%llu\n",cont);
        cont = 0;
}

    return 0;
}
