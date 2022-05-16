Controle de acesso à região critica para a variável global compartilhada

Variável global compartilhada: 
<b>rank_r.<b>

Foi implementado o #pragma omp critical para evitar uma condição de corrida. Então, se uma thread está no que nomeamos como "seção crítica", nenhuma outra thread adicional poderá estar nessa mesma seção.

Para efetuar as somas necessárias dentro da função Taylor, usamos a variável "sum" e só depois a variável compartilhada receberá o valor acumulado:
<b>#pragma omp critical<b>

<b>global_result_p += sum;<b>