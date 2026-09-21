// week03_1_arduino_button_2_pinMode_digitalRead_digitalRead_digitalWrite
// 迎新宿營，會用LED發亮 光舞，使用pin腳 
void setup() {
  pinMode(2, INPUT_PULLUP); // 第2是按鈕，沒按時拉高
  for (int i=3; i<=13; i++) pinMode(i, OUTPUT);
}

void loop() {
  if (digitalRead(2)==HIGH) {
    for (int i=3; i<=7; i++) digitalWrite(i, HIGH);
    for (int i=8; i<=13; i++) digitalWrite(i, LOW);
  } else {
    for (int i=3; i<=7; i++) digitalWrite(i, LOW);
    for (int i=8; i<=13; i++) digitalWrite(i, HIGH);
  }
}
