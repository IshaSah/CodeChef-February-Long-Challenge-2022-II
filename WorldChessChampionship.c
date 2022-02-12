#include<stdio.h>
#include<string.h>
int main(void) 

{
int t;

scanf("%d",&t); 
while(t--){


int x;


scanf("%d",&x);

char s[14];

scanf("%s",s); 
int c, d, n;

c=d=n=0;

for(int i=0; i<14; i++){

if(s[i]=='C')
c++;
else if(s[i]=='N')
n++;
else
d++;
}

c=2*c+d;

n=2*n+d;

if(c>n)

printf("%d\n",60*x); else if(c<n)

printf("%d\n",40*x);

else

printf("%d\n", 55*x);
}
return 0;
}
