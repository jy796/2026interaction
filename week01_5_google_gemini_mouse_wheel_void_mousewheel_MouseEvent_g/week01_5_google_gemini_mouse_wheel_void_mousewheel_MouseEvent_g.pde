//  week01_5_google_gemini_mouse_wheel_void_mousewheel_MouseEvent_getCount
// google gemini: Processing 怎麼用到 mouse wheel
float circleSize = 50; // 宣告全城變數控制大小

void setup() {
  size(400, 400);
}

void draw() {
  background(220);
  
  ellipse(width/2, height/2, circleSize, circleSize);
}

// 偵測滑鼠滾輪的內建函式
void mouseWheel(MouseEvent event) {
  float e = event.getCount();
  
  // 根據滾輪方向調整圓形大小
  circleSize += e * 5; 
  
  // 限制圓形大小的最小值與最大值，避免變成負數或無限大
  circleSize = constrain(circleSize, 10, 300);
}
