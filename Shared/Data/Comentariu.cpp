#include "Comentariu.h"
#include <iostream>

using namespace std;


void Comentariu:: set_autor(string a){
    this->autor=a;
}
void Comentariu:: set_continut(string b){
    this->continut=b;
}

string Comentariu::get_autor()
{
    return autor;
}

string Comentariu::get_continut()
{
    return continut;
}

ostream& operator << (ostream& st, const Comentariu& p) {
    st << p.autor << " " << p.continut << endl;
    return st;
}
