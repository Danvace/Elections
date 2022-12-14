#include <iostream>
#include <utility>

using namespace std;

class Candidate{
protected:
    string candidate;
    int voices;
public:
    int get_voices(){
        return voices;
    }
    string get_candidate(){
        return candidate;
    }
    void set_voices(int honor_voices){
        voices = honor_voices;
    }
    Candidate(){
        candidate = "";
        voices = 0;
    }
    Candidate(string candidate1,int voices1){
        this->voices = voices1;
        this->candidate = std::move(candidate1);
    }
    void information(){
        cout << candidate << " ";
        cout << voices << endl;
    }

};

class Elections{
private:
    Candidate* candidates;
    int number_of_candidate;
public:
    Elections(){

    }
    Elections(Candidate *candidates1, int number_of_candidate){
        candidates = candidates1;
        this->number_of_candidate = number_of_candidate;
    }
    void print_winner(){
        int impossible_voices = -1;
        Candidate temporary_candidate("", impossible_voices);
        for(int i = 0;i<=number_of_candidate;i++){

            if (temporary_candidate.get_voices() < candidates[i].get_voices()){
                temporary_candidate = candidates[i];
            }

        }
        temporary_candidate.information();

    }
};

int main(){
    Candidate candidates[5];
    candidates[0] = Candidate("lol",6);
    candidates[1] = Candidate("Den",445);
    candidates[2] = Candidate("Veres",50);
    candidates[3] = Candidate("Marko",899);
    candidates[4] = Candidate("Ivanka",451);
    candidates[5] = Candidate("Danulo",900);

    Elections result(candidates,5);
    result.print_winner();

    return 0;
}





