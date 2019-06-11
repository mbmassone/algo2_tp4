#include "nodo_arbol.h"

Nodo_arbol::Nodo_arbol(){
  hijo_izquierda = NULL;
  hijo_derecha = NULL;
  telefono = 0;
}

Nodo_arbol::Nodo_arbol(unsigned int telefono){
  hijo_izquierda = NULL;
  hijo_derecha = NULL;
  this->telefono = telefono;
}

void Nodo_arbol::asignar_hijo_izquierda(Nodo_arbol* hijo_izquierda){
  this->hijo_izquierda = hijo_izquierda;
}

Nodo_arbol* Nodo_arbol::obtener_hijo_izquierda(){
  return hijo_izquierda;
}

void Nodo_arbol::asignar_hijo_derecha(Nodo_arbol* hijo_derecha){
  this->hijo_derecha = hijo_derecha;
}

Nodo_arbol* Nodo_arbol::obtener_hijo_derecha(){
  return hijo_derecha;
}

void Nodo_arbol::asignar_telefono(unsigned int telefono){
  this->telefono = telefono;
}

unsigned int Nodo_arbol::obtener_telefono(){
  return telefono;
}
