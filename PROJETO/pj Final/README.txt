==========> GRUPO MACKENZIE <==========

Alunos:
Luan Lemos - 32085109 
Jones Czinczel - 32089041
 
=======> Descricão <=======

O programa foi compilado em GCC! 

O Projeto foi baseado no site que o Professor passou (https://hpc-tutorials.llnl.gov/posix/), pdfs e nas aulas; realizamos a atividade e acreditamos ter atingido o objetivo desejado.

=======> Compilar <=======

Para utilizar o programa:
1º Crie a .bin dos codigos utilizando o comando gcc −g −Wall −fopenmp −o Projeto_final Projeto_final.c

2º Etapa executamos o programa com o comando time ./Projeto_final 4 e com isso conseguirá rodar o programa. 

=======> Considerações <=======

Usamos o número destinado ao dado para fazer a divisão da série de Taylor pela quantidade de threads. Ao fim do código ele irá printar o tempo que levou para ser executar e faz a comparação com tempo serial e o resultado de tudo isso é o speedup.


====> Resultado serial <====

Result: 5.19


====> Resultado opm <====

Final Result: 23.603

=======> Calculo <=======

23,603/16,6953 = 1,413751

Speedup = 1,413751