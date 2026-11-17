#include <stdio.h>
#include <stdlib.h>

void TowerofHanoi(int n , char source, char destination , char temp)
{
    if(n>1)
    {
        TowerofHanoi(n-1,source,temp,destination);
        printf("\n Move %d destination %c to %c ", n, source, destination);
        TowerofHanoi(n-1,temp,destination,source);
    }
    else
       printf("\n Move %d destination %c to %c ", n, source, destination);
}
int main()
{
    int n;
    printf("\n Read no. of discs:");
    scanf("%d",&n);
    TowerofHanoi(n,'S','D','T');
    return 0;
}
