/********************************************************************************
**El programa Blink fa que el LED de la placa Arduino Uno faigui intermitencia.**
**                   Aquest LED esta asociat al pin 13.                        **
**       El programa Blink permet variar la frequencia d'intermitencia.        **
********************************************************************************/

//*******  Includes  ************************************************************


//*******  Variables  ***********************************************************

int ledPlacaPin = 13;

// La funció Setup només s'executa un cop. Quan la placa s'encen o es fa reset.
void setup() {
  // inicialitza el pin digita 13 com a sortida.
  pinMode(ledPlacaPin, OUTPUT);
}

// La funció Loop es va repetin cada cop.
void loop() {
  digitalWrite(ledPlacaPin, HIGH);   // Encen el LED
  delay(1000);              // Espera un segon
  digitalWrite(ledPlacaPin, LOW);    // Apaga el LED
  delay(1000);              // Espera un segon
}
