void seguirLinha(){ 
  if (seguir){
  sensores();             // Atualiza sensores
  calcularPID();          // Calcula correção PID

  int velD = VEL_BASE - correcao;
  int velE = VEL_BASE + correcao;

  velD = constrain(velD, -PWM_MAX, PWM_MAX); 
  velE = constrain(velE, -PWM_MAX, PWM_MAX);

  andar(velD, velE);  // Com controle de direção dinamica
  }
}
// Funções de controle de direção dos motores
void andar(int velD, int velE){
  // Motor Direito
  if (velD >= 0) {
    digitalWrite(IN3, LOW);
    digitalWrite(IN4, HIGH);
  } else {
    digitalWrite(IN3, HIGH);
    digitalWrite(IN4, LOW);
  }
  analogWrite(ENA, abs(velD));

  // Motor Esquerdo
  if (velE >= 0) {
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
} else {
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
}
  analogWrite(ENB, abs(velE));
}
