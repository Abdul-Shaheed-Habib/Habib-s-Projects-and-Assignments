const usernameInput = document.getElementById("usernameInput");
const passwordInput = document.getElementById("passwordInput");
const submitBtn = document.getElementById("submitBtn");

submitBtn.addEventListener("click", function() {
    const enteredUsername = usernameInput.value.trim();
    const enteredPassword = passwordInput.value.trim();

    if (enteredUsername === "jiddah" && enteredPassword === "jiddah123") {
        window.location.href = "file:///D:/Users/HABIB/Documents/htmlexercises/Dadream/Jeddah%20Forms.html"; // Replace with the URL of your protected page
    } else {
        alert("Incorrect username or password!");
    }
});