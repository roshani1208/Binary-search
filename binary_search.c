#include<stdio.h>
int main()
{
  int item,num;
  int a[]={2,4,7,34,52,67,77,87,97};
   item=2;
  num= bsearch(a,9,item);
  printf("%d",num);
  }
   int bsearch(int a[],int n,int item)
   {
     int l=0,u=n-1,m;
	 while(l<=u)
	 
	 {
	   m=(l+u)/2;
	   if(a[m]==item)
	   return(item);
	   else if(item>a[m])
	    l=m+1;
	   else
	   u=m-1;
	   
	 }
	  printf("num is not find");
	 
   }
