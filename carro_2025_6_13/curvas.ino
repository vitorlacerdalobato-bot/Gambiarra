 void curvas(){
  if((U2 && U3 && U4 && U5)||(U5 && U6 && U7 && U8)){

    if(mE >= 1){
        delay(150);
        seguir = false;
        sensor = false;
        curvaE();
        delay(420);
        seguir = true;
        sensor = true;
        mD = 0;
        mE = 0;
        parar();
      }else if(mD >= 1){
        delay(150);
        seguir = false;
        sensor = false;
        curvaD();
        delay(420);
        seguir = true;
        sensor = true;
        mD = 0;
        mE = 0;
        parar();
      }
    }
    /*
    if((U2 && U3 && U4 && U5) || (U5 && U6 && U7 && U8)){
      if((mD >= 1)){
        curvaD();
        delay(400);
        mD = 0;
        mE = 0;
        parar();
      } else if((mE >= 1)){
        curvaE();
        delay(400);
        mD = 0;
        mE = 0;
        parar();
      }
     mD = 0;
     mE = 0;
    }
    */ 
  }  
  /**/


/* sensores novos:
 U1 U2 U3 U4 U5 U6 U7 U8 U9
  UE             UD
24 26 28 30 32 34 36 38 40
 22                    42
*/
  
