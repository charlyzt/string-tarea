#include <iostream>
#include <string>
 
using namespace std;
 
int main()
{
//definimos la cadena y la dejamos sin contendio
string str1="Cesar";
string str2="Julio";
 
//mostramos sus contendios antes del intercambio con .swap()
cout<<"\nstring1 = "<<str1<<endl<<endl;
cout<<"string2 = "<<str2<<endl<<endl;
 

str1.swap(str2);
 
cout<<"\t\tdespues del intercambio.."<<endl<<endl;
 
//mostramos los nuevos contenidos
cout<<"\nstring1 = "<<str1<<endl<<endl;
cout<<"string2 = "<<str2<<endl<<endl;
 
return 0;
}
