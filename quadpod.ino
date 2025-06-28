#include <Servo.h>

Servo coxa_fl;
Servo coxa_fr;
Servo coxa_rl;
Servo coxa_rr;

Servo femur_fl;
Servo femur_fr;
Servo femur_rl;
Servo femur_rr;

Servo tibia_fl;
Servo tibia_fr;
Servo tibia_rl;
Servo tibia_rr;

bool selesai = false;

void d1() {
  tibia_fl.write(145);
  tibia_rr.write(145);
  delay(300);
  femur_fl.write(100); //naikin kaki
  femur_rr.write(100); //naikin kaki
  delay(300);
  coxa_fl.write(90); //geser kaki ke depan
  coxa_rr.write(180); //geser kaki ke depan
  delay(300);
  tibia_fl.write(125);  
  tibia_rr.write(125);  
  delay(300);
  femur_fl.write(150);//turunin kaki
  femur_rr.write(150);//turunin kaki
  femur_fr.write(90); //naikin kaki d2
  femur_rl.write(90); //naikin kaki d2
  delay(300);
  coxa_rr.write(90); //geser kaki ke belakang
  coxa_fl.write(180); //geser kaki ke belakang
  delay(300);
  femur_fl.write(130);
  femur_rr.write(130);  
}

void d1_reverse() {
  tibia_rr.write(145);
  tibia_fl.write(145);
  delay(300);
  femur_rr.write(100); //naikin kaki
  femur_fl.write(100); //naikin kaki
  delay(300);
  coxa_rr.write(90); //geser kaki ke belakang
  coxa_fl.write(180); //geser kaki ke belakang
  delay(300);
  tibia_rr.write(125);  
  tibia_fl.write(125);  
  delay(300);
  femur_rr.write(150);//turunin kaki
  femur_fl.write(150);//turunin kaki
  femur_fr.write(90); //naikin kaki d2
  femur_rl.write(90); //naikin kaki d2
  delay(300);
  coxa_fl.write(90); //geser kaki ke depan
  coxa_rr.write(180); //geser kaki ke depan
  delay(300);
  femur_rr.write(130);  
  femur_fl.write(130);
}

void d2() {
  tibia_fr.write(35);
  tibia_rl.write(35);
  delay(300);
  femur_fr.write(80); //naikin kaki
  femur_rl.write(80); //naikin kaki
  delay(300);
  coxa_fr.write(90); //geser kaki ke depan
  coxa_rl.write(0); //geser kaki ke depan
  delay(300);
  tibia_fr.write(55);  
  tibia_rl.write(55);  
  delay(300);
  femur_fr.write(30); //turunin kaki
  femur_rl.write(30); //turunin kaki
  femur_fl.write(90); //naikin kaki d1
  femur_rr.write(90); //naikin kaki d1
  delay(300);
  coxa_rl.write(90); //geser kaki ke belakang
  coxa_fr.write(0); //geser kaki ke belakang
  delay(300);
  femur_fr.write(50);
  femur_rl.write(50);
}

void d2_reverse() {
  tibia_rl.write(35);
  tibia_fr.write(35);
  delay(300);
  femur_rl.write(80); //naikin kaki
  femur_fr.write(80); //naikin kaki
  delay(300);
  coxa_rl.write(90); //geser kaki ke belakang
  coxa_fr.write(0); //geser kaki ke belakang
  delay(300);
  tibia_rl.write(55);  
  tibia_fr.write(55);  
  delay(300);
  femur_rl.write(30); //turunin kaki
  femur_fr.write(30); //turunin kaki
  femur_fl.write(90); //naikin kaki d1
  femur_rr.write(90); //naikin kaki d1
  delay(300);
  coxa_fr.write(90); //geser kaki ke depan
  coxa_rl.write(0); //geser kaki ke depan
  delay(300);
  femur_rl.write(50);
  femur_fr.write(50);
}

void set() {
  coxa_fl.write(90); // makin besar makin ke kiri
  coxa_fr.write(90); //makin besar makin ke kiri
  coxa_rl.write(90);//makin besar makin ke belakang
  coxa_rr.write(90); //makin besar makin ke depan

  femur_fl.write(90); //makin besar makin ke bawah
  femur_fr.write(90); //makin besar makin ke atas
  femur_rl.write(90); // makin besar makin ke atas
  femur_rr.write(90); //makin besar makin ke bawah

  tibia_fl.write(90);  //makin besar makin ke atas
  tibia_fr.write(90); //makin besar makin ke bawah
  tibia_rl.write(90); //makin besar makin ke bawah
  tibia_rr.write(90); //makin besar makin ke atas
}

void set_awal() {
  set();
  tibia_fl.write(180);
  tibia_fr.write(0);
  tibia_rl.write(0);
  tibia_rr.write(180);
}

// void d1_attach() {
//   coxa_fr.attach(5);
//   femur_fr.attach(11);
//   tibia_fr.attach(8);
//   coxa_rl.attach(6);
//   femur_rl.attach(2);
//   tibia_rl.attach(12);
// }

