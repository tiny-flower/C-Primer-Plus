#include<stdio.h>
int main(void)
{
    int urn[5] = {100, 200, 300, 400, 500};
    int *ptr1, *ptr2, *ptr3;

    ptr1 = urn;
    ptr2 = &urn[2];

    printf("pointer value ptr1 %p %d ptr2 %p %d\n",ptr1,*ptr1,ptr2,*ptr2);
    
    ptr3 = ptr1+2;
    printf("ptr3 %p %d \n",ptr3,*ptr3);

    return 0;
}