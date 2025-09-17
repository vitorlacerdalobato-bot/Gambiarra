// FunÃÂ§ÃÂµes de controle de direção dos motores
void motorDHorario() {
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
}

void motorDAntiHorario() {
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
}

void motorEHorario() {
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
}

void motorEAntiHorario() {
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
}

// Funções para controlar a velocidade dos motores
void velocidadeMotorD(int velocidade) {
  analogWrite(ENA, velocidade);
}

void velocidadeMotorE(int velocidade){
  analogWrite(ENB, velocidade);
}

// Funções de movimento do robo
void frente(){
  motorDHorario();
  motorEAntiHorario();
}

void curvaE(){
  motorDHorario();
  motorEHorario();
}

void curvaD(){
  motorDAntiHorario();
  motorEAntiHorario();
}

void atras(){
  motorDAntiHorario();
  motorEHorario();
}

void andarReto(int beta){
  velocidadeMotorD(constrain(VEL_BASE - beta, PWM_MIN, PWM_MAX));
  velocidadeMotorE(constrain(VEL_BASE, PWM_MIN, PWM_MAX));
}

void parar(){
  velocidadeMotorD(0);
  velocidadeMotorE(0);
}

// Funções para curvas
void curvarParaD(int velocidadeExtra) {
  velocidadeMotorD(VEL_BASE - velocidadeExtra);
  velocidadeMotorE(VEL_BASE);
}

void curvarParaE(int velocidadeExtra){
  velocidadeMotorD(VEL_BASE);
  velocidadeMotorE(VEL_BASE - velocidadeExtra);
}

// Configuração dos pinos dos motores
void definirModoPinosMotores(){
  // Ponte H para motor E
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(ENA, OUTPUT);

  // Ponte H para motor D
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
  pinMode(ENB, OUTPUT);
}