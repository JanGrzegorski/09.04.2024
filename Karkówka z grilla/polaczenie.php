<?php
$serwer = 'localhost';
$dbname = 'baza09042024';
$username = 'root';
$password = '';
$port = 3306;
try{
    $polaczenie = new PDO('mysql:host='.$serwer.';dbname='.$dbname.';port='.$port.';charset=utf8', $username, $password);
    echo("<h1>Dołączono do karkówki z grilla</h1>");
}
catch(PDOException $event){
    echo("<h1>Nie dołączono do karkówki z grilla</h1>");
    echo($event);
    die();
}
?>