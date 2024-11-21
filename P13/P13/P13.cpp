#include <stdio.h>
#include <stdlib.h>

void CubeByReference(int& nPtr);

int main(void)
{
    int number = 5;
    printf("The original value of number is %d", number);

    CubeByReference(number);

    printf("\nThe new value of number is %d\n", number);
    system("pause");
    return 0;
}

void CubeByReference(int& nPtr)
{
    nPtr = nPtr * nPtr * nPtr;
}
