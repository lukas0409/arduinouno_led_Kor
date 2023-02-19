// 2023.01.21 최초생성
// 2023.02.19 1차수정

// 아두이노 우노 LED 깜빡이기
// 기초, for문 활용

void setup() {
  for(int i=0; i < 4; i++) {
   pinMode(i, OUTPUT); // 사용하는 모든 핀 핀모드 출력모드
  }
}

// 반복
void loop() {
  for(int i=0; i < 4; i++)
  {
    // 1번 LED
    digitalWrite(i, HIGH); // 1번 LED 켜기
    delay(500);            // 1초 대기
    digitalWrite(i, LOW);  // 1번 LED 끄기
    delay(500);            // 1초 대기

  }
}
