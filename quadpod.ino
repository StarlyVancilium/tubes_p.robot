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


void d1() {
  // coxa_fr.detach();
  // femur_fr.detach();
  // tibia_fr.detach();
  // coxa_rl.detach();
  // femur_rl.detach();
  // tibia_rl.detach();

  tibia_fl.write(145);
  tibia_rr.write(145);
  delay(300);
  femur_fl.write(100); //naikin kaki
  femur_rr.write(100); //naikin kaki
  delay(300);
  coxa_fl.write(90);
  coxa_rr.write(180);
  delay(300);
  tibia_fl.write(125);  
  tibia_rr.write(125);  
  delay(300);
  femur_fl.write(150);//turunin kaki
  femur_rr.write(150);//turunin kaki
  femur_fr.write(40); //naikin kaki d2
  femur_rl.write(40); //naikin kaki d2
  delay(300);
  coxa_fl.write(180);
  coxa_rr.write(90);
  delay(300);
  femur_fl.write(130);
  femur_rr.write(130);  
}

void d2() {
  // coxa_fl.detach();
  // femur_fl.detach();
  // tibia_fl.detach();
  // coxa_rr.detach();
  // femur_rr.detach();
  // tibia_rr.detach();

  tibia_fr.write(35);
  tibia_rl.write(35);
  delay(300);
  femur_fr.write(80); //naikin kaki
  femur_rl.write(80); //naikin kaki
  delay(300);
  coxa_fr.write(90);
  coxa_rl.write(0);
  delay(300);
  tibia_fr.write(55);  
  tibia_rl.write(55);  
  delay(300);
  femur_fr.write(30); //turunin kaki
  femur_rl.write(30); //turunin kaki
  femur_fl.write(140); //naikin kaki d1
  femur_rr.write(140); //naikin kaki d1
  delay(300);
  coxa_fr.write(0);
  coxa_rl.write(90);
  delay(300);
  femur_fr.write(50);
  femur_rl.write(50);
}

void set() {
  coxa_fl.write(90); // makin besar makin ke kiri
  coxa_fr.write(120); //makin besar makin ke kiri
  coxa_rl.write(90);//makin besar makin ke belakang
  coxa_rr.write(90); //makin besar makin ke depan

  femur_fl.write(90); //makin besar makin ke bawah
  femur_fr.write(70); //makin besar makin ke atas
  femur_rl.write(90); // makin besar makin ke atas
  femur_rr.write(90); //makin besar makin ke bawah

  tibia_fl.write(90);  //makin besar makin ke atas
  tibia_fr.write(90); //makin besar makin ke bawah
  tibia_rl.write(90); //makin besar makin ke bawah
  tibia_rr.write(90); //makin besar makin ke atas
}

void d1_attach() {
  coxa_fr.attach(5);
  femur_fr.attach(11);
  tibia_fr.attach(8);
  coxa_rl.attach(6);
  femur_rl.attach(2);
  tibia_rl.attach(12);
}

void d2_attach() {
  coxa_fl.attach(3);
  femur_fl.attach(10);
  tibia_fl.attach(7);
  coxa_rr.attach(9);
  femur_rr.attach(4);
  tibia_rr.attach(13);
}

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
  delay(500);  
  tibia_fr.write(55);  
  tibia_rl.write(55);
  delay(500);  
  femur_fl.write(150);
  femur_fr.write(30);
  delay(500);
  femur_rl.write(30);
  femur_rr.write(150);
  // femur_fl.write(140);
  // femur_fr.write(40);
  // delay(500);
  // femur_rl.write(40);
  // femur_rr.write(140);
  delay(500);
  coxa_fl.write(90);
  coxa_fr.write(90);
  delay(500);
  coxa_rl.write(90);
  coxa_rr.write(90);
  delay(500);
}


// void hut() {
//   coxa_fl.write(145);
//   coxa_fr.write(35);
//   coxa_rl.write(145);

// //  femur_fl.write(175);
// //  femur_fr.write(15);
// //  femur_rl.write(90);
// //
// //  tibia_fl.write(155);

// //  tibia_fr.write(25);
//   tibia_rl.write(155);
// //  tibia_rr.write(90);
// }

void d1d2maju() {
  // d2_attach();
  d1();
  femur_fl.write(60); //naikin kaki
  delay(300);
  coxa_fl.write(90);
  femur_fl.write(150); //turunin kaki
  delay(300);
  // d1_attach();
  d2();
  femur_fr.write(120); //naikin kaki
  delay(300);
  coxa_fr.write(90);
  femur_fr.write(30); //turunin kaki
  delay(300);
}

void setup() {
  Serial.begin(9600);
  coxa_fl.attach(3);
  coxa_fr.attach(5);
  coxa_rl.attach(6);
  coxa_rr.attach(9);
  delay(500);

  femur_fl.attach(10);
  femur_fr.attach(11);
  femur_rl.attach(2);
  femur_rr.attach(4);
  delay(500);

  tibia_fl.attach(7);
  tibia_fr.attach(8);
  tibia_rl.attach(12);
  tibia_rr.attach(13);
  delay(500);
  set();
  // femur_fl.write(180);
  // femur_fr.write(0);
  // femur_rl.write(180);
  // femur_rr.write(90);
}

void loop() {
  // angkattibia();
  // set();
  // set2();
  // majudepankiri();
  // majudepanbareng();
  // majudepankanan();
  // majubelakangkiri();
  // coxa_fr.write(0);
  // berdiri();

  // majubelakangkanan();

  d1d2maju();
}
