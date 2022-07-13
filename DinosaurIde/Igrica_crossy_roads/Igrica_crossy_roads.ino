#include <Adafruit_ILI9341.h>
#include <Adafruit_GFX.H>
#define TFT_CS  5
#define TFT_DC 21
Adafruit_ILI9341 tft = Adafruit_ILI9341(TFT_CS, TFT_DC);
// loading screen
int PinTipkalo = 39;
int StanjeTipkala2;
bool start = false;
bool onetime = true;
// tipke i srce
int TipkaLR = 34;
int TipkaUD = 35;
int StanjeTipkala;
int StanjeTipkalaUD;
// Auto 
int Xauto = 200;
int Yauto = 65;
int Xsvjetla1 = 203;
int Ysvjetla1 = 70;
int Xsvjetla2 = 222;
int Ysvjetla2 = 70;
int Xretrovizor = 197;
int Yretrovizor = 74;
int Xstaklo = 204;
int Ystaklo = 78;
int Xssvjetla1 = 204;
int Yssvjetla1 = 101;
int Xssvjetla2 = 221;
int Yssvjetla2 = 101;
int xrandom = random(160, 310);   
//auto na drugu stranu
int Xauto2 = 260;
int Yauto2 = 10;
int Xsvjetla21 = 263;
int Ysvjetla21 = 43;
int Xsvjetla22 = 282;
int Ysvjetla22 = 43;
int Xretrovizor2 = 257;
int Yretrovizor2 = 39;
int Xstaklo2 = 264;
int Ystaklo2 = 30;
int Xssvjetla21 =  265;
int Yssvjetla21 = 14;
int Xssvjetla22 = 282;
int Yssvjetla22 = 14;
// Tijelo i glava dinasaura
int X = 20;
int Y = 110;
int Xglava = 33;
int Yglava = 102;
int Xoko = 38;
int Yoko = 105;
int Xusta1 = 41;
int Yusta1 = 111;
int Xusta2 = 40;
int Yusta2 = 110;
int Xusta3 = 45;
int Yusta3 = 111;
int Xkapa1 = 29;
int Ykapa1 = 101;
int Xkapa2 = 35;
int Xkapa3 = 44;
int Ykapa3 = 101;
int Ykapa2 = 95;
int Xnoga1 = 20;
int Ynoga1 = 130;
int Xnoga2 = 36.5;
int Ynoga2 = 130;
int Xrep = 10;
int Yrep = 113;
int Xtrokut11 = 26;
int Ytrokut11 = 109.5;
int Xtrokut12 = 29;
int Ytrokut12 = 106.5;
int Xtrokut13 = 32;
int Ytrokut13 = 109.5;
int Xtrokut21 = 21;
int Ytrokut21 = 109.5;
int Xtrokut22 = 24;
int Ytrokut22 = 106.5;
int Xtrokut23 = 27;
int Ytrokut23 = 109.5;
int Xtrokut31 = 13;
int Ytrokut31 = 112;
int Xtrokut32 = 16;
int Ytrokut32 = 109;
int Xtrokut33 = 19;
int Ytrokut33 = 112;
// mrdanje
int move_bodyXP (){
  X = X + 20;
  Xglava =  Xglava + 20;
  Xoko = Xoko + 20;
  Xusta1 = Xusta1 + 20;
  Xusta2 += 20;
  Xusta3 += 20;
  Xkapa1 += 20;
  Xkapa2 += 20;
  Xkapa3 += 20;
  Xnoga1 += 20;
  Xnoga2 += 20;
  Xrep += 20;
  Xtrokut11 += 20; 
  Xtrokut12 += 20;
  Xtrokut13 += 20;
  Xtrokut21 += 20;
  Xtrokut22 += 20;
  Xtrokut23 += 20;
  Xtrokut31 += 20;
  Xtrokut32 += 20;
  Xtrokut33 += 20;
  delay(20);
}
int move_bodyXP2 (){
  X = X + 10;
  Xglava =  Xglava + 10;
  Xoko = Xoko + 10;
  Xusta1 = Xusta1 + 10;
  Xusta2 += 10;
  Xusta3 += 10;
  Xkapa1 += 10;
  Xkapa2 += 10;
  Xkapa3 += 10;
  Xnoga1 += 10;
  Xnoga2 += 10;
  Xrep += 10;
  Xtrokut11 += 10; 
  Xtrokut12 += 10;
  Xtrokut13 += 10;
  Xtrokut21 += 10;
  Xtrokut22 += 10;
  Xtrokut23 += 10;
  Xtrokut31 += 10;
  Xtrokut32 += 10;
  Xtrokut33 += 10;
  delay(20);
}
int move_bodyXM (){
  X -= 20;
  Xglava -=20;
  Xoko -= 20;
  Xusta1 -= 20;
  Xusta2 -= 20;
  Xusta3 -= 20;
  Xkapa1 -= 20;
  Xkapa2 -= 20;
  Xkapa3 -= 20;
  Xnoga1 -= 20;
  Xnoga2 -= 20;
  Xrep -= 20;
  Xtrokut11 -= 20; 
  Xtrokut12 -= 20;
  Xtrokut13 -= 20;
  Xtrokut21 -= 20;
  Xtrokut22 -= 20;
  Xtrokut23 -= 20;
  Xtrokut31 -= 20;
  Xtrokut32 -= 20;
  Xtrokut33 -= 20;
  delay(20);
}
int move_bodyYP (){
  Y = Y + 20;
  Yglava =  Yglava + 20;
  Yoko = Yoko + 20;
  Yusta1 += 20;
  Yusta2 += 20;
  Yusta3 += 20;
  Ykapa1 += 20;
  Ykapa2 += 20;
  Ykapa3 += 20;
  Ynoga1 += 20;
  Ynoga2 += 20;
  Yrep += 20;
  Ytrokut11 += 20;
  Ytrokut12 += 20;
  Ytrokut13 += 20;
  Ytrokut21 += 20;
  Ytrokut22 += 20;
  Ytrokut23 += 20;
  Ytrokut31 += 20;
  Ytrokut32 += 20;
  Ytrokut33 += 20;
  delay (20);
}
int move_bodyYM (){
  Y = Y - 20; 
  Yglava -= 20;
  Yoko -= 20;
  Yusta1 -= 20;
  Yusta2 -= 20;
  Yusta3 -= 20;
  Ykapa1 -= 20;
  Ykapa2 -= 20;
  Ykapa3 -= 20;
  Ynoga1 -= 20;
  Ynoga2 -= 20;
  Yrep -= 20;
  Ytrokut11 -= 20;
  Ytrokut12 -= 20;
  Ytrokut13 -= 20;
  Ytrokut21 -= 20;
  Ytrokut22 -= 20;
  Ytrokut23 -= 20;
  Ytrokut31 -= 20;
  Ytrokut32 -= 20;
  Ytrokut33 -= 20;
  delay (20);
}
int dino(){
  //character dinosaur
  tft.setTextSize(5);
  tft.setRotation(3);
  
  //tijelo i glava
  tft.fillRect(X, Y, 20, 20, ILI9341_GREEN); 
  tft.fillRect(Xglava, Yglava, 12, 12, ILI9341_GREEN);
  
  //oko i usta
  tft.fillRect(Xoko, Yoko, 2, 2, ILI9341_BLACK);
  tft.drawLine(Xusta1, Yusta1, Xusta3, Yusta3, ILI9341_BLACK);
  tft.fillRect(Xusta2, Yusta2, 1.5, 1, ILI9341_BLACK);
  
  //kapa
  tft.drawLine(Xkapa1, Ykapa1, Xkapa3, Ykapa3, ILI9341_RED);
  tft.fillRect(Xkapa2, Ykapa2, 10, 7.5, ILI9341_RED);

  //noge
  tft.fillRect(Xnoga1, Ynoga1, 5, 5, ILI9341_GREEN);
  tft.fillRect(Xnoga2, Ynoga2, 5, 5, ILI9341_GREEN);

  //rep
  tft.fillRect(Xrep, Yrep, 11, 4.5, ILI9341_GREEN);
  
  //bodlje na leđima
  tft.drawTriangle(Xtrokut11, Ytrokut11, Xtrokut12, Ytrokut12, Xtrokut13, Ytrokut13, ILI9341_WHITE);
  tft.drawTriangle(Xtrokut21, Ytrokut21, Xtrokut22, Ytrokut22, Xtrokut23, Ytrokut23, ILI9341_WHITE);
  tft.drawTriangle(Xtrokut31, Ytrokut31, Xtrokut32, Ytrokut32, Xtrokut33, Ytrokut33, ILI9341_WHITE);
  } 
