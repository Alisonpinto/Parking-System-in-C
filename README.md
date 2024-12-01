<!DOCTYPE html>
<html>
<head>
    
</head>
<body>
    <h1><b>Parking-System-in-C</b></h1>
    <h2><b>User Manual for Vehicle Management System Code</b></h2>
    <hr>
    <h3><b>Introduction</b></h3>
    <p>
        This is a C program designed for a vehicle management system that keeps track of different types of vehicles 
        (<b>Riksha, Bike, Bus, and Car</b>) entering a parking lot. The program calculates the total amount earned and 
        displays a detailed status report. It also allows the user to reset all data. This user manual explains the 
        program structure, functionality, and how to use it.
    </p>
    <hr>
    <h3><b>Features</b></h3>
    <ul>
        <li><b>Add Vehicle Entries</b>
            <ul>
                <li>Record the entry of a Riksha, Bike, Bus, or Car.</li>
                <li>Each vehicle type has an associated cost.</li>
            </ul>
        </li>
        <li><b>Show Status</b>
            <ul>
                <li>View the current count of each vehicle type, total vehicles, and total amount earned.</li>
            </ul>
        </li>
        <li><b>Reset Data</b>
            <ul>
                <li>Clear all records and reset counts to zero.</li>
            </ul>
        </li>
        <li><b>User-Friendly Interface</b>
            <ul>
                <li>Clear screen after each operation for better readability.</li>
                <li>Menu-driven input for easy navigation.</li>
            </ul>
        </li>
        <li><b>Exit Program</b>
            <ul>
                <li>Safely exit the system.</li>
            </ul>
        </li>
    </ul>
    <hr>
    <h3><b>How to Run the Program</b></h3>
    <h4><b>Requirements</b></h4>
    <ul>
        <li>A C compiler (e.g., GCC).</li>
        <li>Terminal or IDE to compile and run the program.</li>
    </ul>
    <h4><b>Compilation</b></h4>
    <ol>
        <li>Open the terminal and navigate to the directory containing the source code.</li>
        <li>Compile the code using the command:
            <pre><code>gcc vehicle_management.c -o vehicle_management</code></pre>
        </li>
    </ol>
    <h4><b>Execution</b></h4>
    <ol>
        <li>Run the compiled program:
            <pre><code>./vehicle_management</code></pre>
        </li>
        <li>Follow the Menu:
            <ul>
                <li>The program will display the main menu with options.</li>
                <li>Enter the number corresponding to your desired action.</li>
            </ul>
        </li>
    </ol>
    <hr>
    <h3><b>Menu Options</b></h3>
    <ul>
        <li><b>Riksha</b> - Adds a Riksha to the system and increases the amount by ₹30.</li>
        <li><b>Bike</b> - Adds a Bike to the system and increases the amount by ₹10.</li>
        <li><b>Bus</b> - Adds a Bus to the system and increases the amount by ₹80.</li>
        <li><b>Car</b> - Adds a Car to the system and increases the amount by ₹50.</li>
        <li><b>Show Status</b> - Displays a detailed status report, including:
            <ul>
                <li>Total number of each type of vehicle.</li>
                <li>Total number of vehicles.</li>
                <li>Total amount earned.</li>
            </ul>
        </li>
        <li><b>Delete</b> - Resets all records:
            <ul>
                <li>Clears the vehicle counts.</li>
                <li>Resets the total amount earned to zero.</li>
            </ul>
        </li>
        <li><b>Exit</b> - Safely exits the program.</li>
    </ul>
    <hr>
    <h3><b>Example Interaction</b></h3>
    <h4><b>Start the Program</b></h4>
    <pre><code>./vehicle_management</code></pre>
    <h4><b>Menu Display</b></h4>
    <pre><code>
************************************
*           VEHICLE MENU           *
************************************
*  1. Riksha                      *
*  2. Bike                        *
*  3. Bus                         *
*  4. Car                         *
*  5. Show Status                 *
*  6. Delete                      *
*  7. Exit                        *
************************************
Enter your choice:
    </code></pre>
    <h4><b>Input Actions</b></h4>
    <ul>
        <li>If you input <b>1</b>, the program will display:
            <pre><code>Riksha added successfully.</code></pre>
        </li>
    </ul>
    <h4><b>Show Status</b></h4>
    <pre><code>
************************************
*          VEHICLE STATUS          *
************************************
*  Number of Riksha      =    2     *
*  Number of Bike        =    1     *
*  Number of Bus         =    0     *
*  Number of Car         =    1     *
*  Total Vehicles        =    4     *
*  Total Amount Earned   =  120     *
************************************
    </code></pre>
    <h4><b>Reset Data</b></h4>
    <pre><code>All data has been reset.</code></pre>
    <h4><b>Exit</b></h4>
    <pre><code>Program exited successfully.</code></pre>
    <hr>
    <h3><b>Code Overview</b></h3>
    <ul>
        <li><b>Global Variables</b> - Track counts of each vehicle type, total amount, and total entries.</li>
        <li><b>Functions</b>
            <ul>
                <li><code>showMenuOnce()</code> - Displays the menu.</li>
                <li><code>Show_Status()</code> - Displays the current status of the parking lot.</li>
                <li><code>Delete_Data()</code> - Resets all data.</li>
                <li><code>Riksha()</code>, <code>Bike()</code>, <code>Bus()</code>, <code>car()</code> - Add respective vehicles and update counts.</li>
            </ul>
        </li>
        <li><b>Main Loop</b> - Provides a continuous menu interface until the user chooses to exit.</li>
    </ul>
    <hr>
    <h3><b>Contribution Guidelines</b></h3>
    <p>
        Feel free to contribute by optimizing the code, adding features like:
    </p>
    <ul>
        <li><b>Dynamic Pricing</b> - Allow user-defined charges for each vehicle type.</li>
        <li><b>Data Persistence</b> - Save and load data from files.</li>
    </ul>
      <hr>
    <h3><b>My Experience</b></h3>
    <p>
       I recently completed my mid-semester exams in college and decided to showcase the C programming skills I’ve learned so far. I chose a project that incorporates all the concepts 
       I’ve mastered, allowing me to apply my knowledge and logic to create a mini-project.
      This project has been an amazing learning experience, and I’ve shared the details above. Overall, it was a rewarding journey to start with this project, and I’m looking forward to 
      working on more projects that leverage the logic and concepts of the C language.
    </p>
    <hr>
    
    <h3><b>Author</b></h3>
    <p><b>Alison Pinto</b></p>
    <p><b>Contact</b>: https://github.com/Alisonpinto?tab=repositories </p>
    <p><b>Contact</b>: https://www.linkedin.com/in/alison-pinto-24862026b/ </p>
</body>
</html>
