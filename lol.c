#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#define SIZE 102



    int main()
    {
        int T,i=0;
        int diffX, diffY;
        char s[SIZE];int fl=0;
        scanf("%d\n", &T);

        while(T--){i=0;fl=0;
            fgets(s, SIZE, stdin);
            //printf("%s\n", s);
	    s[strlen(s)]='\0';
            while(i<strlen(s)-2){
            	if(s[i]=='L'){
            		if(s[i+1]=='O'&&s[i+2]=='L'){
            			printf("Ban it!\n");
				fl=1;
            			break;
            		}
            	}i++;
            }
	    if(fl!=1)
            printf("Dont ban it!\n");
		fflush(stdout);
        }
        return 0;
    }
