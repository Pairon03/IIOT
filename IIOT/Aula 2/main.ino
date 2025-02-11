#include <Wifi.h>
#include <WebServer.h>
#include "LandingPage.h"

#define WIFI_NAME "Esp32WebServer"
#define WIFI_PASS "senaimange"

WebServer server(80) //Portas padrões 80

void setup(){
    Serial.begin(9600);

    Wifi.mode(WIFI_OFF);
    delay(1000);
    Wifi.mode(WIFI_AP);
    delay(1000);
    
    IPAddress staticIP(192,168,10,17);
    IPAddress gateway(192,168,10,1);
    IPAddress subnet(255,255,255,0);

    Wifi.softAPConfig(staticIP, gateway, subnet);
    Wifi.softAP(WIFI_NAME, WIFI_PASS);

    Serial.print("IP Configurado: ");
    Serial.println(Wifi.softAPIP());

    /* WEB SERVER: */
    server.on("/", HTTP_GET, [](AsyncWebServerRequest *request){
        request -> send_P(200, "text/html", index_html);
    });
    
    server.onNotFound(notFound);

    server.begin();

}

void notFound (AsyncWebServerRequest *request){
    request -> send_P(404, "text/html", notFound_html);
}
