/*
 * excepcion.h
 *
 *  Created on: 11/01/2010
 *      Author: diego
 *
 *  Fuente: http://www.di.unipi.it/~nids/docs/longjump_try_trow_catch.html
 */

#ifndef EXCEPCION_H_
#define EXCEPCION_H_

#include <stdio.h>
#include <setjmp.h>

/**
 * Clausulas para el manejo de las excepciones
 */
#define TRY do{ switch( setjmp(ex_buf__) ){ case 0: while(1){
#define CATCH(x) break; case x:
#define FINALLY break; } default:
#define END_TRY } }while(0)
#define THROW(x) longjmp(ex_buf__, x)

/**
 * Relacion de excepciones a controlar
 */
#define FOO_EXCEPTION 1
#define BAR_EXCEPTION 2
#define BAZ_EXCEPTION 3

jmp_buf ex_buf__;

#endif /* EXCEPCION_H_ */
