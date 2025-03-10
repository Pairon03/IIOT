#define BLIGA_PIN 9
#define INFRA_PIN 1
#define JAN1_PIN 2
#define JAN2_PIN 3
#define SALA_PIN 4
#define COZINHA_PIN 5
#define QUINTAL_PIN 6
#define CORREDOR_PIN 7
#define SIRENE_PIN 8


bool bliga = 0, infra = 0, jan1 = 0;
bool jan2 = 0, sala = 0, cozinha = 0;
bool quintal = 0, corredor = 0, sirene = 0;

// configurações: 
void setup()
{
    pinMode(BLIGA_PIN,INPUT_PULLUP);
    pinMode(INFRA_PIN,INPUT_PULLUP);
    pinMode(JAN1_PIN,INPUT_PULLUP);
    pinMode(JAN2_PIN,INPUT_PULLUP); 
    pinMode(SALA_PIN,INPUT_PULLUP);
    pinMode(COZINHA_PIN,INPUT_PULLUP);
    pinMode(QUINTAL_PIN,INPUT_PULLUP);
    pinMode(CORREDOR_PIN,INPUT_PULLUP);
    pinMode(SIRENE_PIN,OUTPUT);
}

//lógica:
void loop()
{
       //I-0's:
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
            digitalWrite(SIRENE_PIN, HIGH);  // Ativa a sirene
        } else {
            digitalWrite(SIRENE_PIN, LOW);  // Desativa a sirene
        }
    } else {
        digitalWrite(SIRENE_PIN, LOW);   // Desativa a sirene caso o BLIGA_PIN esteja desativado
    } 

}
