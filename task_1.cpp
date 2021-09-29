#include <iostream>
#include <string>
#include <fstream>
#include "nlohmann/json.hpp"

struct FilmData{
    std::string country_of_origin = "none";
    int year_of_production = 0;
    std::string studio = "none";
    std::string scenario = "none";
    std::string director = "none";
    std::string producer = "none";
};

int main()
{
    FilmData film_data;

    nlohmann::json dict;
    std::ofstream file("film_data.json");

    std::cout << "country_of_origin: ";
    std::cin >> film_data.country_of_origin;
    std::cout << "year_of_production: ";
    std::cin >> film_data.year_of_production;
    std::cout << "studio: ";
    std::cin >> film_data.studio;
    std::cout << "scenario: ";
    std::cin >> film_data.scenario;
    std::cout << "director: ";
    std::cin >> film_data.director;
    std::cout << "producer: ";
    std::cin >> film_data.producer;

    dict["country_of_origin"] = film_data.country_of_origin;
    dict["year_of_production"] = film_data.year_of_production;
    dict["studio"] = film_data.studio;
    dict["scenario"] = film_data.scenario;
    dict["director"] = film_data.director;
    dict["producer"] = film_data.producer;

    file << dict;

    file.close();

    std::ifstream json_data("film_data.json");
    std::string tmp;

    json_data >> tmp;

    json_data.close();

    std::cout << tmp;
    return 0;
}