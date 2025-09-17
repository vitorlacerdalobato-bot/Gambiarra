void retorno(){
  if (rD == 1 || rE == 1){
    while(!(U2 && U3 && U4 && U5 && U6)){
      sensores ();
      atras();
      if (U4 && U5 && U6) {
        andarReto(38);
      } else if (U4 && U5) {
        curvarParaD(100);
      } else if (U3 && U4) {
        curvarParaD(180);
      } else if ((U2 && U3) || (U1 && U2 && U3) || (U1 && U2) || (U1)) {
        curvarParaD(230);
      } else if (U5 && U6) {
        curvarParaE(120);
      } else if (U6 && U7) {
        curvarParaE(200);
      } else if ((U7 && U8) || (U7 && U8 && U9) || (U8 && U9)) {
        curvarParaE(250);
      }
    }
  }
}


/* sensores novos:
 U1 U2 U3 U4 U5 U6 U7 U8 U9
  UE             UD
24 26 28 30 32 34 36 38 40
 22                    42
*/