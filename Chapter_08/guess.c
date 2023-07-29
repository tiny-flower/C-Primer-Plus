#include<stdio.h>
int main(void)
{
    int guess = 1;
    printf("Pick an int from 1 to 100. I will try to guess");
    while (getchar() != 'y'){
        printf("well then is it %d ?\n", ++guess);
        while (getchar()!='\n')
            continue;
    }  

    printf("i knew i could do it\n");
    return 0;
}