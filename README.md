# Railway-Reservation-System-C-
A C++ implementation of railway reservation, featuring train inquiry, reservation, and cancellation with password protection and detailed record management.


A Railway Reservation system provides us with a platform to demonstrate our skills in understanding how to create an efficient and user-friendly interface. Customers can view available trains and their timings to and fro the desired stations, feed details of the passengers travelling and purchase tickets. Additionally, this system could help in adding food and beverages with your ticket too.It even gives you the option to cancel your booked tickets. <br/><br/>

This cancellation feature was added by using one of the Data Structures called Queue. This Railway Resrvation System implements Queue for the waiting list. 

       A queue stores and manipulates data elements. It follows First In First Out (FIFO)

“Same approach is needed for the waitlisting process in our code.” 

# Implementation Of Queue : 
We can assign a size of 10 to the available seats in all the trains, if the number of passengers in all are smaller than 10 then, it is stored in an array and their details are inputted, whereas, when the total passengers exceed 10 they are shifted to a queue where they are stored. If any ticket gets cancelled and a space in array is empty the first passenger in the waiting list is sent to the array, where their ticket gets confirmed!


# Key Features:

1) Passenger login: <br/>
--> The passenger enters their username and password to log in to the system.<br/>
--> The system verifies the passenger's credentials and grants access to the reservation system.<br/>
--> The system adds the passenger to the linked list of logged-in passengers.<br/>
 
2) Option to book, cancel or Exit<br/>
 
3) Train Journey Details:<br/>
  The passenger enters the following details to search for a train:<br/>
  -->Journey date<br/>
  -->Origin station<br/>
  -->Destination station<br/>
  -->Class type<br/>
The system queries the database to find all available trains that match the passenger's criteria.<br/>

4) Validate the input data:<br/>
--> Makes sure that the date of travel is valid.<br/>
--> Makes sure that the number of passengers is valid.<br/>
 
5) Search for trains that match the input criteria:<br/>
Use a database of trains to find all trains that travel from the source station to the destination station on the specified date of travel and class of travel.<br/>

6) Display the train results to the user:<br/>
For each train, display the train name, departure time, arrival time, and food cost (if applicable).<br/>
 
7) Allow the user to select a train:<br/>
Prompt the user to enter the train number of the train that they want to book a ticket for.<br/>

8) Passenger Details: <br/>
Inputs All the details of other travellers<br/>

9) Book the ticket:<br/>
Generate a ticket confirmation for the selected train, including the following details:<br/>
-->Train name<br/>
-->Departure time<br/>
-->Arrival time<br/>
-->Food cost (if applicable)<br/>
--> Total fare<br/>
   
10) Allow the user to cancel the ticket :<br/>
--> Prompt the user to confirm whether they want to cancel the ticket.<br/>
-> If the user confirms, cancel the ticket <br/>

11) Food requirement:<br/>
The food requirement feature can be implemented by adding the following steps to the algorithm:<br/>
--> After displaying the train results to the user, prompt the user to select whether they want to book food for each passenger.<br/>
--> If the user selects yes, prompt the user to enter the food preference for each passenger.<br/>
-->Calculate the total cost of food for all passengers.<br/>
--> Add the food cost to the total fare of the ticket.<br/>


