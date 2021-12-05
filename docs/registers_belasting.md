# Register map belasting(I2C)

## **Register 0: Status belasting**
#### BIT:
<div class="RegisterTabel">
<div class="RegisterTabelBody">
<div class="RegisterTabelRij">
<div class="RegisterTabelLeeg">15</div>
<div class="RegisterTabelLeeg">14</div>
<div class="RegisterTabelLeeg">13</div>
<div class="RegisterTabelLeeg">12</div>
<div class="RegisterTabelLeeg">11</div>
<div class="RegisterTabelLeeg">10</div>
<div class="RegisterTabelLeeg">9</div>
<div class="RegisterTabelLeeg">8</div>
</div>
<div class="RegisterTabelRij">
<div class="RegisterTabelnvt">&nbsp;</div>
<div class="RegisterTabelnvt">&nbsp;</div>
<div class="RegisterTabelnvt">&nbsp;</div>
<div class="RegisterTabelnvt">&nbsp;</div>
<div class="RegisterTabelnvt">&nbsp;</div>
<div class="RegisterTabelnvt">&nbsp;</div>
<div class="RegisterTabelnvt">&nbsp;</div>
<div class="RegisterTabelnvt">&nbsp;</div>
</div>
<div class="RegisterTabelRij">
<div class="RegisterTabelLeeg">RO</div>
<div class="RegisterTabelLeeg">RO</div>
<div class="RegisterTabelLeeg">RO</div>
<div class="RegisterTabelLeeg">RO</div>
<div class="RegisterTabelLeeg">RO</div>
<div class="RegisterTabelLeeg">RO</div>
<div class="RegisterTabelLeeg">RO</div>
<div class="RegisterTabelLeeg">RO</div>
</div>
</div>
</div>
 
<div class="RegisterTabel">
<div class="RegisterTabelBody">
<div class="RegisterTabelRij">
<div class="RegisterTabelLeeg">7</div>
<div class="RegisterTabelLeeg">6</div>
<div class="RegisterTabelLeeg">5</div>
<div class="RegisterTabelLeeg">4</div>
<div class="RegisterTabelLeeg">3</div>
<div class="RegisterTabelLeeg">2</div>
<div class="RegisterTabelLeeg">1</div>
<div class="RegisterTabelLeeg">0</div>
</div>
<div class="RegisterTabelRij">
<div class="RegisterTabelnvt">&nbsp;</div>
<div class="RegisterTabelnvt">&nbsp;</div>
<div class="RegisterTabelnvt">&nbsp;</div>
<div class="RegisterTabelnvt">&nbsp;</div>
<div class="RegisterTabelnvt">&nbsp;</div>
<div class="RegisterTabelTekst">Stat</div>
<div class="RegisterTabelTekst">Stat</div>
<div class="RegisterTabelTekst">Stat</div>
        </div>
<div class="RegisterTabelRij">
<div class="RegisterTabelLeeg">RO</div>
<div class="RegisterTabelLeeg">RO</div>
<div class="RegisterTabelLeeg">RO</div>
<div class="RegisterTabelLeeg">RO</div>
<div class="RegisterTabelLeeg">RO</div>
<div class="RegisterTabelLeeg">RO</div>
<div class="RegisterTabelLeeg">RO</div>
<div class="RegisterTabelLeeg">RO</div>
</div>
</div>
</div>

###Stat [2:0] Status belasting
     
Mogelijke status:
      
- 0x01 (0b100): Overload
      
- 0x02 (0b010): Overspeed

- 0x03 (0b110): Overheat
      
- 0x04 (0b001): Noodstop
        
- 0x05 (0b101): Gereed, wachtend op start signaal
       
- 0x06 (0b011): DUT (Device under test) / Actief
        
---
**RO= Read only**
      
**RW= Read/write**


