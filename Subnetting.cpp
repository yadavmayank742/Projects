//@Author MAYANK YADAV
#include<iostream>
#include<string>
#include<cmath>
using namespace std;

class IP
{
private:
	string ipAddress;
	int ipo1, ipo2, ipo3, ipo4;
	string subnet;
	int so1, so2, so3, so4;
	int cidr, blockSize;
public:
	void getIP()
	{
		while ((getchar()) != '\n');
		cout<<"Enter IPv4 Address : ";
		getline(cin, ipAddress);
		string octet1, octet2, octet3, octet4;
		int flag = 1;
		for(int i=0; i<ipAddress.length(); i++)
		{
			if(ipAddress[i] == '.') flag++;
			else
				{
					if(flag == 1) octet1 += ipAddress[i];
					if(flag == 2) octet2 += ipAddress[i];
					if(flag == 3) octet3 += ipAddress[i];
					if(flag == 4) octet4 += ipAddress[i];
				}
		}
		this -> ipo1 = stoi(octet1);
		this -> ipo2 = stoi(octet2);
		this -> ipo3 = stoi(octet3);
		this -> ipo4 = stoi(octet4);
	}
	
	int getSubnet()
	{
		cout<<"Enter Subnet (if given) : ";
		getline(cin, subnet);
		if(subnet == "")
			return 0;
		string octet1, octet2, octet3, octet4;
		int flag = 1;
		for(int i=0; i<subnet.length(); i++)
		{
			if(subnet[i] == '.') flag++;
			else
				{
					if(flag == 1) octet1 += subnet[i];
					if(flag == 2) octet2 += subnet[i];
					if(flag == 3) octet3 += subnet[i];
					if(flag == 4) octet4 += subnet[i];
				}
		}
		this -> so1 = stoi(octet1);
		this -> so2 = stoi(octet2);
		this -> so3 = stoi(octet3);
		this -> so4 = stoi(octet4);
		return 1;
	}

	void getCIDR()
	{
		int CIDR;
		cout<<"Enter CIDR (if given) : /";
		cin>>CIDR;
		this -> cidr = CIDR;
	}

	void setCIDR()
	{
		if(so1 == 128 && so2 == 0 && so3 == 0 && so4 == 0) cidr = 1;
		else if(so1 == 192 && so2 == 0 && so3 == 0 && so4 == 0) cidr = 2;
		else if(so1 == 224 && so2 == 0 && so3 == 0 && so4 == 0) cidr = 3;
		else if(so1 == 240 && so2 == 0 && so3 == 0 && so4 == 0) cidr = 4;
		else if(so1 == 248 && so2 == 0 && so3 == 0 && so4 == 0) cidr = 5;
		else if(so1 == 252 && so2 == 0 && so3 == 0 && so4 == 0) cidr = 6;
		else if(so1 == 254 && so2 == 0 && so3 == 0 && so4 == 0) cidr = 7;
		else if(so1 == 255 && so2 == 0 && so3 == 0 && so4 == 0) cidr = 8;
		else if(so1 == 255 && so2 == 128 && so3 == 0 && so4 == 0) cidr = 9;
		else if(so1 == 255 && so2 == 192 && so3 == 0 && so4 == 0) cidr = 10;
		else if(so1 == 255 && so2 == 224 && so3 == 0 && so4 == 0) cidr = 11;
		else if(so1 == 255 && so2 == 240 && so3 == 0 && so4 == 0) cidr = 12;
		else if(so1 == 255 && so2 == 248 && so3 == 0 && so4 == 0) cidr = 13;
		else if(so1 == 255 && so2 == 252 && so3 == 0 && so4 == 0) cidr = 14;
		else if(so1 == 255 && so2 == 254 && so3 == 0 && so4 == 0) cidr = 15;
		else if(so1 == 255 && so2 == 255 && so3 == 0 && so4 == 0) cidr = 16;
		else if(so1 == 255 && so2 == 255 && so3 == 128 && so4 == 0) cidr = 17;
		else if(so1 == 255 && so2 == 255 && so3 == 192 && so4 == 0) cidr = 18;
		else if(so1 == 255 && so2 == 255 && so3 == 224 && so4 == 0) cidr = 19;
		else if(so1 == 255 && so2 == 255 && so3 == 240 && so4 == 0) cidr = 20;
		else if(so1 == 255 && so2 == 255 && so3 == 248 && so4 == 0) cidr = 21;
		else if(so1 == 255 && so2 == 255 && so3 == 252 && so4 == 0) cidr = 22;
		else if(so1 == 255 && so2 == 255 && so3 == 254 && so4 == 0) cidr = 23;
		else if(so1 == 255 && so2 == 255 && so3 == 255 && so4 == 0) cidr = 24;
		else if(so1 == 255 && so2 == 255 && so3 == 255 && so4 == 128) cidr = 25;
		else if(so1 == 255 && so2 == 255 && so3 == 255 && so4 == 192) cidr = 26;
		else if(so1 == 255 && so2 == 255 && so3 == 255 && so4 == 224) cidr = 27;
		else if(so1 == 255 && so2 == 255 && so3 == 255 && so4 == 240) cidr = 28;
		else if(so1 == 255 && so2 == 255 && so3 == 255 && so4 == 248) cidr = 29;
		else if(so1 == 255 && so2 == 255 && so3 == 255 && so4 == 252) cidr = 30;
		else if(so1 == 255 && so2 == 255 && so3 == 255 && so4 == 254) cidr = 31;
		else if(so1 == 255 && so2 == 255 && so3 == 255 && so4 == 255) cidr = 32;
	}

