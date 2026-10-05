# ESP32 LED Blink

Projeto simples para ESP32 usando o framework **ESP-IDF**. O programa pisca o LED embutido da placa conectado ao GPIO 2.

## Requisitos

- ESP-IDF instalado e configurado
- Placa ESP32 conectada ao computador

## Compilar e gravar

No diretório do projeto, execute:

```bash
idf.py build
idf.py -p PORT flash monitor
```

Substitua `PORT` pela porta serial da sua placa, como `/dev/ttyUSB0`.

## Funcionamento

O LED acende por 50 ms e apaga por 50 ms continuamente.