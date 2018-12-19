/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include "struct.cpp"

void add(elem* &pocz, elem* &kon, int x){
    if(kon!=NULL){
        elem* nowy = new elem;
        nowy->dane = x;
        nowy->nast = NULL;
        kon->nast = nowy;
        kon = nowy;}
    else {
        elem* nowy = new elem;
        nowy->dane = x;
        nowy->nast = NULL;
        kon = nowy;
        pocz = nowy;
    }
}