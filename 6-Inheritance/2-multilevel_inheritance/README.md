# 🔹Multilevel inheritance
1.	inherit_user.cpp		<br>
Create a class User to store basic user details, and extend it with Customer and then OnlineCustomer. The final class calculates the total bill using cart value and delivery charges.<br>
👉Base Class: User Private: username, mobileNumber Public: setUserDetails(), displayUserDetails()
Derived Class: Customer (inherits from User) Private: customerID, address Public: setCustomerDetails(), displayCustomerDetails()
Derived Class: OnlineCustomer (inherits from Customer) Private: cartValue, deliveryCharges Public: calculateTotalBill()
→ Formula: total = cartValue + deliveryCharges

2. inherit_person.cpp 		<br>
Create a class `Person` and extend it to `Employee`, then to `Manager`, adding more details at each level. Input and display all manager details, including personal, employee, and managerial information.<br>
 👉 Person → Employee → Manager<br>
Base Class: Person Private: name, age Public: setPersonDetails(), displayPersonDetails()
Derived Class: Employee (inherits Person) Private: employeeID, department Public: setEmployeeDetails(), displayEmployeeDetails()
Derived Class: Manager (inherits Employee) Private: teamSize, projectName Public: setManagerDetails(), displayManagerDetails()
 Task: Input and display manager details including all inherited levels.

