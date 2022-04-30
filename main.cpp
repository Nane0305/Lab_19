
#include <iostream>

using namespace std;

class Wheels
{
public:
    string tire;
    string disk;

    Wheels()
    {
        cout << "Constructor Wheels Call!" << endl;
        tire = "Black";
        disk = "Grey!";
    }

    Wheels(string tire, string disk) : Wheels()
    {
        this->tire = tire;
        this->disk = disk;
    }

    ~Wheels()
    {
        cout << "Destructor Wheels Call!" << endl;
        this->tire.clear();
        this->disk.clear();
    }

    void ShowInfoWheels()
    {
        cout << "Tire->" << tire << endl;
        cout << "Disk->" << disk << endl;
    }
};

class Engine
{
public:
    string block;
    string zylinder;

    Engine()
    {
        cout << "Constructor Engine Call!" << endl;
        block = "Grey";
        zylinder = "Grey zylinder!";
    }

    Engine(string block, string zylinder) : Engine()
    {
        this->block = block;
        this->zylinder = zylinder;
    }

    ~Engine()
    {
        cout << "Destructor Engine Call!" << endl;
        this->block.clear();
        this->zylinder.clear();
    }

    void ShowInfoEngine()
    {
        cout << "Block->" << block << endl;
        cout << "Zylinder->" << zylinder << endl;
    }
};

class Doors
{
public:
    string handle;
    string windows;

    Doors()
    {
        cout << "Constructor Doors Call!" << endl;
        handle = "Metallic";
        windows = "Transparent!";
    }

    Doors(string handle, string windows) : Doors()
    {
        this->handle = handle;
        this->windows = windows;
    }

    ~Doors()
    {
        cout << "Destructor Doors Call!" << endl;
        this->handle.clear();
        this->windows.clear();
    }

    void ShowInfoDoors()
    {
        cout << "Handle->" << handle << endl;
        cout << "Windows->" << windows << endl;
    }
};

class Sitting
{
public:
    string cover;
    string frame;

    Sitting()
    {
        cout << "Constructor Sitting Call!" << endl;
        cover = "Black";
        frame = "Strong frame!";
    }

    Sitting(string cover, string frame) : Sitting()
    {
        this->cover = cover;
        this->frame = frame;
    }

    ~Sitting()
    {
        cout << "Destructor Sitting Call!" << endl;
        this->cover.clear();
        this->frame.clear();
    }

    void ShowInfoSitting()
    {
        cout << "Сover->" << cover << endl;
        cout << "Diference->" << frame << endl;
    }
};

class Trunk
{
public:
    string trunkBody;
    string tailgate;

    Trunk()
    {
        cout << "Constructor Trunk Call!" << endl;
        trunkBody = "Metallic";
        tailgate = "Big!";
    }

    Trunk(string trunkBody, string tailgate) : Trunk()
    {
        this->trunkBody = trunkBody;
        this->tailgate = tailgate;
    }

    ~Trunk()
    {
        cout << "Destructor Trunk Call!" << endl;
        this->trunkBody.clear();
        this->tailgate.clear();
    }

    void ShowInfoTrunk()
    {
        cout << "Trunk body->" << trunkBody << endl;
        cout << "Tailgate->" << tailgate << endl;
    }
};

class Car : public Wheels, public Engine, public Doors, public Sitting, public Trunk
{
public:
    string name;
    Car()
    {
        cout << "Constructor Car Call!" << endl;
        name = "Audi";
    }

    Car(string name) : Car()
    {
        this->name = name;
    }

    ~Car()
    {
        cout << "Destructor Car Call!" << endl;
        this->name.clear();
    }
};

void main()
{
    Car car_1;
    car_1.ShowInfoWheels();
    car_1.ShowInfoEngine();
    car_1.ShowInfoDoors();
    car_1.ShowInfoSitting();
    car_1.ShowInfoTrunk();
}
