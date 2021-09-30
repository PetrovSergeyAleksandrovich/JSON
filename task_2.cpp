#include <iostream>
#include <string>
#include <fstream>
#include "nlohmann/json.hpp"

int main()
{

    // Choose here the film name
    //std::string film_name = "Terminator";
    //std::string film_name = "Lord Of The Rings";
    //std::string film_name = "Breaking Bad";
    std::string film_name = "Terminator 2";
    //std::string film_name = "Better Call Saul";

    // Choose here the director name
    //std::string director = "Arnold";
    std::string director = "Vins Gilligan";
    //std::string director = "Peter Jackson";

    nlohmann::json dict;
    std::ifstream json_data("film_data_2.json");
    json_data >> dict;
    json_data.close();

    //search film data
    for (nlohmann::json::iterator it = dict.begin(); it != dict.end(); ++it)
    {
        if(it.key() == film_name) std::cout << *it << '\n';
    }

    //search director films
    for (nlohmann::json::iterator it = dict.begin(); it != dict.end(); ++it)
    {
        film_name = it.key();
        if(it.value()["director"] == director)
        {
            std::cout << film_name << std::endl;
        }
    }

    return 0;
}