#include <stdio.h>
#include <assert.h>
int main()
{
    static int i = 5;
    assert (--i);
        printf("%d ", i);
        main(10);
    
}