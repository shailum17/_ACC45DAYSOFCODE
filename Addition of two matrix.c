#include <stdio.h>
#define MAX 100
int main() 
{
int i,j,m,n,a[MAX][MAX],b[MAX][MAX],c[MAX][MAX];
printf("\nEnter The values of m and n (row and Cloumn):");
scanf("%d %d",&m,&n);
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
printf("\nEnter First Matrix value a[%d][%d]: ",i,j);
scanf("%d",&a[i][j]);
printf("\nEnter Second Matrix value b[%d][%d]: ",i,j);
scanf("%d",&b[i][j]);
c[i][j] = a[i][j]+b[i][j];
}
}
printf("\nThe Matrix value of a: \n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
printf("%d ",a[i][j]);
}
printf("\n");
}
printf("\nThe Matrix value of b: \n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
printf("%d ",b[i][j]);
}
printf("\n");
}
printf("\nAfter addition Matrix value of c: \n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
printf("%d ",c[i][j]);
}
printf("\n");
}
return 0;
}


/**********************************************************
 * @INFO
 * Code by Shailendra Mourya
 * @INFO
 * Gmail - shailendramourya17@gmail.com@gmail.com
 * @INFO
 * Github - shailum17
 * @INFO
 * LinkedIn - shailum17
 * @INFO
 * Instagram - @shailu_m17
 * @INFO
 * Twitter - @shailum_17
 * @INFO
 **********************************************************/
