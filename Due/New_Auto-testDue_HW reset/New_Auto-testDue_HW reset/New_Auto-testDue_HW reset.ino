//Controlled GPIO Pins
const byte IO_0     = 26;
const byte IO_1     = 32;
const byte IO_2     = 38;
const byte IO_3     = 44;
const byte IO_4     = 50;

const byte CHARGES_0     = 19;
const byte CHARGES_1     = 18;
const byte CHARGES_2     = 17;
const byte CHARGES_3     = 16;
const byte CHARGES_4     = 15;

const byte WCA_CHARGES_0     = 7;
const byte WCA_CHARGES_1     = 8;
const byte WCA_CHARGES_2     = 9;
const byte WCA_CHARGES_3     = 10;
const byte WCA_CHARGES_4     = 11;

const byte LOCK_0   = 22;
const byte UNLOCK_0 = 23;
const byte TRUNK_0  = 25;
const byte PANIC_0  = 24;
const byte RCP_0    = 27;


const byte LOCK_1   = 28;
const byte UNLOCK_1 = 29;
const byte TRUNK_1  = 31;
const byte PANIC_1  = 30;
const byte RCP_1    = 33;


const byte LOCK_2   = 34;
const byte UNLOCK_2 = 35;
const byte TRUNK_2  = 37;
const byte PANIC_2  = 36;
const byte RCP_2    = 39;

const byte LOCK_3   = 40;
const byte UNLOCK_3 = 41;
const byte TRUNK_3  = 43;
const byte PANIC_3  = 42;
const byte RCP_3    = 45;

const byte LOCK_4   = 46;
const byte UNLOCK_4 = 47;
const byte TRUNK_4  = 49;
const byte PANIC_4  = 48;
const byte RCP_4    = 51;

//Baud rate
#define BAUD_RATE 115200

//ASCII code
#define CHARGES_0_HIGH   116
#define CHARGES_0_LOW    34
#define WCA_CHARGES_0_HIGH   35
#define WCA_CHARGES_0_LOW    36
#define LOCK_0_HIGH   37
#define LOCK_0_LOW    38
#define UNLOCK_0_HIGH 113
#define UNLOCK_0_LOW  40
#define TRUNK_0_HIGH  41
#define TRUNK_0_LOW   42
#define PANIC_0_HIGH  43
#define PANIC_0_LOW   44
#define IO_0_HIGH     45
#define IO_0_LOW      46
#define RCP_0_HIGH    47
#define RCP_0_LOW     48

#define CHARGES_1_HIGH   49
#define CHARGES_1_LOW    50
#define WCA_CHARGES_1_HIGH   51
#define WCA_CHARGES_1_LOW    52
#define LOCK_1_HIGH   53
#define LOCK_1_LOW    54
#define UNLOCK_1_HIGH 55
#define UNLOCK_1_LOW  56
#define TRUNK_1_HIGH  57
#define TRUNK_1_LOW   58
#define PANIC_1_HIGH  59
#define PANIC_1_LOW   60
#define IO_1_HIGH     61
#define IO_1_LOW      62
#define RCP_1_HIGH    63
#define RCP_1_LOW     64

#define CHARGES_2_HIGH   65
#define CHARGES_2_LOW    66
#define WCA_CHARGES_2_HIGH   67
#define WCA_CHARGES_2_LOW    68
#define LOCK_2_HIGH   69
#define LOCK_2_LOW    70
#define UNLOCK_2_HIGH 71
#define UNLOCK_2_LOW  72
#define TRUNK_2_HIGH  73
#define TRUNK_2_LOW   74
#define PANIC_2_HIGH  75
#define PANIC_2_LOW   76
#define IO_2_HIGH     77
#define IO_2_LOW      78
#define RCP_2_HIGH    79
#define RCP_2_LOW     80

#define CHARGES_3_HIGH   81
#define CHARGES_3_LOW    82
#define WCA_CHARGES_3_HIGH   83
#define WCA_CHARGES_3_LOW    84
#define LOCK_3_HIGH   85
#define LOCK_3_LOW    86
#define UNLOCK_3_HIGH 87
#define UNLOCK_3_LOW  88
#define TRUNK_3_HIGH  89
#define TRUNK_3_LOW   90
#define PANIC_3_HIGH  91
#define PANIC_3_LOW   114
#define IO_3_HIGH     93
#define IO_3_LOW      94
#define RCP_3_HIGH    95
#define RCP_3_LOW     115

