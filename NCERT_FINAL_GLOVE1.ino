const int FLEX_PIN = A0;
const int FLEX_PIN1 = A1;
const int FLEX_PIN2 = A2;
const int FLEX_PIN3 = A3;
const int FLEX_PIN4 = A10;

int main() {
  int currvalue[] = {0, 0, 0, 0, 0};
  int prevvalue[5];
}

const float VCC = 4.98;
const float R_DIV = 47500.0;


const float STRAIGHT_RESISTANCE = 37300.0;
const float BEND_RESISTANCE = 90000.0;

void flexdeclaration() {
  Serial.begin(6400);
  pinMode(FLEX_PIN, INPUT);
  pinMode(FLEX_PIN1, INPUT);
  pinMode(FLEX_PIN2, INPUT);
  pinMode(FLEX_PIN3, INPUT);
  pinMode(FLEX_PIN4, INPUT);
}


void getFlexReading() {
  int flex1 = analogRead(FLEX_PIN);
  int flex2 = analogRead(FLEX_PIN1);
  int flex3 = analogRead(FLEX_PIN2);
  int flex4 = analogRead(FLEX_PIN3);
  int flex5 = analogRead(FLEX_PIN4);


  int value1 = map(flex1, 500, 875, 0, 80);
  int value2 = map(flex2, 500, 875, 0, 80);
  int value3 = map(flex3, 500, 875, 0, 80);
  int value4 = map(flex4, 500, 875, 0, 80);
  int value5 = map(flex5, 500, 875, 0, 80);
}



void loop()
{

  int flexADC = analogRead(FLEX_PIN);
  float flexV = flexADC * VCC / 1023.0;
  float flexR = R_DIV * (VCC / flexV - 1.0);
  Serial.println("Resistance: " + String(flexR) + " ohms");


  float angle = map(flexR, STRAIGHT_RESISTANCE, BEND_RESISTANCE,
                    0, 90.0);
  Serial.println("Bend: " + String(angle) + " degrees");
  Serial.println();

  delay(1500);




  int flexADC1 = analogRead(FLEX_PIN1);
  float flexV1 = flexADC1 * VCC / 1023.0;
  float flexR1 = R_DIV * (VCC / flexV1 - 1.0);
  Serial.println("Resistance: " + String(flexR1) + " ohms");


  float angle1 = map(flexR1, STRAIGHT_RESISTANCE, BEND_RESISTANCE,
                     0, 90.0);
  Serial.println("Bend: " + String(angle1) + " degrees");
  Serial.println();

  delay(1500);




  int flexADC2 = analogRead(FLEX_PIN2);
  float flexV2 = flexADC2 * VCC / 1023.0;
  float flexR2 = R_DIV * (VCC / flexV2 - 1.0);
  Serial.println("Resistance: " + String(flexR2) + " ohms");


  float angle2 = map(flexR2, STRAIGHT_RESISTANCE, BEND_RESISTANCE,
                     0, 90.0);
  Serial.println("Bend: " + String(angle2) + " degrees");
  Serial.println();

  delay(1500);





  int flexADC3 = analogRead(FLEX_PIN3);
  float flexV3 = flexADC3 * VCC / 1023.0;
  float flexR3 = R_DIV * (VCC / flexV3 - 1.0);
  Serial.println("Resistance: " + String(flexR3) + " ohms");


  float angle3 = map(flexR3, STRAIGHT_RESISTANCE, BEND_RESISTANCE,
                     0, 90.0);
  Serial.println("Bend: " + String(angle3) + " degrees");
  Serial.println();

  delay(1500);





  int flexADC4 = analogRead(FLEX_PIN4);
  float flexV4 = flexADC * VCC / 1023.0;
  float flexR4 = R_DIV * (VCC / flexV4 - 1.0);
  Serial.println("Resistance: " + String(flexR4) + " ohms");


  float angle4 = map(flexR4, STRAIGHT_RESISTANCE, BEND_RESISTANCE,
                     0, 90.0);
  Serial.println("Bend: " + String(angle4) + " degrees");
  Serial.println();

  delay(1500);

}
