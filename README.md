CP Edge-Computing
## Sensor de Luminosidade para Preservação de Vinhos  Vinheria Agnello

## Descrição
Este projeto foi criado para ajudar a monitorar e controlar os níveis de luz no armazenamento de vinhos, garantindo a qualidade dos rótulos. Ele usa um sensor de luminosidade e um Arduino, com alertas visuais e sonoros quando a luz está fora dos níveis ideais.

## 💡 Objetivo

A luz pode prejudicar a qualidade do vinho. Este sistema ajuda a Vinheria Agnello a manter as condições ideais de luz para garantir que os vinhos fiquem armazenados corretamente.

## ⚙️ Componentes

- 1x Arduino Uno (ou compatível)
- 1x Sensor LDR (Sensor de luminosidade)
- 1x Buzzer piezoelétrico
- 3x LEDs (Vermelho, Amarelo, Verde)
- 4x Resistores 
- Jumpers e protoboard

## 📦 Dependências

Arduino IDE: Para programar o microcontrolador Arduino.
Placa Arduino: Arduino Uno ou qualquer placa compatível com a plataforma Arduino.

## 🔧 Como Usar

1. Conecte os componentes seguindo este mapeamento:
   - LDR → A5 
   - LED Verde → D11
   - LED Amarelo → D12
   - LED Vermelho → D13
   - Buzzer → D7

2. Copie o código para a IDE do Arduino.

3. Carregue o código no Arduino.

4. Abra o monitor serial para ver os níveis de luminosidade em tempo real.

## 🚦 Como Funciona

- **Luminosidade Alta (> 600)**:
  - LED Vermelho aceso
  - Buzzer soa intermitentemente
  - luz forte, prejudicial ao vinho

- **Luminosidade Moderada (400 - 600)**:
  - LED Amarelo aceso
  - Buzzer desligado
  - Nível de luz aceitável, mas deve ser monitorado

- **Luminosidade Baixa (< 400)**:
  - LED Verde aceso
  - Buzzer desligado
  - Ambiente adequado

## 🏷️ Caso de Uso: Vinheria Agnello

Este sistema é usado na Vinheria Agnello para monitorar o armazenamento dos vinhos e manter as condições ideais. A automação ajuda a manter a qualidade dos vinhos e garante a melhor experiência para os clientes.
