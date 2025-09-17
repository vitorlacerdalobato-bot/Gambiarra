// ======= VELOCIDADES =======
const int VEL_BASE = 120;  // Velocidade base inicial (pode ajustar depois nos testes)
const int PWM_MAX = 255;   // Limite mÃÂ¡ximo de PWM para proteger o motor
const int PWM_MIN = 0;     // MÃÂ­nimo de PWM (normalmente 0)

// ======= MOTORES =======
const int IN1 = 11;
const int IN2 = 10;
const int ENA = 12;
const int IN3 = 9;
const int IN4 = 8;
const int ENB = 7;

// ======= SENSORES =======
const int S1 = 24;
const int S2 = 26;
const int S3 = 28;
const int S4 = 30;
const int S5 = 32;
const int S6 = 34;
const int S7 = 36;
const int S8 = 38;
const int S9 = 40;
const int SME = 22;
const int SMD = 42;

// ======= LIMIARES DOS SENSORES =======
const int LIMIAR_U1 = 1;
const int LIMIAR_U2 = 1;
const int LIMIAR_U3 = 1;
const int LIMIAR_U4 = 1;
const int LIMIAR_U5 = 1;
const int LIMIAR_U6 = 1;
const int LIMIAR_U7 = 1;
const int LIMIAR_U8 = 1;
const int LIMIAR_U9 = 1;
const int LIMIAR_UME = 1;
const int LIMIAR_UMD = 1;

// ======= ESTADO DOS SENSORES =======
bool U1 = false;
bool U2 = false;
bool U3 = false;
bool U4 = false;
bool U5 = false;
bool U6 = false;
bool U7 = false;
bool U8 = false;
bool U9 = false;
bool UE = false;
bool UD = false;
bool UEAnt = false;
bool UDAnt = false;

// ======= VARIÃÂVEIS AUXILIARES =======
bool U1_ant = false;
bool U5_ant = false;

int mE = 0;
int mD = 0;
int rE = 0;
int rD = 0;
int mT = 0;

int x = 0;
const int escolha = 1;

// ======= PID =======
float Kp = 30.0;    // Constante Proporcional
float Ki = 0.0;     // Constante Integral
float Kd = -.0;    // Constante Derivativa

// Variaveis do PID
float erro = 0;
float erroAnterior = 0;
float somaErro = 0;
float correcao = 0;

bool seguir = true ;
bool sensor = true ;

int velD = 0;
int velE = 0;
