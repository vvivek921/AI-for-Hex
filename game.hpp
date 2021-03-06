//Hex Game class
//game.hpp
#include<vector>
#include<iostream>
#include<cassert>
#include "board.hpp"
#include<algorithm>
#include<string>
#include<memory>
#include "GraphAdjList.hpp"
using namespace std;
#include"GraphAdt.hpp"
#include "GraphAdjListCompMoves.hpp"


#ifndef GAMEHEADER
#define GAMEHEADER

class Game {
    private:
        Board B;//O is red X is blue
        bool gameIsOver;
	bool legal;
	bool playerIsHuman;
        GraphAdjListCompMoves<char> permCompMoves;
	const int sevenOrEleven;
        /*
        std::unique_ptr<GraphAdt<char> > edgeColor;
	std::unique_ptr<GraphAdjListCompMoves<char>  tempCompMoves, tempCompMovesIn, ;
	std::unique_ptr<Board>  b,bb;
	std::unique_ptr<GraphAdjList<char> > g;
	*/
        std::unique_ptr<GraphAdt<char> >edgeColor;
	std::unique_ptr<GraphAdjListCompMoves<char> >  tempCompMoves, tempCompMovesIn ;
	std::unique_ptr<Board >  b,bb;
        vector<int> v;
		
    public:
	void run(); 
	bool gameStatus() ;
	bool humanMove() ;
	bool computerMove() ;
	void seeNeighbours(char C, int row, int col,int actualRow,int actualCol) ;
	void printWinner(bool playerIsHuman) ;
	~Game();	
	Game(int num, bool b) ;
        inline int rowColToIndex(int  row,int col) ;
	inline void indexToRowCol(int&  row , int & col, int index);
	void seeNeighboursDummy( int row, int col,int actualRow,int actualCol);
	void seeNeighboursDummyIn( int row, int col,int actualRow,int actualCol);
};		
  	
#endif	

