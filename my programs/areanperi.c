 
 #include<stdio.h>
#include<math.h>
int main()
   {
    int choice;
   printf("\n Enter 1 to find area and perimeter of Triangle");
   printf("\n Enter 2 for finding area and perimeter of Square");
   printf("\n Enter 3 for finding area and circumference of Circle");
   printf("\n Enter 4 for finding area and perimeter of Rectangle");

   scanf("%d",&choice);
   switch(choice) 
     {
        int a,b,c;
        float area,perimeter,circumference,s,side,radius,len,breadth;
         case 1: 
         //for triangle
         
         printf("\n Enter sides of triangle");
         scanf("%d%d %d",&a,&b,&c);
         s=(float)(a+b+c)/2;

         perimeter=(float)a+b+c;
          printf("\n perimeter of Triangle is=%f",perimeter);

         area=(float)(sqrt(s*(s-a)*(s-b)*(s-c)));
         printf("\n Area of Triangle is=%f",area);
         break;
      
      case 2: 
      //for square
        
         printf("\n Enter Side of a Square");
         scanf("%f",&side);

         perimeter=(float)4*side;
          printf("\n perimeter of square is= %f",perimeter);

         area=(float)side*side;
         printf("\n Area of Square is= %f",area);
         break;
      
      case 3: 
      //for circle
        
         printf("\n Enter Radius of Circle");
         scanf("%f",&radius);

         circumference=(float)2*3.14159*radius;
          printf("\n circumference of cicle is= %f",circumference);

         area=(float)3.14159*radius*radius;
         printf("\n Area of Circle= %f",area);
         break;
      
      case 4: 
      //for rectangle
         printf("\n Enter Length and Breadth of Rectangle");
         scanf("%f %f",&len,&breadth);

         perimeter=(float)2*(len+breadth);
          printf("\n perimeter of rectangle is= %f",perimeter);
          
         area=(float)len*breadth;
         printf("\n Area of Rectangle is= %f",area);
         break;
      
      
      
      default: 
         printf("\n Invalid Choice");
         break;
      
     }  
}