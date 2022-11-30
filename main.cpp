#include <iostream>

using namespace std;


class Candidate{
protected:
    string candidate;
    int voises;
public:
    int Get_voises(){
        return voises;
    }
    string Get_Candidate(){
        return candidate;
    }
    void Set_voises(int honor_voises){
        voises = honor_voises;
    }
    Candidate(){
        candidate = "";
        voises = 0;
    }
    Candidate(string candidate1,int voises1){
        this->voises = voises1;
        this->candidate = candidate1;
    }
    void information(){
        cout << candidate << " ";
        cout << voises << endl;
    }

};

class Elections{
private:
    Candidate* candidates;
public:
    Elections(){

    }
    Elections(Candidate *candidates1){
        candidates = candidates1;
    }
    void Print_winner(){

        Candidate temp("",-1);

        for(int i = 0;i<=6;i++){

            if (temp.Get_voises() < candidates[i].Get_voises()){
                temp = candidates[i];

            }
        }
        temp.information();

    }
};

int main(){
    Candidate candidates[100];
    candidates[0] = Candidate("lol",6);
    candidates[1] = Candidate("Den",445);
    candidates[2] = Candidate("Veres",50);
    candidates[3] = Candidate("Marko",899);
    candidates[4] = Candidate("Ivanka",451);
    candidates[5] = Candidate("Danulo",900);



    Elections result(candidates);
    result.Print_winner();



    return 0;
}





