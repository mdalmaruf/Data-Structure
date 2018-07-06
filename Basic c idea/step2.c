//Section : 'k'
#include <stdio.h>
int count = 1;
void func(int sum)
{
    int temp = sum;
    sum = sum + count;
    printf("%d + %d = %d \n", temp, count, sum );
    count ++;
    if(count <= 9)
    {
        func(sum);
    }
    else
    {
        printf("\nSum is [%d] \n", sum);
    }
    return;
}
int main(void)
{
    int sum = 0;
    func(sum);
    return 0;
}
