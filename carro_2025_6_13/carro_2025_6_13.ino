#include "constantes.h"  // Inclui as constantes
#include "millis.h"      // Inclui as funções com millis()

void setup(){
  definirModoPinosMotores();
  definirModoPinosSensores();
  sensores();
}

void loop(){
  sensores();
  seguirLinha();
  curvas();
  // rotatoria();
  // retorno();
}