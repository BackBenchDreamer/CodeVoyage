# Movie Database Program

Authors: Jeyadheep V  
Date: 10/12/2023

## Overview

This is a Movie Database program implemented in Java that allows users to register, login, manage their watched and plan-to-watch movies, and more. The program also includes features to save user and movie data to CSV files, with encryption for user passwords.

## Features

1. **User Registration:**
   - Users can register with a unique username and a password that meets certain constraints.
  
2. **User Login:**
   - Users can log in using either their email or username along with a password.
  
3. **Movie Management:**
   - Users can enter details for watched movies, including name, rating, completion date, and a small review.
   - Users can add movies to their plan-to-watch list by entering the movie name.

4. **Display Movie Database:**
   - The program displays the list of plan-to-watch and watched movies, along with relevant details.

5. **Update Movie Database:**
   - Users can move movies from the plan-to-watch list to the watched list.
   - Completed movies can be removed from the watched list.

6. **Save Data to CSV Files:**
   - User data is saved to `user_db.csv`, including the encrypted password.
   - Movie data is saved to `movie_db.csv` with fields: sr.no, username, movie_name, status, rating, and review.

7. **Encryption:**
   - User passwords in `user_db.csv` are encrypted using Blowfish encryption.

## File Structure

- `MovieDatabase.java`: The main Java source code file.
- `user_db.csv`: CSV file to store user data (encrypted).
- `movie_db.csv`: CSV file to store movie data.

## Usage

1. **Clone the Repository**
   ```bash
     git clone https://github.com/BackBenchDreamer/LearninLanguages/tree/main/Java/MovieD.git

2. **Compile the Code**
   ```bash
     javac MovieDatabase.java
3. **Running the Code**
   ```bash
     java MovieDatabase

## Output

1. **Register and Login Page** <br>![image](https://github.com/BackBenchDreamer/LearninLanguages/assets/112080762/7404c290-3b63-4d2c-be5d-1640f385fab5)

2. **Adding Movie to Watched List** <br>![image](https://github.com/BackBenchDreamer/LearninLanguages/assets/112080762/d801248c-9871-415e-be3c-ee5b82880dff)

3. **Adding Movie to Plan to Watch List** <br>![image](https://github.com/BackBenchDreamer/LearninLanguages/assets/112080762/1f8e0691-9181-4a44-8985-8cdffa212827)

4. **Displaying the Movie List** <br>![image](https://github.com/BackBenchDreamer/LearninLanguages/assets/112080762/fdfcbd10-0dc2-496d-a598-59f7f5ccfd59)

5. **Moving Movie from Plan to Watch List to Watched Movies List**<br>![image](https://github.com/BackBenchDreamer/LearninLanguages/assets/112080762/3e2e26ce-c690-4915-a0df-8e378e52539e)

6. **Deleting Movies from Watched List** <br> ![image](https://github.com/BackBenchDreamer/LearninLanguages/assets/112080762/2d8297f5-729e-4eb5-88ae-d921766a64b3)

7. **Exit** <br>![image](https://github.com/BackBenchDreamer/LearninLanguages/assets/112080762/9a1475c0-3454-4741-9f4a-baa4db721156)
 
8. **How the Data is Stored in Database** <br> ![image](https://github.com/BackBenchDreamer/LearninLanguages/assets/112080762/64d2cf07-b740-4cc0-bb60-3e45354c7655)

