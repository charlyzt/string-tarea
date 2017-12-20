#include <iostream>
#include <string>
#include <locale.h>
using namespace std;

int main(int argc, char** argv) 
{
	setlocale(LC_CTYPE, "spanish");
	
	
	
	//////////////////////////////////////////////////////////////////////////////////////////////////////////
	                                                                                                                                                                                                   system("color A");
	
	///////////////////////////////////////////////////////////////////////////////////////////////////////
	string nombre="", grupo="", Licenciatura="", Fecha="", Bienvenido="", respuesta="";
    
   
        cout<<"\t\t\tIngresa tu nombre"<<endl;
        cout<<"\n\n \t \t \t:";cin>>nombre;

        cout<<"\n\t\t0\tIngresa tu  grupo"<<endl;
        cout<<"\n\n \t \t \t:";cin>>grupo;	
        
        cout<<"\n\t\t\tIngresa tu Licenciatura"<<endl;
        cout<<"\n\n \t \t \t:";cin>>Licenciatura;

        cout<<"\n\t\t\tIngresa la fecha"<<endl;	
        cout<<"\n\n \t \t \t:";cin>>Fecha;
        
      system("cls");
      system("COLOR 8E");
      cout<<"\n\t\tBienvenido al examen"":\n"<< nombre << "\n\n\t\tEres del grupo"":\n"<< grupo << "\n\t\tTu licenciatura es"":\n"<< Licenciatura << "\n\t\tLa fecha es"":\n"<< Fecha <<endl;
      cout<<"*****************************************************\n";
      cout<<"\tTodos nuestros sueños se pueden volver realidad si\n\t tenemos el coraje de perseguirlos.-Walt Disney\n"<<endl;
      cout<<"*****************************************************\n\n\n\n";
    
       float n1=1, n2=1, n3=1, n4=1, n5=1;
       int resultado=0;
    string a, b, c, d;   
       
    do{
cout<<"\t\t1-¿Cual es la sentencia de salida en c++?"<<endl;


    
    
	a= "a)Switch\n";
	b= "b)cin\n";
	c= "c)cout\n";
	cout<<a << endl << b << endl << c <<endl;
	cout<<"R=";cin>>respuesta;
 
   if(respuesta=="c")
    {
	   n1=1;
      cout<<"la respuesta es correcta\n"<<endl;
    } 
   else
   {
     cout<<"La respuesta es incorrecta\n"<<endl;
      n1=0;
    }
 
 }while(respuesta !=a || respuesta !="b" || respuesta !="c");
 
 do{
 
cout<<"\t\t2-¿Que es programacion?"<<endl;

    
    a= "a)Se usa para resolver un problema\n";
    b= "b)Un conjunto de programas\n";
    c= "c)Secuencia de operaciones en un determinado orden\n\n";
    d= "d)diseñar, depurar, codificar y mantener un codigo\n";
    cout<<a << endl << b << endl << c << d << endl;
    cout<<"R=";cin>>respuesta;
 
    if(respuesta=="d")
	{
       n2=1;
      cout<<"la respuesta es correcta\n\n\n"<<endl;
    }
   else
   {
     cout<<"La respuesta es incorrecta\n\n\n"<<endl;
      n2=0;
    }
  }while(respuesta !=a || respuesta !="b" || respuesta !="c"  || respuesta !="d");
  
  
   do{
cout<<"\t\t3-¿Que es un algoritmo?"<<endl;

    a= "a)Un conjunto de criterios para evaluar\n";
    b= "b)Es la forma para resolver un problema\n";
    c= "c)Enlista opciones\n\n";
    d= "d)Indica el orden de realizacion\n";
    cout<<a << endl << b << endl << c << d <<  endl;
    cout<<"R=";cin>>respuesta;
    
    if(respuesta=="d")
	{
       n3=1;
      cout<<"la respuesta es correcta\n\n\n"<<endl;
    }
   else
   {
     cout<<"La respuesta es incorrecta\n\n\n"<<endl;
      n3=0;
   }

 }while(respuesta !=a || respuesta !="b" || respuesta !="c"  || respuesta !="d");
 
  do{
cout<<"\t\t4-¿Para que se usa un algoritmo?\n"<<endl;

    a= "a)Para la programacion del software\n";
    b= "b)Para indicar el orden\n";
    c= "c)Para obtener un resultado\n\n";
    d= "d)Ninguna de las anteriores\n";
    cout<<a << endl << b << endl << c << d << endl;
    cout<<"R=";cin>>respuesta;
    
      if(respuesta=="d")
	{
      n4=1;
      cout<<"la respuesta es correcta\n\n\n"<<endl;
    }
   else
   {
     cout<<"La respuesta es incorrecta\n\n\n"<<endl;
      n4=0;
   }
}while(respuesta !=a || respuesta !="b" || respuesta !="c"  || respuesta !="d");

 do{

cout<<"\t\t5-¿Cuantos tipos de condicion hay?"<<endl;

    a= "a)5\n";
    b= "b)3\n";
    c= "c)1\n\n";
    d= "d)2\n";
    cout<<a << endl << b << endl << c << d << endl;
    cout<<"R=";cin>>respuesta;
    
    if(respuesta=="d")
	{
      n5=1;
      cout<<"la respuesta es correcta\n\n\n"<<endl;
    }
   else
   {
     cout<<"La respuesta es incorrecta\n\n\n"<<endl;
     n5=0;
   }
   }while(respuesta !=a || respuesta !="b" || respuesta !="c"  || respuesta !="d");
   
   
   
   
   resultado=n1+n2+n3+n4+n5/5*5;
   
   cout<<"\t \t \ttu promedio del examen es =\t"<<resultado<<endl;
    if(resultado>=3)
	{
      cout<<"*******************************************\n";
      cout<<"felicitaciones estas aprobado\n"<<endl;
      cout<<"*******************************************\n";
	}
   else
   {
   	 resultado<=2;
   	 cout<<"*******************************************\n";
   	 cout<<"no abrobaste\n";
   	 cout<<"*******************************************\n";
   }
   
	return 0;
}
