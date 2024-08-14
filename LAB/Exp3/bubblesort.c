#include<stdio.h>
//program of linear seach
//swaliha_59

   void main()
   {
    int search,n,i,arr[10];
    printf("enter the number of elements");
    scanf("%d",&n);
    printf("enter the elements");
     for(i=0;i<n;i++)
		 {
		   scanf("%d",&arr[i]);
		   }
       printf("enter the search element");
       scanf("%d",&search);
       for(i=0;i<n;i++)
       {
		   
		    
				if(arr[i]==search)
				{
				printf("%d is present at location %d",search,i+1);
				break;
		    	}
		    }
		    
    
        
       
         {
           
        if(i==n)
        {
        
         printf("%d is not  present in array",search);
         }
         }
         }
         
