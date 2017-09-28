// demo of Grove - Starter V2.0
// Loovee  2013-3-10
// as the topic, we will use Grove - Led to make a breath light
// Grove - LED connect to D3
// the following pin which support PWM can be used:
// 3, 5, 6, 9, 10, 11


// demo of Grove - Starter V2.0
// Loovee  2013-3-10
// this demo will show you how to use Grove - Button to control a LED
// when the button was pressed, the led will on 
// otherwise led off
// Grove - Button connect to D3
// Grove - LED connect to D7



const int pinButton = 3;                        // pin of button define here
const int pinLed    = 5;                        // pin of led define here


void setup()
{
    pinMode(pinLed, OUTPUT);                    // set led OUTPUT
    pinMode(pinButton, INPUT);                  // set button INPUT

    Serial.begin(9600);                // Begins the code to print communicatin betwene the two
}

void loop()
{
    Serial.print("First State:");     //Prints the serial
    Serial.println(digitalRead(pinButton));     //reads the read even before it starts

    if(digitalRead(pinButton))                     // when button is pressed
        {
            digitalWrite(pinLed, HIGH);             // led on
    
                for(int i=0; i<256; i++)
        {

            Serial.print("Value of i:");
            Serial.println(i);
          
            analogWrite(pinLed, i);
            delay(5);                               // change delay time can breath faster or slower
        }
        delay(100);
        
        for(int i=254; i>=0; i--)
        {
            analogWrite(pinLed, i);
            delay(5);                               // change delay time can breath faster or slower
        }
        delay(500);
          
        }
    else
    {
        digitalWrite(pinLed, LOW);
        
    }
    delay(100);
    
}
