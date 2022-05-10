==========> GRUPO MACKENZIE <==========

Alunos:
Luan Lemos - 32085109 
Jones Czinczel - 32089041

=======> Descricão <=======

O programa foi compilado em GCC! 

O Projeto foi baseado no site que o Professor passou (https://hpc-tutorials.llnl.gov/posix/), pdfs e nas aulas; realizamos a atividade e acreditamos ter atingido o objetivo desejado.

=======> Compilar <=======

Para utilizar o programa:
1º Crie a .bin dos codigos utilizando o comando gcc Projeto_pthread.c -o Projeto_pthread / gcc Projeto_Serial.c -o Projeto_Serial.

2º Etapa executamos o programa com o comando ./Projeto_pthread.c*/ | ./Projeto_Serial.c*/ e com isso conseguirá rodar o programa. 

=======> Considerações <=======

Usamos o número destinado ao dado para fazer a divisão da série de Taylor pela quantidade de threads. Ao fim do código ele irá printar o tempo que levou para ser executar e faz a comparação com tempo serial e o resultado de tudo isso é o speedup.


====> Resultado serial <====

Result: 5.19
Execution Time: 0.084000


====> Resultado pthread <====

 Hello from thread 0 of 3.816 - sum of Taylor - 
 Hello from thread 1 of 4.499 - sum of Taylor - 
 Hello from thread 2 of 4.901 - sum of Taylor - 
 Hello from thread 3 of 5.187 - sum of Taylor - Execution Time w/ 2 parallel threads: 0.519000

=======> Calculo <=======
Resultado Pthread = 0,519000
Resultado Serial = 0.084000

0,084000/0,519000 = 0,16184

Speedup = 0,16184