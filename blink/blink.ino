void setup()
{
	Serial.begin(115200);
	pinMode(2, OUTPUT);
}

void loop()
{
	digitalWrite(2, HIGH);
	vTaskDelay(3000);
	digitalWrite(2, LOW);
	vTaskDelay(3000);
}

