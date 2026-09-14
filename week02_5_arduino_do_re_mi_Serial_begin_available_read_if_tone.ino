// week02_5_arduino_do_re_mi_Serial_begin_available_read_if_tone
// google 我想要把 Arduino 跟Processing 結合
// 在 Processing 按下 key 1 2 3 對應 Arduino 的 Do Re Mi 使用 USB Serial
// 寫完程式，用 工具Tool-序列阜監控式窗SerialMonior來傳送 1 2 3
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  
}

void loop() {
  if (Serial.available()){
    char c = Serial.read();
    tone(8, 523, 100); // Do 1秒
    tone(8, 523, 100); // Re 1秒
    tone(8, 659, 100); // Mi 1秒
  }
}
