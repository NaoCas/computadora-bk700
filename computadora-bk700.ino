//no encunetro el corregido, si ven esto asì es porque no lo encontré :(
//librerias y asì
unsigned long tiempo=0;
unsigned long otrotiempo=1000;

void setup() {
}

void loop() {

//despues de fase 1 :0
  if(millis() - otrotiempo >= tiempo)
{
    otrotiempo = millis();
}

//despues de lo de fase 2
  archivo.print(otrotiempo);
  archivo.print(',');
