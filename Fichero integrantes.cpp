#include <fstream> 
#include <iostream>
using namespace std; 
 int main(){
 	setlocale(LC_ALL, "");
	 ofstream fichout("Integrantes.TXT", ios:: out);
	 if (!fichout)
	     cout << "\n Incapaz de crear este o abrir el fichero \n";
	 else {
	 	 fichout << 1 << "  Milagros Shadu Lude�a Bedoya - Secci�n: a" << endl; 
		 fichout << 2 << "  Sebastian Alejandro Cortez Apaza - Secci�n: a "<< endl;
		 fichout.close();
	}
} 






