const int MELODY[] = {
    262,     // 도 주파수
    294,     // 레 주파수
    330,     // 미 주파수
    349,     // 파 주파수
    392,     // 솔 주파수
    440,     // 라 주파수
    494,     // 시 주파수
    529,     // (높은) 도 주파수
};

const int HIGH_MELODY[] = {
    523,
    587,
    659,
    698,
    784,
    880,
    987,
    1047,
};

// add comment


const int Length_C = 1;
const int Length_CD = 88.375;	// 도-레 값
const int Length_DE = 175.75;	// 레-미 값
const int Length_EF = 263.125;	// 미-파 값
const int Length_FG = 350.5;	// 파-솔 값
const int Length_GA = 437.875;	// 솔-라 값
const int Length_AB = 525.25;	// 라-시 값
const int Length_BC = 612.625;	// 시-도 값
const int Length_HC = 700;		// 높은 도 값

const int PIEZO_PIN = 7;    // 피에조 핀
const int FLEX_PIN = A0;    // 휨 센서 핀
const int FORCE_PIN = A1;   // 압력 센서 핀

void setup()
{
    Serial.begin(9600);	//시리얼 모니터 초기화
}

void loop()
{
    int Flex_Value = analogRead(FLEX_PIN);		// 아날로그 A0에서 읽은 값을 Flex_Value에 저장
    int Force_Value = analogRead(FORCE_PIN);	// 아날로그 A1에서 읽은 값을 Forve_Value에 저장
  
  	Serial.print("Flex_Value = ");
  	Serial.print(Flex_Value);
  	Serial.print("  Force_Value = ");
  	Serial.println(Force_Value);

    if ((Force_Value > 0) && (Force_Value < 700))
    {
        if ((Flex_Value >= Length_C) && (Flex_Value < Length_CD))
        {
            tone(PIEZO_PIN, MELODY[0], 100); delay(100);
        }
        else if ((Flex_Value >= Length_CD) && (Flex_Value < Length_DE))
        {
            tone(PIEZO_PIN, MELODY[1], 100); delay(100);
        }
        else if ((Flex_Value >= Length_DE) && (Flex_Value < Length_EF))
        {
            tone(PIEZO_PIN, MELODY[2], 100); delay(100);
        }
        else if ((Flex_Value >= Length_EF) && (Flex_Value < Length_FG))
        {
            tone(PIEZO_PIN, MELODY[3], 100); delay(100);
        }
        else if ((Flex_Value >= Length_FG) && (Flex_Value < Length_GA))
        {
            tone(PIEZO_PIN, MELODY[4], 100); delay(100);
        }
        else if ((Flex_Value >= Length_GA) && (Flex_Value < Length_AB))
        {
            tone(PIEZO_PIN, MELODY[5], 100); delay(100);
        }
        else if ((Flex_Value >= Length_AB) && (Flex_Value < Length_BC))
        {
            tone(PIEZO_PIN, MELODY[6], 100); delay(100);
        }
        else if ((Flex_Value >= Length_BC) && (Flex_Value < Length_HC))
        {
            tone(PIEZO_PIN, MELODY[7], 100); delay(100);
        }
    }
    if (Force_Value >= 700)
    {
        if ((Flex_Value >= Length_C) && (Flex_Value < Length_CD))
        {
            tone(PIEZO_PIN, HIGH_MELODY[0], 100); delay(100);
        }
        else if ((Flex_Value >= Length_CD) && (Flex_Value < Length_DE))
        {
            tone(PIEZO_PIN, HIGH_MELODY[1], 100); delay(100);
        }
        else if ((Flex_Value >= Length_DE) && (Flex_Value < Length_EF))
        {
            tone(PIEZO_PIN, HIGH_MELODY[2], 100); delay(100);
        }
        else if ((Flex_Value >= Length_EF) && (Flex_Value < Length_FG))
        {
            tone(PIEZO_PIN, HIGH_MELODY[3], 100); delay(100);
        }
        else if ((Flex_Value >= Length_FG) && (Flex_Value < Length_GA))
        {
            tone(PIEZO_PIN, HIGH_MELODY[4], 100); delay(100);
        }
        else if ((Flex_Value >= Length_GA) && (Flex_Value < Length_AB))
        {
            tone(PIEZO_PIN, HIGH_MELODY[5], 100); delay(100);
        }
        else if ((Flex_Value >= Length_AB) && (Flex_Value < Length_BC))
        {
            tone(PIEZO_PIN, HIGH_MELODY[6], 100); delay(100);
        }
        else if ((Flex_Value >= Length_BC) && (Flex_Value < Length_HC))
        {
            tone(PIEZO_PIN, HIGH_MELODY[7], 100); delay(100);
        }
    }
}
