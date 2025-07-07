#🔹Hybrid Inheritance
inherit_per.cpp		<br>
/*Create a Result class using hybrid inheritance that combines academic and sports performance.
Implement methods to set and display complete student results including personal, academic, and sports details.*/<br>
👉 Base Class: Person Private: name, age Public: setPersonDetails(), displayPersonDetails()
🔹 Derived Class 1: Student (inherits from Person) Private: rollNumber, className Public: setStudentDetails(), displayStudentDetails()
🔹 Derived Class 2: Academics (inherits from Student) Private: mathMarks, scienceMarks Public: setAcademicMarks(), displayAcademicMarks()
🔹 Independent Class: Sports (inherits from Person) Private: sportName, score Public: setSportsDetails(), displaySportsDetails()
🔹 Derived Class: Result (inherits from both Academics and Sports) Public: calculateTotalScore() displayFullResult() → shows personal, academic & sports performance