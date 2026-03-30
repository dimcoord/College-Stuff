const modal = document.getElementById("login-modal");
const hero_button = document.getElementById("hero-btn");
const close_button = document.getElementById("close-modal");
const submit_button = document.getElementById("submit-btn");

function openModal() {
    modal.style.display = "block";
}

function closeModal() {
    modal.style.display = "none";
}

hero_button.addEventListener("click", openModal);
close_button.addEventListener("click", closeModal);
// submit_button.addEventListener("click", function(event) {
//     event.preventDefault();
//     alert("Form submitted!");
//     closeModal();
// });

modal.addEventListener("click", function(event) {
    if (event.target === modal) {
        closeModal();
    }
});