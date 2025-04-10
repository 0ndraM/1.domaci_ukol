Zadání 1. úkolu



(!) Vytvořte program (v jazyce C++), který bude pracovat s objektem obsahující dvě celá (!) čísla. tento objekt bude mít následující chování (metody):

určit součet čísel, rozdíl čísel, součin čísel a reálný podíl těchto celých čísel - každá operace řešena v samostatné metodě (stačí realizovat podíl čísel a jednu ze zbývajících metod)

větší hodnotu ze dvou čísel
průměrnou hodnotu čísel

nejmenší společný násobek a největší společný dělitel čísel - každá operace řešena v samostatné metodě

informaci, jestli je alespoň jedno ze dvou čísel nulové

výsledek celočíselného dělení a zbytek po dělení - výpočet těchto dvou hodnot v rámci jedné metody
Program řešte plně s využitím principů OOP - třída Cisla bude mít datové položky dvou celých čísel, které se nastaví v konstruktoru třídy. Nepůjde vytvořit objekt třídy Cisla, aniž by hodnoty položek nebyly nastaveny. Hodnoty čísel nepůjde změnit, ale půjde získat jejich hodnoty. Metody třídy budou zajišťovat výpočty nad daty a výsledek vracet návratovou hodnotou.

Program po spuštění vytvoří objekt se zadanými čísly (čísla zadané uživatelem na standardním vstupu) a pomocí menu umožní provést následující operace.


výsledek zadané operace, která spočítá nad čísly operaci určenou hodnotou parametru op: { 1 ... součet, 2 ... rozdíl, 3 ... součin, 4 ... podíl, 5 ... maximum, 6 ... průměr, 7 ... NSN, 8 ... NSD,  9 ... nulová čísla, 10 ... zobrazit čísla, 11 ... celočíselné dělení a zbytek po dělení, 0 ... KONEC}




Pro zvolenou operaci program vytiskne hodnoty čísel, identifkátor operace a výsledek výpočtu dané operace.

Všechny informace vypište v přehledném formátu - reálná čísla zaokrouhlujte na 2 desetinná místa, logická hodnoty vypisujte ve tvaru „Ano"/"Ne". Objekt bude zajišťovat provedení celé operace včetně zobrazení výsledků. Alespoň u jedné matematické operace a u operace "nulová čísla" ale pouze spočítá výsledek a vrátí jej návratovou hodnotou metody. Zobrazení bude realizováno v hlavní funkci Main.



(!) Přidejte do třídy metodu .operace, která bude mít jako parametr identifkátor operace. Tato metoda na základě identifikátoru zajistí získání výsledku výpočtu a vše zobrazí. Identikátor operace je řešen položkou výčtového typu.

Verzi programu v Main funkci zakomentujte a adekvátně upravte tak, aby se využívala metoda .operace. Obsluha menu zůstává ve funkci Main.


(!) Objekt bude vytvářen dynamickým způsobem.



Odevzdává se funkční projekt v zip.
