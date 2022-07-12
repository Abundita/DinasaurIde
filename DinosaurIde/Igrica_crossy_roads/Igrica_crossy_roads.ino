#include <Adafruit_ILI9341.h>
#include <Adafruit_GFX.H>
#define TFT_CS  5
#define TFT_DC 21
Adafruit_ILI9341 tft = Adafruit_ILI9341(TFT_CS, TFT_DC);
//nešto
// tipke i srce
int TipkaLR = 34;
int TipkaUD = 35;
int StanjeTipkala;
int StanjeTipkalaUD;
   
   
  
   // Tijelo i glava
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
int Xkapa1 = 29;
int Ykapa1 = 101;
int Xkapa2 = 35;
int Ykapa2 = 95;
int Xnoga1 = 20;
int Ynoga1 = 130;
int Xnoga2 = 36.5;
int Ynoga2 = 130;
int Xrep = 10;
int Yrep = 113;
int Xtrokut1.1 = 26;
int Ytrokut1.1 = 109.5;
int Xtrokut1.2 = 29;
int Ytrokut1.2 = 106.5;
int Xtrokut1.3 = 32;
int Ytrokut1.3 = 109.5;
int Xtrokut2.1 = 21;
int Ytrokut2.1 = 109.5;
int Xtrokut2.2 = 24;
int Ytrokut2.2 = 106.5;
int Xtrokut2.3 = 27;
int Ytrokut2.3 = 109.5;
int Xtrokut3.1 = 13;
int Ytrokut3.1 = 112;
int Xtrokut3.2 = 16;
int Ytrokut3.2 = 109;
int Xtrokut3.3 = 19;
int Ytrokut3.3 = 112;


void setup() {
  
  
  pinMode(TipkaLR, INPUT_PULLUP);
  pinMode(TipkaUD, INPUT_PULLUP);
  Serial.begin (9600);

  
  tft.begin();
  tft.fillScreen(ILI9341_BLACK);
  
  //character dinosaur
  tft.setTextSize(5);
  tft.setRotation(3);
  
  //tijelo i glava
  tft.fillRect(X, Y, 20, 20, ILI9341_GREEN); 
  tft.fillRect(Xglava, Yglava, 12, 12, ILI9341_GREEN);
  
  //oko i usta
  tft.fillRect(Xoko, Yoko, 2, 2, ILI9341_BLACK);
  tft.drawLine(Xusta1, Yusta1, 45, 111, ILI9341_BLACK);
  tft.fillRect(Xusta2, Yusta2, 1.5, 1, ILI9341_BLACK);
  
  //kapa
  tft.drawLine(Xkapa1, Ykapa1, 44, 101, ILI9341_RED);
  tft.fillRect(Xkapa2, Ykapa2, 10, 7.5, ILI9341_RED);
 
  //noge
  tft.fillRect(Xnoga1, Ynoga1, 5, 5, ILI9341_GREEN);
  tft.fillRect(Xnoga2, Ynoga2, 5, 5, ILI9341_GREEN);
 
  //rep
  tft.fillRect(Xrep, Yrep, 11, 4.5, ILI9341_GREEN);
  
  //bodlje na leđima
  tft.drawTriangle(Xtrokut1.1, Ytrokut1.1, Xtrokut1.2, Ytrokut1.2, Xtrokut1.3, Ytrokut1.3, ILI9341_WHITE);
  tft.drawTriangle(Xtrokut2.1, Ytrokut2.1, Xtrokut2.2, Ytrokut2.2, Xtrokut2.3, Ytrokut2.3, ILI9341_WHITE);
  tft.drawTriangle(Xtrokut3.1, Ytrokut3.1, Xtrokut3.2, Ytrokut3.2, Xtrokut3.3, Ytrokut3.3, ILI9341_WHITE);
}

void loop() {

  // Caracter
 
   // Kretanje
  StanjeTipkala = analogRead(TipkaLR);
  Serial.println (StanjeTipkala);
  Serial.println  (StanjeTipkalaUD);
  if (StanjeTipkala >= 1300 and StanjeTipkala <= 2100){
    X = X + 20;
    Xglava =  Xglava + 20;
    Yglava =  Yglava + 20;
    Xoko = Xoko + 20;
    Yoko = Yoko + 20;
    Xusta1 = Xusta1 + 20;
    Yusta1 + 20;
    Xusta2 + 20;
    Yusta2 + 20;
    Xkapa1 + 20;
    Ykapa1 + 20;
    Xkapa2 + 20;
    Ykapa2 + 20;
    Xnoga1 + 20;
    Ynoga1 + 20;
    Xnoga2 + 20;
    Ynoga2 + 20;
    Xrep + 20;
    Yrep + 20;
    Xtrokut1.1 + 20;
    Ytrokut1.1 + 20;
    Xtrokut1.2 + 20;
    Ytrokut1.2 + 20;
    Xtrokut1.3 + 20;
    Ytrokut1.3 + 20;
    Xtrokut2.1 + 20;
    Ytrokut2.1 + 20;
    Xtrokut2.2 + 20;
    Ytrokut2.2 + 20;
    Xtrokut2.3 + 20;
    Ytrokut2.3 + 20;
    Xtrokut3.1 + 20;
    Ytrokut3.1 + 20;
    Xtrokut3.2 + 20;
    Ytrokut3.2 + 20;
    Xtrokut3.3 + 20;
    Ytrokut3.3 
    delay(200);
    }
    StanjeTipkalaUD = analogRead(TipkaUD);
if (StanjeTipkala == 4095){
  X = X - 20;
  delay(200);
  }
if (StanjeTipkalaUD >= 1300 and StanjeTipkalaUD <= 2100){
    Y = Y + 20;
    delay(200);
    }
    StanjeTipkalaUD = analogRead(TipkaUD);
if (StanjeTipkalaUD == 4095){
    Y = Y - 20;
    delay(200);
  }
}
