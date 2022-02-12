#include <stdio.h>

int main(void) {
    int T;
    scanf("%d",&T);
	for(int i=0;i<T;i++)
	{
	    int A,B,X,Y;
	    scanf("%d",&A);
        scanf("%d",&B);
        scanf("%d",&X);
        scanf("%d",&Y);
    if ((X*Y)>=(A*B))
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }
	}
	return 0;
}