## **Register 1: Rendement belasting**
#### BIT:
<div class="RegisterTabel">
<div class="RegisterTabelBody">
<div class="RegisterTabelRij">
<div class="RegisterTabelLeeg">15</div>
<div class="RegisterTabelLeeg">14</div>
<div class="RegisterTabelLeeg">13</div>
<div class="RegisterTabelLeeg">12</div>
<div class="RegisterTabelLeeg">11</div>
<div class="RegisterTabelLeeg">10</div>
<div class="RegisterTabelLeeg">9</div>
<div class="RegisterTabelLeeg">8</div>
</div>
<div class="RegisterTabelRij">
<div class="RegisterTabelnvt">&nbsp;</div>
<div class="RegisterTabelnvt">&nbsp;</div>
<div class="RegisterTabelnvt">&nbsp;</div>
<div class="RegisterTabelnvt">&nbsp;</div>
<div class="RegisterTabelnvt">&nbsp;</div>
<div class="RegisterTabelnvt">&nbsp;</div>
<div class="RegisterTabelnvt">&nbsp;</div>
<div class="RegisterTabelnvt">&nbsp;</div>
</div>
<div class="RegisterTabelRij">
<div class="RegisterTabelLeeg">RO</div>
<div class="RegisterTabelLeeg">RO</div>
<div class="RegisterTabelLeeg">RO</div>
<div class="RegisterTabelLeeg">RO</div>
<div class="RegisterTabelLeeg">RO</div>
<div class="RegisterTabelLeeg">RO</div>
<div class="RegisterTabelLeeg">RO</div>
<div class="RegisterTabelLeeg">RO</div>
</div>
</div>
</div>
 
<div class="RegisterTabel">
<div class="RegisterTabelBody">
<div class="RegisterTabelRij">
<div class="RegisterTabelLeeg">7</div>
<div class="RegisterTabelLeeg">6</div>
<div class="RegisterTabelLeeg">5</div>
<div class="RegisterTabelLeeg">4</div>
<div class="RegisterTabelLeeg">3</div>
<div class="RegisterTabelLeeg">2</div>
<div class="RegisterTabelLeeg">1</div>
<div class="RegisterTabelLeeg">0</div>
</div>
<div class="RegisterTabelRij">
<div class="RegisterTabelnvt">&nbsp;</div>
<div class="RegisterTabelTekst">Ren</div>
<div class="RegisterTabelTekst">Ren</div>
<div class="RegisterTabelTekst">Ren</div>
<div class="RegisterTabelTekst">Ren</div>
<div class="RegisterTabelTekst">Ren</div>
<div class="RegisterTabelTekst">Ren</div>
<div class="RegisterTabelTekst">Ren</div>
</div>
<div class="RegisterTabelRij">
<div class="RegisterTabelLeeg">RO</div>
<div class="RegisterTabelLeeg">RO</div>
<div class="RegisterTabelLeeg">RO</div>
<div class="RegisterTabelLeeg">RO</div>
<div class="RegisterTabelLeeg">RO</div>
<div class="RegisterTabelLeeg">RO</div>
<div class="RegisterTabelLeeg">RO</div>
<div class="RegisterTabelLeeg">RO</div>
</div>
</div>
</div>

### Ren [6:0] Rendement belasting
        
Mogelijke waarden zijn theoretisch mogelijk van 0-127. 
Echter wordt alleen het bereik van 0-100(%) gebruikt.

---
**RO= Read only**
        
**RW= Read/write**



