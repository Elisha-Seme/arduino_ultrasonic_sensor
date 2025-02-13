#define TRIG_PIN 9
#define ECHO_PIN 10
#define LED_PIN 3  // Green LED
#define BUZZER_PIN 4
#define RED_LED_PIN 2  // Red LED on Pin 2

void setup() {
    pinMode(TRIG_PIN, OUTPUT);
    pinMode(ECHO_PIN, INPUT);
    pinMode(LED_PIN, OUTPUT);
    pinMode(BUZZER_PIN, OUTPUT);
    pinMode(RED_LED_PIN, OUTPUT);
    Serial.begin(9600);
}

void loop() {
    // Send pulse
    digitalWrite(TRIG_PIN, LOW);
    delayMicroseconds(2);
    digitalWrite(TRIG_PIN, HIGH);
    delayMicroseconds(10);
    digitalWrite(TRIG_PIN, LOW);
    
    // Measure distance
    long duration = pulseIn(ECHO_PIN, HIGH);
    int distance = duration * 0.034 / 2;  

    Serial.print("Distance: ");
    Serial.print(distance);
    Serial.println(" cm");

    if (distance > 0 && distance < 20) {  
        digitalWrite(LED_PIN, HIGH);  // Green LED ON
        digitalWrite(BUZZER_PIN, HIGH);  
    } else {
        digitalWrite(LED_PIN, LOW);
        digitalWrite(BUZZER_PIN, LOW);
    }

    if (distance > 0 && distance < 10) {  
        digitalWrite(RED_LED_PIN, HIGH);  // Red LED ON if closer than 10 cm
    } else {
        digitalWrite(RED_LED_PIN, LOW);  
    }

    delay(500);
}
