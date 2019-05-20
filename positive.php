<html>
<body>
<form method="post">
<input type="text" name="n"> <br>
<input type="submit" value="check"> 
</form>
</body>
</html>
<?php
$num=$_POST['n'];
if($num>0)
{
echo $num. "Positive";
}
elseif($num<0)
{
echo $num. "Negative";
}
elseif($num==0)
{
echo $num. "Zero";
}
?>
