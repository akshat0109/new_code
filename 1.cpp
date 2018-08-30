#include<bits/stdc++.h>
using namespace std;
struct Record{
    string timeStamp;
    string data;
    int nodeNumber;
    string nodeId;
    string *referenceNodeId;
    vector<struct>childReferenceNodeId;
    string *genesisReferenceNodeId;
    string hashValue;
    };
int hashCode()
{
    hash<string> string_hash;

    return string_hash("Hash me");
}
vector<int>Owner;
vector<pair<int,int> >OwnerhashKey;
vector<int>a;
for(int i=0;i<26;i++)
{
  a.push_back(rand()%1000);
}
int EncrytionDataInt(int y,int key)
{

    int x = y+a[key%26];
    return x;
}

int DecryptDataInt(int y,int key)
{
    int x = y-a[key%26];
    return x;
}

string encryptString(string arr,key)
{
     string a = "";
      for(int i=0;i<arr.size();i++)
      {
          a.append(arr[i]+key%26);
      }
      return a;
}

string decryptString(string arr,key)
{
    string b = "";
    for(int i=0;i<arr.size();i++)
    {
        b.apppend(arr[i]-key%26);
    }
    return b;
}

int userAuthentication(struct* nodeId,int OwnerId,int key)
{
    if(find(Owner.begin(),Owner.end(),OwnerId)!=Owner.end())
    {
        return 0;
    }
    else
    {
        stringstream ss;
        ss<<*(nodeId).data;
        int x
        ss>>x;
        int y = decrytionDataInt(int x)
        if(y == Owner.id)
        {
            return 1;
        }
    }

    return 0;
}

void build(string a,string b,string nodeId
    string nodeId,
    string referenceNodeId,
    struct *childNode
    string genesisReferenceNodeId )
{

}
int main()
{
      struct obj;
      build("Akshat Garg","fghjk","ghjk","hduiehdo",&obj,"dfgh");
}