## **Register 2: Temperatuur belasting**
#### BIT:
<div class="RegisterTabel">
<div class="RegisterTabelBody">
<div class="RegisterTabelRij">
<div class="RegisterTabelLeeg">15</div>
<div class="RegisterTabelLeeg">14</div>
<div class="RegisterTabelLeeg">13</div>
<div class="RegisterTabelLeeg">12</div>
<div class="RegisterTabelLeeg">11</div>
<div class="RegisterTabelLeeg">10</div>
<div class="RegisterTabelLeeg">9</div>
<div class="RegisterTabelLeeg">8</div>
</div>
<div class="RegisterTabelRij">
<div class="RegisterTabelnvt">&nbsp;</div>
<div class="RegisterTabelnvt">&nbsp;</div>
<div class="RegisterTabelnvt">&nbsp;</div>
<div class="RegisterTabelnvt">&nbsp;</div>
<div class="RegisterTabelnvt">&nbsp;</div>
<div class="RegisterTabelnvt">&nbsp;</div>
<div class="RegisterTabelnvt">&nbsp;</div>
<div class="RegisterTabelnvt">&nbsp;</div>
</div>
<div class="RegisterTabelRij">
<div class="RegisterTabelLeeg">RO</div>
<div class="RegisterTabelLeeg">RO</div>
<div class="RegisterTabelLeeg">RO</div>
<div class="RegisterTabelLeeg">RO</div>
<div class="RegisterTabelLeeg">RO</div>
<div class="RegisterTabelLeeg">RO</div>
<div class="RegisterTabelLeeg">RO</div>
<div class="RegisterTabelLeeg">RO</div>
</div>
</div>
</div>
 
<div class="RegisterTabel">
<div class="RegisterTabelBody">
<div class="RegisterTabelRij">
<div class="RegisterTabelLeeg">7</div>
<div class="RegisterTabelLeeg">6</div>
<div class="RegisterTabelLeeg">5</div>
<div class="RegisterTabelLeeg">4</div>
<div class="RegisterTabelLeeg">3</div>
<div class="RegisterTabelLeeg">2</div>
<div class="RegisterTabelLeeg">1</div>
<div class="RegisterTabelLeeg">0</div>
</div>
<div class="RegisterTabelRij">
<div class="RegisterTabelnvt">&nbsp;</div>
<div class="RegisterTabelTekst">Temp</div>
<div class="RegisterTabelTekst">Temp</div>
<div class="RegisterTabelTekst">Temp</div>
<div class="RegisterTabelTekst">Temp</div>
<div class="RegisterTabelTekst">Temp</div>
<div class="RegisterTabelTekst">Temp</div>
<div class="RegisterTabelTekst">Temp</div>
</div>
<div class="RegisterTabelRij">
<div class="RegisterTabelLeeg">RO</div>
<div class="RegisterTabelLeeg">RO</div>
<div class="RegisterTabelLeeg">RO</div>
<div class="RegisterTabelLeeg">RO</div>
<div class="RegisterTabelLeeg">RO</div>
<div class="RegisterTabelLeeg">RO</div>
<div class="RegisterTabelLeeg">RO</div>
<div class="RegisterTabelLeeg">RO</div>
</div>
</div>
</div>

### Temp [6:0] Temperatuur belasting
        
Mogelijke waarden zijn theoretisch mogelijk van 0-127. 
Echter wordt alleen het bereik van 0-100(°) gebruikt.

---
**RO= Read only**
        
**RW= Read/write**



## **Register 3: Koppel belasting motor**
#### BIT:
<div class="RegisterTabel">
<div class="RegisterTabelBody">
<div class="RegisterTabelRij">
<div class="RegisterTabelLeeg">15</div>
<div class="RegisterTabelLeeg">14</div>
<div class="RegisterTabelLeeg">13</div>
<div class="RegisterTabelLeeg">12</div>
<div class="RegisterTabelLeeg">11</div>
<div class="RegisterTabelLeeg">10</div>
<div class="RegisterTabelLeeg">9</div>
<div class="RegisterTabelLeeg">8</div>
</div>
<div class="RegisterTabelRij">
<div class="RegisterTabelnvt">&nbsp;</div>
<div class="RegisterTabelnvt">&nbsp;</div>
<div class="RegisterTabelnvt">&nbsp;</div>
<div class="RegisterTabelnvt">&nbsp;</div>
<div class="RegisterTabelnvt">&nbsp;</div>
<div class="RegisterTabelnvt">&nbsp;</div>
<div class="RegisterTabelnvt">&nbsp;</div>
<div class="RegisterTabelnvt">&nbsp;</div>
</div>
<div class="RegisterTabelRij">
<div class="RegisterTabelLeeg">RO</div>
<div class="RegisterTabelLeeg">RO</div>
<div class="RegisterTabelLeeg">RO</div>
<div class="RegisterTabelLeeg">RO</div>
<div class="RegisterTabelLeeg">RO</div>
<div class="RegisterTabelLeeg">RO</div>
<div class="RegisterTabelLeeg">RO</div>
<div class="RegisterTabelLeeg">RO</div>
</div>
</div>
</div>
 