#define CHARGES_4_HIGH   97
#define CHARGES_4_LOW    98
#define WCA_CHARGES_4_HIGH   99
#define WCA_CHARGES_4_LOW    100
#define LOCK_4_HIGH   101
#define LOCK_4_LOW    102
#define UNLOCK_4_HIGH 103
#define UNLOCK_4_LOW  104
#define TRUNK_4_HIGH  105
#define TRUNK_4_LOW   106
#define PANIC_4_HIGH  107
#define PANIC_4_LOW   108
#define IO_4_HIGH     109
#define IO_4_LOW      110
#define RCP_4_HIGH    111
#define RCP_4_LOW     112

#define HW_RESET_0_LOW     117
#define HW_RESET_0_HIGH    122
#define HW_RESET_1_LOW     118
#define HW_RESET_1_HIGH    123
#define HW_RESET_2_LOW     119
#define HW_RESET_2_HIGH    124
#define HW_RESET_3_LOW     120
#define HW_RESET_3_HIGH    125
#define HW_RESET_4_LOW     121
#define HW_RESET_4_HIGH    126

void setup()
{
  Serial.begin(BAUD_RATE);
  pinMode(CHARGES_0, OUTPUT);
  digitalWrite(CHARGES_0, LOW);
  pinMode(WCA_CHARGES_0,OUTPUT);
  digitalWrite(WCA_CHARGES_0, HIGH);
  pinMode(LOCK_0  , OUTPUT);
  digitalWrite(LOCK_0, HIGH);
  pinMode(UNLOCK_0, OUTPUT);
  digitalWrite(UNLOCK_0, HIGH);
  pinMode(TRUNK_0 , OUTPUT);
  digitalWrite(TRUNK_0, HIGH);
  pinMode(PANIC_0 , OUTPUT);
  digitalWrite(PANIC_0, HIGH);
  pinMode(IO_0 , INPUT);
  //digitalWrite(IO_0, HIGH);
  pinMode(RCP_0 , OUTPUT);
  digitalWrite(RCP_0, HIGH);
  
  pinMode(CHARGES_1,OUTPUT);
  digitalWrite(CHARGES_1, LOW);
  pinMode(WCA_CHARGES_1,OUTPUT);
  digitalWrite(WCA_CHARGES_1, HIGH);
  pinMode(LOCK_1  , OUTPUT);
  digitalWrite(LOCK_1, HIGH);
  pinMode(UNLOCK_1, OUTPUT);
  digitalWrite(UNLOCK_1, HIGH);
  pinMode(TRUNK_1 , OUTPUT);
  digitalWrite(TRUNK_1, HIGH);
  pinMode(PANIC_1 , OUTPUT);
  digitalWrite(PANIC_1, HIGH);
  pinMode(IO_1 , OUTPUT);
  digitalWrite(IO_1, HIGH);
  pinMode(RCP_1 , OUTPUT);
  digitalWrite(RCP_1, HIGH);
  
  pinMode(CHARGES_2,OUTPUT);
  digitalWrite(CHARGES_2, LOW);
  pinMode(WCA_CHARGES_2, OUTPUT);
  digitalWrite(WCA_CHARGES_2, HIGH);
  pinMode(LOCK_2 , OUTPUT);
  digitalWrite(LOCK_2, HIGH);
  pinMode(UNLOCK_2, OUTPUT);
  digitalWrite(UNLOCK_2, HIGH);
  pinMode(TRUNK_2, OUTPUT);
  digitalWrite(TRUNK_2, HIGH);
  pinMode(PANIC_2, OUTPUT);
  digitalWrite(PANIC_2, HIGH);
  pinMode(IO_2, OUTPUT);
  digitalWrite(IO_2, HIGH);
  pinMode(RCP_2, OUTPUT);
  digitalWrite(RCP_2, HIGH);

  pinMode(CHARGES_3, OUTPUT);
  digitalWrite(CHARGES_3, LOW);
  pinMode(WCA_CHARGES_3, OUTPUT);
  digitalWrite(WCA_CHARGES_3, HIGH);
  pinMode(LOCK_3, OUTPUT);
  digitalWrite(LOCK_3, HIGH);
  pinMode(UNLOCK_3, OUTPUT);
  digitalWrite(UNLOCK_3, HIGH);
  pinMode(TRUNK_3, OUTPUT);
  digitalWrite(TRUNK_3, HIGH);
  pinMode(PANIC_3, OUTPUT);
  digitalWrite(PANIC_3, HIGH);
  pinMode(IO_3, OUTPUT);
  digitalWrite(IO_3, HIGH);
  pinMode(RCP_3, OUTPUT);
  digitalWrite(RCP_3, HIGH);

  pinMode(CHARGES_4, OUTPUT);
  digitalWrite(CHARGES_4, LOW);
  pinMode(WCA_CHARGES_4, OUTPUT);
  digitalWrite(WCA_CHARGES_4, HIGH);
  pinMode(LOCK_4  , OUTPUT);
  digitalWrite(LOCK_4, HIGH);
  pinMode(UNLOCK_4, OUTPUT);
  digitalWrite(UNLOCK_4, HIGH);
  pinMode(TRUNK_4, OUTPUT);
  digitalWrite(TRUNK_4, HIGH);
  pinMode(PANIC_4, OUTPUT);
  digitalWrite(PANIC_4, HIGH);
  pinMode(IO_4, OUTPUT);
  digitalWrite(IO_4, HIGH);
  pinMode(RCP_4, OUTPUT);
  digitalWrite(RCP_4, HIGH);
  Serial.println("Arduino start receive PC command!");
}

