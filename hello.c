#include <stdio.h>
#include <string.h>

int main(void)
{
    int a1[] = {1,1,2,2,3,3,4};
    int size = sizeof(a1)/sizeof(a1[0]);
    
    int n = a1[0];
    for (int i = 0; i < size; i++)
    {
        n = n ^ a1[i];
    }
    printf("size if a1 =%i\n",size);
    printf("%i not duplicated\n",n);
}
