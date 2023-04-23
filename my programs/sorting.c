 #include<stdio.h>
 #include<conio.h>
void main()
 {
    int a[5]={10,3,78,324,77};
    int i,j,temp;
    char ch;
    printf("\n enter 1 for sorting elements in ascending",ch);
    printf("\n enter 2 for sorting elements in descending ",ch);
    scanf("%d",&ch);

    switch(ch)
{
    case 1:

    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if (a[j]>a[i])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("\n sorted elements:");
     for(i=0;i<5;i++)
    {
        printf("\t %d",a[i]);
    }
    break;
  
  case 2:
  {
    
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if (a[i]>a[j])
            {
                temp=a[j];
                a[j]=a[i];
                a[i]=temp;
            }
        }
    }
    printf("\n sorted elements:");
     for(j=0;j<5;j++)
    {
        printf("\t %d",a[j]);
    }

  }
}
 }