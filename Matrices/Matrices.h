#pragma once

#include <iostream>
#include <string.h>


using numero = int;
using puntero = numero *;
using doble_puntero = puntero *;
using palabra = std::string;
using funcion = doble_puntero;
using funcion_vacia = void;

class variables
{
	funcion crear_arreglo(numero filas, numero columnas)
	{
		doble_puntero lista_dinamica = new puntero[filas];
		for (numero i = 0; i < filas; i++)
		{
			lista_dinamica[i] = new int[columnas];
		}
		return lista_dinamica;
	}
	funcion_vacia swap(numero& x, numero& y)
	{
		numero temp = x;
		x = y;
		y = temp;
	}
	funcion_vacia swap_columnas(puntero x, puntero y, numero x_tamano)
	{
		for (numero i; i < x_tamano; i++)
		{
			swap(*(x + i), *(y + i));
		}
	}
	funcion_vacia swap_filas_matriz(doble_puntero x, numero filas_tamano, numero columnas_tamano)
	{
		for (numero i = filas_tamano; i > 0; i -= 1)
		{
			swap_columnas(*(x + i), *(x + i - 1), columnas_tamano);
		}
	}


};
