float timing = 0.0; // กำหนดค่าเริ่มต้นแกน x มีค่า 0.0 โดยแกน x คือ เวลา

void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.printf("Sin:%f , Cos:%f , X-Axis:%d\n",sin(timing), cos(timing+1.5), 0); // แสดงกราฟ Sin / Cos ที่เลื่อนไปด้านซ้าย 1.5 หน่วย / เส้นแกน y = 0
  timing = timing + 0.25 ; // เพิ่มหน่วยทีละ 0.25 เพื่อความละเอียดของกราฟ หากค่าน้อยจะยิ่งละเอียด
  delay(100); // ชะลอหรือหยุดการทำงาน 100 millisecond 
}