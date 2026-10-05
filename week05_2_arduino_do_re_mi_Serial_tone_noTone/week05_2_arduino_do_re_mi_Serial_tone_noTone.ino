// week05_2_arduino_do_re_mi_Serial_tone_noTone
// 修改自 week05_1__arduino_do_re_ni_Serial
void setup() {
  Serial.begin(9600); // USB Serial 開始傳輸, 速度 9600 bps
  tone(8, 523, 100); delay(200);
  tone(8, 587, 100); delay(200);
  tone(8, 659, 100); delay(200);
  tone(8, 587, 100); delay(200); 
  tone(8, 523, 100); delay(200);
}
char c = '0'; // 不要發聲音 1:DO 2.Re 3.Mi
void loop() {
  if (Serial.available()){ // 如果 USB Serial 有收到資料
    c = Serial.read(); // 就讀進來 (不要宣告變數，直接寫 c)
    }
    if (c=='0') noTone(8); // 不要發聲音
    if (c=='1') tone(8, 523); // Do 1秒 不要限定 100ns
    if (c=='2') tone(8, 587); // Re 1秒
    if (c=='3') tone(8, 659); // Mi 1秒
}
