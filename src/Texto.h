#ifndef TEXTO_H_
#define TEXTO_H_

class Texto {
private:

public:
	/*
	 * Devuelve un string en base al int recibido como parametro.
	 */
	std::string intToString(int number);

	/*
	 * POST: Devuelve un string rellenado a derecha con el caracter pad.
	 */
	std::string rellenarDerecha(std::string str, unsigned int cant, char pad);
};

#endif
