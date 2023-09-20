String data="";
int led=13;

void setup() {
  Serial.begin(9600); // Inisialisasi komunikasi serial dengan baud rate 9600
  pinMode(led, OUTPUT);
}

void loop() {
  if(Serial.available()){
    data=Serial.readString();
    data.trim();
    Serial.println("data : "+data);
    if(data == "LED1ON"){
      Serial.println("led 1 nyala");
      digitalWrite(led, HIGH);
    }
    else if(data == "LED1OFF"){
      Serial.println("led 1 off");
      digitalWrite(led, LOW);
    }
    else{
      Serial.println("not found "+data);
    }
  }
}
