class Vehicle
{
public:
    string registrationNumber;
    string ownerName;
    vector<string> violations;

    Vehicle(string regNum, string owner)
        : registrationNumber(regNum), ownerName(owner) {}

    void addViolation(const string& violation)
    {
        violations.push_back(violation);
    }

    void displayDetails() const
    {
        cout << "Registration Number: " << registrationNumber << endl;
        cout << "Owner Name: " << ownerName << endl;
        if (violations.empty())
        {
            cout << "No violations." << endl;
        }
        else
        {
            cout << "Violations:" << endl;
            for (const string& violation : violations)
            {
                cout << "- " << violation << endl;
            }
        }
    }
};

Class to manage traffic booths--
class TrafficBooth
{
public:
    string location;
    int vehiclesEntered = 0;
    int vehiclesExited = 0;

    TrafficBooth(string loc) : location(loc) {}

    void vehicleEntry()
    {
        vehiclesEntered++;
    }
    void vehicleExit()
    {
        vehiclesExited++;
    }

    void displayStats() const
    {
        cout << "Location: " << location << endl;
        cout << "Vehicles Entered: " << vehiclesEntered << endl;
        cout << "Vehicles Exited: " << vehiclesExited << endl;
    }
};

Class to add the Emergency Information—

class EmergencyInfo
{
public:
    unordered_map<string, string> contacts =
    {
        {"Police", "999"},
        {"Ambulance", "102"},
        {"Fire Brigade", "101"},
        {"Nearest Hospital", "City Care Hospital"}
    };

    void display() const
    {
        cout << "Emergency Contacts:" << endl;
        for (const auto& contact : contacts)
        {
            cout << contact.first << ": " << contact.second << endl;
        }
    }
};
