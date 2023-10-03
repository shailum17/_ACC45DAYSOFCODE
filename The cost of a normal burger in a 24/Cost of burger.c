#include<stdio.h>
void main ()
{
  
    int x,y,m;
    printf("Enter the price of normal and medium size burger : ");
    scanf ("%d %d", &x, &y);
    printf("\n Emter the amount of money you have ");
    scanf("%d",&m);
    if (m > x && m < y)
    {
        printf ("Normal");
    }
  
        if (m - y >= x)
	{
        printf ("both");
    }
      else
	{
        printf ("medium");
    }
    
  

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