<div class="RegisterTabel">
<div class="RegisterTabelBody">
<div class="RegisterTabelRij">
<div class="RegisterTabelLeeg">7</div>
<div class="RegisterTabelLeeg">6</div>
<div class="RegisterTabelLeeg">5</div>
<div class="RegisterTabelLeeg">4</div>
<div class="RegisterTabelLeeg">3</div>
<div class="RegisterTabelLeeg">2</div>
<div class="RegisterTabelLeeg">1</div>
<div class="RegisterTabelLeeg">0</div>
</div>
<div class="RegisterTabelRij">
<div class="RegisterTabelTekst">Kopb</div>
<div class="RegisterTabelTekst">Kopb</div>
<div class="RegisterTabelTekst">Kopb</div>
<div class="RegisterTabelTekst">Kopb</div>
<div class="RegisterTabelTekst">Kopb</div>
<div class="RegisterTabelTekst">Kopb</div>
<div class="RegisterTabelTekst">Kopb</div>
<div class="RegisterTabelTekst">Kopb</div>
</div>
<div class="RegisterTabelRij">
<div class="RegisterTabelLeeg">RO</div>
<div class="RegisterTabelLeeg">RO</div>
<div class="RegisterTabelLeeg">RO</div>
<div class="RegisterTabelLeeg">RO</div>
<div class="RegisterTabelLeeg">RO</div>
<div class="RegisterTabelLeeg">RO</div>
<div class="RegisterTabelLeeg">RO</div>
<div class="RegisterTabelLeeg">RO</div>
</div>
</div>
</div>

### Kopb [7:0] Koppel belasting motor
        
Mogelijke waarden zijn 0-256 (Nm). 

---
**RO= Read only**
        
**RW= Read/write**


## **Register 4: Vermogen belasting motor**
#### BIT:
<div class="RegisterTabel">
<div class="RegisterTabelBody">
<div class="RegisterTabelRij">
<div class="RegisterTabelLeeg">15</div>
<div class="RegisterTabelLeeg">14</div>
<div class="RegisterTabelLeeg">13</div>
<div class="RegisterTabelLeeg">12</div>
<div class="RegisterTabelLeeg">11</div>
<div class="RegisterTabelLeeg">10</div>
<div class="RegisterTabelLeeg">9</div>
<div class="RegisterTabelLeeg">8</div>
</div>
<div class="RegisterTabelRij">
<div class="RegisterTabelnvt">&nbsp;</div>
<div class="RegisterTabelnvt">&nbsp;</div>
<div class="RegisterTabelnvt">&nbsp;</div>
<div class="RegisterTabelnvt">&nbsp;</div>
<div class="RegisterTabelnvt">&nbsp;</div>
<div class="RegisterTabelnvt">&nbsp;</div>
<div class="RegisterTabelnvt">&nbsp;</div>
<div class="RegisterTabelnvt">&nbsp;</div>
</div>
<div class="RegisterTabelRij">
<div class="RegisterTabelLeeg">RO</div>
<div class="RegisterTabelLeeg">RO</div>
<div class="RegisterTabelLeeg">RO</div>
<div class="RegisterTabelLeeg">RO</div>
<div class="RegisterTabelLeeg">RO</div>
<div class="RegisterTabelLeeg">RO</div>
<div class="RegisterTabelLeeg">RO</div>
<div class="RegisterTabelLeeg">RO</div>
</div>
</div>
</div>
 
