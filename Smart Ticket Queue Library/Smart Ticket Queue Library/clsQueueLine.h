#pragma once
#include <iostream>
#include <queue>
#include <stack>
#include "clsDate.h"
using namespace std;

class clsQueueLine
{
private:
	string prefix = "";
	short averageServeTime = 0;
	short totalTickets = 0;

	class clsTicket
	{
	private:
		short number = 0;
		string prefix;
		string ticketTime;
		short waitingClients = 0;
		short averageServeTime = 0;

	public:
		clsTicket(string Prefix, short Number, short WaitingClients, short AverageServeTime)
		{
			prefix = Prefix;
			ticketTime = clsDate::GetSystemDateTimeString();
			number = Number;
			waitingClients = WaitingClients;
			averageServeTime = AverageServeTime;
		}

		string FullNumber() const
		{
			return prefix + to_string(number);
		}

		string GetPrefix()
		{
			return prefix;
		}

		string GetTicketTime()
		{
			return ticketTime;
		}

		short GetWaitingClients()
		{
			return waitingClients;
		}

		short ExpectedServeTime()
		{
			return averageServeTime * waitingClients;
		}

		void Print()
		{
			cout << "\n\t\t\t-----------------------------\n";
			cout << "\n\t\t\t\t      " << FullNumber() << endl;
			cout << "\n\t\t\t    " << ticketTime << endl;
			cout << "\t\t\t    Waiting Clients = " << waitingClients << endl;
			cout << "\t\t\t    Serve Time In\n";
			cout << "\t\t\t     " << ExpectedServeTime() << " Minutes" << endl;
			cout << "\n\t\t\t-----------------------------\n";
		}

	};


	queue <clsTicket> queueLine;

public:
	clsQueueLine(string Prefix, short AverageServeTime)
	{
		prefix = Prefix;
		averageServeTime = AverageServeTime;
		totalTickets = 0;
	}

	void IssueTicket()
	{
		totalTickets++;
		clsTicket Ticket(prefix, totalTickets, WaitingClients(), averageServeTime);
		queueLine.push(Ticket);
	}

	int WaitingClients()
	{
		return queueLine.size();
	}

	string WhoIsNext()
	{
		if (queueLine.empty()) return "No Clients Left.";
		else return queueLine.front().FullNumber();
	}

	bool PrintTicketsLineRTL()
	{
		if (queueLine.empty())
		{
			cout << "\n\t\tTickets: No Tickets.";
			return false;
		}
		else
			cout << "\n\t\tTickets: ";
		queue <clsTicket> TempQueueLine = queueLine;

		while (!TempQueueLine.empty())
		{
			cout << TempQueueLine.front().FullNumber() << " <-- ";
			TempQueueLine.pop();
		}
		cout << endl;
		return true;
	}

	bool PrintTicketsLineLTR()
	{
		if (queueLine.empty())
		{
			cout << "\n\t\tTickets: No Tickets.";
			return false;
		}
		else
			cout << "\n\t\tTickets: ";
		queue <clsTicket> TempQueueLine = queueLine;
		stack <clsTicket> TempStackLine;

		while (!TempQueueLine.empty())
		{
			TempStackLine.push(TempQueueLine.front());
			TempQueueLine.pop();
		}

		while (!TempStackLine.empty())
		{
			cout << TempStackLine.top().FullNumber() << " --> ";
			TempStackLine.pop();
		}
		cout << endl;
		return true;
	}

	bool PrintAllTickets()
	{
		cout << "\n\t\t\t\t---Tickets---\n";
		if (queueLine.empty())
		{
			cout << "\n\t\t\t\t---No Tickets---\n";
			return false;
		}
		queue <clsTicket> TempQueueLine = queueLine;
		while (!TempQueueLine.empty())
		{
			TempQueueLine.front().Print();
			TempQueueLine.pop();
		}
		return true;
	}

	bool ServeNextTime()
	{
		if (queueLine.empty()) return false;

		queueLine.pop();
		return true;
	}

	short ServedClients()
	{
		return totalTickets - WaitingClients();
	}

	void PrintInfo()
	{
		cout << "\n\t\t\t-----------------------------\n";
		cout << "\n\t\t\t\t Queue Info\n";
		cout << "\n\t\t\t-----------------------------\n";
		cout << "\t\t\t   Prefix          = " << prefix << endl;
		cout << "\t\t\t   Total Tickets   = " << totalTickets << endl;
		cout << "\t\t\t   Served Clients  = " << ServedClients() << endl;
		cout << "\t\t\t   Waiting Clients = " << WaitingClients() << endl;
		cout << "\n\t\t\t-----------------------------\n";
	}
};

