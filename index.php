<?php include 'connection.php' ?>
<?php

if(isset($_POST['submit'])){
	$users = $_POST['user'];
	$passs = $_POST['pass'];

	$sql = "SELECT * FROM 	`users` WHERE `Username` = ? AND `Password` = ?";
	$stmt = $conn->prepare($sql);
	$stmt -> bind_param("ss",$users,$passs);
	$stmt->execute();
	$result = $stmt->get_result();
	$row = $result->fetch_assoc();

	if ($passs != @$row['Password'] && $users != @$row['Username']) {
		echo "Incorrect Credentials, Try Again!";
	}else{
		header("Location:dashboard.php");
	}
	
	

}
?>
<!DOCTYPE html>
<html>
<head>
	<title>LOGIN FORM</title>
<h2>PHP LOGIN FORM</h2>
<style>
	body{
		background-color: grey;
		margin: 0;
			align-items: center;
			 justify-content: center;
			display-flex: flex;
			padding-top: 250px;
			padding-left: 550px;
			left: 200px;
	}
	.login-form{
		 background-size: 600px;
			 background-repeat: no-repeat;
			 background-position: center;
			color: red;
			text-align: center;
			border: solid 2px green;
			border-radius: 30px;
			width: 600px;
			height: 250px;
	}
	.form-group{
		padding: -10px;
	}
	h2{
		color: skyblue;
	}
	p{
		color: skyblue;
	}
	button[type=submit]{
		border: 2px solid skyblue;
		border-radius: 10px;
		background-color: white;
	}
	a {
		color: skyblue;
		border: solid 2px skyblue;
		background-color: white;
		border-radius: 10px;
	}
</style>
<body>
	<div class="container">
<div class="login-form">
	
	<form method="post" class="form-group">
		<div class="form-group">
			<input type="text" name="user" placeholder="USERNAME!"><br><br>
        </div>

        	<div class="form-group">
			<input type="password" name="pass" placeholder="PASSWORD!"><br><br>
        </div>

        	<div class="form-group">
			<button type="submit" name="submit">LogIn</button>
		</div>
	</form>
	<br><br>
	<div class="text-center">
		<span class="small"> </span><p>Not have an Account? <a class="font-weight-bold small" href="register.php">REGISTER</a></p><br><br>
	</div>
	<div class="text-center">

		<span class="small">Powered by: Cherry Mobile!</span>
	</div>
	<div class="text-center">
	</div>
</div>
</div>

</body>
</html>