<div class="RegisterTabel">
<div class="RegisterTabelBody">
<div class="RegisterTabelRij">
<div class="RegisterTabelLeeg">7</div>
<div class="RegisterTabelLeeg">6</div>
<div class="RegisterTabelLeeg">5</div>
<div class="RegisterTabelLeeg">4</div>
<div class="RegisterTabelLeeg">3</div>
<div class="RegisterTabelLeeg">2</div>
<div class="RegisterTabelLeeg">1</div>
<div class="RegisterTabelLeeg">0</div>
</div>
<div class="RegisterTabelRij">
<div class="RegisterTabelTekst">Pb</div>
<div class="RegisterTabelTekst">Pb</div>
<div class="RegisterTabelTekst">Pb</div>
<div class="RegisterTabelTekst">Pb</div>
<div class="RegisterTabelTekst">Pb</div>
<div class="RegisterTabelTekst">Pb</div>
<div class="RegisterTabelTekst">Pb</div>
<div class="RegisterTabelTekst">Pb</div>
</div>
<div class="RegisterTabelRij">
<div class="RegisterTabelLeeg">RO</div>
<div class="RegisterTabelLeeg">RO</div>
<div class="RegisterTabelLeeg">RO</div>
<div class="RegisterTabelLeeg">RO</div>
<div class="RegisterTabelLeeg">RO</div>
<div class="RegisterTabelLeeg">RO</div>
<div class="RegisterTabelLeeg">RO</div>
<div class="RegisterTabelLeeg">RO</div>
</div>
</div>
</div>

### Pb [7:0] Vermogen belasting
        
Mogelijke waarden zijn 0-256 (W). 

---
**RO= Read only**
        
**RW= Read/write**


## **Register 5: Maximale temperatuur instelling**
#### BIT:
<div class="RegisterTabel">
<div class="RegisterTabelBody">
<div class="RegisterTabelRij">
<div class="RegisterTabelLeeg">15</div>
<div class="RegisterTabelLeeg">14</div>
<div class="RegisterTabelLeeg">13</div>
<div class="RegisterTabelLeeg">12</div>
<div class="RegisterTabelLeeg">11</div>
<div class="RegisterTabelLeeg">10</div>
<div class="RegisterTabelLeeg">9</div>
<div class="RegisterTabelLeeg">8</div>
</div>
<div class="RegisterTabelRij">
<div class="RegisterTabelnvt">&nbsp;</div>
<div class="RegisterTabelnvt">&nbsp;</div>
<div class="RegisterTabelnvt">&nbsp;</div>
<div class="RegisterTabelnvt">&nbsp;</div>
<div class="RegisterTabelnvt">&nbsp;</div>
<div class="RegisterTabelnvt">&nbsp;</div>
<div class="RegisterTabelnvt">&nbsp;</div>
<div class="RegisterTabelnvt">&nbsp;</div>
</div>
<div class="RegisterTabelRij">
<div class="RegisterTabelLeeg">R/W</div>
<div class="RegisterTabelLeeg">R/W</div>
<div class="RegisterTabelLeeg">R/W</div>
<div class="RegisterTabelLeeg">R/W</div>
<div class="RegisterTabelLeeg">R/W</div>
<div class="RegisterTabelLeeg">R/W</div>
<div class="RegisterTabelLeeg">R/W</div>
<div class="RegisterTabelLeeg">R/W</div>
</div>
</div>
</div>
 
