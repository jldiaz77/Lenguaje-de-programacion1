#include <iostream>


using namespace std;

int main()
{
    string nombre = "";
    string apellido_paterno = "";
    string apellido_materno = "";
    string vocal = "";
    string dia = "";
    string mes = "";
    string anio = "";
    string RFC ="";
    
    
   
    cout<<"------------------------------------------------------------------------------------------------"<<endl;
     cout<<"                                         CALCULO DE RFC                                        "<<endl;
     cout<<"------------------------------------------------------------------------------------------------"<<endl;
    cout<<"                                  FAVOR DE UTILIZAR MAYUSCULAS"<<endl;
    cout<<"          INTRODUCE TU NOMBRE: ";
    cin>>nombre;
    cout<<"INTRODUCE TU APELLIDO PATERNO: ";
    cin>>apellido_paterno;
    cout<<"INTRODUCE TU APELLIDO MATERNO: ";
    cin>>apellido_materno;
    cout<<"FECHA DE NACIMIENTO (solo numeros) DD/MM/AAAA"<<endl;
    cout<<"Dia: ";
    cin>>dia;
    cout<<"Mes: ";
    cin>>mes;
    cout<<"Año: ";
    cin>>anio;



 cout<<"Tu nombre es: "<<nombre<<" "<<apellido_paterno<<" "<<apellido_materno<<endl;
    cout<<"Tu fecha de nacimiento es: "<<dia<<"/"<<mes<<"/"<<anio<<endl;
    
    for (int i = 1; i < apellido_paterno.length(); ++i) {
        char letra = apellido_paterno[i];
        if (letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U') {
            vocal += letra;
            break;
        }
    }
  
    RFC = apellido_paterno.substr(0,1); //Primera letra del apellido
    RFC = RFC + vocal; // Primera vocal que encontramos en el ciclo
 //   cout<<RFC<<endl;
    RFC = RFC + apellido_materno.substr(0,1); //Inicial del apellido materno
 //   cout<<RFC<<endl;
    RFC = RFC + nombre.substr(0,1); //Inicial del nombre
   // cout<<RFC<<endl;
    RFC = RFC + anio.substr(2,2); //ultimos dos digitos del año
   // cout<<RFC<<endl;
    RFC = RFC + mes; // digitos para el mes
   // cout<<RFC<<endl;
    RFC = RFC +dia; // digitos para el dia
    cout<<"Tu RFC es: "<<RFC<<endl;
    
   
    return 0;
}
    

