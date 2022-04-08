#ifndef tempo.h
#define tempo.h
class Tempo{
  private:
    int hora, minuto,segundo;
public:
    Tempo();
    Tempo(int ,int ,int);
    void setTempo(int,int,int);
    void imprime();
    ~Tempo(){};
};

#endif