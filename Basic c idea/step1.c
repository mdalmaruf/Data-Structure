//Section: 'K'
#include <stdio.h>
void func(void)
{
    printf("\n This is a recursive function \n");
    func();
    return;
}
int main(void)
{
    func();
    return 0;
}
