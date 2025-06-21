#include <iostream>
#include "clsQueueLine.h"

using namespace std;

int main()
{
	clsQueueLine PayBillsQueue("A0", 10);
	clsQueueLine SubscriptionsQueue("B0", 5);
	clsQueueLine VIPQueue("V0", 5);

	PayBillsQueue.IssueTicket();
	PayBillsQueue.IssueTicket();
	PayBillsQueue.IssueTicket();
	PayBillsQueue.IssueTicket();
	PayBillsQueue.IssueTicket();

	cout << "\nPay Bills Queue Info:\n";
	PayBillsQueue.PrintInfo();

	PayBillsQueue.PrintTicketsLineRTL();
	PayBillsQueue.PrintTicketsLineLTR();

	PayBillsQueue.PrintAllTickets();

	PayBillsQueue.ServeNextTime();
	cout << "\nPay Bills Queue After Serving One Client:\n";
	PayBillsQueue.PrintInfo();

	//SubscriptionsQueue

	SubscriptionsQueue.IssueTicket();
	SubscriptionsQueue.IssueTicket();
	SubscriptionsQueue.IssueTicket();

	cout << "\nSubscriptions Queue Info:\n";
	SubscriptionsQueue.PrintInfo();

	SubscriptionsQueue.PrintTicketsLineRTL();
	SubscriptionsQueue.PrintTicketsLineLTR();

	SubscriptionsQueue.PrintAllTickets();
	SubscriptionsQueue.ServeNextTime();
	cout << "\nSubscriptions Queue After Serving One Client:\n";
	SubscriptionsQueue.PrintInfo();

	//VIPQueue

	VIPQueue.IssueTicket();
	VIPQueue.IssueTicket();
	VIPQueue.IssueTicket();

	cout << "\nVIP Queue Info:\n";
	VIPQueue.PrintInfo();

	VIPQueue.PrintTicketsLineRTL();
	VIPQueue.PrintTicketsLineLTR();

	VIPQueue.PrintAllTickets();
	VIPQueue.ServeNextTime();
	cout << "\nVIP Queue After Serving One Client:\n";
	VIPQueue.PrintInfo();

	system("pause > 0");
	return 0;
}