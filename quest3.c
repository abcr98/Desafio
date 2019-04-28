#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    char original[100], typo[100];
    int i = 0, j = 0;
    int count = 0, difference;
    int ok=0;

    printf("Digite as palavras a serem comparadas\n");

    scanf("%[^\,], %[^\n]", original, typo);

    difference = strlen(original)-strlen(typo);

    switch(difference){
        case 0:
            for(i=0; i<strlen(original); i++){
                if(original[i]!=typo[i]){
                    count++;
                }
            }
            if(count>1){
                printf("false");
            }else{
                printf("true");
            }
            break;
        case 1:
            //conferir se as letras de typo estão todas em original
            for(i=0;i<strlen(typo); i++){
                for(j=0;j<strlen(original);j++){
                    if(typo[i]==original[j]){
                        ok+=1;
                    }
                }
            }
            if(ok == strlen(typo)){
                printf("true");
            }else{
                printf("false");
            }

            break;
        case -1:
            //conferir se as letras de original estão todas em typo
            for(i=0;i<strlen(original); i++){
                for(j=0;j<strlen(typo);j++){
                    if(original[i]==typo[j]){
                        ok+=1;
                    }
                }
            }
            if(ok == strlen(original)){
                printf("true");
            }else{
                printf("false");
            }

            break;
        default:
            printf("false");
            break;
    }


    return 0;
}