<div class="RegisterTabel">
<div class="RegisterTabelBody">
<div class="RegisterTabelRij">
<div class="RegisterTabelLeeg">7</div>
<div class="RegisterTabelLeeg">6</div>
<div class="RegisterTabelLeeg">5</div>
<div class="RegisterTabelLeeg">4</div>
<div class="RegisterTabelLeeg">3</div>
<div class="RegisterTabelLeeg">2</div>
<div class="RegisterTabelLeeg">1</div>
<div class="RegisterTabelLeeg">0</div>
</div>
<div class="RegisterTabelRij">
<div class="RegisterTabelnvt">&nbsp;</div>
<div class="RegisterTabelTekst">Tm</div>
<div class="RegisterTabelTekst">Tm</div>
<div class="RegisterTabelTekst">Tm</div>
<div class="RegisterTabelTekst">Tm</div>
<div class="RegisterTabelTekst">Tm</div>
<div class="RegisterTabelTekst">Tm</div>
<div class="RegisterTabelTekst">Tm</div>
</div>
<div class="RegisterTabelRij">
<div class="RegisterTabelLeeg">R/W</div>
<div class="RegisterTabelLeeg">R/W</div>
<div class="RegisterTabelLeeg">R/W</div>
<div class="RegisterTabelLeeg">R/W</div>
<div class="RegisterTabelLeeg">R/W</div>
<div class="RegisterTabelLeeg">R/W</div>
<div class="RegisterTabelLeeg">R/W</div>
<div class="RegisterTabelLeeg">R/W</div>
</div>
</div>
</div>

### Tm [7:0] Maximale temperatuur instelling
        
Mogelijke waarden zijn 0-127 (°). 

---
**RO= Read only**
        
**RW= Read/write**


## **Register 6: Maximale snelheid instelling**
#### BIT:
<div class="RegisterTabel">
<div class="RegisterTabelBody">
<div class="RegisterTabelRij">
<div class="RegisterTabelLeeg">15</div>
<div class="RegisterTabelLeeg">14</div>
<div class="RegisterTabelLeeg">13</div>
<div class="RegisterTabelLeeg">12</div>
<div class="RegisterTabelLeeg">11</div>
<div class="RegisterTabelLeeg">10</div>
<div class="RegisterTabelLeeg">9</div>
<div class="RegisterTabelLeeg">8</div>
</div>
<div class="RegisterTabelRij">
<div class="RegisterTabelnvt">&nbsp;</div>
<div class="RegisterTabelnvt">&nbsp;</div>
<div class="RegisterTabelTekst">Spm</div>
<div class="RegisterTabelTekst">Spm</div>
<div class="RegisterTabelTekst">Spm</div>
<div class="RegisterTabelTekst">Spm</div>
<div class="RegisterTabelTekst">Spm</div>
<div class="RegisterTabelTekst">Spm</div>
</div>
<div class="RegisterTabelRij">
<div class="RegisterTabelLeeg">R/W</div>
<div class="RegisterTabelLeeg">R/W</div>
<div class="RegisterTabelLeeg">R/W</div>
<div class="RegisterTabelLeeg">R/W</div>
<div class="RegisterTabelLeeg">R/W</div>
<div class="RegisterTabelLeeg">R/W</div>
<div class="RegisterTabelLeeg">R/W</div>
<div class="RegisterTabelLeeg">R/W</div>
</div>
</div>
</div>
 
<div class="RegisterTabel">
<div class="RegisterTabelBody">
<div class="RegisterTabelRij">
<div class="RegisterTabelLeeg">7</div>
<div class="RegisterTabelLeeg">6</div>
<div class="RegisterTabelLeeg">5</div>
<div class="RegisterTabelLeeg">4</div>
<div class="RegisterTabelLeeg">3</div>
<div class="RegisterTabelLeeg">2</div>
<div class="RegisterTabelLeeg">1</div>
<div class="RegisterTabelLeeg">0</div>
</div>
<div class="RegisterTabelRij">
<div class="RegisterTabelTekst">Spm</div>
<div class="RegisterTabelTekst">Spm</div>
<div class="RegisterTabelTekst">Spm</div>
<div class="RegisterTabelTekst">Spm</div>
<div class="RegisterTabelTekst">Spm</div>
<div class="RegisterTabelTekst">Spm</div>
<div class="RegisterTabelTekst">Spm</div>
<div class="RegisterTabelTekst">Spm</div>
</div>
<div class="RegisterTabelRij">
<div class="RegisterTabelLeeg">R/W</div>
<div class="RegisterTabelLeeg">R/W</div>
<div class="RegisterTabelLeeg">R/W</div>
<div class="RegisterTabelLeeg">R/W</div>
<div class="RegisterTabelLeeg">R/W</div>
<div class="RegisterTabelLeeg">R/W</div>
<div class="RegisterTabelLeeg">R/W</div>
<div class="RegisterTabelLeeg">R/W</div>
</div>
</div>
</div>
        
