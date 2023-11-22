#include <iostream>
using namespace std;

int main()
{
	float num1=0.0;
	float num2=0.0;
	float ResulSum=0.0;
	float Resulrest=0.0;
	float Resulmult=0.0;
	float ResulDiv=0.0;
			
	
	cout << "INTRODUCE PRIMER NUMERO:";
	cin >> num1;
	cout << "INTRODUCE SEGUNDO NUMERO: ";
	cin >> num2;
	
	
	ResulSum= num1 + num2;
	Resulrest= num1 - num2;
	Resulmult= num1 * num2;
	
	
	cout <<" la suma es " << ResulSum <<endl;
	cout <<" la resta es " << Resulrest <<endl;
	cout <<" la multiplicacion es " << Resulmult <<endl;
	
	if (num2 != 0)	
	{
		ResulDiv= num1 / num2;
	}
	 else {
	 	cout << " No se puede dividir entre cero" <<endl;
	 	return 1;
	 }
	cout <<" la division es " << ResulDiv <<endl;

	
	
	return 0;
	
}