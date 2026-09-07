// week01_2_void_draw_if_mousePressed_background
// 想要多點互動 (只是畫圖，有點無聊)
void setup() {
  size(500, 500);
}
void draw() {
  if (mousePressed) background(255, 0, 0); // 紅色
  else background(0, 255, 0); // 否則 綠色
}