### Spm [13:0] Maximale snelheid instelling   
        
De mogelijke waarden voor dit register zijn: 0-10000(RPM)
 
Alle getallen die boven de 10000 zitten worden uit veiligheid voor de hardware genegeerd. 

---
**RO= Read only**

**RW= Read/write**


## **Register 7: Maximale vermogen instelling**
#### BIT:
<div class="RegisterTabel">
<div class="RegisterTabelBody">
<div class="RegisterTabelRij">
<div class="RegisterTabelLeeg">15</div>
<div class="RegisterTabelLeeg">14</div>
<div class="RegisterTabelLeeg">13</div>
<div class="RegisterTabelLeeg">12</div>
<div class="RegisterTabelLeeg">11</div>
<div class="RegisterTabelLeeg">10</div>
<div class="RegisterTabelLeeg">9</div>
<div class="RegisterTabelLeeg">8</div>
</div>
<div class="RegisterTabelRij">
<div class="RegisterTabelnvt">&nbsp;</div>
<div class="RegisterTabelnvt">&nbsp;</div>
<div class="RegisterTabelnvt">&nbsp;</div>
<div class="RegisterTabelnvt">&nbsp;</div>
<div class="RegisterTabelnvt">&nbsp;</div>
<div class="RegisterTabelnvt">&nbsp;</div>
<div class="RegisterTabelnvt">&nbsp;</div>
<div class="RegisterTabelnvt">&nbsp;</div>
</div>
<div class="RegisterTabelRij">
<div class="RegisterTabelLeeg">R/W</div>
<div class="RegisterTabelLeeg">R/W</div>
<div class="RegisterTabelLeeg">R/W</div>
<div class="RegisterTabelLeeg">R/W</div>
<div class="RegisterTabelLeeg">R/W</div>
<div class="RegisterTabelLeeg">R/W</div>
<div class="RegisterTabelLeeg">R/W</div>
<div class="RegisterTabelLeeg">R/W</div>
</div>
</div>
</div>
 
<div class="RegisterTabel">
<div class="RegisterTabelBody">
<div class="RegisterTabelRij">
<div class="RegisterTabelLeeg">7</div>
<div class="RegisterTabelLeeg">6</div>
<div class="RegisterTabelLeeg">5</div>
<div class="RegisterTabelLeeg">4</div>
<div class="RegisterTabelLeeg">3</div>
<div class="RegisterTabelLeeg">2</div>
<div class="RegisterTabelLeeg">1</div>
<div class="RegisterTabelLeeg">0</div>
</div>
<div class="RegisterTabelRij">
<div class="RegisterTabelTekst">Pbm</div>
<div class="RegisterTabelTekst">Pbm</div>
<div class="RegisterTabelTekst">Pbm</div>
<div class="RegisterTabelTekst">Pbm</div>
<div class="RegisterTabelTekst">Pbm</div>
<div class="RegisterTabelTekst">Pbm</div>
<div class="RegisterTabelTekst">Pbm</div>
<div class="RegisterTabelTekst">Pbm</div>
</div>
<div class="RegisterTabelRij">
<div class="RegisterTabelLeeg">R/W</div>
<div class="RegisterTabelLeeg">R/W</div>
<div class="RegisterTabelLeeg">R/W</div>
<div class="RegisterTabelLeeg">R/W</div>
<div class="RegisterTabelLeeg">R/W</div>
<div class="RegisterTabelLeeg">R/W</div>
<div class="RegisterTabelLeeg">R/W</div>
<div class="RegisterTabelLeeg">R/W</div>
</div>
</div>
</div>

