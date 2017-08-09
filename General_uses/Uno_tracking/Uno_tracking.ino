//Controlled GPIO Pins
const byte PTB5     = 2;
const byte CHARGES_0     = 3;
const byte Reserve_4     = 4;
const byte Reserve_5     = 5;
const byte Reserve_6     = 6;

const byte Reserve_7     = 7;
const byte Reserve_8     = 8;
const byte Reserve_9     = 9;
const byte Reserve_10     = 10;
const byte Reserve_11     = 11;

const byte Reserve_12     = 12;
const byte Reserve_13     = 13;

//Baud rate
#define BAUD_RATE 115200

//ASCII code
#define CHARGES_0_HIGH   116
#define CHARGES_0_LOW    34

void setup()
{
  Serial.begin(BAUD_RATE);
  pinMode(PTB5, INPUT);
  
  pinMode(CHARGES_0, OUTPUT);
  digitalWrite(CHARGES_0, LOW);
  
  Serial.println("Arduino start receive PC command!");
}

unsigned int PTB5_NEW;

unsigned int PTB5_OLD;


void loop()
{ 
  PTB5_NEW = digitalRead(PTB5);


  if (PTB5_NEW != PTB5_OLD)
  {
    if (PTB5_NEW == HIGH)
    {
      Serial.println("PTB5~~~~~~~~~~~~~~~~~~ HIGH");
    }
    else
    {
      Serial.println("PTB5~~~~~~~~~~~~~~~~~~ LOW");
    }
    PTB5_OLD = PTB5_NEW;
  }
  
  if(Serial.available())
  {
    unsigned int val = Serial.read();
    switch(val)
    {
      case CHARGES_0_HIGH:
        digitalWrite(CHARGES_0,HIGH);
        Serial.println("CHARGES_0 HIGH");
        delay(200);//100 = 延遲0.1秒
        digitalWrite(CHARGES_0,LOW);
        Serial.println("CHARGES_0 LOW");
        break;
      //case CHARGES_0_LOW:
        //digitalWrite(CHARGES_0,LOW);
        //Serial.println("CHARGES_0 LOW");
        //break;

      default:
        Serial.println("No this case");
        break;
    }
  }
}
