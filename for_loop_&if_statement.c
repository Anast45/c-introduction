#include <stdio.h>

int main()
{
    int x = 0;
    
    for(int i = 0 ; i<2 ; i++){
        if (x==1)
            printf("x = %d\n",x);
        x++;  
        printf ("i = %d\n", i);
    }

    return 0;
}
