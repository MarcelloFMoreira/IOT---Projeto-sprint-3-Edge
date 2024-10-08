<h1>IoT Car Proximity Detection System</h1>
    
<h2>Descrição do Projeto</h2>
<p>Este projeto utiliza a tecnologia IoT para monitorar a proximidade de objetos ou veículos ao redor de um carro por meio de sensores ultrassônicos. Usamos o código em C++ para processar e transmitir as informações, proporcionando uma solução de monitoramento em tempo real, que pode ser utilizada para melhorar a segurança de veículos em movimento.</p>
 <h2>Funcionalidades</h2>
 <ul>
   <li>Monitoramento em tempo real da proximidade entre o carro e outros objetos ou veículos.</li>
   <li>Utilização de sensores ultrassônicos HC-SR04 para medir a distância com precisão.</li>
   <li>Conexão com Arduino para processamento dos dados dos sensores.</li>
   <li>Código em C++ para controlar o sistema de detecção de proximidade.</li>
 </ul>
 <h2>Componentes Utilizados</h2>
  <ul>
   <li><strong>Arduino Uno</strong>: Controlador principal para processar as leituras dos sensores.</li>
   <li><strong>Sensores Ultrassônicos HC-SR04</strong>: Responsáveis por medir a distância entre o carro e objetos próximos.</li>
   <li><strong>Jumpers</strong> e <strong>Protoboard</strong> para a conexão dos componentes.</li>
   <li><strong>Código em C++</strong>: Responsável pela lógica de controle e cálculo das distâncias.</li>
 </ul>
   <h2>Como Funciona</h2>
    <ol>
        <li>Os sensores HC-SR04 enviam ondas ultrassônicas para detectar a distância de objetos.</li>
        <li>O Arduino coleta os dados dos sensores, calcula a distância e exibe os resultados no monitor serial. Em seguida, envia os dados para a internet por meio do Node-RED, utilizando o protocolo MQTT. </li>
    </ol>

<h2>Vídeo Explicativo</h2>
(https://www.youtube.com/watch?v=40lGbScqnio)

   <h2>Futuras Implementações</h2>
    <ul>
        <li>Integração com um display ou painel de controle no veículo.</li>
        <li>Implementação de alarmes visuais ou sonoros em caso de proximidade excessiva.</li>
        <li>Conexão com redes IoT para monitoramento remoto e armazenamento de dados.</li>
        <li><strong>Inclusão dos dados coletados pelos sensores em uma plataforma de live de corridas de Fórmula E</strong>, permitindo que os usuários acompanhem em tempo real a distância entre carros durante a corrida, aprimorando a experiência de visualização.</li>
    </ul>

<h2>Integrantes</h2>
<table>
  <thead>
    <tr>
      <th>Desenvolvedores</th> 
      <th>Icon</th>
      <th>RM</th>
    </tr>
  </thead>
  <tbody>
    <tr>
      <td>Adolfo Kentaro</td>
      <td>
        <a href="https://github.com/MarcelloFMoreira">
          <img src="https://avatars.githubusercontent.com/u/125566679?v=4" height="50" style="max-width: 100%;">
        </a>
      </td>
      <td>RM556884</td>
    </tr>
    <tr>
      <td>Bruno Otávio</td>
      <td>
        <a href="https://github.com/MarcelloFMoreira">
          <img src="https://avatars.githubusercontent.com/u/162759544?v=4" height="50" style="max-width: 100%;">
        </a>
      </td>
      <td>RM556196</td>
    </tr>
    <tr>
      <td>Guilherme Flores</td>
      <td>
        <a href="https://github.com/MarcelloFMoreira">
          <img src="https://avatars.githubusercontent.com/u/111022630?v=4" height="50" style="max-width: 100%;">
        </a>
      </td>
      <td>RM554948</td>
    </tr>
    <tr>
      <td>Luiz Fernando</td>
      <td>
        <a href="https://github.com/MarcelloFMoreira">
          <img src="https://avatars.githubusercontent.com/u/84513178?v=4" height="50" style="max-width: 100%;">
        </a>
      </td>
      <td>RM555561</td>
    </tr>
    <tr>
      <td>Marcello Moreira</td>
      <td>
        <a href="https://github.com/MarcelloFMoreira">
          <img src="https://avatars.githubusercontent.com/u/161846509?v=4" height="50" style="max-width: 100%;">
        </a>
      </td>
      <td>RM557531</td>
    </tr>
  </tbody>
</table>