	void setSubnet()
	{
			if(cidr == 1  ){ so1 = 128  ; so2 = 0  ; so3 = 0  ; so4 = 0;}
			else if(cidr == 2  ){ so1 = 192  ; so2 = 0  ; so3 = 0  ; so4 = 0;}
			else if(cidr == 3  ){ so1 = 224  ; so2 = 0  ; so3 = 0  ; so4 = 0;}
			else if(cidr == 4  ){ so1 = 240  ; so2 = 0  ; so3 = 0  ; so4 = 0;}
			else if(cidr == 5  ){ so1 = 248  ; so2 = 0  ; so3 = 0  ; so4 = 0;}
			else if(cidr == 6  ){ so1 = 252  ; so2 = 0  ; so3 = 0  ; so4 = 0;}
			else if(cidr == 7  ){ so1 = 254  ; so2 = 0  ; so3 = 0  ; so4 = 0;}
			else if(cidr == 8  ){ so1 = 255  ; so2 = 0  ; so3 = 0  ; so4 = 0;}
			else if(cidr == 9  ){ so1 = 255  ; so2 = 128  ; so3 = 0  ; so4 = 0;}
			else if(cidr == 10  ){ so1 = 255  ; so2 = 192  ; so3 = 0  ; so4 = 0;}
			else if(cidr == 11  ){ so1 = 255  ; so2 = 224  ; so3 = 0  ; so4 = 0;}
			else if(cidr == 12  ){ so1 = 255  ; so2 = 240  ; so3 = 0  ; so4 = 0;}
			else if(cidr == 13  ){ so1 = 255  ; so2 = 248  ; so3 = 0  ; so4 = 0;}
			else if(cidr == 14  ){ so1 = 255  ; so2 = 252  ; so3 = 0  ; so4 = 0;}
			else if(cidr == 15  ){ so1 = 255  ; so2 = 254  ; so3 = 0  ; so4 = 0;}
			else if(cidr == 16  ){ so1 = 255  ; so2 = 255  ; so3 = 0  ; so4 = 0;}
			else if(cidr == 17  ){ so1 = 255  ; so2 = 255  ; so3 = 128  ; so4 = 0;}
			else if(cidr == 18  ){ so1 = 255  ; so2 = 255  ; so3 = 192  ; so4 = 0;}
			else if(cidr == 19  ){ so1 = 255  ; so2 = 255  ; so3 = 224  ; so4 = 0;}
			else if(cidr == 20  ){ so1 = 255  ; so2 = 255  ; so3 = 240  ; so4 = 0;}
			else if(cidr == 21  ){ so1 = 255  ; so2 = 255  ; so3 = 248  ; so4 = 0;}
			else if(cidr == 22  ){ so1 = 255  ; so2 = 255  ; so3 = 252  ; so4 = 0;}
			else if(cidr == 23  ){ so1 = 255  ; so2 = 255  ; so3 = 254  ; so4 = 0;}
			else if(cidr == 24  ){ so1 = 255  ; so2 = 255  ; so3 = 255  ; so4 = 0;}
			else if(cidr == 25  ){ so1 = 255  ; so2 = 255  ; so3 = 255  ; so4 = 128;}
			else if(cidr == 26  ){ so1 = 255  ; so2 = 255  ; so3 = 255  ; so4 = 192;}
			else if(cidr == 27  ){ so1 = 255  ; so2 = 255  ; so3 = 255  ; so4 = 224;}
			else if(cidr == 28  ){ so1 = 255  ; so2 = 255  ; so3 = 255  ; so4 = 240;}
			else if(cidr == 29  ){ so1 = 255  ; so2 = 255  ; so3 = 255  ; so4 = 248;}
			else if(cidr == 30  ){ so1 = 255  ; so2 = 255  ; so3 = 255  ; so4 = 252;}
			else if(cidr == 31  ){ so1 = 255  ; so2 = 255  ; so3 = 255  ; so4 = 254;}
			else if(cidr == 32  ){ so1 = 255  ; so2 = 255  ; so3 = 255  ; so4 = 255;}
	}

