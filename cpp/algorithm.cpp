////////////////////Primer ejercicio/////////////////////////////
Describe un algoritmo para poder realizar una busqueda basica en un b-tree
#include <iostream>
#include <cstdlib>

struct Node {
   // Este es el consturctor, inicializa el Node
   Node(int d): data(d), left(NULL), right(NULL) {} 
   int data;
   Node* left;
   Node* right;
};

int main() {
   // raiz es la raíz del árbol
   Node* raiz = new Node(5);
   raiz->left = new Node(3);
   raiz->left->left = new Node(1);
   raiz->left->right = new Node(4);
   raiz->right = new Node(7);
   raiz->right->right = new Node(9);
   system("PAUSE");
}

// funcion que inserta en el b-tree
Node* insert( Node* &branch, Node* new) {
   if ( ! branch ) 
      branch = new;
   else if ( new->data < branch->data )
      insert( branch->left, new ); 
   else if ( new->data > branch->data )
      insert( branch->right, new );
   else
      assert( false );
}
