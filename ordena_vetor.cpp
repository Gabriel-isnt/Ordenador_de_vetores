# include <iostream>
# include <algorithm>
# include <vector>

int main(){
    int quantidade, valor;
    char ordem;
    
    std::vector<int> numeros;
    
    do{
        std::cout <<  "quantos números você quer ?: ";
        std::cin >> quantidade;
        
        if(quantidade <= 0){
            std::cout << "escolha um número maior que 0" << std::endl;
            
        } else {
            while(quantidade > numeros.size()){  // roda até a quantidade escolhida for totalmente preenchida
                std::cout << "coloque um número: ";
                std::cin >> valor;
                numeros.push_back(valor);
                
            }
            
            std::sort(numeros.begin(), numeros.end());  // organizo em ordem crescente o vetor
            
        }
        
    } while(quantidade <= 0);  // garante que a quantidade escolhida seja pelo menos 1
    

    do{ // faz até ordem ser crescente ou decrescente
        std::cout << "você quer esse seu array em ordem crescente ou decrescente ? [c / d]" << std::endl;
        std::cin >> ordem;
        
        if(ordem != 'c' && ordem != 'd'){
            std::cout << "escolha uma das opções possíveis" << std::endl;
            
        }
        
        
    } while(ordem != 'c' && ordem != 'd');
    
    if(ordem == 'c'){
        for(int numero: numeros){
            std::cout << numero << ' ';
        }
        
    } else {
        std::reverse(numeros.begin(), numeros.end());  // inverso o vector, uma vez que já está ordenado
        for(int numero: numeros){
            std::cout << numero << ' ';
            
        }
        
    }
    
    return 0;
}