	void calculateBlockSize()
	{
		int borrowedBits = 0;
		if(cidr < 8) borrowedBits = cidr;
		else if(cidr > 8 && cidr < 16) borrowedBits = cidr - 8;
		else if(cidr > 16 && cidr < 24) borrowedBits = cidr - 16;
		else if(cidr > 24 && cidr < 32) borrowedBits = cidr - 24;
		this -> blockSize = pow(2, (8-borrowedBits));
	}

	void showIP()
	{
		cout<<ipo1<<"."<<ipo2<<"."<<ipo3<<"."<<ipo4<<"\n";
	}

	void showSubnet()
	{
		cout<<so1<<"."<<so2<<"."<<so3<<"."<<so4<<"\n";
	}

	void showCIDR()
	{
		cout<<"/"<<cidr<<"\n";
	}

	void showNumOfSubnets() //also displays valid hosts per subnet, and blocksize.
	{
		cout<<"Block Size\t: "<<blockSize<<"\n";
		cout<<"No. of Subnets\t: "<<256/blockSize<<"\n";
		cout<<"Hosts/Subnet\t: "<< pow(2, 32-cidr) - 2 <<"\n";
	}

	void subnetMetadata() // for all available networks.
	{
		int varyingBlock;
		int printed = 0;
		if(cidr <= 8) varyingBlock = 1;
		else if(cidr > 8 && cidr <= 16) varyingBlock = 2;
		else if(cidr > 16 && cidr <= 24) varyingBlock = 3;
		else if(cidr > 24 && cidr <= 32) varyingBlock = 4;
		int nIdo1, nIdo2, nIdo3, nIdo4;
		if(varyingBlock == 4)
		{
			nIdo1 = ipo1;
			nIdo2 = ipo2;
			nIdo3 = ipo3;
			nIdo4 = 0;
			while(nIdo4 < 256)
			{
				cout<<nIdo1<<"."<<nIdo2<<"."<<nIdo3<<"."<<nIdo4<<"\n";
				nIdo4 += blockSize;
			}
		}
		else if(varyingBlock == 3)
		{
			nIdo1 = ipo1;
			nIdo2 = ipo2;
			nIdo3 = 0;
			nIdo4 = 0;
			while(nIdo3 < 256)
			{
				cout<<nIdo1<<"."<<nIdo2<<"."<<nIdo3<<"."<<nIdo4<<"\n";
				nIdo3 += blockSize;
			}
		}
		else if(varyingBlock == 2)
		{
			nIdo1 = ipo1;
			nIdo2 = 0;
			nIdo3 = 0;
			nIdo4 = 0;
			while(nIdo2 < 256)
			{
				cout<<nIdo1<<"."<<nIdo2<<"."<<nIdo3<<"."<<nIdo4<<"\n";
				nIdo2 += blockSize;
			}
		}
		else if(varyingBlock == 1)
		{
			nIdo1 = 0;
			nIdo2 = 0;
			nIdo3 = 0;
			nIdo4 = 0;
			while(nIdo1 < 256)
			{
				cout<<nIdo1<<"."<<nIdo2<<"."<<nIdo3<<"."<<nIdo4<<"\n";
				nIdo1 += blockSize;
			}
		}
	}

