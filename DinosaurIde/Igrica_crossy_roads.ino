#include <Adafruit_ILI9341.h>
#include <Adafruit_GFX.H>

#define TFT_CS  5
#define TFT_DC 21

Adafruit_ILI9341 tft = Adafruit_ILI9341(TFT_CS, TFT_DC);

int korak = 20;

   // tipke
int TipkaLR = 34;
int TipkaUD = 35;
int StanjeTipkala;
int StanjeTipkalaUD;
   
   
   // Tijelo i glava
 int X = 20;
 int Y = 110;
 
   
   // Oko i usta
   
   
   // Kapa
   
   
   //Noge
   
   
   //Rep
   
   
   //Bodljena leđima
   
void setup() {
  pinMode(TipkaLR, INPUT_PULLUP);
  pinMode(TipkaUD, INPUT_PULLUP);
  Serial.begin (9600);
  tft.begin();
}

void loop() {
  
  // Caracter
 
 tft.fillScreen(ILI9341_BLACK);
//character dinosaur
  tft.setTextSize(5);
  tft.setRotation(3);
  //tijelo i glava
  tft.fillRect(X, Y, 20, 20, ILI9341_GREEN); 
  tft.fillRect(33, 102, 12, 12, ILI9341_GREEN);
  //oko i usta
  tft.fillRect(38, 105, 2, 2, ILI9341_BLACK);
  tft.drawLine(41, 111, 45, 111, ILI9341_BLACK);
  tft.fillRect(40, 110, 1.5, 1, ILI9341_BLACK);
  //kapa
  tft.drawLine(29, 101, 44, 101, ILI9341_RED);
  tft.fillRect(35, 95, 10, 7.5, ILI9341_RED);
  //noge
  tft.fillRect(20, 130, 5, 5, ILI9341_GREEN);
  tft.fillRect(36.5, 130, 5, 5, ILI9341_GREEN);
  //rep
  tft.fillRect(10, 113, 11, 4.5, ILI9341_GREEN);
  //bodlje na leđima
  tft.drawTriangle(26, 109.5, 29, 106.5, 32, 109.5, ILI9341_WHITE);
  tft.drawTriangle(21, 109.5, 24, 106.5, 27, 109.5, ILI9341_WHITE);
  tft.drawTriangle(13, 112, 16, 109, 19, 112, ILI9341_WHITE);
   // Kretanje
 
  
  StanjeTipkala = analogRead(TipkaLR);
  Serial.println (StanjeTipkala);
  Serial.println  (StanjeTipkalaUD);
  if (StanjeTipkala >= 1300 and StanjeTipkala <= 2100){
      X = X + 20;
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
