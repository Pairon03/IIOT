#define BLIGA_PIN 9
#define INFRA_PIN 1
#define JAN1_PIN 2
#define JAN2_PIN 3
#define SALA_PIN 4
#define COZINHA_PIN 5
#define QUINTAL_PIN 6
#define CORREDOR_PIN 7
#define SIRENE_PIN 8

// configurações: 
void setup()
{
    pinMode(BLIGA_PIN,INPUT);
    pinMode(INFRA_PIN,INPUT);
    pinMode(JAN1_PIN,INPUT);
    pinMode(JAN2_PIN,INPUT);
    pinMode(SALA_PIN,INPUT);
    pinMode(COZINHA_PIN,INPUT);
    pinMode(QUINTAL_PIN,INPUT);
    pinMode(CORREDOR_PIN,INPUT);
    pinMode(SIRENE_PIN,OUTPUT);
}

//lógica:
void loop()
{
       /*I-0's:
    int bliga = digitalRead(BLIGA_PIN);
    int infra = digitalRead(INFRA_PIN);
    int jan1 = digitalRead(JAN1_PIN);
    int jan2 = digitalRead(JAN2_PIN);
    int sala = digitalRead(SALA_PIN);
    int cozinha = digitalRead(COZINHA_PIN);
    int quintal = digitalRead(QUINTAL_PIN);
    int corredor = digitalRead(CORREDOR_PIN);


    if (bliga == 1){
        if (infra == 0 or jan1 == 0 or jan2 == 0 or
        sala == 1 or cozinha == 1 or quintal == 1 or
        corredor == 1){
            digitalWrite(SIRENE_PIN = 1);
        }            
        else {
            digitalWrite(SIRENE_PIN = 0);
        }
    
     } else {
        digitalWrite(SIRENE_PIN, LOW);   // Desativa a sirene caso o BLIGA_PIN esteja desativado
    }    

}
