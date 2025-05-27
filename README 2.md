# Simulação de Movimento de Peças de Xadrez em C

Este projeto simula os movimentos de quatro peças do jogo de xadrez: **Torre**, **Bispo**, **Rainha** e **Cavalo**, utilizando estruturas de repetição em linguagem C.

## 🎯 Objetivo

Demonstrar o uso das estruturas de repetição `for`, `while`, `do-while` e loops aninhados na linguagem C.

## ♟️ Peças Simuladas

- **Torre**  
  Movimento: 5 casas para a direita  
  Estrutura usada: `for`

- **Bispo**  
  Movimento: 5 casas na diagonal para cima e à direita  
  Estrutura usada: `while`

- **Rainha**  
  Movimento: 8 casas para a esquerda  
  Estrutura usada: `do-while`

- **Cavalo**  
  Movimento: 2 casas para baixo e 1 para a esquerda (formando um "L")  
  Estrutura usada: `for` + `while` (loops aninhados)

## ⚙️ Como executar

1. Clone o repositório:
   ```bash
   git clone https://github.com/VMeirola/movimento-xadrez.git
   ```

2. Acesse a pasta:
   ```bash
   cd movimento-xadrez
   ```

3. Compile o programa:
   ```bash
   gcc xadrez.c -o xadrez
   ```

4. Execute o programa:
   ```bash
   ./xadrez
   ```

## 📁 Arquivo

- `xadrez.c`: Código-fonte contendo a simulação dos movimentos.

## 👨‍🎓 Autor

**Victor de Souza Meirola**  
Curso: Gestão da Tecnologia da Informação  
Atividade: Movimentação de Peças de Xadrez - Parte 2
