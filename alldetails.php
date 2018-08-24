<?php
$conn=mysqli_connect("localhost","root","");
$sql="SELECT * FROM `Student details`";
$result=mysqli_query($conn,$sql);
echo "Details of all the students are printed";
?>
