#include<studio.h>                                                                                       #include<stdio.h>
void
main ()
{
    int n, p = 0, c = 0;
printf ("\n enter length of array");
scanf ("%d", &n);
int a[n];
printf ("\n enter elements");
for (int i = 0; i < n; i++)
    {
        scanf ("%d", &a[i]);
          
    if (a[i] == 1)
    	{
    	  p++;
	
}
      else if (a[i] == 0)
	{
        c++;
	
    }
}
printf ("%d %d", c, p);
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
