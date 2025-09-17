//calcular erro em relação a linha

float calcular_erro(){
  // Vetor de pesos para sensores U1 a U9
  const float pesos[9] = {-4.5, -3.5, -3.0, -2.0, 0.0, 2.0, 3.0, 3.5, 4.5};
  bool sensores[9] = {U9, U8, U7, U6, U5, U4, U3, U2, U1};

  // Codificação binaria simples dos sensores
  uint16_t leitura = 0;
  for (int i = 0; i < 9; i++){
    leitura |= (sensores[i] << (8 - i));
  }

  //Casos especificos com apenas 1 sensor ativo
  /*
  switch (leitura) {
    case 0b100000000: return -4.0;
    case 0b110000000: return -3.5;
    case 0b111000000: return -3.0;
    case 0b011000000: return -2.5;
    case 0b011100000: return -2.0;
    case 0b001100000: return -1.5;
    case 0b001110000: return -1.0;
    case 0b000110000: return -0.5;
    case 0b000111000: return 0.0;
    case 0b000011000: return 0.5;
    case 0b000011100: return 1.0;
    case 0b000001100: return 1.5;
    case 0b000001110: return 2.0;
    case 0b000000110: return 2.5;
    case 0b000000111: return 3.0;
    case 0b000000011: return 3.5;
    case 0b000000001: return 4.0;
  }
*/
  //Caso generico: calcula media ponderada para 2+ sensores lado a lado
  int ativos = 0;
  float somaPesos = 0.0;

  for (int i = 0; i < 9; i++){
    if (sensores[i]){
      ativos++;
      somaPesos += pesos[i];
    }
  }

  if (ativos == 0){
    return 1.0;
    /*parar();
    delay(7500);
    andar(velD, velE);
    delay(4000); 
  */
  }

  return somaPesos / ativos;
}

//calcular qnt deve virar a depender do erro
/*void calcular_PD(){
  float p = Kp*erro;
  float d = Kd*(erro - erroAnterior);
  float pd = p + d;

  int vel_E = VEL_BASE + pd;
  int vel_D = VEL_BASE - pd;
  
  vel_E = constrain(vel_E,PWM_MIN,PWM_MAX);
  vel_D = constrain(vel_D,PWM_MIN,PWM_MAX);

}*/
void calcularPID(){
  float erroAtual = calcular_erro();  // Usa a função mais completa!

  erro = erroAtual;                   // Atualiza o erro atual
  somaErro += erro;                   // Acumula para o termo integral (ok, Ki = 0 por enquanto)
  
  float deltaErro = erro - erroAnterior; // Derivativo (D)

  correcao = (Kp * erro) + (Ki * somaErro) + (Kd * deltaErro); // Calcula a saiÃÂ­da PID

  erroAnterior = erro;                 // Atualiza para o proximo ciclo
}
