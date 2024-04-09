<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <link rel="stylesheet" href="style.css">
    <title>Karkówka</title>
</head>
<body>
    <?php
        include_once("polaczenie.php");
    ?>
    <form action="delete.php" method="post">
        <select name="select" onchange="this.form.submit()">
            <option value="">Jaki owoc wariacie?</option>
            <?php
                $zapytanie = "SELECT ido,nazwa,kolor FROM owoce";
                foreach($polaczenie->query($zapytanie) as $wiersz){
                   $ido = $wiersz['ido'];
                   $nazwa = $wiersz['nazwa'];
                   $kolor = $wiersz['kolor'];
                   echo <<<TX
                   <option value="$ido">$nazwa $kolor</option>
                   TX;
                }
            ?>
        </select>
    </form>
    <div class="sigma"> Jest SiGmA!!!</div>
    <?php 
    $polaczenie = null;
    ?>
</body>
</html>