int car(){
  //auto
  tft.fillRoundRect(Xauto, Yauto, 31, 42, 5, ILI9341_BLUE);
  //svjetla
  tft.fillRect(Xsvjetla1, Ysvjetla1, 6, 4, ILI9341_YELLOW);
  tft.fillRect(Xsvjetla2, Ysvjetla2, 6, 4, ILI9341_YELLOW);
  //retrovizori
  tft.fillRect(Xretrovizor, Yretrovizor, 37, 5, ILI9341_BLUE);
  //staklo
  tft.drawRect(Xstaklo, Ystaklo, 23, 8, ILI9341_BLACK);
  //straznja svjetla
  tft.fillRect(Xssvjetla1, Yssvjetla1, 5, 3, ILI9341_RED);
  tft.fillRect(Xssvjetla2, Yssvjetla2, 5, 3, ILI9341_RED);
}
int car2(){
//auto 2
tft.fillRoundRect(Xauto2, Yauto2, 31, 42, 5, ILI9341_RED);
//svjetla
tft.fillRect(Xsvjetla21, Ysvjetla21, 6, 4, ILI9341_YELLOW);
tft.fillRect(Xsvjetla22, Ysvjetla22, 6, 4, ILI9341_YELLOW);
//retrovizori
tft.fillRect(Xretrovizor2, Yretrovizor2, 37, 5, ILI9341_RED);
//staklo
tft.drawRect(Xstaklo2, Ystaklo2, 23, 8, ILI9341_BLACK);
//straznja svjetla
tft.drawRect(Xssvjetla21, Yssvjetla21, 5, 3, ILI9341_BLACK);
tft.drawRect(Xssvjetla22, Yssvjetla22, 5, 3, ILI9341_BLACK);

}
int carYM(int z){
  Yauto -= 20 +z;
  Ysvjetla1 -= 20 +z;
  Ysvjetla2 -= 20 +z;
  Yretrovizor -= 20 +z;
  Ystaklo -= 20 +z; 
  Yssvjetla1 -= 20 +z;
  Yssvjetla2 -= 20 +z;
}
int carYP(int z){
  Yauto += 20 +z;
  Ysvjetla1 += 20 +z;
  Ysvjetla2 += 20 +z;
  Yretrovizor += 20 +z;
  Ystaklo += 20 +z; 
  Yssvjetla1 += 20 +z;
  Yssvjetla2 += 20 +z;
}
int carXM(int z){
  Xauto -= 20 +z;
  Xsvjetla1 -= 20 +z;
  Xsvjetla2 -= 20 +z;
  Xretrovizor -= 20 +z;
  Xstaklo -= 20 +z; 
  Xssvjetla1 -= 20 +z;
  Xssvjetla2 -= 20 +z;
}
int carXP(int z){
  Xauto += 20 +z;
  Xsvjetla1 += 20 +z;
  Xsvjetla2 += 20 +z;
  Xretrovizor += 20 +z;
  Xstaklo += 20 +z; 
  Xssvjetla1 += 20 +z;
  Xssvjetla2 += 20 +z;
}
int carXPReset(){
Xauto = 200;
Yauto = 65;
Xsvjetla1 = 203;
Ysvjetla1 = 70;
Xsvjetla2 = 222;
Ysvjetla2 = 70;
Xretrovizor = 197;
Yretrovizor = 74;
Xstaklo = 204;
Ystaklo = 78;
Xssvjetla1 = 204;
Yssvjetla1 = 101;
Xssvjetla2 = 221;
Yssvjetla2 = 101;
}
void setup() {
  // Loading screen
  
  pinMode(PinTipkalo, INPUT_PULLUP);
  
  tft.begin();
  tft.fillScreen(ILI9341_BLACK);
  tft.setRotation(3);
  tft.drawRoundRect(30, 175, 245, 37, 6, ILI9341_WHITE);
  tft.setTextSize(4);
  tft.setCursor(35, 180);
  tft.setTextColor(ILI9341_GREEN);
  tft.println("START GAME");
  tft.fillRect(210, 80, 50, 30, ILI9341_BLUE);
  tft.fillTriangle(250, 65, 250, 125, 290, 80, ILI9341_BLUE);
  tft.setRotation(3);
  tft.setTextSize(2);
  tft.setTextColor(ILI9341_YELLOW);
  tft.setCursor(160, 140);
  tft.println("PRESS START");
  tft.setTextSize(4.7);
  tft.setRotation(3);
  tft.setCursor(12, 20);
  tft.println("DINOSAURIDE");
  // Gumbovi
  pinMode(TipkaLR, INPUT_PULLUP);
  pinMode(TipkaUD, INPUT_PULLUP);
  Serial.begin (9600);
  tft.begin(); 
}

