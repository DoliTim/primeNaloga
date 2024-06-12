# PrimeNaloga

PrimeNaloga is a Python-based web application designed to help users compute and visualize prime numbers efficiently. It allows users to input a range of numbers and receive a list of prime numbers within that range. The application is built using the Flask web framework and is optimized for performance and usability.

## Features

- **Prime Number Computation**: Compute prime numbers within a specified range.
- **Visualization**: Graphical representation of prime numbers.
- **Performance**: Efficient algorithms for prime number calculation.
- **User-Friendly Interface**: Clean and intuitive UI built with HTML/CSS and Flask.

## Installation

Follow these steps to set up the PrimeNaloga project locally:

1. **Clone the Repository**:
    ```bash
    git clone https://github.com/DoliTim/primeNaloga.git
    cd primeNaloga
    ```

2. **Create a Virtual Environment**:
    ```bash
    python3 -m venv venv
    source venv/bin/activate  # On Windows: venv\Scripts\activate
    ```

3. **Install Dependencies**:
    ```bash
    pip install -r requirements.txt
    ```

4. **Run the Application**:
    ```bash
    flask run
    ```

5. Open your browser and navigate to `http://127.0.0.1:5000` to view the application.

## Usage

- Enter the desired range of numbers in the input field.
- Click on the "Compute Primes" button to generate and display the prime numbers within the given range.
- Use the visualization tool to see a graphical representation of the computed primes.
