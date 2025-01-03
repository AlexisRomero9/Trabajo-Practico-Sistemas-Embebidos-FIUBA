#ifndef COFFEE_H
#define COFFEE_H

#include "mbed.h"


typedef enum{
    COFFEE = 1,
    CORTADO = 2
}coffeeOption_t;

//====================[Declaración de funciones privadas]====================


static void prepareCortado();
    /*
        Función que realiza la preparación del cortado.
    */
static void prepareCoffee();
    /*
        Función que realiza la preparación del café.
    */

static void turnOnWaterBomb(int time);
/*
    Habilita la bomba utilizada para verter agua, y recibe por parámetro el tiempo que debe estar encendida
*/

static void turnOffWaterBomb();
/*
    Deshabilita la bomba utilizada para verter agua
*/

static void turnOnMilkBomb(int time);
/*
    Habilita la bomba utilizada para verter leche, y recibe por parámetro el tiempo que debe estar encendida
*/

static void turnOffMilkBomb();
/*
    Deshabilita la bomba utilizada para verter leche
*/


//====================[Declaración de funciones públicas]====================

void initPreparationModule();
/*
    Inicializa los pines necesarios para la preparación del cafe, como las habilitaciones del relé y la señal PWM.
*/


void prepareOption(coffeeOption_t receivedOption);
/*
    Se invoca a la función correspondiente a la opción ingresada.
*/

bool isCoffeeReady();
/*
    Determina si el proceso de preparación de la opción elegida ya terminó.
*/
void prepareWater();
/*
    Es la función con la que se inicia el proceso de calentar el agua.
*/
void prepareFilter();
/*
    Es la función con la que se inicia el proceso de verter el café molido en el filtro.
*/
bool isFilterReady();
/*
    Determina si el filtro ya cuenta con la cantidad necesaria de café para la posterior preparación.
*/
bool isWaterReady();
/*
    Determina si el agua ya alcanzó la temperatura deseada.
*/






#endif