void loop() {

  StanjeTipkala2 = digitalRead(PinTipkalo);
  if (StanjeTipkala2 == LOW and onetime == true) {
      tft.fillScreen(ILI9341_BLACK);
      tft.setTextSize(5);
      tft.setTextColor(ILI9341_WHITE);
      tft.setCursor(20, 110);
      tft.setRotation(3);
      tft.println("LOADING...");
      delay(2000);
      start = true;
      onetime = false;
  }
  if (start == true){
    delay (100);
    car2();
    // Granice ekrana
    //Serial.print (Yglava);
    if (Yglava <= 2){
      move_bodyYP();
    }
    if (Yglava >= 220){
      move_bodyYM();
    }
    // granica levo desno
    if (Xglava >= 300){
      move_bodyXM();
    }
    if (Xrep <= 3 ){
      move_bodyXP();
    }
    Serial.println ("Rep");
    Serial.println (Xrep);
    // Refreshanje ekrana
    tft.fillScreen(ILI9341_BLACK);
    car();
    dino();
    // Citanje kontrola
    StanjeTipkala = analogRead(TipkaLR);
    StanjeTipkalaUD = analogRead(TipkaUD);
    //Serial.println (StanjeTipkala);
    //Serial.println  (StanjeTipkalaUD);
    // Ljevo desno kretanje
    if (StanjeTipkala >= 1300 and StanjeTipkala <= 2100){
      carXM(0);
    }
    if (StanjeTipkala == 4095){
      carXP(0);
      }
    // Gore dole kretanje 
    if (StanjeTipkalaUD >= 1300 and StanjeTipkalaUD <= 2100){
        move_bodyYP ();
        }
    if (StanjeTipkalaUD == 4095){
        move_bodyYM ();
      }
    // Auto ide vrum vrum 
    carYM(-15);
    if (Yssvjetla1 <= -1){
      carXPReset(); 
      carYP(260);
      
    }
  }
}
