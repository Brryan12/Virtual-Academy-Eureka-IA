#pragma once
#include <iostream>
#include <sstream>
#include "Lista.h"
#include "Grupo.h"
using namespace std;
class Curso {
private:
	string nombre;
	string id;
	string horas;
	double precio;
	bool estado;
	int periodo;
	Lista<Grupo> *grupos;

public:
	Curso() = default;
	Curso(string nombre, string id, string horas, double precio, bool estado);
	virtual ~Curso();
	string getNombre() const;
	string getHoras() const;
	string getId() const;
	double getPrecio() const;
	bool getEstado() const;
	void setNombre (string nombre);
	void setHoras (string horas);
	void setId(string id);
	void setPrecio(double precio);
	void setEstado(bool estado);
	virtual string toString() const;
};
