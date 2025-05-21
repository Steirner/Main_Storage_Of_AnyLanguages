
            function validateEmail(email) {
                const re = /^[^\s@]+@[^\s@]+\.[^\s@]+$/;
                return re.test(email);
            }

            function handleSubmit(event) {
                event.preventDefault();

                const name = document.getElementById('name').value.trim();
                const email = document.getElementById('email').value.trim();
                const subject = document.getElementById('subject').value.trim();
                const message = document.getElementById('message').value.trim();

                // If all validation passes, show success message
                alert('Thank you for your message!');

                // Clear the form
                document.getElementById('contactForm').reset();
            }
