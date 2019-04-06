#include<iostream>
#include<string>
#include<algorithm>
#include<cctype>

using namespace std;

string playagain = "";
int lookAt;
string cipher;
string answer = "start i grabbed everything i could find please return any blueprints for vault and alarm design based on which bank you decide on i am setting up safehouse codename blackout worried that our cipher is too weak switch to vigenere cipher keyword my favorite holbein";
//------------------Choices after finding the back pack -------------//
void nothing()
{

}
void callPolice()
{

}
void hotel()
{
	cout << "You enter a dark hotel. Your friend informs you that someone has been checked into room 250 for the past 3 days..." << endl;
	cout << "They give you a copy of the key" << endl;
	cout << "You go to room 250 and stop at the door" << endl << endl;

	cout << "    1) Open the door" << endl;
	cout << "    2) Knock on the door" << endl << endl << endl;

	cin >> lookAt;

	if (lookAt == 1)
	{
		cout << "Open the door and run to the waste basket" << endl;
		cout << "You are in luck, you find an encrypted message: " << endl << endl;

		cout << "mnuln c aluvvyx ypylsnbcha c wiofx" << endl;
		cout << "zchx jfyumy lynolh uhs" << endl;
		cout << "vfoyjlchnm zil puofn uhx ufulg" << endl;
		cout << "xymcah vumyx ih qbcwb vuhe sio" << endl;
		cout << "xuwcxu ih c ug mynncha oj" << endl;
		cout << "muzybiomy wixyhugy vfuweion" << endl;
		cout << "qillcyx nbun iol wcjbyl cm nii" << endl;
		cout << "qyue mqcnwb ni pcayhyly wcjbyl" << endl;
		cout << "eysqilx gs zupilcny bifvych" << endl << endl << endl;


		cout << "This is a ceaser cipher. The cipher is used by shifting the alphabet by a particular number. For example: I love apples and I shif this by 3 letters it would now look like this: L ORYH DSSOHV" << endl;
		cout << "Can you solve this cipher?" << endl;

		cin >> cipher;

		if (cipher != answer)
		{
			cout << "In this cipher s = m" << endl;

		}

	}
}
	//----------Make a choice after finding the backpack ------------//
	void choice()
	{
		cout << "After listening to the news you begin to suspect that you've stumbled on to the thieves" << endl << endl;
		cout << "What would you like to do?" << endl << endl;

		cout << "    1)Go to the hotel and investigate" << endl;
		cout << "    2)Call the police" << endl;
		cout << "    3)Do nothing" << endl << endl << endl;

		cin >> lookAt;

		if (lookAt == 1)
		{
			hotel();
		}
		if (lookAt == 2)
		{
			callPolice();
		}
		if (lookAt == 3)
		{
			nothing();
		}

		system("pause");
	}

	// ------------Look at the items in the back pack ----------//
	void LookAtBackpack()
	{
		do {
			cout << "What would you like to look at? Please type the number now or type 0 to stop looking";
			cin >> lookAt;

			if (lookAt == 1)
			{
				cout << "It is an electrical schematic for a MAXIMUM SECURITY MODULAR VAULT PANELS UL CLASS I.";
				cout << "\nThe schematics detail how the vault works electrically";
				cout << "\nThe diagram is confusing but you know it shouldn't be in a backpack tossed out of a speeding car";
				cout << "\n\n\nWhat would you like to look at now?" << endl << endl;
				cin >> lookAt;
			}
			if (lookAt == 2)
			{
				cout << "The news paper clipping reads:";
				cout << "\n\n'The whole grain goodness of blue chip dividend stocks has its limits. Utility stocks, consumer staples, pipelines, telecoms, and real estate investments have all lost ground over the past month, even while to broader market has been flat. With the bond market signalling an expectation of rally for steady blue-chip dividend payers has stalled. Should you be scare if you own a lot of these stocks either directly or through mutual funds or exchange-traded funds? David Baskin, president of Baskin Financial Services, has a two-pronged answer: Keep your top-quality dividend stocks, but be prepared to follow his firm's example in trimming holdings in stocks such as TransCanada Corp., Keyera Corp., and Pembina Pipeline Corp. ";
				cout << "\n\n\nWhat would you like to look at now?" << endl << endl;;
				cin >> lookAt;
			}
			if (lookAt == 3)
			{
				cout << "It is a business card for Hudson Bat Lodge. On the business card is the general managers name: Bonnie McCreary and the address." << endl;
				cout << "On it, written in blue ink, are the numbers 250" << endl;
				cout << "You have a friend who works here." << endl << endl << endl;;

				cout << "What would you like to look at now?" << endl << endl;
				cin >> lookAt;
			}
			if (lookAt == 4)
			{
				cout << "You do not know what the paper says, but you intend to find out" << endl << endl;
				cout << "What would you like to look at now?" << endl << endl << endl;
				cin >> lookAt;
			}
			if (lookAt == 0)
			{
				cout << "\n\nYou return home just in time to hear the evening news..." << endl;;
				cout << "\n\nTwo thieves in their mid-20s are suspected to be in the area, they have been known to strike neighbouring towns. Just earlier this week the AMCO insurance office was burglarized and documents were stolen. A reward is being offered for information leading to their arrest";
				choice();
			}

		} while (lookAt == 0);


	}
	//-------------Start the game ------------//
	void Start()
	{
		cout << "You are walking down the street, when suddenly, an object is tossed out of a speeding car...";
		cout << "\nIt looks like a bag...";
		cout << "\nYou are curious, so you look inside the bag and snap a few photos of its contents:" << endl << endl;

		cout << "     1) An electrical schematic of a vault" << endl;
		cout << "     2) A newspaper cliping " << endl;
		cout << "     3) A business card for Hudson Bay Lodge" << endl;
		cout << "     4) A paper with some sort of secret code on it" << endl << endl;

		cout << "\nWould you like to look at the items more closely?";
		cout << "\nPlease type yes or no" << endl;;

		cin >> answer;

		if (answer == "yes" || answer == "Yes" || answer == "YEs" || answer == "YES" || answer == "yEs" || answer == "yeS" || answer == "YeS")
		{
			LookAtBackpack();
		}
		else
		{
			cout << "\n\nYou return home just in time to hear the evening news...";
			cout << "\n\nTwo thieves in their mid-20s are suspected to be in the area, they have been known to strike neighbouring towns. Just earlier this week the AMCO insurance office was burglarized and documents were stolen. A reward is being offered for information leading to their arrest";
			choice();
		}

	}

	void Setup()
	{
		Start();
	}

	int main()
	{
		Setup();
	}


