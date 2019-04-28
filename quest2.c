#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    int countdifletters = 0;
    char original[100], permutation[100];
    int i = 0, j = 0;

    printf("Digite as palavras a serem comparadas\n");

    scanf("%[^\,], %[^\n]", original, permutation);

    if(original[0]!=permutation[0]){
        printf("false\n");
    }else{
        if(strlen(original)>3){
            for(i=0; i<strlen(original); i++){
                if(original[i]!=permutation[i]){
                    countdifletters++;
                }
            }
            if(countdifletters/2 == 2 | countdifletters/2 == 3){
                printf("true\n");
            }else{
                printf("false\n");
            }
        }else{
            printf("true\n");
        }
    }

    //printf("%s", permutation);

    return 0;
}