// void d2_attach() {
//   coxa_fl.attach(3);
//   femur_fl.attach(10);
//   tibia_fl.attach(7);
//   coxa_rr.attach(9);
//   femur_rr.attach(4);
//   tibia_rr.attach(13);
// }

void majudepanbareng() {
  coxa_rl.detach();
  coxa_rr.detach();
  femur_rl.detach();
  femur_rr.detach();
  tibia_rl.detach();
  tibia_rr.detach();
  
  tibia_fl.write(145);
  tibia_fr.write(35);
  delay(500);
  femur_fl.write(100); //naikin kaki
  femur_fr.write(80); //naikin kaki
  delay(500);
  coxa_fl.write(55);
  coxa_fr.write(140); 
  delay(500);
  tibia_fl.write(125);  
  tibia_fr.write(55);  
  delay(500);
  femur_fl.write(150);//turunin kaki
  femur_fr.write(30);//turunin kaki
  delay(500);
  coxa_fl.write(140);
  coxa_fr.write(55);
  delay(500);
  femur_fl.write(130);
  femur_fr.write(50);
  delay(500);
}

void majudepankiri() {  
  tibia_fl.write(145);
  delay(500);
  femur_fl.write(100); //naikin kaki
  delay(500);
  coxa_fl.write(90);
  delay(500);
  tibia_fl.write(125);  
  femur_fl.write(150);//turunin kaki
  delay(500);
  coxa_fl.write(180);
  delay(500);
  femur_fl.write(130);
  delay(500);
}

void majudepankanan() {
  tibia_fr.write(35);
  delay(500);
  femur_fr.write(80); //naikin kaki
  delay(500);
  coxa_fr.write(90);
  delay(500);
  tibia_fr.write(55);  
  femur_fr.write(30);//turunin kaki
  delay(500);
  coxa_fr.write(0);
  delay(500);
  femur_fr.write(50);
}

void majubelakangkiri() {
  tibia_rl.write(35);
  delay(500);
  femur_rl.write(80);
  delay(500);
  coxa_rl.write(0);
  delay(500);
  tibia_rl.write(55);  
  femur_rl.write(30);//turunin kaki
  delay(500);
  coxa_rl.write(90);
  delay(500);
  femur_rl.write(50);
}

void majubelakangkanan() {
  tibia_rr.write(145);
  delay(500);
  femur_rr.write(100); //naikin kaki
  delay(500);
  coxa_rr.write(180);
  delay(500);
  tibia_rr.write(125);  
  femur_rr.write(150); //turunin kaki
  delay(500);
  coxa_rr.write(90);
  delay(500);
  femur_rr.write(130);
}

void berdiri() {
  tibia_fl.write(125);  
  tibia_rr.write(125); 
  tibia_fr.write(55);  
  tibia_rl.write(55);
  femur_fl.write(150);
  femur_fr.write(30);
  femur_rl.write(30);
  femur_rr.write(150);
  coxa_fl.write(90);
  coxa_fr.write(90);
  coxa_rl.write(90);
  coxa_rr.write(90);
  delay(500);
}

void d1_d2_mundur() {
  d1_reverse();
  femur_rr.write(60); //naikin kaki
  delay(300);
  coxa_rr.write(90);
  delay(300);
  femur_rr.write(150); //turunin kaki
  delay(300);
  d2_reverse();
  femur_rl.write(120); //naikin kaki
  delay(300);
  coxa_rl.write(90);
  delay(300);
  femur_rl.write(30); //turunin kaki
  delay(300);  
}

void d1_d2_maju() {
  d1();
  femur_fl.write(60); //naikin kaki
  delay(300);
  coxa_fl.write(90);
  delay(300);
  femur_fl.write(150); //turunin kaki
  delay(300);
  d2();
  femur_fr.write(120); //naikin kaki
  delay(300);
  coxa_fr.write(90);
  delay(300);
  femur_fr.write(30); //turunin kaki
  delay(300);
}

void setup() {
  coxa_fl.attach(3);
  coxa_fr.attach(5);
  coxa_rl.attach(6);
  coxa_rr.attach(9);

  femur_fl.attach(10);
  femur_fr.attach(11);
  femur_rl.attach(2);
  femur_rr.attach(4);

  tibia_fl.attach(7);
  tibia_fr.attach(8);
  tibia_rl.attach(12);
  tibia_rr.attach(13);
  
  set_awal();
}


void maju_mundur() {
  for (int i = 0; i <5; i++) {
    d1_d2_maju();
  }
  berdiri();
  delay(2000);
  set();
  delay(2000);
  berdiri();
  delay(2000);
  for (int i = 0; i <5; i++) {
    d1_d2_mundur();
  }
  berdiri();
  delay(2000);
  set();
}

void loop() {
  if (!selesai) {
    maju_mundur();
    selesai = true;
  }
}