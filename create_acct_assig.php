<?php
// Initialize message variable
$message = "";

// Check if the form is submitted
if (isset($_POST['create-acct_assig'])) {
    // Collect and sanitize form data
    $fullname = htmlentities(trim($_POST['fullname']));
    $faculty = htmlentities(trim($_POST['faculty']));
    $matric_number = htmlentities(trim($_POST['matric']));
    $password = htmlentities(trim($_POST['password']));
    $confirm_password = htmlentities(trim($_POST['confirm_password']));

    // Validation of form fields
    if (empty($fullname) || empty($faculty) || empty($matric_number) || empty($password) || empty($confirm_password)) {
        $message = "Please fill all the fields.";
    } elseif (strlen($password) < 6) {
        $message = "Password length must be at least 6 characters.";
    } elseif ($password !== $confirm_password) {
        $message = "Passwords do not match.";
    } else {
        // You can insert the data into the database or perform any other operations here
        // For now, we will just display a success message
        $message = "Account created successfully!";
    }
}
?>

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Create Account</title>
</head>
<body>

<h2>Create an Account</h2>

<!-- Display the message (if any) -->
<?php if (!empty($message)) { echo "<p>$message</p>"; } ?>

<!-- Account creation form -->
<form action="" method="POST">
    <label for="fullname">Full Name:</label>
    <input type="text" id="fullname" name="fullname" required><br><br>

    <label for="faculty">Faculty:</label>
    <input type="text" id="faculty" name="faculty" required><br><br>

    <label for="matric">Matric Number:</label>
    <input type="text" id="matric" name="matric" required><br><br>
    <label for="password">Password:</label>
    <input type="password" id="password" name="password" required><br><br>

    <label for="confirm_password">Confirm Password:</label>
    <input type="password" id="confirm_password" name="confirm_password" required><br><br>

    <input type="submit" name="create_acct_assig" value="Create Account">
</form>
</body>
</html>
