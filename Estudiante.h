#pragma once
#include "Persona.h"
#include "Lista.h"

class Grupo;
class Estudiante : public Persona
{
private:
	std::string especialidad;
	Lista<Grupo> listaGrupo;
public:
	Estudiante();
	Estudiante(std::string nombre, std::string cedula, std::string telefono, std::string email, std::string especialidad);
	virtual ~Estudiante();
	std::string getEspecialidad() const;
	void setEspecialidad(std::string especialidad);
	std::string toString() const override;

	void guardar(std::ostream& salida) const override;
	static Estudiante* leer(std::istream& entrada);
};

