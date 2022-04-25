int loop_counter;                   // conter number of times in the loop
bool comcheck = false;
String sdata="";

void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600); 
  Serial1.begin(112149, SERIAL_8E1);
  Serial.setTimeout(250);
  digitalWrite(2,HIGH);
  delay(100);
  digitalWrite(3,HIGH);
  delay(100);
  digitalWrite(4,HIGH);
  delay(100);
  digitalWrite(5,HIGH);
  delay(100);\
  digitalWrite(6,HIGH);
  delay(100);
  digitalWrite(7,HIGH);
  delay(100);
  digitalWrite(8,HIGH);
  delay(100);
  digitalWrite(9,HIGH);
  delay(100);
  digitalWrite(9,LOW);
  delay(100);
  digitalWrite(8,LOW);
  delay(100);
  digitalWrite(7,LOW);
  delay(100);
  digitalWrite(6,LOW);
  delay(100);
  digitalWrite(5,LOW);
  delay(100);
  digitalWrite(4,LOW);
  delay(100);
  digitalWrite(3,LOW);
  delay(100);
  digitalWrite(2,LOW);


}

void loop() {
 loop_counter++;

 if (Serial.available())       // If anything comes in Serial (USB),
  {
    sdata = Serial.readString();

 

      if (sdata.indexOf("comEnable")>=0)
      {
        comcheck = true;
      }
      else if (sdata.indexOf("comDisable")>=0)
      {
        comcheck = false;
      }
      else if (sdata.indexOf("A1Init")>=0)
      {
        comcheck = true;
        Serial1.write(0x9D);
        Serial1.write(0x01);
        Serial1.write(0x5E);
        Serial1.write(0x11);
        Serial1.write(0x2F);
        Serial1.write(0xC8);
        Serial1.write(0x04);
      }
      else if (sdata.indexOf("A1Enable")>=0)
      {
        Serial1.write(0x99);
        Serial1.write(0x44);
        Serial1.write(0xDD);
        digitalWrite(2,HIGH);
      }
      else if (sdata.indexOf("A1Disable")>=0)
      {
        Serial1.write(0x99);
        Serial1.write(0x84);
        Serial1.write(0x1D);
        digitalWrite(2,LOW);
      }
      else if (sdata.indexOf("A1Status")>=0)
      {
        Serial1.write(0x99);
        Serial1.write(0x02);
        Serial1.write(0x9B);
      }
      else if (sdata.indexOf("A2Init")>=0)
      {
        comcheck = true;
        Serial1.write(0xAD);
        Serial1.write(0x01);
        Serial1.write(0x56);
        Serial1.write(0x09);
        Serial1.write(0x1D);
        Serial1.write(0x32);
        Serial1.write(0x5C);
      }

      else if (sdata.indexOf("A2Enable")>=0)
      {
        Serial1.write(0xA9);
        Serial1.write(0x44);
        Serial1.write(0xED);
        digitalWrite(3,HIGH);
      }
      else if (sdata.indexOf("A2Disable")>=0)
      {
        Serial1.write(0xA9);
        Serial1.write(0x84);
        Serial1.write(0x2D);
        digitalWrite(3,LOW);
      }
      else if (sdata.indexOf("A2Status")>=0)
      {
        Serial1.write(0xA9);
        Serial1.write(0x02);
        Serial1.write(0xAB);
      }
      else if (sdata.indexOf("A3Init")>=0)
      {
        comcheck = true;
        Serial1.write(0xB5);
        Serial1.write(0x01);
        Serial1.write(0x65);
        Serial1.write(0x05);
        Serial1.write(0x1E);
        Serial1.write(0x32);
        Serial1.write(0x70);
      }
      else if (sdata.indexOf("A3Enable")>=0)
      {
        Serial1.write(0xB1);
        Serial1.write(0x44);
        Serial1.write(0xF5);
        digitalWrite(4,HIGH);
      }
      else if (sdata.indexOf("A3Disable")>=0)
      {
        Serial1.write(0xB1);
        Serial1.write(0x84);
        Serial1.write(0x35);
        digitalWrite(4,LOW);
      }
      else if (sdata.indexOf("A3Status")>=0)
      {
        Serial1.write(0xB1);
        Serial1.write(0x02);
        Serial1.write(0xB3);
      }
      else if (sdata.indexOf("A4Init")>=0)
      {
        comcheck = true;
        Serial1.write(0x3D);
        Serial1.write(0x01);
        Serial1.write(0x65);
        Serial1.write(0x05);
        Serial1.write(0x1E);
        Serial1.write(0x32);
        Serial1.write(0xF8);
      }
      else if (sdata.indexOf("A4Enable")>=0)
      {
        Serial1.write(0x39);
        Serial1.write(0x44);
        Serial1.write(0x7D);
        digitalWrite(5,HIGH);
      }
      else if (sdata.indexOf("A4Disable")>=0)
      {
        Serial1.write(0x39);
        Serial1.write(0x84);
        Serial1.write(0xBD);
        digitalWrite(5,LOW);
      }
      else if (sdata.indexOf("A4Status")>=0)
      {
        Serial1.write(0x39);
        Serial1.write(0x02);
        Serial1.write(0x3B);
      }
      else if (sdata.indexOf("A5Init")>=0)
      {
        comcheck = true;
        Serial1.write(0x75);
        Serial1.write(0x01);
        Serial1.write(0x83);
        Serial1.write(0x03);
        Serial1.write(0x21);
        Serial1.write(0x32);
        Serial1.write(0x4F);
      }
      else if (sdata.indexOf("A5Enable")>=0)
      {
        Serial1.write(0x71);
        Serial1.write(0x44);
        Serial1.write(0xB5);
        digitalWrite(6,HIGH);
      }
      else if (sdata.indexOf("A5Disable")>=0)
      {
        Serial1.write(0x71);
        Serial1.write(0x84);
        Serial1.write(0xF5);
        digitalWrite(6,LOW);
      }
      else if (sdata.indexOf("A5Status")>=0)
      {
        Serial1.write(0x71);
        Serial1.write(0x02);
        Serial1.write(0x73);
      }
      else if (sdata.indexOf("A6Init")>=0)
      {
        comcheck = true;
        Serial1.write(0xCD);
        Serial1.write(0x01);
        Serial1.write(0x83);
        Serial1.write(0x03);
        Serial1.write(0x21);
        Serial1.write(0x32);
        Serial1.write(0xA7);
      }
      else if (sdata.indexOf("A6Enable")>=0)
      {
        Serial1.write(0xC9);
        Serial1.write(0x44);
        Serial1.write(0x0D);
        digitalWrite(7,HIGH);
      }
      else if (sdata.indexOf("A6Disable")>=0)
      {
        Serial1.write(0xC9);
        Serial1.write(0x84);
        Serial1.write(0x4D);
        digitalWrite(7,LOW);
      }
      else if (sdata.indexOf("A6Status")>=0)
      {
        Serial1.write(0xc9);
        Serial1.write(0x02);
        Serial1.write(0xCBE);
      }
      else if (sdata.indexOf("A7Init")>=0)
      {
        comcheck = true;
        Serial1.write(0xD5);
        Serial1.write(0x01);
        Serial1.write(0x83);
        Serial1.write(0x03);
        Serial1.write(0x21);
        Serial1.write(0x32);
        Serial1.write(0xAF);
      }
      else if (sdata.indexOf("A7Enable")>=0)
      {
        Serial1.write(0xD1);
        Serial1.write(0x44);
        Serial1.write(0x15);
        digitalWrite(8,HIGH);
      }
      else if (sdata.indexOf("A7Disable")>=0)
      {
        Serial1.write(0xD1);
        Serial1.write(0x84);
        Serial1.write(0x55);
        digitalWrite(8,LOW);
      }
      else if (sdata.indexOf("A7Status")>=0)
      {
        Serial1.write(0xD1);
        Serial1.write(0x02);
        Serial1.write(0xD3);
      }
    else if (sdata.indexOf("A8Init")>=0)
      {
        comcheck = true;
        Serial1.write(0xD5);
        Serial1.write(0x01);
        Serial1.write(0x56);
        Serial1.write(0x09);
        Serial1.write(0x1D);
        Serial1.write(0x3C);
        Serial1.write(0x16);
      }
      else if (sdata.indexOf("A8Enable")>=0)
      {
        Serial1.write(0x59);
        Serial1.write(0x44);
        Serial1.write(0x0D);
        digitalWrite(8,HIGH);
      }
      else if (sdata.indexOf("A8Disable")>=0)
      {
        Serial1.write(0x59);
        Serial1.write(0x84);
        Serial1.write(0xDD);
        digitalWrite(8,LOW);
      }
      else if (sdata.indexOf("A8Status")>=0)
      {
        Serial1.write(0x59);
        Serial1.write(0x02);
        Serial1.write(0x5B);
      }
      


      else if (sdata.indexOf("DisableAll")>=0)
      {
        comcheck = true;
        // Disable A1
        Serial1.write(0x99);
        Serial1.write(0x84);
        Serial1.write(0x1D);
        digitalWrite(2,LOW);
        delay(1);
        // Disable A2
        Serial1.write(0xA9);
        Serial1.write(0x84);
        Serial1.write(0x2D);
        digitalWrite(3,LOW);
        delay(1);
        // Disable A3
        Serial1.write(0xB1);
        Serial1.write(0x84);
        Serial1.write(0x35);
        digitalWrite(4,LOW);
        delay(1);
        // Disable A4
        Serial1.write(0x39);
        Serial1.write(0x44);
        Serial1.write(0x7D);
        digitalWrite(5,HIGH);
        delay(1);
        // Disable A5
        Serial1.write(0x71);
        Serial1.write(0x84);
        Serial1.write(0xF5);
        digitalWrite(6,LOW);
        delay(1);
        // Disable A6
        Serial1.write(0xC9);
        Serial1.write(0x84);
        Serial1.write(0x4D);
        digitalWrite(7,LOW);
        delay(1);
        // Disable A7
        Serial1.write(0xD1);
        Serial1.write(0x84);
        Serial1.write(0x55);
        digitalWrite(8,LOW);
        delay(1);
        // Disable A8
        Serial1.write(0x59);
        Serial1.write(0x84);
        Serial1.write(0xDD);
        digitalWrite(9,LOW);

      }
      
      else
      {
          Serial1.print(sdata); 
      }
    
      sdata="";
  
  }

  if (Serial1.available()) {     // If anything comes in SBR Serial port (pins 0 & 1)
    Serial.write(Serial1.read());   // read it and send it out to the PC Serial port USB unchanged.
  }
if (loop_counter == 250)
  {
    if (comcheck) 
    {
      Serial1.write(0x68);
    }
    loop_counter = 0;
  } 
  delay(1);
}
