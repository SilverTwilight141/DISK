<!DOCTYPE html>
<html>
<head>
	<title>Login</title>
	<style>
		.container{
			margin: 0;
			align-items: center;
			 justify-content: center;
			display-flex: flex;
			padding-top: 250px;
			padding-left: 550px;
			left: 200px;

		}

		.login {
			background-image: url('793ca866cdd034589a6ef8a0a526283e.jpg');
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

		input[type=submit]{
			color: lime;
			background-color: grey;
			border-radius: 10px;
		}
		input[type=submit]:hover{
			color: red;
			cursor: pointer;
		}
		input[type=text],input[type=password]{
			color: green;
			width: 30%;
			height: 30%;
			border: solid green 2px;
			border-radius: 10px;

		}
		input[type=password]:hover{
		background-color: grey;
		}
		input[type=text]:hover{
			background-color: grey;
		}
	</style>
</head>
<body>
	<div class="container">
		<div class="login">
	<h2>Sign In</h2>
	<form action="login.php" method="post">
		<label for="username">Username:</label><br>
		<input type="text" id="username" name="username"><br>
		<label for="password">Password:</label><br>
		<input type="password" id="password" name="password"><br><br>
		<input type="submit" value="Login">
	</form>
</div>
</div>

</body>
</html>