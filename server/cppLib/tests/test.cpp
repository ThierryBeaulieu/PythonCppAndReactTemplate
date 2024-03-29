#include <gtest/gtest.h>

#include "../lib/InputHandler/InputManager.h"

#include "../lib/Board/Board.h"
#include "../lib/Pieces/Piece.h"
#include "../lib/GameManager/GameManager.h"
#include "../lib/GameManager/Color.h"

#include "../lib/Pieces/Bishop.h"
#include "../lib/Pieces/King.h"
#include "../lib/Pieces/Queen.h"
#include "../lib/Pieces/Pawn.h"
#include "../lib/Pieces/Rook.h"
#include "../lib/Pieces/Knight.h"

// verify if the content of the board is initialize at nullptr
TEST(BoardTest, BoardBaseConstructor){
    static const int boardWidth = 8;
    Board<boardWidth> board;
    
    for(int i = 0; i < boardWidth; i++){
        for(int j = 0; j < boardWidth; j++){
            EXPECT_EQ(board.getTileContent(i,j), nullptr);
        }
    }
}

// verify if the players turn will end
TEST(GameManagerTest, endPlayersTurn){
    GameManager manager;
    std::shared_ptr<Player> playersTurn = manager.getPlayersTurn();
    manager.endPlayersTurn();
    EXPECT_NE(playersTurn, manager.getPlayersTurn());
}


// verify if the pieces have the right positions
TEST(PiecesTest, constructor) {
    int xPos = 1;
    int yPos = 5;

    Rook rook(xPos, yPos);
    Position rookPos = rook.getPosition();
    EXPECT_EQ(rookPos.x, xPos);
    EXPECT_EQ(rookPos.y, yPos);

    Queen queen(xPos, yPos);
    Position queenPos = queen.getPosition();
    EXPECT_EQ(queenPos.x, xPos);
    EXPECT_EQ(queenPos.y, yPos);

    King king(xPos, yPos);
    Position kingPos = king.getPosition();
    EXPECT_EQ(kingPos.x, xPos);
    EXPECT_EQ(kingPos.y, yPos);

    Knight knight(xPos, yPos);
    Position knightPos = knight.getPosition();
    EXPECT_EQ(knightPos.x, xPos);
    EXPECT_EQ(knightPos.y, yPos);

    Bishop bishop(xPos, yPos);
    Position bishopPos = bishop.getPosition();
    EXPECT_EQ(bishopPos.x, xPos);
    EXPECT_EQ(bishopPos.y, yPos);

    Pawn pawn(xPos, yPos);
    Position pawnPos = pawn.getPosition();
    EXPECT_EQ(pawnPos.x, xPos);
    EXPECT_EQ(pawnPos.y, yPos);
}

// Verify if the userInput can be taken correctly
TEST(InputManagerTest, verifyUserInput) {
    EXPECT_EQ(InputHandler::verifyUserInput("A1"), true);
    EXPECT_EQ(InputHandler::verifyUserInput("H8"), true);
    EXPECT_EQ(InputHandler::verifyUserInput("g8"), true);
    EXPECT_EQ(InputHandler::verifyUserInput("H1"), true);
    EXPECT_EQ(InputHandler::verifyUserInput("a8"), true);
    EXPECT_EQ(InputHandler::verifyUserInput("b8"), true);
    EXPECT_EQ(InputHandler::verifyUserInput("h1"), true);

    EXPECT_EQ(InputHandler::verifyUserInput("^1"), false);
    EXPECT_EQ(InputHandler::verifyUserInput("i1"), false);
    EXPECT_EQ(InputHandler::verifyUserInput("a9"), false);
}

// Convert correctly the user input
TEST(InputMangerTest, verifyCorrectConversions) {
    EXPECT_EQ(1, InputManager::convertIntToIndex('2'));
    EXPECT_EQ(7, InputManager::convertIntToIndex('8'));
    EXPECT_EQ(0, InputManager::convertIntToIndex('1'));

    EXPECT_EQ(0, InputManager::convertLetterToIndex('a'));
    EXPECT_EQ(0, InputManager::convertLetterToIndex('A'));
    EXPECT_EQ(1, InputManager::convertLetterToIndex('b'));
    EXPECT_EQ(1, InputManager::convertLetterToIndex('B'));
    EXPECT_EQ(2, InputManager::convertLetterToIndex('c'));
    EXPECT_EQ(2, InputManager::convertLetterToIndex('C'));
    EXPECT_EQ(3, InputManager::convertLetterToIndex('d'));
    EXPECT_EQ(3, InputManager::convertLetterToIndex('D'));
    EXPECT_EQ(4, InputManager::convertLetterToIndex('e'));
    EXPECT_EQ(4, InputManager::convertLetterToIndex('E'));
    EXPECT_EQ(5, InputManager::convertLetterToIndex('f'));
    EXPECT_EQ(5, InputManager::convertLetterToIndex('F'));
}