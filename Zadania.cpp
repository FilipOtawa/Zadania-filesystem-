#include <iostream>
#include <filesystem>
#include <fstream>


int main() {
    std::cout<<"\n\n\n-------------ZADANIE 1-------------\n\n\n";

    //     ZADANIE 1
    // Uzywaj fs::path do przechowywania sciezek (zamiast zwyklych stringow).
    // Sprawdz, czy istnieje folder o nazwie dane.
    //     Jesli folder nie istnieje, stworz go za pomoca <filesystem> i wypisz komunikat o jego utworzeniu.
    //     Jesli folder już istnieje, program ma wypisać informację, że folder jest dostępny.
    // Za pomocą fs::path stworz scieżkę do pliku o nazwie "plik.txt" wewnątrz folderu dane,
    // następnie za pomocą std::ofstream wpisz do pliku tekst "przykladowy tekst".
    // Zrob sprawdzenie czy plik istnieje i wypisz komunikat jeśli tak oraz rozmiar (ile bajtow).

    std::filesystem::path folder = "dane";

    // std::ofstream(...) << "przykladowy tekst";
    // std::cout << "Utworzono plik: " << ... << "\n";


    std::cout << "Odp. 17 bajtow\n";
        std::cout<<"\n\n\n-------------ZADANIE 2-------------\n\n\n";


    //     ZADANIE 2.
    // Skopiuj plik "plik.txt" do nowego pliku o nazwie "plik_kopia.txt" w tym samym folderze, Jeśli plik docelowy istnieje nadpisz go nowa wersja.
    // Jesli kopiowanie się powiedzie:
    //     wypisz komunikat o sukcesie oraz wypisz rozmiar skopiowanego pliku.
    // Nastepnie usun oryginalny plik "plik.txt".
    // Sprawdz czy oryginalny plik został poprawnie usuniety (sprawdz czy istnieje) i wypisze odpowiedni komunikat.
    // Na koniec usuń cały folder dane.


    // std::cout << "Skopiowano plik do: " << ... << "\n";

    // std::cout << "Rozmiar skopiowanego pliku: "<< ... << " bajtów\n";

    // std::cout << "Usunieto oryginalny plik: " << ... << "\n";

    // std::cout << "Usunieto folder " << ... << "\n";



    std::cout<<"\n\n\n-------------ZADANIE 3-------------\n\n\n";


    //Zadanie 3
    //Oblicz całkowity rozmiar wszystkich plików tesktowych (.txt), znajdujących się w folderze files.
    std::filesystem::path path3 = "tutaj wpisz sciezke do katalogu files";
    uintmax_t totalSize = 0;


    std::cout << "Rozmiar plikow .txt: " << totalSize << " bajtow" << std::endl;

    std::cout<<"\n\n\n-------------ZADANIE 4-------------\n\n\n";
    //Zadanie 4
    // a)
    //Użyj iteratora directory_iterator, aby spróbować wypisać elementy znajdujące się w katalogu "C:/System Volume Information" (jeśli korzystasz z linuxa skorzystaj ze ścieżki: "/root").
    //Obsłuż odpowiednio wyjątek, który może zostać rzucony podczas próby dostępu do tego katalogu za pomocą filesystem_error (działa jak exception).
    std::filesystem::path path4 = "C:/System Volume Information"; //Jeśli korzystasz z linux uzyj scizki "/root"


    // b)
    //Zrób dokładnie to samo, ale tym razem zamiast rzucać wyjątek, wykorzystaj error_code, aby obsłużyć błąd.
    std::error_code ec;
}
