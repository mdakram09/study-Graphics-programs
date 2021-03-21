#include<stdio.h>
int main(void)
{
    char *ptr = "Linux";
    *ptr = 'T';
    printf("\n [%s] \n", ptr);
    return 0;
}
