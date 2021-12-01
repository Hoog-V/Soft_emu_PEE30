#Omgeving opzetten

##Installeer een UART terminal (putty, terraterm, e.g.)
Als je al een UART terminal app hebt geïnstalleerd op je computer,
kun je deze stap overslaan. Het gebruik van putty wordt aangeraden. 
Terraterm werkt ook maar kan vrij onstabiel zijn soms.
=== "Windows"
    **Download putty** [hier](https://www.chiark.greenend.org.uk/~sgtatham/putty/latest.html)
    
    
    Kies voor de optie: **64-bit x86 MSI installer** en installeer het op je pc.
 
    <p>&nbsp;</p>
    Hier een video als je er niet uitkomt...
    ![type:video](https://www.youtube.com/embed/0ptZPTTwRaE)
=== "Linux(ubuntu)"
    **Voor een grafische uart terminal:**
    
     Open de terminal en tik in:
    ```
    sudo apt-get install putty
    ```
    
    **Voor een uart sessie in de terminal:**
    
     Open de terminal en tik in:
     ```
     sudo apt-get install screen
     ```
=== "Linux(arch of manjaro)"
    **Voor een grafische uart terminal:**
    
     Open de terminal en tik in:
     ```
     sudo pacman -S putty
     ```
     
    **Voor een uart sessie in de terminal:**
    
     Open de terminal en tik in:
     ```
     sudo pacman -S screen
     ```
     
=== "Mac os"
    **Open de applicatie terminal**
    In de terminal kunnen we straks een UART sessie openen met het
    screen commando.

=== "Mac os (homebrew)"
    **Let op!**

    **Hiervoor moet je homebrew op je mac hebben geïnstalleerd**

    Open de terminal en tik in:
    ``` 
    brew install putty
    ``` 

    Als die vraagt om een wachtwoord moet je het inlogwachtwoord invoeren.

    Zie [deze](https://www.ssh.com/academy/ssh/putty/mac) site voor meer uitleg.




