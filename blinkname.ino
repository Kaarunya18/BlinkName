
const pin_t MY_LED = D7;
int buttonPin = D4;
SYSTEM_THREAD(ENABLED);

// The setup() method is called once when the device boots.
void setup()
{
	pinMode(MY_LED, OUTPUT);
	pinMode( buttonPin , INPUT_PULLUP);
	
    SYSTEM_THREAD(ENABLED);
}


void loop()
{
    int buttonState = digitalRead( buttonPin );
    
    if( buttonState == LOW )
    {
	//using long blink (3s)for line and short blink (1s) for dot 
	//Blink LED for my first name KAARUNYA 
	
	//K
	digitalWrite(MY_LED, HIGH);
	delay(3000);
	digitalWrite(MY_LED, LOW);
	delay(1000); 
	
	digitalWrite(MY_LED, HIGH);
	delay(1000);
	digitalWrite(MY_LED, LOW);
	delay(1000); 
	
	digitalWrite(MY_LED, HIGH);
	delay(3000);
	digitalWrite(MY_LED, LOW);
	delay(1000); 
	
	//A
    digitalWrite(MY_LED, HIGH);
	delay(1000);
	digitalWrite(MY_LED, LOW);
	delay(1000); 
	
	digitalWrite(MY_LED, HIGH);
	delay(3000);
	digitalWrite(MY_LED, LOW);
	delay(1000); 

    //A
    digitalWrite(MY_LED, HIGH);
	delay(1000);
	digitalWrite(MY_LED, LOW);
	delay(1000); 
	
	digitalWrite(MY_LED, HIGH);
	delay(3000);
	digitalWrite(MY_LED, LOW);
	delay(1000); 
	
	//R
	digitalWrite(MY_LED, HIGH);
	delay(1000);
	digitalWrite(MY_LED, LOW);
	delay(1000); 
	
	digitalWrite(MY_LED, HIGH);
	delay(3000);
	digitalWrite(MY_LED, LOW);
	delay(1000); 
	
	digitalWrite(MY_LED, HIGH);
	delay(1000);
	digitalWrite(MY_LED, LOW);
	delay(1000); 
	
	//U
	digitalWrite(MY_LED, HIGH);
	delay(1000);
	digitalWrite(MY_LED, LOW);
	delay(1000);
	
	digitalWrite(MY_LED, HIGH);
	delay(1000);
	digitalWrite(MY_LED, LOW);
	delay(1000);
	
	digitalWrite(MY_LED, HIGH);
	delay(3000);
	digitalWrite(MY_LED, LOW);
	delay(1000); 
	
	//N
	digitalWrite(MY_LED, HIGH);
	delay(3000);
	digitalWrite(MY_LED, LOW);
	delay(1000); 

    digitalWrite(MY_LED, HIGH);
	delay(1000);
	digitalWrite(MY_LED, LOW);
	delay(1000); 
	
	//Y
	digitalWrite(MY_LED, HIGH);
	delay(3000);
	digitalWrite(MY_LED, LOW);
	delay(1000); 
	
	digitalWrite(MY_LED, HIGH);
	delay(1000);
	digitalWrite(MY_LED, LOW);
	delay(1000); 
	
	digitalWrite(MY_LED, HIGH);
	delay(3000);
	digitalWrite(MY_LED, LOW);
	delay(1000);
	
	digitalWrite(MY_LED, HIGH);
	delay(3000);
	digitalWrite(MY_LED, LOW);
	delay(1000);
	
	//A
	digitalWrite(MY_LED, HIGH);
	delay(1000);
	digitalWrite(MY_LED, LOW);
	delay(1000);
	
	digitalWrite(MY_LED, HIGH);
	delay(3000);
	digitalWrite(MY_LED, LOW);
	delay(1000);
	
    }else {
        digitalWrite( MY_LED, LOW);

  }


}

    