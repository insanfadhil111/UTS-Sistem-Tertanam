#include <LiquidCrystal.h>
#include <Servo.h>

const int pin_tombol1 = 2;
const int pin_tombol2 = 3;
const int ldrPin = A0;
int tombol1 = 0;
int tombol2 = 0;
int servo_barang_pin = 5;
int servo_uang_pin = 6;
Servo servo_barang;
Servo servo_uang;
LiquidCrystal lcd (7, 8, 9, 10, 11, 12);

void setup() {
  lcd.begin(16, 2);
    pinMode(pin_tombol1, INPUT);
  pinMode(pin_tombol2, INPUT);
    pinMode(ldrPin, INPUT);
    servo_barang.attach(servo_barang_pin);
  servo_uang.attach(servo_uang_pin);
}

void loop() {
  servo_uang.write(0);
  servo_barang.write(0);
  lcd.setCursor(0, 0);
  lcd.print("SELAMAT DATANG^^         ");
  lcd.setCursor(0, 1);
  lcd.print("DI VENDING MESIN");
  delay(3000);
  
  lcd.setCursor(0, 0);
  lcd.print("DIBUAT OLEH :         ");
  lcd.setCursor(0, 1);
  lcd.print("I0721034_INSAN^^");
  delay(500);
  lcd.setCursor(0, 1);
  lcd.print("                 ");
  delay(500);
  lcd.setCursor(0, 1);
  lcd.print("I0721034_INSAN^^");
  delay(500);
  lcd.setCursor(0, 1);
  lcd.print("                  ");
  delay(500);
  lcd.setCursor(0, 1);
  lcd.print("I0721034_INSAN^^");
  delay(500);
  lcd.setCursor(0, 1);
  lcd.print("                  ");
  delay(500);
  lcd.setCursor(0, 1);
  lcd.print("I0721034_INSAN^^");
  delay(500);
  lcd.setCursor(0, 1);
  lcd.print("                  ");
  delay(500);
  lcd.setCursor(0, 1);
  lcd.print("I0721034_INSAN^^");
  delay(500);
  lcd.setCursor(0, 1);
  lcd.print("                  ");
  delay(500);
  baca_uang();
}

void baca_uang(){
  int ldrStatus = analogRead(ldrPin);
  if(ldrStatus <= 100) {
    lcd.setCursor(0, 0);
    lcd.print("DETEKSI UANG    ");
    lcd.setCursor(0, 1);
    lcd.print("RP 2000,-       ");
    delay(1000);
    servo_uang.write(180);
    delay(3000);
    servo_uang.write(0);
    delay(3000);
    tombol_harga1();
  }
  if(ldrStatus >= 600) {
    lcd.setCursor(0, 0);
    lcd.print("DETEKSI UANG    ");
    lcd.setCursor(0, 1);
    lcd.print("RP 5000,-       ");
    delay(1000);
    servo_uang.write(180);
    delay(3000);
    servo_uang.write(0);
    delay(3000);
    tombol_harga2();
  }
  
  else {
    lcd.setCursor(0, 0);
    lcd.print("MASUKKAN UANG     ");
    lcd.setCursor(0, 1);
    lcd.print("ANDA              ");
    delay(1000);
  }
  baca_uang();
}

void tombol_harga1(){
  tombol1 = digitalRead(pin_tombol1);
  tombol2 = digitalRead(pin_tombol2);
  if(tombol1 == HIGH) {
    lcd.setCursor(0, 0);
    lcd.print("SILAHKAN AMBIL   ");
    lcd.setCursor(0, 1);
    lcd.print("AQUA ANDA       ");
    delay(1000);
    servo_barang.write(180);
    delay(3000);
    servo_barang.write(0);
    delay(3000);
    lcd.setCursor(0, 0);
    lcd.print("TERIMA KASIH !!!   ");
    lcd.setCursor(0, 1);
    lcd.print("SAMPAI JUMPA       ");
    delay(2000);
    baca_uang();
  }
  if(tombol2 == HIGH) {
    lcd.setCursor(0, 0);
    lcd.print("SILAHKAN AMBIL   ");
    lcd.setCursor(0, 1);
    lcd.print("LE MINERAL ANDA       ");
    delay(1000);
    servo_barang.write(180);
    delay(3000);
    servo_barang.write(0);
    delay(3000);
    lcd.setCursor(0, 0);
    lcd.print("TERIMA KASIH !!!   ");
    lcd.setCursor(0, 1);
    lcd.print("SAMPAI JUMPA       ");
    delay(2000);
    baca_uang();
  }
  
  if(tombol1 == LOW){
    lcd.setCursor(0, 0);
    lcd.print("SILAHKAN PILIH :  ");
    lcd.setCursor(0, 1);
    lcd.print("1) AQUA            ");
    delay(1000);
  }
  if(tombol2 == LOW){
    lcd.setCursor(0, 0);
    lcd.print("SILAHKAN PILIH :   ");
    lcd.setCursor(0, 1);
    lcd.print("2) LE MINERAL           ");
    delay(1000);
  }
  tombol_harga1();
}

void tombol_harga2(){
  tombol1 = digitalRead(pin_tombol1);
  tombol2 = digitalRead(pin_tombol2);
  if(tombol1 == HIGH) {
    lcd.setCursor(0, 0);
    lcd.print("SILAHKAN AMBIL   ");
    lcd.setCursor(0, 1);
    lcd.print("FANTA ANDA       ");
    delay(1000);
    servo_barang.write(180);
    delay(3000);
    servo_barang.write(0);
    delay(3000);
    lcd.setCursor(0, 0);
    lcd.print("TERIMA KASIH !!!   ");
    lcd.setCursor(0, 1);
    lcd.print("SAMPAI JUMPA       ");
    delay(2000);
    baca_uang();
  }
  if(tombol2 == HIGH) {
    lcd.setCursor(0, 0);
    lcd.print("SILAHKAN AMBIL   ");
    lcd.setCursor(0, 1);
    lcd.print("SPRITE ANDA       ");
    delay(1000);
    servo_barang.write(180);
    delay(3000);
    servo_barang.write(0);
    delay(3000);
    lcd.setCursor(0, 0);
    lcd.print("TERIMA KASIH !!!   ");
    lcd.setCursor(0, 1);
    lcd.print("SAMPAI JUMPA       ");
    delay(2000);
    baca_uang();
  }
  
  if(tombol1 == LOW){
    lcd.setCursor(0, 0);
    lcd.print("SILAHKAN PILIH :  ");
    lcd.setCursor(0, 1);
    lcd.print("1) FANTA            ");
    delay(1000);
  }
  if(tombol2 == LOW){
    lcd.setCursor(0, 0);
    lcd.print("SILAHKAN PILIH :   ");
    lcd.setCursor(0, 1);
    lcd.print("2) SPRITE           ");
    delay(1000);
  }
  tombol_harga2();
}
