#include <stdio.h>
#include<string.h>
void main(){
    int flag=0,i;
    char str[80];
    char *words[]={"auto","break","float","case","int","char","void","sizeof","if"};
    printf("Enter a lexeme:");
    scanf("%s",str);
    for(i=0;i<=9;i++){
        if(strcmp(str,words[i])==0){
            flag=1;
            break;
        }
        
    }
    if(flag==1)
    printf("Keyword");
    else
    printf("Not a keyword");
}