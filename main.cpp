#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;
void ingresar ();
void lectura();

int main() {
ingresar ();
  return 0;
}void ingresar (){
  
  
  char d;
  double precio;
  double  TG;
  double PG;
  double GA;
//guardamos todos los datos y calculos en el archivo inventarioscpp.
  ofstream inventario;
  inventario.open ("inventario.txt",ios::app);
  inventario<<"\n***NUTRI_LECHE ****\n\n";

    inventario <<setw(10)<<" VARIABLE "<<setw(10)<<"DESCRIPCION"<<setw(10)<<"TIPO"<<setw(10)<<endl;
    
  do{
    
    //pedimos al usuario que ingrese los litros vendidos 
    cout<<"\tIngrese la cantida de litros:";
    cin>>precio;
  cout<<"\tIngrese el valor por galon :";
  cin>>PG;
    cin.ignore();
    //calculamos el precio de litro en galones 
    //pasamos de litros a galones 
  TG=precio /(3.785);
  GA=PG*TG;
  inventario<<"*********************************\n\n";
  cout <<setw(10)<<" VARIABLE "<<setw(10)<<"DESCRIPCION"<<setw(10)<<"TIPO"<<setw(10)<<endl;
  cout<<"*********************************\n\n";

   
   inventario<<setw(5)<<"l"<<setw(10)<<precio<<setw(19)<<"ENTERO\n";
  inventario<<setw(5)<<"PG"<<setw(10)<<PG<<setw(19)<<"REAL\n";
  inventario<<setw(5)<<"TG"<<setw(10)<<TG<<setw(19)<<"REAL\n";
  inventario<<setw(5)<<"GA"<<setw(10)<<GA<<setw(19)<<"REAL\n";


    cout<<setw(5)<<"l"<<setw(10)<<precio<<setw(19)<<"ENTERO\n";
  cout<<setw(5)<<"PG"<<setw(10)<<PG<<setw(19)<<"REAL\n";
  cout<<setw(5)<<"TG"<<setw(10)<<TG<<setw(19)<<"REAL\n";
  cout<<setw(5)<<"GA"<<setw(10)<<GA<<setw(19)<<"REAL\n"; 
    cout<<"Desea ingresar mas datos del dia de ventas : NUTRI_LECHEs(s/*)";
    cin>>d;

    cin.ignore();
  }while (d=='s');
  inventario.close();
}