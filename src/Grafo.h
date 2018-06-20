#ifndef GRAFO_H_
#define GRAFO_H_

/*
 * Es un TDA contenedor de un conjunto de datos llamados nodos y de un conjunto
 * de aristas cada una de las cuales se determina mediante un par de nodos.
 */
template<class T> class Grafo {

private:

public:
	/* Genera un grafo vac�o.
	 * PRE: ---
	 * POST: grafo generado vac�o.
	 */
	Grafo();

	/* Inserta un nodo nuevo, recibido como argumento, en el grafo.
	 * PRE: que el grafo exista  y que el nodo no est� previamente.
	 * POST: el grafo queda modificado por el agregado del nuevo nodo.
	 */
	void InsertarNodo();

	/* Inserta una arista nueva, recibida como argumento, en el grafo.
	 * PRE: que el grafo exista , que la arista no est� previamente y que existan en el grafo los nodos origen y destino de la arista.
	 * POST: el grafo queda modificado por el agregado de la nueva arista.
	 */
	void InsertarArista();

	/* Elimina un nodo, recibido como argumento,  del grafo.
	 * PRE: que el grafo exista  y que el nodo a eliminar est� en �l y no tenga aristas incidentes en �l.
	 * POST: el grafo queda modificado por la eliminaci�n del nodo.
	 */
	void EliminarNodo();

	/* Elimina una arista, recibida como argumento,  del grafo.
	 * PRE: que el grafo exista  y la arista est�n �l.
	 * POST: el grafo queda modificado por la eliminaci�n de la arista.
	 */
	void EliminarArista();

	/* Recibe una arista y retorna un valor logico indicando si la arista existe en el grafo.
	 * PRE: que el grafo exista.
	 * POST: ---�
	 */
	bool ExisteArista();

	/* Recibe una arista y retorna un valor logico indicando si el nodo existe en el grafo.
	 * PRE: que el grafo exista.
	 * POST: ---
	 */
	bool ExisteNodo();

	/* Destruye el grafo.
	 * PRE: que el grafo exista.
	 * POST: ---
	 */
	~Grafo();

};

#endif
