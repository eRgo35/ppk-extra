/*
  PODSTAWY PROGRAMOWANIA KOMPUTEROW
  FUNDAMENTALS OF COMPUTER PROGRAMMING

  struktury
  structures
 */

#define debug(x) std::cerr << "(" << __LINE__ << ") " << #x << " == " << (x) << std::endl

#include <iostream>
#include <fstream>
#include <sstream>
#include <iomanip>
#include <vector>
#include <chrono>
#include <random>

/**
 * [PL] kolory kart do gry
 * [EN] suits of playing cards
 */
enum class suit
{
  spades,
  hearts,
  diamonds,
  clubs
};

/**
 * [PL] wartosci kart do gry
 * [EN] ranks of playing cards
 */
enum class rank
{
  ace,
  king,
  queen,
  jack,
  ten,
  nine,
  eight,
  seven,
  six,
  five,
  four,
  three,
  two
};

/**
 * [PL] karta do gry
 * [EN] playing card */
struct card
{
  suit _suit; ///< [PL] kolor   | [EN] suit
  rank _rank; ///< [PL] wartosc | [EN] rank
};

/**
 * [PL] reka -- karty jednego gracza
 * [EN] hand -- cards of one player */
struct hand
{
  int id;                  ///< [PL] identyfikator | [EN] identifier
  std::vector<card> cards; ///< [PL] karty w reku  | [EN] cards in hand
};

/**
 * [PL] Funkcja tworzy 52-kartową talię kart. Na karty składają się karty czterech kolorów (pik, kier, karo, trefl),  w każdym kolorze wartości od 2 do 10, walet, dama, król, as.
 * [EN] The function creates a pack of 52 cards. Cards have four suits (spades, hearts, diamonds, clubs) and in each suit values 2 to 10, jack, queen, king, and ace.
 @return [PL] utworzona talia | [EN] a pack of card */
std::vector<card> create_pack_bridge()
{
  std::vector<card> deck;
  for (int suit = 0; suit < 4; suit++)
    for (int rank = 0; rank < 13; rank++)
    {
      card card {suit::spades, rank::ace};
      deck.push_back(card);
    }

  return deck;
}

/**
 * [PL] Funkcja tasuje przekazaną talię kart.
 * [EN] The function shuffles a pack of cards.
 @param pack [PL] talia do posortowania | [EN] a pack to shuffle
 @return [PL] posortowana talia | [EN] shuffled pack */
std::vector<card> shuffle(std::vector<card> &pack);

/**
 * [PL] Funkcja rozdaje karty z talii graczom.
 * [EN] The function deals cards to players.
 @param pack    [PL] talia kart do rozdania | [EN] a pack of cards
 @param players [PL] liczba graczy          | [EN] number of players
 @return [PL] rece z rozdanymi kartami | [EN] hands with cards */
std::vector<hand> deal(const std::vector<card> &pack, const int players);

/**
 * [PL] Funkcja zwraca napis z opisem karty. |
 * [EN] The function returns a string that describes a card.
 @param k [PL] karta | [EN] a card
 @return  [PL] opis karty | [EN] description of a card */
std::string to_string(const card &k)
{
  std::stringstream card_name;

  switch (k._rank)
  {
  case rank::ace:
    card_name << "Ace";
  case rank::two:
    card_name << "Two";
  case rank::three:
    card_name << "Three";
  case rank::four:
    card_name << "Four";
  case rank::five:
    card_name << "Five";
  case rank::six:
    card_name << "Six";
  case rank::seven:
    card_name << "Seven";
  case rank::eight:
    card_name << "Eight";
  case rank::nine:
    card_name << "Nine";
  case rank::ten:
    card_name << "Ten";
  case rank::jack:
    card_name << "Jack";
  case rank::queen:
    card_name << "Queen";
  case rank::king:
    card_name << "King";
  default:
    return "Error";
  }

  card_name << " of ";

  switch (k._suit)
  {
  case suit::spades:
    card_name << "Spades";
  case suit::hearts:
    card_name << "Hearts";
  case suit::diamonds:
    card_name << "Diamonds";
  case suit::clubs:
    card_name << "Clubs";
  default:
    return "Error";
  }

  std::string c;
  std::string card;
  while (card_name >> c)
    std::cout << c;
}

void print(const std::vector<card> &d)
{
  std::cout << to_string(d[0]) << std::endl;
}

/**
 * [PL] Funkcja wypisuje identyfikator reki i jej karty na standardowe wyjscie.
 * [EN] The function prints hand's indetifier and its cards to the standard output.
 @param h  [PL] | [EN] hand to print  */
void print(const hand &h);

/**
 * [PL] Funkcja wypisuje karty w rozdaniu na standardowe wyjscie.
 * [EN] The function prints a deal to the standard output.
 @param deal [PL] rozdanie do wypisania | [EN] a deal to print  */
void print(const std::vector<hand> &deal);

/////////////////////////////////////////////

int main()
{
  /*
  [PL] Prosze zaimplementowac wyzej zadeklarowane funkcje i odkomentowac linie ponizej.
  [EN] Implement the fuctions declared above and uncomment the lines below.
   */

  std::vector<card> deck = create_pack_bridge();
  std::cout << deck[0]._rank << " " << deck[0]._suit << std::endl;
  // std::cout << "deck of cards" << std::endl;
  // print(deck);
  //
  // 	std::cout << "----------------" << std::endl;
  //
  // 	deck = shuffle (deck);
  // 	std::cout << "shuffled deck of cards" << std::endl;
  // 	print(deck);
  //
  // 	std::cout << "----------------" << std::endl;
  //
  // 	const int number_of_players { 4 }; // bridge
  // 	std::vector<hand> players = deal(deck, number_of_players);
  // 	std::cout << "players and their cards:" << std::endl;
  // 	for (std::size_t i = 0; i < players.size(); i++)
  // 		print(players[i]);

  return 0;
}