void loop()
{
  if(Serial.available())
  {
    unsigned int val = Serial.read();
    switch(val)
    {
      case HW_RESET_0_LOW:
        digitalWrite(LOCK_0,LOW);
        digitalWrite(UNLOCK_0,LOW);
        Serial.println("HW_RESET_0 LOW");
        break;      
      case HW_RESET_0_HIGH:
        digitalWrite(LOCK_0,HIGH);
        digitalWrite(UNLOCK_0,HIGH);
        Serial.println("HW_RESET_0 HIGH");
        break;      
      case HW_RESET_1_LOW:
        digitalWrite(LOCK_1, LOW);
        digitalWrite(UNLOCK_1, LOW);
        Serial.println("HW_RESET_1 LOW");
        break;      
      case HW_RESET_1_HIGH:
        digitalWrite(LOCK_1, HIGH);
        digitalWrite(UNLOCK_1, HIGH);
        Serial.println("HW_RESET_1 HIGH");
        break;     
      case HW_RESET_2_LOW:
        digitalWrite(LOCK_2, LOW);
        digitalWrite(UNLOCK_2, LOW);
        Serial.println("HW_RESET_2 LOW");
        break;      
      case HW_RESET_2_HIGH:
        digitalWrite(LOCK_2, HIGH);
        digitalWrite(UNLOCK_2, HIGH);
        Serial.println("HW_RESET_2 HIGH");
        break;     
      case HW_RESET_3_LOW:
        digitalWrite(LOCK_3, LOW);
        digitalWrite(UNLOCK_3, LOW);
        Serial.println("HW_RESET_3 LOW");
        break;      
      case HW_RESET_3_HIGH:
        digitalWrite(LOCK_3, HIGH);
        digitalWrite(UNLOCK_3, HIGH);
        Serial.println("HW_RESET_3 HIGH");
        break;     
      case HW_RESET_4_LOW:
        digitalWrite(LOCK_4, LOW);
        digitalWrite(UNLOCK_4, LOW);
        Serial.println("HW_RESET_4 LOW");
        break;      
      case HW_RESET_4_HIGH:
        digitalWrite(LOCK_4, HIGH);
        digitalWrite(UNLOCK_4, HIGH);
        Serial.println("HW_RESET_4 HIGH");
        break;                           
      case CHARGES_0_HIGH:
        digitalWrite(CHARGES_0,HIGH);
        Serial.println("CHARGES_0 HIGH");
        break;
      case CHARGES_0_LOW:
        digitalWrite(CHARGES_0,LOW);
        Serial.println("CHARGES_0 LOW");
        break;
      case WCA_CHARGES_0_HIGH:
        digitalWrite(WCA_CHARGES_0,HIGH);
        Serial.println("WCA_CHARGES_0 HIGH");
        break;
      case WCA_CHARGES_0_LOW:
        digitalWrite(WCA_CHARGES_0,LOW);
        Serial.println("WCA_CHARGES_0 LOW");
        break;
      case LOCK_0_HIGH:
        digitalWrite(LOCK_0,HIGH);
        Serial.println("LOCK_0 HIGH");
        break;
      case LOCK_0_LOW:
        digitalWrite(LOCK_0,LOW);
        Serial.println("LOCK_0 LOW");
        break;
      case UNLOCK_0_HIGH:
        digitalWrite(UNLOCK_0,HIGH);
        Serial.println("UNLOCK_0 HIGH");
        break;
      case UNLOCK_0_LOW:
        digitalWrite(UNLOCK_0,LOW);
        Serial.println("UNLOCK_0 LOW");
        break;       
      case TRUNK_0_HIGH:
        digitalWrite(TRUNK_0,HIGH);
        Serial.println("TRUNK_0 HIGH");
        break;
      case TRUNK_0_LOW:
        digitalWrite(TRUNK_0,LOW);
        Serial.println("TRUNK_0 LOW");
        break;        
      case PANIC_0_HIGH:
        digitalWrite(PANIC_0,HIGH);
        Serial.println("PANIC_0 HIGH");
        break;
      case PANIC_0_LOW:
        digitalWrite(PANIC_0,LOW);
        Serial.println("PANIC_0 LOW");
        break;
      case IO_0_HIGH:
        digitalWrite(IO_0,HIGH);
        Serial.println("IO_0 HIGH");
        pinMode(IO_0 , INPUT);
        break;
      case IO_0_LOW:
        pinMode(IO_0 , OUTPUT);
        digitalWrite(IO_0,LOW);
        Serial.println("IO_0 LOW");
        break;
      case RCP_0_HIGH:
        digitalWrite(RCP_0,HIGH);
        Serial.println("RCP_0 HIGH");
        break;
      case RCP_0_LOW:
        digitalWrite(RCP_0,LOW);
        Serial.println("RCP_0 LOW");
        break;  
      case CHARGES_1_HIGH:
        digitalWrite(CHARGES_1,HIGH);
        Serial.println("CHARGES_1 HIGH");
        break;
      case CHARGES_1_LOW:
        digitalWrite(CHARGES_1,LOW);
        Serial.println("CHARGES_1 LOW");
        break;
      case WCA_CHARGES_1_HIGH:
        digitalWrite(WCA_CHARGES_1,HIGH);
        Serial.println("WCA_CHARGES_1 HIGH");
        break;
      case WCA_CHARGES_1_LOW:
        digitalWrite(WCA_CHARGES_1,LOW);
        Serial.println("WCA_CHARGES_1 LOW");
        break;
      case LOCK_1_HIGH:
        digitalWrite(LOCK_1,HIGH);
        Serial.println("LOCK_1 HIGH");
        break;
      case LOCK_1_LOW:
        digitalWrite(LOCK_1,LOW);
        Serial.println("LOCK_1 LOW");
        break;
      case UNLOCK_1_HIGH:
        digitalWrite(UNLOCK_1,HIGH);
        Serial.println("UNLOCK_1 HIGH");
        break;
      case UNLOCK_1_LOW:
        digitalWrite(UNLOCK_1,LOW);
        Serial.println("UNLOCK_1 LOW");
        break;       
      case TRUNK_1_HIGH:
        digitalWrite(TRUNK_1,HIGH);
        Serial.println("TRUNK_1 HIGH");
        break;
      case TRUNK_1_LOW:
        digitalWrite(TRUNK_1,LOW);
        Serial.println("TRUNK_1 LOW");
        break;        
      case PANIC_1_HIGH:
        digitalWrite(PANIC_1,HIGH);
        Serial.println("PANIC_1 HIGH");
        break;
      case PANIC_1_LOW:
        digitalWrite(PANIC_1,LOW);
        Serial.println("PANIC_1 LOW");
        break;
      case IO_1_HIGH:
        digitalWrite(IO_1,HIGH);
        Serial.println("IO_1 HIGH");
        break;
      case IO_1_LOW:
        digitalWrite(IO_1,LOW);
        Serial.println("IO_1 LOW");
        break;
      case RCP_1_HIGH:
        digitalWrite(RCP_1,HIGH);
        Serial.println("RCP_1 HIGH");
        break;
      case RCP_1_LOW:
        digitalWrite(RCP_1,LOW);
        Serial.println("RCP_1 LOW");
        break;  
      case CHARGES_2_HIGH:
        digitalWrite(CHARGES_2,HIGH);
        Serial.println("CHARGES_2 HIGH");
        break;
      case CHARGES_2_LOW:
        digitalWrite(CHARGES_2,LOW);
        Serial.println("CHARGES_2 LOW");
        break;
      case WCA_CHARGES_2_HIGH:
        digitalWrite(WCA_CHARGES_2,HIGH);
        Serial.println("WCA_CHARGES_2 HIGH");
        break;
      case WCA_CHARGES_2_LOW:
        digitalWrite(WCA_CHARGES_2,LOW);
        Serial.println("WCA_CHARGES_2 LOW");
        break;
      case LOCK_2_HIGH:
        digitalWrite(LOCK_2,HIGH);
        Serial.println("LOCK_2 HIGH");
        break;
      case LOCK_2_LOW:
        digitalWrite(LOCK_2,LOW);
        Serial.println("LOCK_2 LOW");
        break;
      case UNLOCK_2_HIGH:
        digitalWrite(UNLOCK_2,HIGH);
        Serial.println("UNLOCK_2 HIGH");
        break;
      case UNLOCK_2_LOW:
        digitalWrite(UNLOCK_2,LOW);
        Serial.println("UNLOCK_2 LOW");
        break;       
      case TRUNK_2_HIGH:
        digitalWrite(TRUNK_2,HIGH);
        Serial.println("TRUNK_2 HIGH");
        break;
      case TRUNK_2_LOW:
        digitalWrite(TRUNK_2,LOW);
        Serial.println("TRUNK_2 LOW");
        break;        
      case PANIC_2_HIGH:
        digitalWrite(PANIC_2,HIGH);
        Serial.println("PANIC_2 HIGH");
        break;
      case PANIC_2_LOW:
        digitalWrite(PANIC_2,LOW);
        Serial.println("PANIC_2 LOW");
        break;
      case IO_2_HIGH:
        digitalWrite(IO_2,HIGH);
        Serial.println("IO_2 HIGH");
        break;
      case IO_2_LOW:
        digitalWrite(IO_2,LOW);
        Serial.println("IO_2 LOW");
        break;
      case RCP_2_HIGH:
        digitalWrite(RCP_2,HIGH);
        Serial.println("RCP_2 HIGH");
        break;
      case RCP_2_LOW:
        digitalWrite(RCP_2,LOW);
        Serial.println("RCP_2 LOW");
        break;  
      case CHARGES_3_HIGH:
        digitalWrite(CHARGES_3,HIGH);
        Serial.println("CHARGES_3 HIGH");
        break;
      case CHARGES_3_LOW:
        digitalWrite(CHARGES_3,LOW);
        Serial.println("CHARGES_3 LOW");
        break;
      case WCA_CHARGES_3_HIGH:
        digitalWrite(WCA_CHARGES_3,HIGH);
        Serial.println("WCA_CHARGES_3 HIGH");
        break;
      case WCA_CHARGES_3_LOW:
        digitalWrite(WCA_CHARGES_3,LOW);
        Serial.println("WCA_CHARGES_3 LOW");
        break;
      case LOCK_3_HIGH:
        digitalWrite(LOCK_3,HIGH);
        Serial.println("LOCK_3 HIGH");
        break;
      case LOCK_3_LOW:
        digitalWrite(LOCK_3,LOW);
        Serial.println("LOCK_3 LOW");
        break;
      case UNLOCK_3_HIGH:
        digitalWrite(UNLOCK_3,HIGH);
        Serial.println("UNLOCK_3 HIGH");
        break;
      case UNLOCK_3_LOW:
        digitalWrite(UNLOCK_3,LOW);
        Serial.println("UNLOCK_3 LOW");
        break;       
      case TRUNK_3_HIGH:
        digitalWrite(TRUNK_3,HIGH);
        Serial.println("TRUNK_3 HIGH");
        break;
      case TRUNK_3_LOW:
        digitalWrite(TRUNK_3,LOW);
        Serial.println("TRUNK_3 LOW");
        break;        
      case PANIC_3_HIGH:
        digitalWrite(PANIC_3,HIGH);
        Serial.println("PANIC_3 HIGH");
        break;
      case PANIC_3_LOW:
        digitalWrite(PANIC_3,LOW);
        Serial.println("PANIC_3 LOW");
        break;
      case IO_3_HIGH:
        digitalWrite(IO_3,HIGH);
        Serial.println("IO_3 HIGH");
        break;
      case IO_3_LOW:
        digitalWrite(IO_3,LOW);
        Serial.println("IO_3 LOW");
        break;
      case RCP_3_HIGH:
        digitalWrite(RCP_3,HIGH);
        Serial.println("RCP_3 HIGH");
        break;
      case RCP_3_LOW:
        digitalWrite(RCP_3,LOW);
        Serial.println("RCP_3 LOW");
        break;  
      case CHARGES_4_HIGH:
        digitalWrite(CHARGES_4,HIGH);
        Serial.println("CHARGES_4 HIGH");
        break;
      case CHARGES_4_LOW:
        digitalWrite(CHARGES_4,LOW);
        Serial.println("CHARGES_4 LOW");
        break;
      case WCA_CHARGES_4_HIGH:
        digitalWrite(WCA_CHARGES_4,HIGH);
        Serial.println("WCA_CHARGES_4 HIGH");
        break;
      case WCA_CHARGES_4_LOW:
        digitalWrite(WCA_CHARGES_4,LOW);
        Serial.println("WCA_CHARGES_4 LOW");
        break;
      case LOCK_4_HIGH:
        digitalWrite(LOCK_4,HIGH);
        Serial.println("LOCK_4 HIGH");
        break;
      case LOCK_4_LOW:
        digitalWrite(LOCK_4,LOW);
        Serial.println("LOCK_4 LOW");
        break;
      case UNLOCK_4_HIGH:
        digitalWrite(UNLOCK_4,HIGH);
        Serial.println("UNLOCK_4 HIGH");
        break;
      case UNLOCK_4_LOW:
        digitalWrite(UNLOCK_4,LOW);
        Serial.println("UNLOCK_4 LOW");
        break;       
      case TRUNK_4_HIGH:
        digitalWrite(TRUNK_4,HIGH);
        Serial.println("TRUNK_4 HIGH");
        break;
      case TRUNK_4_LOW:
        digitalWrite(TRUNK_4,LOW);
        Serial.println("TRUNK_4 LOW");
        break;        
      case PANIC_4_HIGH:
        digitalWrite(PANIC_4,HIGH);
        Serial.println("PANIC_4 HIGH");
        break;
      case PANIC_4_LOW:
        digitalWrite(PANIC_4,LOW);
        Serial.println("PANIC_4 LOW");
        break;
      case IO_4_HIGH:
        digitalWrite(IO_4,HIGH);
        Serial.println("IO_4 HIGH");
        break;
      case IO_4_LOW:
        digitalWrite(IO_4,LOW);
        Serial.println("IO_4 LOW");
        break;
      case RCP_4_HIGH:
        digitalWrite(RCP_4,HIGH);
        Serial.println("RCP_4 HIGH");
        break;
      case RCP_4_LOW:
        digitalWrite(RCP_4,LOW);
        Serial.println("RCP_4 LOW");
        break;  
      default:
        Serial.println("No this case");
        break;
    }
  }
}
