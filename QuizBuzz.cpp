#include<bits/stdc++.h>
using namespace std;

struct Question{
    string question;
    vector<string> options;
    int correctOption;
};

bool askQuestion(const Question& q){
    cout<<q.question<<endl;

    for(int i=0;i<q.options.size();i++){
        cout<<i + 1<<". "<<q.options[i]<<endl;
    }

    cout<<"Enter your answer: ";
    int userAnswer;
    cin>>userAnswer;

    return userAnswer == q.correctOption;
}

int main(){
    cout<<"Welcome to the C++ Quiz!"<<endl;
    cout<<"Please answer the following questions: "<<endl<<endl;

    vector<Question> questions={
        {"What does OOP stand for?",
         {"Object Oriented Programming", "Object Oriented Paradigm", "Object Oriented Process", "Object Oriented Protocol"},
         1},

        {"Which of the following is not a principle of OOP?",
         {"Abstraction", "Encapsulation", "Inheritance", "Subtraction"},
         4},

        {"Which keyword is used to create a child class in C++?",
         {"extends", "inherits", "derives", "class"},
         4},

        {"What is the output of 2 + 3 * 4?",
         {"20", "14", "18", "16"},
         4},

        {"What is the size of 'int' data type in C++?",
         {"4 bytes", "2 bytes", "8 bytes", "Depends on compiler"},
         1},

        {"What is the result of 'sizeof(char)'?",
         {"1", "2", "4", "Depends on compiler"},
         1}

    };

    int score=0;
    int n=questions.size();

    for(int i=0;i<n;i++){
        if(askQuestion(questions[i])){
            cout<<"Correct!"<<endl;
            score++;
        }
        else{
            cout<<"Wrong!"<<endl;
        }
        cout<<endl;
    }

    cout<<"Your final score is: "<<score<<"/"<<n<<endl;

    return 0;
}
