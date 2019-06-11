#ifndef NODO_ARBOL_H
#define NODO_ARBOL_H

#include <iostream>

class Nodo_arbol{
  //Atributos
  private:
    Nodo_arbol* hijo_izquierda;
    Nodo_arbol* hijo_derecha;
    unsigned int telefono;

  //Métodos
  public:
    //Constructor
    Nodo_arbol();

    //Constructor con parámetros
    Nodo_arbol(unsigned int telefono);

    //Asignar hijo de la izquierda
    //Descripción: Procedimiento que recibe una dirección de memoria del hijo que irá a la izquierda del nodo actual y la asigna al
    //             atributo hijo_izquierda de la clase
    //Pre: Procedimiento que recibe una dirección de memoria de un nodo
    //Post: Asigna la dirección de memoria recibida al atributo hijo_izquierda de la clase
    void asignar_hijo_izquierda(Nodo_arbol* hijo_izquierda);

    //Obtener hijo de la izquierda
    //Post: Método que devuelve la dirección de memoria del hijo de la izquierda del nodo actual
    Nodo_arbol* obtener_hijo_izquierda();

    //Asignar hijo de la derecha
    //Descripción: Procedimiento que recibe una dirección de memoria del hijo que irá a la derecha del nodo actual y la asigna al
    //             atributo hijo_derecha de la clase
    //Pre: Procedimiento que recibe una dirección de memoria de un nodo
    //Post: Asigna la dirección de memoria recibida al atributo hijo_derecha de la clase
    void asignar_hijo_derecha(Nodo_arbol* hijo_derecha);

    //Obtener hijo de la derecha
    //Post: Método que devuelve la dirección de memoria del hijo de la derecha del nodo actual
    Nodo_arbol* obtener_hijo_derecha();

    //Asignar número de teléfono
    //Descripción: Procedimiento que recibe un número de teléfono de un cliente y lo asigna al atributo telefono de la clase
    //Pre: Procedimiento que recibe un entero estrictamente positivo
    //Post: Asigna el valor recibido al atributo telefono de la clase
    void asignar_telefono(unsigned int telefono);

    //Obtener número de teléfono
    //Post: Método que devuelve el valor del atributo telefono de la clase
    unsigned int obtener_telefono();
};

#endif
