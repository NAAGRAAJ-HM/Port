/*****************************************************/
/* File   : Port.cpp                                 */
/* Author : Naagraaj HM                              */
/*****************************************************/

/*****************************************************/
/* #INCLUDES                                         */
/*****************************************************/
#include "Port.h"

#include "Port_EcuM.h"

/*****************************************************/
/* #DEFINES                                          */
/*****************************************************/

/*****************************************************/
/* MACROS                                            */
/*****************************************************/

/*****************************************************/
/* TYPEDEFS                                          */
/*****************************************************/

/*****************************************************/
/* CONSTS                                            */
/*****************************************************/

/*****************************************************/
/* PARAMS                                            */
/*****************************************************/

/*****************************************************/
/* OBJECTS                                           */
/*****************************************************/
class_Port_EcuM Port_EcuM;
class_EcuM_Client *EcuM_Client_ptr_Port = &Port_EcuM;
class_Port Port;

/*****************************************************/
/* FUNCTIONS                                         */
/*****************************************************/
FUNC(void, PORT_CODE) class_Port_EcuM::InitFunction(void){
}

FUNC(void, PORT_CODE) class_Port::SetPinDirection(void){
}

FUNC(void, PORT_CODE) class_Port::RefreshPortDirection(void){
}

FUNC(void, PORT_CODE) class_Port::GetVersionInfo(void){
}

FUNC(void, PORT_CODE) class_Port::SetPortMode(void){
}

/*****************************************************/
/* EOF                                               */
/*****************************************************/

