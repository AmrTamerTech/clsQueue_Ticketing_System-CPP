# 📌 clsQueue_Ticketing_System-CPP ⚡  
A simple yet powerful C++ ticketing system using queues to manage client flow with real-time tracking and service time estimation. 🚀  

---

## 🌟 Project Overview  
`clsQueue_Ticketing_System-CPP` is a C++ class-based implementation of a queue line system designed to handle client tickets efficiently. It simulates real-world queue behavior, letting clients issue tickets, calculates their expected service time, and serves them in a First-Come-First-Served (FCFS) manner.  

This system is ideal for service desks, banks, hospitals, or any business requiring structured client handling.

---

## 🔹 Core Functionalities  
- 🎫 Issue tickets with unique identifiers (e.g., A1, A2, ...)  
- 📊 Track waiting and served clients in real time  
- ⏳ Estimate service time based on average serve duration  
- ⚡ Serve clients in the order they arrived (FCFS)  
- 📜 Display queue info and individual ticket details  
- 🔄 Print ticket queue from Right-to-Left or Left-to-Right  

---

## ✨ Features  

### 🔹 Ticket Management  
- `IssueTicket()` – Generate a new ticket and enqueue it  
- `WhoIsNext()` – Get the next ticket to be served  
- `ServeNextTime()` – Serve and remove the next ticket from the queue  

### 🔹 Queue Tracking  
- `WaitingClients()` – Show how many clients are waiting  
- `ServedClients()` – Show how many clients have already been served  
- `PrintInfo()` – Display total, served, and waiting ticket statistics  

### 🔹 Ticket Display  
- `PrintTicketsLineRTL()` – Show the queue from newest to oldest  
- `PrintTicketsLineLTR()` – Show the queue from oldest to newest  
- `PrintAllTickets()` – Print detailed info for all tickets  

---

## 🚀 How It Works  

### 🔹 Issuing & Serving  
Clients call `IssueTicket()` to receive a uniquely numbered ticket (e.g., A3).  
The system calculates estimated wait time using ticket position and average serve time.  
Clients are served using `ServeNextTime()` which dequeues them.  

### 🔹 Queue Status  
- `WaitingClients()` counts the clients in the queue  
- `ServedClients()` is calculated from total issued minus waiting  
- `PrintInfo()` outputs a summary of queue data  

### 🔹 Displaying Queue  
- `PrintTicketsLineRTL()` → `A5 <-- A4 <-- A3`  
- `PrintTicketsLineLTR()` → `A3 --> A4 --> A5`  
- `PrintAllTickets()` → full details including serve time and timestamp  

---

## 📚 Potential Enhancements  
- 🔄 Priority Queues for urgent clients  
- 📌 Multi-Counter Support for large-scale systems  
- 🖥️ GUI Integration using frameworks like Qt or ImGui  
- 🗄️ Database Support for saving ticketing history  

---

## ⚙️ Technologies Used  
- **Language:** C++  
- **Data Structures:** `queue`, `stack`  
- **Date Module:** Custom `clsDate` for timestamps  
- **OOP:** Encapsulation with nested ticket class  
- **Memory Management:** Efficient handling via STL containers  

---

## 🎯 Learning Outcomes  

This project demonstrates:

- ✅ Queue operations: enqueue, dequeue, traversal  
- ✅ Building real-world simulation systems  
- ✅ Managing service flow efficiently  
- ✅ Handling object-oriented design with inner classes  

---

## 📜 License  
This project is open-source and free to use. Modify, enhance, and share! 🚀  

---

## 🤝 Contributing  
Feel free to fork, improve, and submit a pull request. Bug fixes, enhancements, or documentation updates are welcome!  

---

## 🏁 How to Run  

```bash
# 1. Clone the repository
git clone https://github.com/yourusername/clsQueue_Ticketing_System-CPP.git

# 2. Add the header file to your project
#include "clsQueueLine.h"

# 3. Compile with your main file
g++ main.cpp -o app

# 4. Run the executable
./app
