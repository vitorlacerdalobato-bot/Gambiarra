unsigned long tempoAnteriorCurva = 0;  // Tempo anterior da curva
unsigned long intervaloCurva = 100;     // Intervalo desejado para a curva (em milissegundos)

void tempo(){
  // Verifica se o tempo passou desde a ultima curva
  if (millis() - tempoAnteriorCurva >= intervaloCurva) {
    // Se o tempo passou, realiza a aÃÂ§ÃÂ£o desejada e atualiza o tempo anterior
    tempoAnteriorCurva = millis();  // Atualiza o tempo da ultima curva
  }
}