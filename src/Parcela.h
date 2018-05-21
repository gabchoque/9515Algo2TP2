#ifndef PARCELA_H_
#define PARCELA_H_

#ifndef NULL
#define NULL 0
#endif

#include "Constantes.h"
#include "Cultivo.h"

/*
 * Una PARCELA es un cubiculo donde se puede almacenar un cultivo.
 */
class Parcela {

private:
	Cultivo* cultivo;
	char estado;
	int tiempoHastaCosecha;
	int tiempoHastaRecuperacion;
	int rentabilidad;
	bool estaRegada;

public:
	/*
	 * PRE:
	 * POST: Parcela vacia y sin cultivo.
	 */
	Parcela();

	/*
	 * PRE:
	 * POST: Informa si la parcela esta ocupada o no.
	 */
	bool estaOcupada();

	/*
	 * PRE:
	 * POST:Deulve el cultivo actual.
	 */
	Cultivo* obtenerCultivo();

	/*
	 * PRE:
	 * POST:
	 */
	std::string obtenerEstado();

	/*
	 * PRE:~
	 * POST:Establece un nuevo cultivo en la parcela.
	 */
	void establecerCultivo(Cultivo* tipoCultivo);

	/*
	 * PRE:~
	 * POST:Riega la parcela, para que dure un turno mas.
	 */
	void regar();
	/*
	 * PRE:
	 * POST:Indica si la parcela ya esta regada.
	 */
	bool yaEstaRegada();

	/*
	 * PRE:
	 * POST:Devuelve la cantidad de creditos que se obtienen al cosechar esta parcela.
	 */
	unsigned int obtenerRentabilidad();

	/*
	 * PRE:
	 * POST:Devuelve la cantidad de turnos que faltan para poder cosechar esta parcela.
	 */
	unsigned int obtenerTiempoHastaCosecha();

	/*
	 * PRE:
	 * POST: Indica cuando credito es necesario para comprar semillas
	 * de un determinado cultivo.
	 */

	//unsigned int creditoRequeridoPara(TipoCultivo tipoCultivo);
	/*
	 * PRE:
	 * POST:Procesa las acciones realizadas por el jugador para establecer las
	 * condiciones iniciales del siguiente turno.
	 */
	//void procesarTurno();
	/*
	 * PRE:
	 * POST:Cosecha el cultivo actual, dejando su estado en recuperacion.
	 */
	//void cosechar();
	/*
	 * PRE:
	 * POST:Siembra el cultivo indicado en la parcela actual.
	 */
	unsigned int  sembrar(Cultivo* tipoCultivo);
};

#endif
