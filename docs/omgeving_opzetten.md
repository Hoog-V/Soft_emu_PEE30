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
=== "Linux(ubuntu of debian)"
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
    
    
##Programmeer de MSP430FR2476 met de laatste versie van de emulator code
Afhankelijk of je een voorgeprogrammeerde MSP430FR2476 heb of niet moet je het programma laden.
Dat doe je als volgt:


???+1 example "Stap 1: Download de laatste code"

    === "Sourcetree"
        !!! note "Stap 1: Open sourcetree."
            ###Stap 1: Open sourcetree en zorg ervoor dat je dit scherm krijgt:
        !!! note "Stap 2-4: Repo clonen"
            ###Stap 2: Ga in de webbrowser naar de [GitHub pagina](https://github.com/Hoog-V/Soft_emu_PEE30) en klik vervolgens op de groene code knop.
        
            ###Stap 3: Kies de optie https in het opkomend schermpje en kopieer de link door op het knopje naast de link te klikken.
        
            ###Stap 4: Klik in sourcetree op clone a repository. Vul in het tekstvak dat opkomt de link van de github repo.
            
            ###Stap 5: Let goed op de locatie waar het naartoe gecloned wordt.
        

    === "Github desktop"
    
    
    === "Repo downloaden als zip"
        !!! note "Stap 1: Ga in de webbrowser naar de GitHub pagina"
            ### Stap 1: Ga in de webbrowser naar de GitHub pagina.
            ### Klik vervolgens op de groene knop met de naam code.
            ### Selecteer de optie Download ZIP
            ### Kies voor de optie opslaan als erom gevraagd wordt.
            
        !!! note "Stap 2: Pak het ZIP bestand uit"
            ### Pak vervolgens het ZIP bestand uit.
             
    	
    	
???+1 example "Stap 2: Importeer het programma in CCS"
        
        
        
???+1 example "Stap 3: Laad of debug het programma"


          
  

    
    
    




