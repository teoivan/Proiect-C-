#ifndef COMENTARIU_H
#define COMENTARIU_H
#include <string>
#include <iostream>

using namespace std;

class Comentariu
{
private:
    string autor, continut;
public:
    Comentariu(){};
    void set_autor(string);
    void set_continut(string);
    string get_autor();
    string get_continut();
    virtual ~Comentariu(){};
    friend ostream& operator << (ostream&, const Comentariu&);
};



#endif // COMENTARIU_H
