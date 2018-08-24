<?php
$name=$_POST["NAME"];
$age=$_POST["PASSWORD"];
$branch=$_POST["BRANCH"];
$year=$_POST["YEAR"];
$sem=$_POST["SEM"];
$prev_sem_per=$_POST["PREV_SEM_PER"];
$conn=mysqli_connect("localhost","root","","test");
$sql="INSERT INTO `Student details`(`NAME`, `AGE`, `BRANCH`, `YEAR`, `SEM`, `PREV_SEM_PER`) VALUES ('$name','$age','$branch','$year','$sem','$prev_sem_per')";
$result=mysqli_query($conn,$sql);
echo "Successful";
?>
