//escribe una(s) clase(es) en el que se demuestre el pasar argumentos a
//funciones por valor, referencia y direccion de memoria(punteros)


//funciones por valor
//se debe crear un proyecto con una clase main.cpp para que compile
#include <iostream> 
using namespace std;
 
int funcion(int n, int m);
 
int main() { 
   int a, b; 
   a = 10; 
   b = 20;
 
   cout << "a,b ->" << a << ", " << b << endl; 
   cout << "funcion(a,b) ->" 
        << funcion(a, b) << endl;
   cout << "a,b ->" << a << ", " << b << endl; 
   cout << "funcion(10,20) ->" 
        << funcion(10, 20) << endl; 

   return 0; 
}
 
int funcion(int n, int m) { 
   n = n + 2; 
   m = m - 5; 
   return n+m; 
}

//funciones por referencia
//se debe crear un proyecto con una clase main.cpp para que compile
#include <iostream>
using namespace std;
 
int funcion(int &n, int &m);
 
int main() { 
   int a, b;
 
   a = 10; b = 20; 
   cout << "a,b ->" << a << ", " << b << endl;
   cout << "funcion(a,b) ->" << funcion(a, b) << endl; 
   cout << "a,b ->" << a << ", " << b << endl; 

   return 0; 
}
 
int funcion(int &n, int &m) {
   n = n + 2; 
   m = m - 5; 
   return n+m; 
}


//Puntero 
#include <iostream>
using namespace std;
 
int main() { 
    int X[6] = { 1, 2, 3, 4, 5, 6 };
    int *prtX;
 
    prtX = X; // incializo el valor del puntero.
 
    cout << endl << *prtX;
    prtX += 2;
    cout << endl << *prtX;
    prtX -= 2;
    cout << endl << *prtX;
    prtX++;
    cout << endl << *prtX;
   return 0; 
}
