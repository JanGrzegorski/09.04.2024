<?php
if(isset($_POST['select']) && $_POST['select'] !=0){
    include_once("polaczenie.php");
    $ido = $_POST['select'];
    $polaczenie->query("DELETE FROM owoce WHERE ido=$ido");
    $polaczenie=null;
}
header("location: index.php")
?>