#include <cstdio>
#include <cstdlib>
int main(void)
{
    srand(1);
    for (int i = 0; i < 10000; i++)
    {
        printf("%d",rand()%10);
    }
    getchar();
    return 0;
}