// week02_5_processing_do_re_mi_import_serial_myPort_void_keyPressed_write
// 我想要把 Arduino 跟 Processing 結合
// 在 Processing 按下 key 1 2 3 對應 Arduino 的 Do Re Mi 使用 USB Serial
// 因為只有1條USB Serial 線，要記得按下「方塊」停止佔用執行
import processing.serial.*; // 使用 USB Serial 外掛
Serial myPort; 
void setup() {
  size(300,200);
  myPort = new Serial(this, "COM3", 9600);
}
void draw() {
  
}
void keyPressed() {
  if (key=='1') myPort.write('1');
  if (key=='2') myPort.write('2');
  if (key=='3') myPort.write('3');
}
