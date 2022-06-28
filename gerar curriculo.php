<?php
$modelo = $_POST['MODELO']
if ($_FILES['FOTO']['tamanho'] > 0 ) {
	// obtem o conteúdo da imagem( conteúdo binário)
	$conteudo = file_get_contents($_FILES['foto']['tpm_name']);
	$tipo= pathinfo($_FILES['foto']['tpm_name'], PATHINFO_EXTENSION);
	$foto = 'dados:imagem/'.$ tipo. 'base64,'. base64_encode($ conteudo);

}

$dados = $arrayName = array (
'foto'=> $ foto,
'nome'=> $ _POST['nome'] ,
'sobrenome'=> $ _POST ['sobrenome'] ,
'cargo'=> $ _POST ['cargo'] ,
'endereco'=>  $ _POST['endereco'] ,
'telefone'=> $ _POST['telefone'],
'e-mail'=> $ _POST['e-mail'] ,
'resumo'=> $ _POST['resumo'] ,
'formacoes'=> isset ($ _POST['formacao-curso'])? 

                  matriz(
                  	'cursos'=> $ _POST ['formacao-curso'] ,
                  	'instituicoes'=> $ _POST ['formacao-instituicao'] ,
                  	'conclusoes'=> $ _POST ['formacao-conclusao']
                  ) : null, // se o usuario nao adicionar as experiencias , esse elemento sera nulo

                  'experiencias'=> isset($ _POST ['experiencia-cargo'])?

                     matriz(
                     	'cargas'=> $ _POST ['experiencia-carga'],
                     	'empresas'=> $ _POST ['experiencia-empresa'],
                     	'inicios'=> $ _POST ['experiencia-inicio'],
                     	'fins'=> $ _POST ['experiencia-fim'],
                     )) null //se o usuario não adicionar nenhuma experiencia , esse elemento ficara nulo
);

require_once ("modelos/ { $ modelo} .php ");










