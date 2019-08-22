<?php
$servername="121.200.55.60:3307";
$username="2019UIT1165";
$password="2019UIT1165";
$dbname="2019UIT1165";
$conn=new mysqli($servername,$username,$password,$dbname);
if($conn->connect_error)
{  
   die("connection failed:".$conn->connect_error);
}
$sql="SELECT s_no,enrollment_no,student_name,course_name FROM students";
$result=$conn->query($sql);
if($result->num_rows>0)
{
   while($row=$result->fetch_assoc())
{  echo "s_no:".$row["s_no"]."-enrollment_no:".$row["enrollment_no"]."".$row["student_name"]."".$row["course_name"]."<br/>";
}
}else
{
 echo "0 results";
}
$conn->close();
?>



