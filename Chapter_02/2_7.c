#include <stdio.h>
void pri_smi(void);
int main(void)
{
    pri_smi();pri_smi();pri_smi();printf("\n");
    pri_smi();pri_smi();printf("\n");
    pri_smi();printf("\n");
    
    return 0;
}

void pri_smi(void)
{
    printf("Smile!");
}