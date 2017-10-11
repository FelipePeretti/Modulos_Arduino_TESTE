  #include <SD.h>
  File arquivoTXT;

  // 10 (SS)
  // 11 (MOSI)
  // 12 (MISO)
  // 13 (SCK)

  void setup(){

    Serial.begin(9600);
    SD.begin(10);      // o parametro e o pino conectado ao CS do modulo
  
    arquivoTXT = SD.open("texto.txt", FILE_WRITE);
    
    if (arquivoTXT) {
      arquivoTXT.println("Teste de arquivos TXT em SD no Arduino");
      arquivoTXT.println("https://github.com/FelipePeretti");
      arquivoTXT.close();
      Serial.println("OK.");
    } else {
      Serial.println("Erro ao abrir ou criar o arquivo texto.txt.");
    }
  }


  void loop(void) { 
      // Loop
  }
