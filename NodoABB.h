

#ifndef ABB_NodoABB_H
#define ABB_NodoABB_H

#include <iostream>

using namespace std;

template <class T>
class NodoABB
{
private:

    string dato;
    T* valor;
    NodoABB<T>* izquierda; //Hijo izquierdo
    NodoABB<T>* derecha; //Hijo derecho
    NodoABB<T>* padre;

public:

    NodoABB(string d, T* valor);
    string obtener_dato();
    T* obtener_valor();
    void asignar_dato(string d);
    void asignar_derecha(NodoABB<T>* derecha, NodoABB<T>* padre);
    void asignar_izquierda(NodoABB<T>* izquierda, NodoABB<T>* padre);
    void asignar_izquierda(NodoABB<T>* izquierda);
    void asignar_derecha(NodoABB<T>* derecha);
    void asignar_padre(NodoABB<T>* padre);
    NodoABB<T>* obtener_derecha();
    NodoABB<T>* obtener_izquierda();
    NodoABB<T>* obtener_padre();
    bool es_hoja();
    bool solo_hijo_derecha();
    bool solo_hijo_izquierda();
    ~NodoABB();
};

template <class T>
NodoABB<T>::NodoABB(string dato, T* valor)
{
    this->dato = dato;
    this->valor = valor;
    this->izquierda = NULL;
    this->derecha = NULL;
    this->padre = NULL;
}

template <class T>
string NodoABB<T>::obtener_dato()
{
    return this->dato;
}

template <class T>
T* NodoABB<T>::obtener_valor()
{
    return this->valor;
}

template <class T>
void NodoABB<T>::asignar_derecha(NodoABB<T>* derecha, NodoABB<T>* padre){
    this->derecha = derecha;
    this->padre = padre;
}

template <class T>
void NodoABB<T>::asignar_derecha(NodoABB<T>* derecha){
    this->derecha = derecha;
}

template <class T>
void NodoABB<T>::asignar_izquierda(NodoABB<T>* izquierda, NodoABB<T>* padre){
    this->izquierda = izquierda;
    this->padre = padre;
}

template <class T>
void NodoABB<T>::asignar_padre(NodoABB<T> *padre) {
    this->padre = padre;
}

template <class T>
void NodoABB<T>::asignar_dato(string dato) {
    this->dato = dato;
}


template <class T>
void NodoABB<T>::asignar_izquierda(NodoABB<T>* izquierda){
    this->izquierda = izquierda;
}

template <class T>
NodoABB<T>* NodoABB<T>::obtener_derecha()
{
    return this->derecha;
}

template <class T>
NodoABB<T>* NodoABB<T>::obtener_izquierda()
{
    return this->izquierda;
}

template <class T>
NodoABB<T>* NodoABB<T>::obtener_padre()
{
    return this->padre;
}

template <class T>
bool NodoABB<T>::es_hoja() {
    return (this->obtener_izquierda() == NULL && this->obtener_derecha() == NULL);
}

template <class T>
bool NodoABB<T>::solo_hijo_derecha() {
    return (this->obtener_izquierda() == NULL && this->obtener_derecha() != NULL);
}

template <class T>
bool NodoABB<T>::solo_hijo_izquierda() {
    return (this->obtener_izquierda() != NULL && this->obtener_derecha() == NULL);
}

template <class T>
NodoABB<T>::~NodoABB(){
	delete valor;
}

#endif //ABB_NodoABB_H
