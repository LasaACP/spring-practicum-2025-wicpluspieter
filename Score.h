#ifndef SCORE_H
#define SCORE_H

class Score{
    private:
        int score;
        int multiplier;

    public:
        Score();
        int getScore();
        void incrementScore();
        void incrementMultiplier();
};

#endif //SCORE_H