
<!DOCTYPE html>


<html lang="pt-br">
<cabeça >
    <meta charset=" UTF-8">
    <meta name=" viewport" content="largura=largura do dispositivo, escala inicial=1.0" >
    <meta http-equiv=" Conteúdo compatível com X-UA" =" ie=edge " >
    <title>Currículo Impressão </title>
    <link rel="folha de estilo" href="../css/styleCurriculo.css " >
</cabeça>
<corpo>
    <principal>

<section class="topo">
    <img src="<?=$dados['foto']; ?> alt="foto" class="foto">
    
         <h1> <?= $ dados ['nome'];?> </h1>
         <h2> <?= $ dados ['sobrenome']; ?> </h2>
         <h3> <?= $ dados ['cargo']; ?> </h3>
         <p id="data"> <span>Dados de Nascimento</span> <?= $dados ['data-nascimento']; ?> </p>

     </section>
     <section class="principal">
         <h4>resumo</h4>
         <p><?=$dados['resumo']</p>
            <?php if($dados['cidade'])?>

                 </section>





        </section>
        <section class="principal">
            <h4> resumo</h4>
            <p><?= $dados['resumo']?> </p>
            <?php if($dados ['endereco']){?>
            <h4>Endereço</h4>

            }
        



</section>
<section class="lateral">
    <?php if ($dados[formacoes]){?>}
    <h2>Formação</h2>

    <p><?=$dados['formacoes']; ?></p>
    <ul class=" lista-topicos">
         <?php if($dados['formacoes']) { ?>
         <li>
            <div>
                <h4> <?=$dados['formacoes']['cursos'][$i] ?></h4>
                <p><?=$dados['formacoes']['instituicoes'][$i]?></p>
                <p><?=$dados['formacoes']['conclusoes'][$i]?></p>
            </div>

</li>
<?php} ?>
                
                </ul>
                <?php}?>


<?php if ($ dados ['experiências']){ ?>
             <h3>Experiência</h3>

             <ul class="lista-tópicos">
              <?php for($ i =0 ;$i<sizeof( $dados ['experiencias']['cargos']);$i ++) {?>
                <li>
                    <div>
                        <h4> <?= $dados ['experiencias]['cargos'][$i] ?></h4>
                        <p id ="data"><?= $ dados['experiencias']['empresas'] </p>
                        <p id="data"> <?= $ dados['experiencias']['inicios'] [$i]?> a <?=$  dados ['experiencias']['fins'][$i]?></p>
                       </div>
                   </li>
                   <?php} ?>
               </ul>
        <?php} ?>
    </seção>
</principal>
<script> janela.imprimir () ;</script>

</corpo>
</html>




   

                     
                               
                        
             
            