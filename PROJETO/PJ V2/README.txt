==========> GRUPO MACKENZIE <==========

Alunos:
Luan Lemos - 32085109 
Jones Czinczel - 32089041

=======> Descricão <=======

O programa foi compilado em GCC! 

O Projeto foi baseado no site que o Professor passou (https://hpc-tutorials.llnl.gov/posix/), pdfs e nas aulas; realizamos a atividade e acreditamos ter atingido o objetivo desejado.

=======> Compilar <=======

Para utilizar o programa:
1º Crie a .bin dos codigos utilizando o comando gcc Projeto_omp.c -o Projeto_omp / gcc Projeto_Serial.c -o Projeto_Serial.

2º Etapa executamos o programa com o comando ./Projeto_omp.c*/ | ./Projeto_Serial.c*/ e com isso conseguirá rodar o programa. 

=======> Considerações <=======

Usamos o número destinado ao dado para fazer a divisão da série de Taylor pela quantidade de threads. Ao fim do código ele irá printar o tempo que levou para ser executar e faz a comparação com tempo serial e o resultado de tudo isso é o speedup.


====> Resultado serial <====

Result: 5.19
Execution Time: 0.084000


====> Resultado pthread <====

 Hello from thread 2 of 0.405
 Hello from thread 0 of 19.691
 Hello from thread 3 of 0.288
 Hello from thread 4 of 0.223
 Hello from thread 1 of 0.693
 Execution Time: 21.3005

=======> Calculo <=======
Result: 16.6953

21,3005/16,6953 = 1,2758

Speedup = 1,2758