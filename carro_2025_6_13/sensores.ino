 void definirModoPinosSensores() {
  pinMode(S1, INPUT);
  pinMode(S2, INPUT);
  pinMode(S3, INPUT);
  pinMode(S4, INPUT);
  pinMode(S5, INPUT);
  pinMode(S6, INPUT);
  pinMode(S7, INPUT);
  pinMode(S8, INPUT);
  pinMode(S9, INPUT);
  pinMode(SME, INPUT);
  pinMode(SMD, INPUT);
 }
 void sensores () {
if (sensor){
  /*
  Serial.println(digitalRead(S1));
  Serial.println(digitalRead(S2));
  Serial.println(digitalRead(S3));
  Serial.println(digitalRead(S4));
  Serial.println(digitalRead(S5));
  Serial.println(digitalRead(S6));
  Serial.println(digitalRead(S7));
  Serial.println(digitalRead(S8));
  Serial.println(digitalRead(S9));
  Serial.println(digitalRead(SME));
  Serial.println(digitalRead(SMD));
  */
  U1 = digitalRead(S1) >= LIMIAR_U1;
  U2 = digitalRead(S2) >= LIMIAR_U2;
  U3 = digitalRead(S3) >= LIMIAR_U3;
  U4 = digitalRead(S4) >= LIMIAR_U4;
  U5 = digitalRead(S5) >= LIMIAR_U5;
  U6 = digitalRead(S6) >= LIMIAR_U6;
  U7 = digitalRead(S7) >= LIMIAR_U7;
  U8 = digitalRead(S8) >= LIMIAR_U8;
  U9 = digitalRead(S9) >= LIMIAR_U9;
  UE = digitalRead(SME) >= LIMIAR_UME;
  UD = digitalRead(SMD) >= LIMIAR_UMD;
   
  /*
  if (!U1 && U1_ant) {
    mE = mE + 1;
  }

  if (!U5 && U5_ant) {
    mD = mD + 1;
  }
  */
 
  if (!U2 && !UD && UE) {
    mD = mD + 1;
    /*delay(x);
    if(U6 && U7 && UD){
      mE = mE - 1;
      rD = rD + 1;
    }*/
  }
  if (!U8 && !UE && UD) {
    mE = mE + 1;
    /*delay(x);
    if(U1 && UE){
      mD = mD - 1;
      rE = rE + 1;
    }*/
  }
  }
  if (UD && UE){
    mD = 0;
    mE = 0;
  }
  /*
  if ((U9 && UD) && (U1 && UE)) {
    mT = mT + 1;
  }
  */
}

/* sensores novos:
 U1 U2 U3 U4 U5 U6 U7 U8 U9
  UE             UD
24 26 28 30 32 34 36 38 40
 22                    42
*/