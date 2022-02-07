#include <SPI.h> //Master

//ESP8266
#define GB_MISO 12
#define GB_MOSI 13
#define GB_SCLK 14

SPISettings settingsA(8193.923, MSBFIRST, SPI_MODE3); //Measured using a Logical Analyser
SPISettings settingsB(8117.676, MSBFIRST, SPI_MODE3); //Based on online projects
SPISettings settingsC(4058.838, MSBFIRST, SPI_MODE3); //Based on online projects (w/ Clock Divider)

uint8_t result;

void setup() {
  Serial.begin(115200); 
  
  //Master
  SPI.begin();
}

void loop() {

  while (Serial.available() > 0)
  {
    switch (Serial.read())
    {
      case 'A':
        SPI.beginTransaction(settingsA);
        delay(250); // You need this delay before send a command
        result = SPI.transfer(0x29);
        if (result == 0x55){
          Serial.println("Connection OK!");
        }else{
          Serial.println("Connection Failed");
        }
        break;
        
      case 'B':
          //Escolhe Musica
          Serial.println("Music Selected");
          result = SPI.transfer(0x1C);
          delay(16);
          result = SPI.transfer(0x50);
          break;
  
      case 'C':
          //Escolhe altura
          Serial.println("Height Selected");
          result = SPI.transfer(0x00);
          delay(16);
          result = SPI.transfer(0x60);
          
          delay(131);
          
          Serial.println("Starting Game...");
          result = SPI.transfer(0x29);delay(1.4);
          result = SPI.transfer(0x86);delay(1.4);
          result = SPI.transfer(0x85);delay(1.4);
          result = SPI.transfer(0x2F);delay(1.4);
          result = SPI.transfer(0x2F);delay(1.4);
          result = SPI.transfer(0x2F);delay(1.4);
          result = SPI.transfer(0x87);delay(1.4);
          result = SPI.transfer(0x2F);delay(1.4);
          result = SPI.transfer(0x2F);delay(1.4);
          result = SPI.transfer(0x2F);delay(1.4);
          result = SPI.transfer(0x82);delay(1.4);
          result = SPI.transfer(0x2F);delay(1.4);
          result = SPI.transfer(0x82);delay(1.4);
          result = SPI.transfer(0x84);delay(1.4);
          result = SPI.transfer(0x87);delay(1.4);
          result = SPI.transfer(0x2F);delay(1.4);
          result = SPI.transfer(0x2F);delay(1.4);
          result = SPI.transfer(0x87);delay(1.4);
          result = SPI.transfer(0x2F);delay(1.4);
          result = SPI.transfer(0x86);delay(1.4);
          result = SPI.transfer(0x2F);delay(1.4);
          result = SPI.transfer(0x81);delay(1.4);
          result = SPI.transfer(0x2F);delay(1.4);
          result = SPI.transfer(0x2F);delay(1.4);
          result = SPI.transfer(0x2F);delay(1.4);
          result = SPI.transfer(0x80);delay(1.4);
          result = SPI.transfer(0x81);delay(1.4);
          result = SPI.transfer(0x2F);delay(1.4);
          result = SPI.transfer(0x81);delay(1.4);
          result = SPI.transfer(0x2F);delay(1.4);
          result = SPI.transfer(0x81);delay(1.4);
          result = SPI.transfer(0x87);delay(1.4);
          result = SPI.transfer(0x2F);delay(1.4);
          result = SPI.transfer(0x2F);delay(1.4);
          result = SPI.transfer(0x2F);delay(1.4);
          result = SPI.transfer(0x86);delay(1.4);
          result = SPI.transfer(0x82);delay(1.4);
          result = SPI.transfer(0x86);delay(1.4);
          result = SPI.transfer(0x83);delay(1.4);
          result = SPI.transfer(0x2F);delay(1.4);
          result = SPI.transfer(0x2F);delay(1.4);
          result = SPI.transfer(0x80);delay(1.4);
          result = SPI.transfer(0x81);delay(1.4);
          result = SPI.transfer(0x2F);delay(1.4);
          result = SPI.transfer(0x81);delay(1.4);
          result = SPI.transfer(0x2F);delay(1.4);
          result = SPI.transfer(0x82);delay(1.4);
          result = SPI.transfer(0x87);delay(1.4);
          result = SPI.transfer(0x87);delay(1.4);
          result = SPI.transfer(0x2F);delay(1.4);
          result = SPI.transfer(0x2F);delay(1.4);
          result = SPI.transfer(0x87);delay(1.4);
          result = SPI.transfer(0x82);delay(1.4);
          result = SPI.transfer(0x86);delay(1.4);
          result = SPI.transfer(0x83);delay(1.4);
          result = SPI.transfer(0x2F);delay(1.4);
          result = SPI.transfer(0x2F);delay(1.4);
          result = SPI.transfer(0x80);delay(1.4);
          result = SPI.transfer(0x81);delay(1.4);
          result = SPI.transfer(0x2F);delay(1.4);
          result = SPI.transfer(0x81);delay(1.4);
          result = SPI.transfer(0x2F);delay(1.4);
          result = SPI.transfer(0x82);delay(1.4);
          result = SPI.transfer(0x87);delay(1.4);
          result = SPI.transfer(0x2F);delay(1.4);
          result = SPI.transfer(0x2F);delay(1.4);
          result = SPI.transfer(0x2F);delay(1.4);
          result = SPI.transfer(0x2F);delay(1.4);
          result = SPI.transfer(0x2F);delay(1.4);
          result = SPI.transfer(0x84);delay(1.4);
          result = SPI.transfer(0x81);delay(1.4);
          result = SPI.transfer(0x2F);delay(1.4);
          result = SPI.transfer(0x85);delay(1.4);
          result = SPI.transfer(0x2F);delay(1.4);
          result = SPI.transfer(0x85);delay(1.4);
          result = SPI.transfer(0x2F);delay(1.4);
          result = SPI.transfer(0x2F);delay(1.4);
          result = SPI.transfer(0x2F);delay(1.4);
          result = SPI.transfer(0x2F);delay(1.4);
          result = SPI.transfer(0x2F);delay(1.4);
          result = SPI.transfer(0x83);delay(1.4);
          result = SPI.transfer(0x2F);delay(1.4);
          result = SPI.transfer(0x85);delay(1.4);
          result = SPI.transfer(0x2F);delay(1.4);
          result = SPI.transfer(0x2F);delay(1.4);
          result = SPI.transfer(0x2F);delay(1.4);
          result = SPI.transfer(0x85);delay(1.4);
          result = SPI.transfer(0x2F);delay(1.4);
          result = SPI.transfer(0x2F);delay(1.4);
          result = SPI.transfer(0x2F);delay(1.4);
          result = SPI.transfer(0x2F);delay(1.4);
          result = SPI.transfer(0x85);delay(1.4);
          result = SPI.transfer(0x2F);delay(1.4);
          result = SPI.transfer(0x86);delay(1.4);
          result = SPI.transfer(0x85);delay(1.4);
          result = SPI.transfer(0x2F);delay(1.4);
          result = SPI.transfer(0x85);delay(1.4);
          result = SPI.transfer(0x2F);delay(1.4);
          result = SPI.transfer(0x2F);delay(1.4);
          result = SPI.transfer(0x80);delay(1.4);
          result = SPI.transfer(0x84);
          
          delay(4.6);
                    
          Serial.println("Generating Blocks...");
          result = SPI.transfer(0x29);delay(1.4);
          result = SPI.transfer(0x00);delay(1.4);
          result = SPI.transfer(0x08);delay(1.4);
          result = SPI.transfer(0x18);delay(1.4);
          result = SPI.transfer(0x14);delay(1.4);
          result = SPI.transfer(0x18);delay(1.4);
          result = SPI.transfer(0x14);delay(1.4);
          result = SPI.transfer(0x00);delay(1.4);
          result = SPI.transfer(0x18);delay(1.4);
          result = SPI.transfer(0x04);delay(1.4);
          result = SPI.transfer(0x04);delay(1.4);
          result = SPI.transfer(0x0C);delay(1.4);
          result = SPI.transfer(0x00);delay(1.4);
          result = SPI.transfer(0x18);delay(1.4);
          result = SPI.transfer(0x04);delay(1.4);
          result = SPI.transfer(0x18);delay(1.4);
          result = SPI.transfer(0x08);delay(1.4);
          result = SPI.transfer(0x0C);delay(1.4);
          result = SPI.transfer(0x0C);delay(1.4);
          result = SPI.transfer(0x18);delay(1.4);
          result = SPI.transfer(0x00);delay(1.4);
          result = SPI.transfer(0x0C);delay(1.4);
          result = SPI.transfer(0x04);delay(1.4);
          result = SPI.transfer(0x18);delay(1.4);
          result = SPI.transfer(0x00);delay(1.4);
          result = SPI.transfer(0x0C);delay(1.4);
          result = SPI.transfer(0x00);delay(1.4);
          result = SPI.transfer(0x10);delay(1.4);
          result = SPI.transfer(0x08);delay(1.4);
          result = SPI.transfer(0x08);delay(1.4);
          result = SPI.transfer(0x10);delay(1.4);
          result = SPI.transfer(0x04);delay(1.4);
          result = SPI.transfer(0x00);delay(1.4);
          result = SPI.transfer(0x08);delay(1.4);
          result = SPI.transfer(0x04);delay(1.4);
          result = SPI.transfer(0x10);delay(1.4);
          result = SPI.transfer(0x14);delay(1.4);
          result = SPI.transfer(0x18);delay(1.4);
          result = SPI.transfer(0x00);delay(1.4);
          result = SPI.transfer(0x14);delay(1.4);
          result = SPI.transfer(0x10);delay(1.4);
          result = SPI.transfer(0x08);delay(1.4);
          result = SPI.transfer(0x10);delay(1.4);
          result = SPI.transfer(0x10);delay(1.4);
          result = SPI.transfer(0x0C);delay(1.4);
          result = SPI.transfer(0x08);delay(1.4);
          result = SPI.transfer(0x08);delay(1.4);
          result = SPI.transfer(0x14);delay(1.4);
          result = SPI.transfer(0x10);delay(1.4);
          result = SPI.transfer(0x18);delay(1.4);
          result = SPI.transfer(0x10);delay(1.4);
          result = SPI.transfer(0x10);delay(1.4);
          result = SPI.transfer(0x0C);delay(1.4);
          result = SPI.transfer(0x04);delay(1.4);
          result = SPI.transfer(0x18);delay(1.4);
          result = SPI.transfer(0x18);delay(1.4);
          result = SPI.transfer(0x0C);delay(1.4);
          result = SPI.transfer(0x04);delay(1.4);
          result = SPI.transfer(0x18);delay(1.4);
          result = SPI.transfer(0x00);delay(1.4);
          result = SPI.transfer(0x0C);delay(1.4);
          result = SPI.transfer(0x00);delay(1.4);
          result = SPI.transfer(0x14);delay(1.4);
          result = SPI.transfer(0x08);delay(1.4);
          result = SPI.transfer(0x18);delay(1.4);
          result = SPI.transfer(0x14);delay(1.4);
          result = SPI.transfer(0x14);delay(1.4);
          result = SPI.transfer(0x18);delay(1.4);
          result = SPI.transfer(0x08);delay(1.4);
          result = SPI.transfer(0x08);delay(1.4);
          result = SPI.transfer(0x18);delay(1.4);
          result = SPI.transfer(0x00);delay(1.4);
          result = SPI.transfer(0x04);delay(1.4);
          result = SPI.transfer(0x0C);delay(1.4);
          result = SPI.transfer(0x0C);delay(1.4);
          result = SPI.transfer(0x18);delay(1.4);
          result = SPI.transfer(0x0C);delay(1.4);
          result = SPI.transfer(0x0C);delay(1.4);
          result = SPI.transfer(0x00);delay(1.4);
          result = SPI.transfer(0x14);delay(1.4);
          result = SPI.transfer(0x0C);delay(1.4);
          result = SPI.transfer(0x18);delay(1.4);
          result = SPI.transfer(0x0C);delay(1.4);
          result = SPI.transfer(0x04);delay(1.4);
          result = SPI.transfer(0x18);delay(1.4);
          result = SPI.transfer(0x04);delay(1.4);
          result = SPI.transfer(0x10);delay(1.4);
          result = SPI.transfer(0x0C);delay(1.4);
          result = SPI.transfer(0x10);delay(1.4);
          result = SPI.transfer(0x10);delay(1.4);
          result = SPI.transfer(0x08);delay(1.4);
          result = SPI.transfer(0x0C);delay(1.4);
          result = SPI.transfer(0x14);delay(1.4);
          result = SPI.transfer(0x18);delay(1.4);
          result = SPI.transfer(0x08);delay(1.4);
          result = SPI.transfer(0x0C);delay(1.4);
          result = SPI.transfer(0x18);delay(1.4);
          result = SPI.transfer(0x18);delay(1.4);
          result = SPI.transfer(0x14);delay(1.4);
          result = SPI.transfer(0x14);delay(1.4);
          result = SPI.transfer(0x08);delay(1.4);
          result = SPI.transfer(0x04);delay(1.4);
          result = SPI.transfer(0x08);delay(1.4);
          result = SPI.transfer(0x10);delay(1.4);
          result = SPI.transfer(0x04);delay(1.4);
          result = SPI.transfer(0x00);delay(1.4);
          result = SPI.transfer(0x0C);delay(1.4);
          result = SPI.transfer(0x08);delay(1.4);
          result = SPI.transfer(0x14);delay(1.4);
          result = SPI.transfer(0x08);delay(1.4);
          result = SPI.transfer(0x14);delay(1.4);
          result = SPI.transfer(0x10);delay(1.4);
          result = SPI.transfer(0x18);delay(1.4);
          result = SPI.transfer(0x10);delay(1.4);
          result = SPI.transfer(0x04);delay(1.4);
          result = SPI.transfer(0x08);delay(1.4);
          result = SPI.transfer(0x08);delay(1.4);
          result = SPI.transfer(0x14);delay(1.4);
          result = SPI.transfer(0x08);delay(1.4);
          result = SPI.transfer(0x04);delay(1.4);
          result = SPI.transfer(0x10);delay(1.4);
          result = SPI.transfer(0x0C);delay(1.4);
          result = SPI.transfer(0x00);delay(1.4);
          result = SPI.transfer(0x10);delay(1.4);
          result = SPI.transfer(0x04);delay(1.4);
          result = SPI.transfer(0x10);delay(1.4);
          result = SPI.transfer(0x08);delay(1.4);
          result = SPI.transfer(0x10);delay(1.4);
          result = SPI.transfer(0x04);delay(1.4);
          result = SPI.transfer(0x0C);delay(1.4);
          result = SPI.transfer(0x08);delay(1.4);
          result = SPI.transfer(0x14);delay(1.4);
          result = SPI.transfer(0x14);delay(1.4);
          result = SPI.transfer(0x18);delay(1.4);
          result = SPI.transfer(0x08);delay(1.4);
          result = SPI.transfer(0x10);delay(1.4);
          result = SPI.transfer(0x10);delay(1.4);
          result = SPI.transfer(0x08);delay(1.4);
          result = SPI.transfer(0x18);delay(1.4);
          result = SPI.transfer(0x14);delay(1.4);
          result = SPI.transfer(0x04);delay(1.4);
          result = SPI.transfer(0x18);delay(1.4);
          result = SPI.transfer(0x10);delay(1.4);
          result = SPI.transfer(0x18);delay(1.4);
          result = SPI.transfer(0x0C);delay(1.4);
          result = SPI.transfer(0x0C);delay(1.4);
          result = SPI.transfer(0x18);delay(1.4);
          result = SPI.transfer(0x18);delay(1.4);
          result = SPI.transfer(0x0C);delay(1.4);
          result = SPI.transfer(0x14);delay(1.4);
          result = SPI.transfer(0x00);delay(1.4);
          result = SPI.transfer(0x08);delay(1.4);
          result = SPI.transfer(0x10);delay(1.4);
          result = SPI.transfer(0x18);delay(1.4);
          result = SPI.transfer(0x04);delay(1.4);
          result = SPI.transfer(0x10);delay(1.4);
          result = SPI.transfer(0x00);delay(1.4);
          result = SPI.transfer(0x08);delay(1.4);
          result = SPI.transfer(0x04);delay(1.4);
          result = SPI.transfer(0x04);delay(1.4);
          result = SPI.transfer(0x0C);delay(1.4);
          result = SPI.transfer(0x00);delay(1.4);
          result = SPI.transfer(0x18);delay(1.4);
          result = SPI.transfer(0x04);delay(1.4);
          result = SPI.transfer(0x00);delay(1.4);
          result = SPI.transfer(0x08);delay(1.4);
          result = SPI.transfer(0x0C);delay(1.4);
          result = SPI.transfer(0x0C);delay(1.4);
          result = SPI.transfer(0x10);delay(1.4);
          result = SPI.transfer(0x14);delay(1.4);
          result = SPI.transfer(0x04);delay(1.4);
          result = SPI.transfer(0x18);delay(1.4);
          result = SPI.transfer(0x18);delay(1.4);
          result = SPI.transfer(0x0C);delay(1.4);
          result = SPI.transfer(0x0C);delay(1.4);
          result = SPI.transfer(0x10);delay(1.4);
          result = SPI.transfer(0x04);delay(1.4);
          result = SPI.transfer(0x10);delay(1.4);
          result = SPI.transfer(0x00);delay(1.4);
          result = SPI.transfer(0x04);delay(1.4);
          result = SPI.transfer(0x00);delay(1.4);
          result = SPI.transfer(0x10);delay(1.4);
          result = SPI.transfer(0x0C);delay(1.4);
          result = SPI.transfer(0x10);delay(1.4);
          result = SPI.transfer(0x08);delay(1.4);
          result = SPI.transfer(0x0C);delay(1.4);
          result = SPI.transfer(0x0C);delay(1.4);
          result = SPI.transfer(0x08);delay(1.4);
          result = SPI.transfer(0x0C);delay(1.4);
          result = SPI.transfer(0x00);delay(1.4);
          result = SPI.transfer(0x18);delay(1.4);
          result = SPI.transfer(0x04);delay(1.4);
          result = SPI.transfer(0x00);delay(1.4);
          result = SPI.transfer(0x0C);delay(1.4);
          result = SPI.transfer(0x10);delay(1.4);
          result = SPI.transfer(0x10);delay(1.4);
          result = SPI.transfer(0x14);delay(1.4);
          result = SPI.transfer(0x10);delay(1.4);
          result = SPI.transfer(0x10);delay(1.4);
          result = SPI.transfer(0x18);delay(1.4);
          result = SPI.transfer(0x0C);delay(1.4);
          result = SPI.transfer(0x14);delay(1.4);
          result = SPI.transfer(0x00);delay(1.4);
          result = SPI.transfer(0x10);delay(1.4);
          result = SPI.transfer(0x14);delay(1.4);
          result = SPI.transfer(0x0C);delay(1.4);
          result = SPI.transfer(0x14);delay(1.4);
          result = SPI.transfer(0x14);delay(1.4);
          result = SPI.transfer(0x0C);delay(1.4);
          result = SPI.transfer(0x00);delay(1.4);
          result = SPI.transfer(0x14);delay(1.4);
          result = SPI.transfer(0x14);delay(1.4);
          result = SPI.transfer(0x18);delay(1.4);
          result = SPI.transfer(0x08);delay(1.4);
          result = SPI.transfer(0x04);delay(1.4);
          result = SPI.transfer(0x10);delay(1.4);
          result = SPI.transfer(0x0C);delay(1.4);
          result = SPI.transfer(0x18);delay(1.4);
          result = SPI.transfer(0x04);delay(1.4);
          result = SPI.transfer(0x08);delay(1.4);
          result = SPI.transfer(0x10);delay(1.4);
          result = SPI.transfer(0x14);delay(1.4);
          result = SPI.transfer(0x00);delay(1.4);
          result = SPI.transfer(0x00);delay(1.4);
          result = SPI.transfer(0x08);delay(1.4);
          result = SPI.transfer(0x04);delay(1.4);
          result = SPI.transfer(0x00);delay(1.4);
          result = SPI.transfer(0x14);delay(1.4);
          result = SPI.transfer(0x04);delay(1.4);
          result = SPI.transfer(0x18);delay(1.4);
          result = SPI.transfer(0x10);delay(1.4);
          result = SPI.transfer(0x18);delay(1.4);
          result = SPI.transfer(0x0C);delay(1.4);
          result = SPI.transfer(0x0C);delay(1.4);
          result = SPI.transfer(0x18);delay(1.4);
          result = SPI.transfer(0x14);delay(1.4);
          result = SPI.transfer(0x14);delay(1.4);
          result = SPI.transfer(0x08);delay(1.4);
          result = SPI.transfer(0x18);delay(1.4);
          result = SPI.transfer(0x04);delay(1.4);
          result = SPI.transfer(0x10);delay(1.4);
          result = SPI.transfer(0x04);delay(1.4);
          result = SPI.transfer(0x14);delay(1.4);
          result = SPI.transfer(0x0C);delay(1.4);
          result = SPI.transfer(0x08);delay(1.4);
          result = SPI.transfer(0x14);delay(1.4);
          result = SPI.transfer(0x08);delay(1.4);
          result = SPI.transfer(0x08);delay(1.4);
          result = SPI.transfer(0x10);delay(1.4);
          result = SPI.transfer(0x0C);delay(1.4);
          result = SPI.transfer(0x08);delay(1.4);
          result = SPI.transfer(0x18);delay(1.4);
          result = SPI.transfer(0x0C);delay(1.4);
          result = SPI.transfer(0x10);delay(1.4);
          result = SPI.transfer(0x18);delay(1.4);
          result = SPI.transfer(0x04);delay(1.4);
          result = SPI.transfer(0x10);
          
          delay(3);
          
          Serial.println("Starting Game!");
          result = SPI.transfer(0x30);
          delay(53);
          result = SPI.transfer(0x00);
          
          delay(250);

          Serial.println("Sending/Getting actual height...");
          result = SPI.transfer(0x02);delay(32);
          result = SPI.transfer(0x02);delay(32);
          result = SPI.transfer(0x20);delay(32);
          result = SPI.transfer(0x00);delay(32);
          result = SPI.transfer(0x00);delay(32);
          result = SPI.transfer(0x00);delay(32);
          result = SPI.transfer(0x00);delay(32);
          result = SPI.transfer(0x00);delay(32);
          result = SPI.transfer(0x00);delay(32);
          result = SPI.transfer(0x00);delay(32);
          result = SPI.transfer(0x00);delay(32);
          result = SPI.transfer(0x00);delay(32);
          
          
          SPI.endTransaction();
          break;
        
      case '0':
        ESP.restart();
        break;
    }
  };   
}
