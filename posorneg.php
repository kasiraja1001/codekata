<html>
<body>
<form method="post">
Enter the number <input type="text" name="n"> <br>
Check Output <input type="submit" value="check"> 
</form>
</body>
</html>
<?php
$num=$_POST['n'];
if($num>0)
{
echo $num. "  is positive number";
}
elseif($num<0)
{
echo $num. " is negative number";
}
elseif($num==0)
{
echo $num. " it is zero";
}
else
{
echo $num.  "  is invalid number";
}
?>
