#include <Adafruit_ILI9341.h>
#include <Adafruit_GFX.H>
#define TFT_CS  5
#define TFT_DC 21
Adafruit_ILI9341 tft = Adafruit_ILI9341(TFT_CS, TFT_DC);
// Coin
int score = 0;
int randval = random(10, 210);
int Xkocka1 = 208.7;
int Ykocka1 = randval;
int Xkocka2 = 208.7;
int Ykocka2 = randval;
int CoinRANDOM(int R){
  Xkocka1 = 90 +R;
  Ykocka1 = 70 +R;
  Xkocka2 = 89 +R;
  Ykocka2 = 69 +R;
}
//treca cesta
int Xcesta31 = 74;
int Ycesta31 = 1;
int Xcesta32 = 96;
int Ycesta32 = 1;
int Cesta3(){
  tft.fillRect(Xcesta31, Ycesta31, 46, 239, ILI9341_WHITE);
  tft.fillRect(Xcesta32, Ycesta32, 3, 239, ILI9341_BLACK);
}
// road
int Xcesta1 = 193;
int Xcesta2 = 215;
int Xcesta11 = 253;
int Xcesta22 = 275;
int Ycesta1 = 1;
int Ycesta2 = 1;
int Ycesta11 = 1;
int Ycesta22 = 1;
// loading screen
int PinTipkalo = 39;
int StanjeTipkala2;
bool start = false;
bool onetime = true;
bool eintime = true;
int TipkaMENU = 13;
int StisnutMENU;
// tipke i srce
int TipkaLR = 34;
int TipkaUD = 35;
int StanjeTipkala;
int StanjeTipkalaUD;
// kamion
int Xkamion1 = 197;
int Ykamion1 = 192;
int Xkamion2 = 203;
int Ykamion2 = 178;
int Xkretrovizor = 200;
int Ykretrovizor = 184;
int Xksvjetla1 = 205;
int Yksvjetla1 = 181;
int Xksvjetla2 = 221;
int Yksvjetla2 = 181;
int Xkstaklo = 206;
int Ykstaklo = 186;
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
int xrandom = random(210);   
int yrandom = random(170);
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
bool dead = false;
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
int road(){
  //cesta
  tft.fillRect(Xcesta1, Ycesta1, 46, 239, ILI9341_WHITE);
  tft.fillRect(Xcesta2, Ycesta2, 3, 239, ILI9341_BLACK);
  //druga cesta
  tft.fillRect(Xcesta11, Ycesta11, 46, 239, ILI9341_WHITE);
  tft.fillRect(Xcesta22, Ycesta22, 3, 239, ILI9341_BLACK);
}
int truck(){
  //kamion
  tft.fillRect(Xkamion1, Ykamion1, 38, 46, ILI9341_RED);
  tft.fillRect(Xkamion2, Ykamion2, 26, 14, ILI9341_BLUE);
  //retrovizori
  tft.fillRect(Xkretrovizor, Ykretrovizor, 32, 5, ILI9341_BLUE);
  //svjetla
  tft.fillRect(Xksvjetla1, Yksvjetla1, 6, 4, ILI9341_YELLOW);
  tft.fillRect(Xksvjetla2, Yksvjetla2, 6, 4, ILI9341_YELLOW);
  //staklo
  tft.drawRect(Xkstaklo, Ykstaklo, 20, 5, ILI9341_BLACK);
}
int Coin(){
  tft.fillRect(Xkocka1, Ykocka1, 15, 15, ILI9341_YELLOW);
  tft.drawRect(Xkocka2, Ykocka2, 16, 16, ILI9341_BLACK);
}
int CoinX(int C){
  Xkocka1 -= 20 + C;
  Xkocka2 -= 20 + C;
}
int CoinRESET(){
  randval = random(10, 210);
  Xkocka1 = 208.7;
  Ykocka1 = randval;
  Xkocka2 = 208.7;
  Ykocka2 = randval;
}
int RoadXP() 
{
  Xcesta1  += 20;
  Xcesta2  += 20;
  Xcesta11 += 20;
  Xcesta22 += 20;
}
int RoadXM() 
{
  Xcesta1  -= 20;
  Xcesta2  -= 20;
  Xcesta11 -= 20;
  Xcesta22 -= 20;
}
int RoadReset(){
  Xcesta1 = 193;
  Xcesta2 = 215;
  Xcesta11 = 253;
  Xcesta22 = 275;
  Ycesta1 = 1;
  Ycesta2 = 1;
  Ycesta11 = 1;
  Ycesta22 = 1;
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
int car2XP(int y){
  Xauto2 += 20 +y;
  Xsvjetla21 += 20 +y;
  Xsvjetla22 += 20 +y;
  Xretrovizor2 += 20 +y;
  Xstaklo2 += 20 +y; 
  Xssvjetla21 += 20 +y;
  Xssvjetla22 += 20 +y;
}
int car2XM(int y){
  Xauto2 -= 20 +y;
  Xsvjetla21 -= 20 +y;
  Xsvjetla22 -= 20 +y;
  Xretrovizor2 -= 20 +y;
  Xstaklo2 -= 20 +y; 
  Xssvjetla21 -= 20 +y;
  Xssvjetla22 -= 20 +y;
}
int car2YP(int y){
  Yauto2 += 20 +y;
  Ysvjetla21 += 20 +y;
  Ysvjetla22 += 20 +y;
  Yretrovizor2 += 20 +y;
  Ystaklo2 += 20 +y; 
  Yssvjetla21 += 20 +y;
  Yssvjetla22 += 20 +y;
}
int car2YM(int y){
  Yauto2 -= 20 +y;
  Ysvjetla21 -= 20 +y;
  Ysvjetla22 -= 20 +y;
  Yretrovizor2 -= 20 +y;
  Ystaklo2 -= 20 +y; 
  Yssvjetla21 -= 20 +y;
  Yssvjetla22 -= 20 +y;
}
int car2XPReset(){
  Xauto2 = 260;
  Yauto2 = 10;
  Xsvjetla21 = 263;
  Ysvjetla21 = 43;
  Xsvjetla22 = 282;
  Ysvjetla22 = 43;
  Xretrovizor2 = 257;
  Yretrovizor2 = 39;
  Xstaklo2 = 264;
  Ystaklo2 = 30;
  Xssvjetla21 =  265;
  Yssvjetla21 = 14;
  Xssvjetla22 = 282;
  Yssvjetla22 = 14;
}
int truckXP(int T){
  Xkamion1     += 20+T;
  Xkamion2     += 20+T;
  Xkretrovizor += 20+T;
  Xksvjetla1   += 20+T;
  Xksvjetla2   += 20+T;
  Xkstaklo     += 20+T;
}
int truckXM(int T){
  Xkamion1     -= 20+T;
  Xkamion2     -= 20+T;
  Xkretrovizor -= 20+T;
  Xksvjetla1   -= 20+T;
  Xksvjetla2   -= 20+T;
  Xkstaklo     -= 20+T;
}
int truckYP(int T) {
  Ykamion1     += 20+T;
  Ykamion2     += 20+T;
  Ykretrovizor += 20+T;
  Yksvjetla1   += 20+T;
  Yksvjetla2   += 20+T;
  Ykstaklo     += 20+T;
}
int truckYM(int T) {
  Ykamion1     -= 20 +T;
  Ykamion2     -= 20 +T;
  Ykretrovizor -= 20 +T;
  Yksvjetla1   -= 20 +T;
  Yksvjetla2   -= 20 +T;
  Ykstaklo     -= 20 +T;
}
int truckYP();
bool inRange(int val, int minimum, int maximum)
{
  return ((minimum <= val) && (val <= maximum));
}
int loading () {
  // Loading screen
  pinMode(PinTipkalo, INPUT_PULLUP);
  tft.begin();
  tft.setRotation(3);
  tft.fillScreen(ILI9341_BLACK);
  tft.drawRoundRect(30, 175, 270, 45, 6, ILI9341_WHITE);
  tft.setTextSize(4);
  tft.setCursor(35, 185);
  tft.setTextColor(ILI9341_YELLOW);
  tft.println("PRESS START");
}
int deathscreen (){
  tft.begin();
  tft.fillScreen(ILI9341_BLACK);
  tft.setTextColor(ILI9341_RED);
  tft.setTextSize(5.5);
  tft.setRotation(3);
  tft.setCursor(25, 110);
  tft.println("GAME OVER");
  tft.setTextSize(3.5);
  tft.setRotation(3);
  tft.setTextColor(ILI9341_YELLOW);
  tft.setCursor(20, 200);
  tft.println(score);
  //lubanja
  tft.fillCircle(160, 40, 30, ILI9341_WHITE);
  tft.fillRect(149, 45, 25, 42, ILI9341_WHITE);
  tft.fillRect(155, 68, 3, 15, ILI9341_BLACK);
  tft.fillRect(165, 68, 3, 15, ILI9341_BLACK);
  tft.setTextSize(5);
  //prvi kriz
  tft.drawLine(141, 36, 158, 52, ILI9341_BLACK);
  tft.drawLine(141, 37, 158, 53, ILI9341_BLACK);
  tft.drawLine(141, 35, 158, 51, ILI9341_BLACK);

  tft.drawLine(141, 52, 158, 36, ILI9341_BLACK);
  tft.drawLine(141, 53, 158, 37, ILI9341_BLACK);
  tft.drawLine(141, 51, 158, 35, ILI9341_BLACK);
  //drugi kriz
  tft.drawLine(162, 36, 179, 52, ILI9341_BLACK);
  tft.drawLine(162, 37, 179, 53, ILI9341_BLACK);
  tft.drawLine(162, 35, 179, 51, ILI9341_BLACK);

  tft.drawLine(162, 52, 179, 36, ILI9341_BLACK);
  tft.drawLine(162, 53, 179, 37, ILI9341_BLACK);
  tft.drawLine(162, 51, 179, 35, ILI9341_BLACK);
}

int truckXPreset(){
  Xkamion1 = 197;
  Ykamion1 = 192+80;
  Xkamion2 = 203;
  Ykamion2 = 178+80;
  Xkretrovizor = 200;
  Ykretrovizor = 184+80;
  Xksvjetla1 = 205;
  Yksvjetla1 = 181+80;
  Xksvjetla2 = 221;
  Yksvjetla2 = 181+80;
  Xkstaklo = 206;
  Ykstaklo = 186+80;

}
void setup() {
  // Loading screen  
  pinMode(PinTipkalo, INPUT_PULLUP);
  Serial.begin (9600);
  tft.begin();
  tft.setRotation(3);
  tft.fillScreen(ILI9341_BLACK);
  tft.drawRoundRect(25, 175, 270, 45, 6, ILI9341_WHITE);
  tft.setTextSize(4);
  tft.setCursor(30, 185);
  tft.setTextColor(ILI9341_YELLOW);
  tft.println("PRESS START");


  //character dinosaur
  tft.setTextSize(5);
  tft.setRotation(3);
  //tijelo i glava
  tft.fillRect(140, 110, 20, 20, ILI9341_GREEN); 
  tft.fillRect(153, 102, 12, 12, ILI9341_GREEN);
  //oko i usta
  tft.fillRect(158, 105, 2, 2, ILI9341_BLACK);
  tft.drawLine(161, 111, 165, 111, ILI9341_BLACK);
  tft.fillRect(160, 110, 1.5, 1, ILI9341_BLACK);
  //kapa
  tft.drawLine(149, 101, 164, 101, ILI9341_RED);
  tft.fillRect(155, 95, 10, 7.5, ILI9341_RED);
  //noge
  tft.fillRect(140, 130, 5, 5, ILI9341_GREEN);
  tft.fillRect(156.5, 130, 5, 5, ILI9341_GREEN);
  //rep
  tft.fillRect(130, 113, 11, 4.5, ILI9341_GREEN);
  //bodlje na leđima
  tft.drawTriangle(146, 109.5, 149, 106.5, 152, 109.5, ILI9341_WHITE);
  tft.drawTriangle(141, 109.5, 144, 106.5, 147, 109.5, ILI9341_WHITE);
  tft.drawTriangle(133, 112, 136, 109, 139, 112, ILI9341_WHITE);

  tft.setTextColor(ILI9341_GREEN);
  tft.setTextSize(4.7);
  tft.setRotation(3);
  tft.setCursor(30, 20);
  tft.println("DINOSAURIDE");
  pinMode(TipkaLR, INPUT_PULLUP);
  pinMode(TipkaUD, INPUT_PULLUP);
}

void loop() {
  // put your main code here, to run repeatedly:
  StisnutMENU = digitalRead(TipkaMENU);
  StanjeTipkala2 = digitalRead(PinTipkalo);
  if (StanjeTipkala2 == LOW && onetime == true) {
    tft.fillScreen(ILI9341_BLACK);
    tft.setTextSize(5);
    tft.setTextColor(ILI9341_WHITE);
    tft.setCursor(20, 110);
    tft.setRotation(3);
    tft.println("LOADING...");
    delay(2000);
    start = true;
    onetime = false;
    dead = false;
  }
  
  if (start == true && dead == false){
    delay (100);  
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
    delay (10);
    road(); 
    truck();
    car();
    car2();
    dino();
    Coin();
    
    // Citanje kontrola
    StanjeTipkala = analogRead(TipkaLR);
    StanjeTipkalaUD = analogRead(TipkaUD);
    //Serial.println (StanjeTipkala);
    //Serial.println  (StanjeTipkalaUD);
    // Hit detection 
    if (inRange(Xglava, Xauto - 8.5, Xauto + 8.5)             && inRange(Yglava, Yauto - 8.5, Yauto + 8.5) 
    || inRange(Xglava, Xretrovizor - 8.5, Xretrovizor + 8.5)  && inRange(Yglava, Yretrovizor - 8.5, Yretrovizor + 8.5) 
    || inRange(Xkapa2, Xauto - 8.5, Xauto + 8.5)              && inRange(Ykapa2, Yauto - 8.5, Yauto + 8.5) 
    || inRange(Xnoga1, Xauto - 8.5, Xauto + 8.5)              && inRange(Ynoga1, Yauto - 8.5, Yauto + 8.5) 
    || inRange(Xnoga2, Xauto - 8.5, Xauto + 8.5)              && inRange(Ynoga2, Yauto - 8.5, Yauto + 8.5) 
    || inRange(Xrep, Xauto - 8.5, Xauto + 8.5)                && inRange(Yrep, Yauto - 8.5, Yauto + 8.5 ) 
    || inRange(Xglava, Xssvjetla1 - 8.5, Xssvjetla1 + 8.5)    && inRange(Yglava, Yssvjetla1 - 8.5, Yssvjetla1 + 8.5) 
    || inRange(Xglava, Xssvjetla2 - 8.5, Xssvjetla2 + 8.5)    && inRange(Yglava, Yssvjetla2 - 8.5, Yssvjetla2+ 8.5) 
    || inRange(Xkapa2, Xssvjetla1 - 8.5, Xssvjetla1 + 8.5)    && inRange(Ykapa2, Yssvjetla1 - 8.5, Yssvjetla1+ 8.5) 
    || inRange(Xrep, Xssvjetla1 - 8.5, Xssvjetla1 + 8.5)      && inRange(Xrep, Yssvjetla1 - 8.5, Yssvjetla1+ 8.5) 
    || inRange(Xrep, Xssvjetla2 - 8.5, Xssvjetla2 + 8.5)      && inRange(Yrep, Yssvjetla2 - 8.5, Yssvjetla2+ 8.5) 
    || inRange(X, Xssvjetla1 - 8.5, Xssvjetla1 + 8.5)         && inRange(Y, Yssvjetla1 - 8.5, Yssvjetla1+ 8.5)
    || inRange(X, Xssvjetla2 - 8.5, Xssvjetla2 + 8.5)         && inRange(Y, Yssvjetla2 - 8.5, Yssvjetla2+ 8.5)
    || inRange(X, Xssvjetla1 - 5, Xssvjetla1 + 5)             && inRange(Y, Yssvjetla1 - 8.5, Yssvjetla1+ 8.5)
    || inRange(X, Xauto - 8.5, Xauto + 8.5)                   && inRange(Y, Yauto - 8.5, Yauto + 8.5 ))   
    {
      Serial.print("hit");
      dead = true;
    }
    // car2
    if (inRange(Xglava, Xauto2 - 8.5, Xauto2 + 8.5)            && inRange(Yglava, Yauto2 - 8.5, Yauto2 + 8.5) 
    || inRange(Xglava, Xretrovizor2 - 8.5, Xretrovizor2 + 8.5) && inRange(Yglava, Yretrovizor2 - 8.5, Yretrovizor2 + 8.5) 
    || inRange(Xkapa2, Xauto2 - 8.5, Xauto + 8.5)              && inRange(Ykapa2, Yauto2 - 8.5, Yauto2 + 8.5) 
    || inRange(Xnoga1, Xauto2 - 8.5, Xauto2 + 8.5)             && inRange(Ynoga1, Yauto2 - 8.5, Yauto2 + 8.5) 
    || inRange(Xnoga2, Xauto2 - 8.5, Xauto2 + 8.5)             && inRange(Ynoga2, Yauto2 - 8.5, Yauto2 + 8.5) 
    || inRange(Xrep, Xauto2 - 8.5, Xauto2 + 8.5)               && inRange(Yrep, Yauto2 - 8.5, Yauto2 + 8.5 ) 
    || inRange(Xglava, Xssvjetla21 - 8.5, Xssvjetla21 + 8.5)   && inRange(Yglava, Yssvjetla21 - 8.5, Yssvjetla21 + 8.5) 
    || inRange(Xglava, Xssvjetla22 - 8.5, Xssvjetla22 + 8.5)   && inRange(Yglava, Yssvjetla22 - 8.5, Yssvjetla22+ 8.5) 
    || inRange(Xkapa2, Xssvjetla21 - 8.5, Xssvjetla21 + 8.5)   && inRange(Ykapa2, Yssvjetla21 - 8.5, Yssvjetla21+ 8.5) 
    || inRange(Xrep, Xssvjetla21 - 8.5, Xssvjetla21 + 8.5)     && inRange(Xrep, Yssvjetla21 - 8.5, Yssvjetla21+ 8.5) 
    || inRange(Xrep, Xssvjetla22 - 8.5, Xssvjetla22 + 8.5)     && inRange(Yrep, Yssvjetla22 - 8.5, Yssvjetla22+ 8.5) 
    || inRange(X, Xssvjetla21 - 8.5, Xssvjetla21 + 8.5)        && inRange(Y, Yssvjetla21 - 8.5, Yssvjetla21+ 8.5)
    || inRange(X, Xssvjetla22 - 8.5, Xssvjetla22 + 8.5)        && inRange(Y, Yssvjetla22 - 8.5, Yssvjetla22+ 8.5)
    || inRange(X, Xssvjetla21 - 8.5, Xssvjetla21 + 8.5)        && inRange(Y, Yssvjetla21 - 8.5, Yssvjetla21+ 8.5)
    || inRange(X, Xauto2 - 8.5, Xauto2 + 8.5)                  && inRange(Y, Yauto2 - 8.5, Yauto2 + 8.5))
    {
      Serial.print("hit");
      deathscreen();
      dead = true;
    }
    if (inRange(Xglava, Xkamion1 - 8.5, Xkamion1 + 8.5)    && inRange(Yglava, Ykamion1 - 8.5, Ykamion1 + 8.5)
    || inRange(Xglava, Xkamion2 - 10, Xkamion2 + 10)       && inRange(Yglava, Ykamion2 - 10, Ykamion2 + 10)  
    || inRange(Xglava, Xkretrovizor - 0, Xkretrovizor + 1) && inRange(Yglava, Ykretrovizor - 0, Ykretrovizor + 1) 
    || inRange(Xkapa2, Xkamion2 - 10, Xkamion2 + 10)       && inRange(Ykapa2, Ykamion2 - 10, Ykamion2 + 10) 
    || inRange(Xnoga1, Xkamion1 - 8.5, Xkamion1 + 8.5)     && inRange(Ynoga1, Ykamion1 - 8.5, Ykamion1 + 8.5)
    || inRange(Xnoga1, Xkamion2 - 10, Xkamion2+ 10)        && inRange(Ynoga1, Ykamion2 - 10, Ykamion2 + 10) 
    || inRange(Xnoga2, Xkamion1 - 8.5, Xkamion1 + 8.5)     && inRange(Ynoga2, Ykamion1 - 8.5, Ykamion1 + 8.5)
    || inRange(Xnoga2, Xkamion2 - 10, Xkamion2+ 10)        && inRange(Ynoga2, Ykamion2 - 10, Ykamion2 + 10)
    || inRange(Xrep, Xkamion1 - 8.5, Xkamion1 + 8.5)       && inRange(Yrep, Ykamion1 - 8.5, Ykamion1 + 8.5 )
    || inRange(Xrep, Xkamion2 - 10, Xkamion2 + 10)         && inRange(Yrep, Ykamion2 - 10, Ykamion2 + 10 ) 
    || inRange(Xglava, Xksvjetla1 - 0, Xksvjetla1 + 1)     && inRange(Yglava, Yksvjetla1 - 0, Yksvjetla1 + 1) 
    || inRange(Xglava, Xksvjetla2 - 0, Xksvjetla2 + 1)     && inRange(Yglava, Yksvjetla2 - 0, Yksvjetla2+ 1) 
    || inRange(Xkapa2, Xkamion1 - 8.5, Xkamion1 + 8.5)     && inRange(Ykapa2, Ykamion1 - 8.5, Ykamion1+ 8.5) 
    || inRange(Xkapa2, Xkamion2 - 10, Xkamion2 + 10)       && inRange(Ykapa2, Ykamion2 - 10, Ykamion2+ 10)
    || inRange(Xrep, Xksvjetla1 - 0, Xksvjetla1 + 1)       && inRange(Xrep, Yksvjetla1 - 1, Yksvjetla1+ 1) 
    || inRange(Xrep, Xksvjetla2 - 0, Xksvjetla2 + 1)       && inRange(Xrep, Yksvjetla2 - 1, Yksvjetla2+ 1)
    || inRange(X, Xksvjetla1 - 0, Xksvjetla2 + 1)          && inRange(Y, Yksvjetla1 - 0, Yksvjetla1+ 1)
    || inRange(X, Xksvjetla2 - 0, Xksvjetla2 + 1)          && inRange(Y, Yksvjetla2 - 0, Yksvjetla2+ 1)
    || inRange(X, Xkamion1 - 8.5, Xkamion1 + 8.5)          && inRange(Y, Ykamion1 - 8.5, Ykamion1+ 8.5)
    || inRange(X, Xkamion2 - 10, Xkamion2 + 10)            && inRange(Y, Ykamion2 - 10, Ykamion2 + 10 ))
    {
      Serial.print("hit");
      deathscreen();
      dead = true;
    }

    // hitbox za kocku
    if (inRange(Xglava, Xkocka2 - 5, Xkocka2 + 5)        && inRange(Yglava, Ykocka2 - 5, Ykocka2 +5 )
    ||  inRange(Xglava, Xkocka2 - 5, Xkocka2 + 5)        && inRange(Ykocka1, Ykocka2 - 5, Ykocka2 +5 ))
    {
    Serial.print("coin collected");
    score += 1;
    }
    // Ljevo desno kretanje
    if (StanjeTipkala >= 1300 and StanjeTipkala <= 2100){
      carXM(0);
      car2XM(0);
      truckXM(0);
      RoadXM();
      CoinX(0);
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
    car2YP(-15);
    truckYM(-15);

    if (Xssvjetla2 <= -60){
      carXPReset();       
    } else if (Yssvjetla2 <= -1){
      carYP(270);
    }
    
    if (Xssvjetla21 <= -20){
      car2XPReset(); 
      car2YP(-40);    
    } else if (Yssvjetla21 >= 250){
      car2YP(-320);
    }
    if (Xksvjetla2 <= -60){
      truckXPreset();       
    } else if (Yksvjetla2 <= -80){
      truckYP(280);
    }
    if (Xkocka2 <= -80){
      CoinRESET();       
    }
    if (Xcesta2 <= -80){
      RoadReset();
    }    
  if (StisnutMENU == LOW){
      start = false;
      onetime = true;
      loading();
      }
  if (dead == true && eintime == true){
    tft.fillScreen(ILI9341_BLACK);
    delay (10);
    deathscreen();
    eintime = false;
  }  
  if (dead == true){
    Serial.print(score);
    onetime = true;
    eintime = true;
    start = false;
    RoadReset();
    carXPReset();
    car2XPReset();
    truckXPreset();
    CoinRESET();
   }  
  } 
 }
