
#include <iostream>

int main()
{
   int edad; // declaramos la viariable
  
   std::cout << "Ingrese su Edad:";
   std::cin>> edad; 
   // empezamos a poner las condiciones
   if (edad>=18) 
   {
       std::cout <<"Usted es Mayor de Edad ";
   }   
    else
    if (edad<18)
    {
         std::cout <<"Usted es Menor de Edad ";
    }
   
}
