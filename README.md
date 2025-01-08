<!DOCTYPE html>
<html lang="pt-BR">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Calculadora de IMC em C++</title>
    <style>
        body {
            font-family: Arial, sans-serif;
            line-height: 1.6;
            margin: 0;
            padding: 0;
            background-color: #f4f4f4;
            color: #333;
        }
        header {
            background: #007acc;
            color: white;
            padding: 1rem 0;
            text-align: center;
        }
        .container {
            max-width: 800px;
            margin: 20px auto;
            background: white;
            padding: 20px;
            border-radius: 8px;
            box-shadow: 0 0 10px rgba(0, 0, 0, 0.1);
        }
        h1, h2, h3 {
            color: #007acc;
        }
        code, pre {
            background: #f4f4f4;
            padding: 5px;
            border: 1px solid #ddd;
            border-radius: 5px;
            display: block;
            margin: 10px 0;
        }
        ul {
            padding-left: 20px;
        }
        footer {
            text-align: center;
            margin-top: 20px;
            font-size: 0.9em;
            color: #555;
        }
    </style>
</head>
<body>
    <header>
        <h1>Calculadora de IMC em C++</h1>
    </header>
    <div class="container">
        <h2>Sobre o projeto</h2>
        <p>Este é um projeto simples em C++ que calcula o Índice de Massa Corporal (IMC) de uma pessoa e exibe uma classificação com base no resultado.</p>
        
        <h2>Funcionalidades</h2>
        <ul>
            <li>Solicita ao usuário: Nome, idade, peso e altura.</li>
            <li>Exibe uma saudação personalizada com os dados fornecidos.</li>
            <li>Determina se o usuário é maior ou menor de idade.</li>
            <li>Calcula o IMC com base na fórmula: <code>IMC = peso (kg) / altura² (m²)</code>.</li>
            <li>Classifica o IMC em: Abaixo do peso, Peso normal, Sobrepeso e Obesidade.</li>
        </ul>

        <h2>Como usar</h2>
        <ol>
            <li>Compile o programa usando um compilador compatível com C++11 ou superior:
                <pre>g++ -o calculadora_imc calculadora_imc.cpp</pre>
            </li>
            <li>Execute o programa no terminal:
                <pre>./calculadora_imc</pre>
            </li>
            <li>Insira os dados solicitados e veja a classificação do IMC.</li>
        </ol>

        <h2>Exemplo de uso</h2>
        <h3>Entrada:</h3>
        <pre>

Qual é o seu nome? João
Quantos anos você tem? 25
Qual o seu peso? 70
Qual a sua altura? 1.75
</pre>
<h3>Saída:</h3>
<pre>
Olá João! Você tem 25 anos, pesa 70kg e tem 1.75 de altura.
Você é maior de idade.
Classificação: Peso normal
</pre>

        <h2>Melhorias futuras</h2>
        <ul>
            <li>Adicionar validações para entradas inválidas.</li>
            <li>Criar uma interface gráfica ou versão web do programa.</li>
            <li>Permitir salvar os resultados em um arquivo ou banco de dados.</li>
        </ul>

        <h2>Requisitos</h2>
        <ul>
            <li>Compilador C++ compatível com C++11 ou superior.</li>
        </ul>

        <footer>
            Desenvolvido por Douglas | Projeto de estudos em C++
        </footer>
    </div>

</body>
</html>