	void showNetworkMetadata() //For Ntwrk-ID, Brdcst-ID, Last & Frst Valid Host.
	{
		int varyingBlock;
		int printed = 0;
		if(cidr <= 8) varyingBlock = 1;
		else if(cidr > 8 && cidr <= 16) varyingBlock = 2;
		else if(cidr > 16 && cidr <= 24) varyingBlock = 3;
		else if(cidr > 24 && cidr <= 32) varyingBlock = 4;
		int nIdo1, nIdo2, nIdo3, nIdo4;
		if(varyingBlock == 4)
		{
			nIdo1 = ipo1;
			nIdo2 = ipo2;
			nIdo3 = ipo3;
			nIdo4 = 0;
			while(nIdo4 < 256)
			{
				if(printed == 0 && nIdo4+blockSize > ipo4)
				{
					cout<<"Network ID\t: ";
					cout<<nIdo1<<"."<<nIdo2<<"."<<nIdo3<<"."<<nIdo4<<"\n";
					cout<<"Frst Valid host\t: ";
					cout<<nIdo1<<"."<<nIdo2<<"."<<nIdo3<<"."<<nIdo4+1<<"\n";
					cout<<"Last Valid host\t: ";
					cout<<nIdo1<<"."<<nIdo2<<"."<<nIdo3<<"."<<nIdo4+blockSize-2<<"\n";
					cout<<"Broadcasr ID\t: ";
					cout<<nIdo1<<"."<<nIdo2<<"."<<nIdo3<<"."<<nIdo4+blockSize-1<<"\n";
					printed = 1;
					break;
				}
				nIdo4 += blockSize;
			}
		}
		else if(varyingBlock == 3)
		{
			nIdo1 = ipo1;
			nIdo2 = ipo2;
			nIdo3 = 0;
			nIdo4 = 0;
			while(nIdo3 < 256)
			{
				if(printed == 0 && nIdo3+blockSize > ipo3)
				{
					cout<<"Network ID\t: ";
					cout<<nIdo1<<"."<<nIdo2<<"."<<nIdo3<<"."<<nIdo4<<"\n";
					cout<<"Frst Valid host\t: ";
					cout<<nIdo1<<"."<<nIdo2<<"."<<nIdo3<<"."<<nIdo4+1<<"\n";
					cout<<"Last Valid host\t: ";
					cout<<nIdo1<<"."<<nIdo2<<"."<<nIdo3+blockSize-1<<"."<<254<<"\n";
					cout<<"Broadcasr ID\t: ";
					cout<<nIdo1<<"."<<nIdo2<<"."<<nIdo3+blockSize-1<<"."<<255<<"\n";
					printed = 1;
					break;
				}
				nIdo3 += blockSize;

			}
		}
		else if(varyingBlock == 2)
		{
			nIdo1 = ipo1;
			nIdo2 = 0;
			nIdo3 = 0;
			nIdo4 = 0;
			while(nIdo2 < 256)
			{
				if(printed == 0 && nIdo2+blockSize > ipo2)
				{
					cout<<"Network ID\t: ";
					cout<<nIdo1<<"."<<nIdo2<<"."<<nIdo3<<"."<<nIdo4<<"\n";
					cout<<"Frst Valid host\t: ";
					cout<<nIdo1<<"."<<nIdo2<<"."<<nIdo3<<"."<<nIdo4+1<<"\n";
					cout<<"Last Valid host\t: ";
					cout<<nIdo1<<"."<<nIdo2+blockSize-1<<"."<<255<<"."<<254<<"\n";
					cout<<"Broadcasr ID\t: ";
					cout<<nIdo1<<"."<<nIdo2+blockSize-1<<"."<<255<<"."<<255<<"\n";
					printed = 1;
					break;
				}
				nIdo2 += blockSize;
			}
		}
		else if(varyingBlock == 1)
		{
			nIdo1 = 0;
			nIdo2 = 0;
			nIdo3 = 0;
			nIdo4 = 0;
			while(nIdo1 < 256)
			{
				if(printed == 0 && nIdo1+blockSize > ipo1)
				{
					cout<<"Network ID\t: ";
					cout<<nIdo1<<"."<<nIdo2<<"."<<nIdo3<<"."<<nIdo4<<"\n";
					cout<<"Frst Valid host\t: ";
					cout<<nIdo1<<"."<<nIdo2<<"."<<nIdo3<<"."<<nIdo4+1<<"\n";
					cout<<"Last Valid host\t: ";
					cout<<nIdo1+blockSize-1<<"."<<255<<"."<<255<<"."<<254<<"\n";
					cout<<"Broadcasr ID\t: ";
					cout<<nIdo1+blockSize-1<<"."<<255<<"."<<255<<"."<<255<<"\n";
					printed = 1;
					break;
				}
				nIdo1 += blockSize;
			}
		}
	}

};

int subnetting()
{
	IP address1;
	address1.getIP();
	if(address1.getSubnet())
		address1.setCIDR();
	else
	{
		address1.getCIDR();
		address1.setSubnet();
	}
	address1.calculateBlockSize();
	system("clear");
	cout<<"\n\tThe Network Data is as follows:\n\n";
	cout<<"IPv4\t: "; address1.showIP();
	cout<<"Subnet\t: "; address1.showSubnet();
	cout<<"CIDR\t: "; address1.showCIDR();
	address1.showNumOfSubnets();
	address1.showNetworkMetadata();
	// cout<<"\nAvailable Networks : \n";
	// address1.subnetMetadata();
	return 1;
}

int main()
{
	subnetting();
	while(1)
	{
		cout<<"\n\nDo you want to continue\t: ";
		char ch;
		cin>>ch;
		system("clear");
		if(ch == 'y' || ch == 'Y')
			subnetting();
		else
		{
			system("clear");
			cout<<"\n\nHAve a nice day !!!\n\n";
			while ((getchar()) != '\n');
			return 0;
		}
	}
}