### Pbm [7:0] Maximale vermogen instelling
        
Mogelijke waarden zijn 0-256 (W). 

---
**RO= Read only**
        
**RW= Read/write**

## **Register 8: Vermogen instelling**
#### BIT:
<div class="RegisterTabel">
<div class="RegisterTabelBody">
<div class="RegisterTabelRij">
<div class="RegisterTabelLeeg">15</div>
<div class="RegisterTabelLeeg">14</div>
<div class="RegisterTabelLeeg">13</div>
<div class="RegisterTabelLeeg">12</div>
<div class="RegisterTabelLeeg">11</div>
<div class="RegisterTabelLeeg">10</div>
<div class="RegisterTabelLeeg">9</div>
<div class="RegisterTabelLeeg">8</div>
</div>
<div class="RegisterTabelRij">
<div class="RegisterTabelnvt">&nbsp;</div>
<div class="RegisterTabelnvt">&nbsp;</div>
<div class="RegisterTabelnvt">&nbsp;</div>
<div class="RegisterTabelnvt">&nbsp;</div>
<div class="RegisterTabelnvt">&nbsp;</div>
<div class="RegisterTabelnvt">&nbsp;</div>
<div class="RegisterTabelnvt">&nbsp;</div>
<div class="RegisterTabelnvt">&nbsp;</div>
</div>
<div class="RegisterTabelRij">
<div class="RegisterTabelLeeg">R/W</div>
<div class="RegisterTabelLeeg">R/W</div>
<div class="RegisterTabelLeeg">R/W</div>
<div class="RegisterTabelLeeg">R/W</div>
<div class="RegisterTabelLeeg">R/W</div>
<div class="RegisterTabelLeeg">R/W</div>
<div class="RegisterTabelLeeg">R/W</div>
<div class="RegisterTabelLeeg">R/W</div>
</div>
</div>
</div>
 
<div class="RegisterTabel">
<div class="RegisterTabelBody">
<div class="RegisterTabelRij">
<div class="RegisterTabelLeeg">7</div>
<div class="RegisterTabelLeeg">6</div>
<div class="RegisterTabelLeeg">5</div>
<div class="RegisterTabelLeeg">4</div>
<div class="RegisterTabelLeeg">3</div>
<div class="RegisterTabelLeeg">2</div>
<div class="RegisterTabelLeeg">1</div>
<div class="RegisterTabelLeeg">0</div>
</div>
<div class="RegisterTabelRij">
<div class="RegisterTabelTekst">Pbs</div>
<div class="RegisterTabelTekst">Pbs</div>
<div class="RegisterTabelTekst">Pbs</div>
<div class="RegisterTabelTekst">Pbs</div>
<div class="RegisterTabelTekst">Pbs</div>
<div class="RegisterTabelTekst">Pbs</div>
<div class="RegisterTabelTekst">Pbs</div>
<div class="RegisterTabelTekst">Pbs</div>
</div>
<div class="RegisterTabelRij">
<div class="RegisterTabelLeeg">R/W</div>
<div class="RegisterTabelLeeg">R/W</div>
<div class="RegisterTabelLeeg">R/W</div>
<div class="RegisterTabelLeeg">R/W</div>
<div class="RegisterTabelLeeg">R/W</div>
<div class="RegisterTabelLeeg">R/W</div>
<div class="RegisterTabelLeeg">R/W</div>
<div class="RegisterTabelLeeg">R/W</div>
</div>
</div>
</div>

### Pbs [7:0] Maximale vermogen instelling
        
Mogelijke waarden zijn 0-256 (W). 

---
**RO= Read only**
        
**RW= Read/write**
