#include <stdio.h>
int main()
{
    int i, n;
    int not[7] = {100,50,20,10,5,2,1};
    scanf("%d",&n);
    for(i = 0;i < 7;i++){
        printf("%d nota(s) de R$ %d,00\n",n/not[i],not[i]);
        n = n%not[i];
    }
    return 0;
}
