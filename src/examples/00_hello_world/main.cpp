#include<iostream>

int main()

  void function1( int & num );

 
 
   void function1( int & num )
 
   {
 
       num = 10;
 
   }
 
   //main.cpp 
  
 
  
 
   int 
    main() 
 
   {
 
        
   int 
    num = 1;

    function1(num);
 
       cout<<num;

     return  0;
 
   }