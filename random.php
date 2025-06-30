<?php
include('config.php'); 
$message ="";
if (isset($_POST["create_acct_assig"])){
    $fullname = htmlentities($_POST['fullname']);
    $faculty = htmlentities($_POST['faculty']);
    $matricnumber = htmlentities($_POST['matric']);
    $password = htmlentities($_POST['password']);
    $confirm_password = htmlentities(trim($_POST['confirm_password']));
// validation of form 
if (empty($fullname) || empty($faculty) || empty($matric_number) || empty($password) || empty($confirm_password)) {
    $message = "Please fill all the fields.";
} else if 
(strlen($password)<6) {
    $message = "lenght of password should not be more than 6 character.";


}  else if ($password != $confirm_password) {
    $message = "Passwords do not match.";
}
else  {
    $mesaage ="Account created successfully";
}
$result =mysqli_query ($conn,"INSERT INTO random (fullname,faculty,matric,password,confirm_password) 
	VALUES ('$fullname', '$faculty', '$matricnumber',  '$password','$confirm_password')");
?> 
<!DOCTYPE html>
    <html lang="en">>
    <head>
    <meta charset="utf-8">
	<meta name="viewport" content="width=device-width, initial-scale=1">
	<title>CREATE ACCOUNT</title>
</head>
<body>
<?php if (!empty($message)) { echo "<p>$message</p>"; } 
?>
div>
	<form method="POST" action="random.php">
		<table>
			<tr>
				<td>Full Name</td><td><input type="text" placeholder="Enter your fullname" class="input" name="fullname"></td>
	</tr>

			<tr>
				<td>Matric Number</td><td><input type="text" placeholder="Enter your matric number" class="input" name="matric"></td>
			</tr>

			<tr>
				<td>Matric Number</td><td>
				<select name="faculty" class="select">
					<option>--Select Department</option>
					<option>Computer Sciences</option>
					<option>Microbiology</option>
					<option>Biochemistry</option>
					<option>Physics</option>
					<option>Geology</option>
					<option>economics</option>
                    </select>
				</td>
			</tr>

			<tr>
				<td>Date of Birth</td><td><input type="date" class="input" name="dob"></td>
			</tr>

			<tr>
				<td>Gender</td><td>
				<select name="sex" class="select">
					<option>--Select Gender</option>
					<option>Female</option>
					<option>Male</option>
				</select>
				</td>
			</tr>

			<tr>
				<td>Email</td><td><input type="email" placeholder="Enter your email addresss" class="input" name="email"></td>
			</tr>

			<tr>
				<td>Password</td><td><input type="password" placeholder="Enter your password" class="input" name="password"></td>
	</tr>
	<Tr>
		<td>confirm password</td><td><input type="password"placeholder="confirm password" class= "input" name="confirm_password" class="input" name="confirm_password"></td>
	</tr>
			<tr>
				<td></td><td><input type="submit" name="create_account" value="Create Account" class="sub"></td>
			</tr>
		</table>
	</form>
	<div style="width:25%; text-align:center; font-weight: bold; padding-top: 30px; padding-bottom: 30px; background: #f5f5f5; color: green; font-size: 22px; margin: 30px 100px;">
		<?php echo @$message; ?>
	</div>
</div>

</body>
</html>

    
