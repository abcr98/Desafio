#include<stdio.h>

int main(){

    char s[1000];
    int tamorig,tamsec;
    int i = 0, j= 0;

    scanf("%[^\,], %d", s, &tamorig);

    tamsec = tamorig;

    if(s[0]=='\"'){
        tamsec+=2;
    }

    for(i=0; i<tamsec-1; i++){
        if(s[i]==' '){
            tamsec+=2;
            for(j=tamsec-1;j>i;j--){
                s[j+2] = s[j];
            }
            s[i]='&';s[i+1]='3';s[i+2]='2';
        }
    }
    printf("%s\n", s);

    return 0;
}
