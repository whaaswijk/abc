#include <stdio.h>

int main()
{
#if !defined(WIN32) && !defined(WIN64) && !defined(_WIN32) && !defined(_WIN64)
    if (sizeof(void*) == 8)     // Assume 64-bit Linux if pointers are 8 bytes.
        printf("-DLIN64 ");
    else
        printf("-DLIN ");
#endif

    printf("-DSIZEOF_VOID_P=%d -DSIZEOF_LONG=%d -DSIZEOF_INT=%d\n",
           (int)sizeof(void*),
           (int)sizeof(long),
           (int)sizeof(int) );


    return 0;
}
