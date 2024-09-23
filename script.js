let currentSlide = 0;
const slides = document.querySelectorAll(".slide");

function showSlide(index) {
  const slidesContainer = document.querySelector(".slides");
  const totalSlides = slides.length;
  if (index >= totalSlides) {
    currentSlide = 0;
  } else if (index < 0) {
    currentSlide = totalSlides - 1;
  } else {
    currentSlide = index;
  }
  slidesContainer.style.transform = `translateX(-${currentSlide * 100}%)`;
}

function moveSlide(direction) {
  showSlide(currentSlide + direction);
}

// Initialize slider
showSlide(currentSlide);
