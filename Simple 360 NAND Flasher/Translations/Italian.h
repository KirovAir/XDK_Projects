#ifndef __ITALIAN_TRANSLATION
#define __ITALIAN_TRANSLATION

#define TRANSLATION_BY "Traduzione italiana by: Pa0l0ne @RazielConsole.com\n\n" // Translate if you want, otherwise comment this line

#define MSG_SIMPLEFLASHER_CMD_FOUND_ENTERING_AUTO "game:\\simpleflasher.cmd Found!\n * Entering Automatic mode!\n"

#define MSG_GETTING_NAND_SIZE "Rilevamento dimensione nand...\n"
#define MSG_SIZE " * Dimensione: 0x%X (%s)\n"

#define MSG_ERROR "\n ! ERRORE: "

#define MSG_ERROR_READING_BYTES "\rErrore lettura 0x%X offset byte 0x%X (lettura: 0x%X bytes)!\n"
#define MSG_ERROR_WRITING_BYTES "\rErrore scrittura 0x%X offset byte 0x%X (scrittura: 0x%X bytes)!\n"
#define MSG_ERROR_FAILED_TO_READ_BYTES_FROM_FILE "\rERRORE: Impossibile leggere il byte %d dal file\n\n"
#define MSG_ERROR_FAILED_TO_WRITE_BYTES_TO_FILE "\rERRORE: Impossibile scrivere il byte %d sul file\n\n"

#define MSG_ERROR_INVALID_FILE_SIZE "errore: %s -  dimensione %d la dimensione non corrisponde a quella di una nand!\n"
#define MSG_ERROR_SIZE_NOT_SUPPORTED "errore: dimensione %d non è supportata!\n"

#define MSG_FILE_NOT_FOUND "File %s non trovato\n"

#define MSG_UNABLE_TO_MOUNT_FLASH "Impossibile montare la Flash!"
#define MSG_UNABLE_TO_OPEN_FLASH_FOR_READING "Impossibile aprire la flash: per la lettura\n"
#define MSG_UNABLE_TO_OPEN_FLASH_FOR_WRITING "Impossibile aprire la flash: per la scrittura\n"
#define MSG_UNABLE_TO_OPEN_FOR_WRITING "Impossibile aprire %s per la scrittura\n"
#define MSG_UNABLE_TO_OPEN_FOR_READING "Impossibile aprire %s per la lettura, errore: 0x%X\n"
#define MSG_UNABLE_TO_GET_SIZE_OF_FLASH "Impossibile leggere la dimensione della nand!\n"
#define MSG_UNABLE_TO_WRITE_BYTES_TO_FLASH "Impossibile scrivere il byte 0x%X nella flash, ERRORE: 0x%X Offset: 0x%X"
#define MSG_UNABLE_TO_READ_FROM "Impossibile leggere il byte 0x%X da %s (lettura: 0x%X bytes)\n"
#define MSG_UNABLE_TO_ALLOCATE_BUFFER_FOR "Impossibile allocare i bytes 0x%X buffer per %s\n"
#define MSG_UNABLE_TO_ALLOCATE_BUFFER "Impossibile allocare i bytes 0x%X per il buffer!\n"
#define MSG_UNABLE_TO_READ_0X630_BYTES_FROM "Impossibile leggere i bytes 0x630 da %s!\n"

#define MSG_PROCESSING_BLOCK "\r processo blocco: 0x%X of 0x%X (%3.2f %%)"
#define MSG_PROCESSED_OF_BYTES "\rProcessati 0x%X di 0x%X bytes (%3.2f %%)"
#define MSG_PROCESSING_START "\rprocesso blocco"
#define MSG_PROCESSED_START "\rProcesso"

#define MSG_DONE_SUCCESS_DUMPED_BYTES "\nFatto! dump eseguito con successo. 0x%X bytes su %s\n"
#define MSG_DONE_READ_BYTES_FROM_NAND_WROTE "\nFatto! letto 0x%X bytes dalla NAND, ha scritto 0x%X bytes in %s\n"
#define MSG_DONE_SUCCESS_WROTE_BYTES "Ha scritto con successo 0x%X bytes da %s nella Flash!\n"
#define MSG_DONE_FAILED_WRITE_BYTES "Impossibile scrivere 0x%X bytes da %s nella Flash!\n"

#define MSG_IMAGE_WRITTEN "Immagine scritta :D\n"
#define MSG_IMAGE_DUMPED "NAND Dumpata! :D\n"
#define MSG_FAILED_TO_WRITE_IMAGE "Impossibile scrivere l'immagine :(\n"
#define MSG_FAILED_TO_DUMP_NAND "Impossibile leggere la nand :(\n"

#define MSG_OPENED_OK_ATTEMPTING_READ_FROM_FLASH "%s apertura OK, tentativo di lettura 0x%X bytes dalla flash...\n"
#define MSG_OPENED_OK_ATTEMPTING_READ_FROM_FLASH_READABLE "%s apertura OK, tentativo di lettura 0x%X bytes (%s) dalla flash...\n"
#define MSG_OPENED_OK_ATTEMPTING_WRITE_TO_FLASH "%s apertura OK, tentativo di scrittura 0x%X bytes nella flash...\n"

#define MSG_READING_TO_MEMORY " * leggendo l'immagine nella memoria ...\n"
#define MSG_IS_BIGGER_THEN_FLASH "%s è più grande della flash! interruzione!\n"
#define MSG_IS_SMALLER_THEN_FLASH "%s è più piccolo della flash! interruzione!\n"
#define MSG_WRITING_TO_FLASH " * Scrittura immagine nella flash...\n"

#define MSG_SFCX_ERROR "\r ! SFCX: "
#define MSG_BAD_BLOCK_FOUND_AT "Bad block trovato in 0x%X\n"
#define MSG_ILLEGAL_LOGICAL_BLOCK "Illegal logical block at 0x%X (stato: 0x%X)\n"
#define MSG_UNKNOWN_ERROR_AT_ADDRESS "Errore sconosciuto all'address 0x%X: 0x%X. Per favore ricontrolla.\n"
#define MSG_UNEXPECTED_SFCX_WRITE_PAGE_STATUS "imprevisto sfcx_write_page stato 0x%X\n"

#define MSG_BLOCK_SEEMS_BAD "\r il blocco 0x%X non sembra integro, stato 0x%X\n"
#define MSG_ATTEMPTING_BLOCK_RECOVERY "Tentativo ripristino blocco...\n"
#define MSG_BLOCK_RECOVERED_SUCCESSFULLY "Blocco ripristinato! (A.K.A Il blocco non era buono solo a prima vista...)\n"
#define MSG_BLOCK_CANNOT_BE_RECOVERED "Blocco NON ripristinato! (A.K.A Il blocco è davvero non buono ... )\n"
#define MSG_SFCX_UNSUPPORTED_TYPE_A0 "Type A-0 non supportato\n"
#define MSG_SFCX_UNSUPPORTED_TYPE_B0 "Type B-0 non supportato\n"
#define MSG_SFCX_UNSUPPORTED_TYPE "Tipo non supportato\n"

#define MSG_RAW_NAND_DETECTED " * Rilevata RAW NAND device!\n * Entro in modalità NAND...\n\n"
#define MSG_MMC_NAND_DETECTED " * Rilevata MMC NAND device!\n * Entro in modalità MMC/Corona v2/v4/v6 [4GB]...\n\n"

#define MSG_CALCULATED_VALUE "\nValore calcolato: %08X"
#define MSG_EXPECTED_VALUE "\nEValore atteso:   %08X"
#define MSG_CHECKING_CRC32 " * Controllo %s Crc32: "
#define MSG_CALCULATING_CRC32_FOR "Calcolo CRC32 per: %s\n"
#define MSG_ATTEMPTING_TO_SAVE_CRC32_TO " * Tentativo salvataggio del valore CRC32 in %s...\n"
#define MSG_SUCCESSFULLY_SAVED_CRC32 " * Valore CRC32 salvato con successo!\n"

#define MSG_LOOKING_FOR " * In cerca di %s... "
#define MSG_FOUND_CHECKING_CRC32 "Trovato!\n * controllo CRC32...\n"
#define MSG_NOT_FOUND "NON trovato!\n"

#define MSG_CURRENT_DASHBOARD "Dashboard corrente: %d.%d.%d.%d\n"
#define MSG_CURRENT_DASHLAUNCH "Versione corrente Dashlaunch: %hu.%02hu (%hu)\n"
#define MSG_DASHLAUNCH_NOT_RUNNING "Versione corrente Dashlaunch: Non eseguito\n"
#define MSG_SYSCALL_RETURN_VALUE "SysCall Return value: 0x%llX\n" // Should probably be left alone as it has no use for anyone that isn't a developer whom wish to solve problems with this tool...
#define MSG_YOUR_CPUKEY_IS "La tua CPUKey è: "
#define MSG_CPUKEY_SUCCESSFULLY_SAVED " * CPUKey salvata con successo in: %s\n"

#define MSG_CHECKING_FOR_SPARE "controllo %s per spare data... "
#define MSG_BAD_MAGIC "%s Non contiene i Magic Bytes di un immagine Xbox360"
#define MSG_SPARE_DETECTED "Spare data rilevati!\n"
#define MSG_SPARE_NOT_DETECTED "Spare data NON rilevati!\n"

#define MSG_YOU_HAVE_SECONDS_BEFORE_CONTINUE "\rHai %d secondi per spegnere la console prima che il codice continui..."
#define MSG_TIMES_UP "Tempo scaduto, spero tu NON abbia commesso errori!\n"


#define MSG_PRESS_START_TO_FLASH "Premi start per scrivere la nand o premi qualsiasi altro tasto per uscire!\n\n"
#define MSG_PRESS_START_TO_OVERWRITE_EXISTING_FILE " **** ATTENZIONE: %s esistente! ****\nPremi start se vuoi sovrascrivere il file!"
#define MSG_PRESS_A_TO_DUMP_SYSTEM_ONLY "Premi A per dumpare solo i byte di sistema (64MB, Consigliato!)\n"
#define MSG_PRESS_B_TO_DUMP_FULL_NAND "Premi B per fare un FULL DUMP (256MB/512MB, Richiede parecchio tempo...)\n"
#define MSG_PRESS_BACK_TO_ABORT_DUMP "Premi BACK per annullare il processo di dump...\n"

#define MSG_WARNING_DO_NOT_TOUCH_CONSOLE_OR_CONTROLLER "ATTENZIONE: Non toccare la console o il controller durante il processo di scrittura!!\nLa console verrà riavviata a processo terminato.\n\n"
#define MSG_WARNING_YOU_ARE_ABOUT_TO_FLASH_NO_SPARE_TO_SPARE_CONSOLE "\n\nATTENZIONE! Stai provando a flashare un'immagine SENZA SPARE DATA in una console che li richiede! Se sei sicuro di quello che stai facendo premi START, altrimenti qualsiasi altro tasto per uscire\n"
#define MSG_WARNING_YOU_ARE_ABOUT_TO_FLASH_SPARE_TO_NO_SPARE_CONSOLE "\n\nATTENZIONE! Stai provando a flashare un'immagine CON SPARE DATA in una console che NON li richiede! Se sei sicuro di quello che stai facendo premi START, altrimenti qualsiasi altro tasto per uscire"
#define MSG_WARNING_YOU_ARE_ABOUT_TO_FLASH_NO_SPARE_TO_SPARE_CONSOLE_AUTO "\n\nATTENZIONE! Stai flashando un'immagine che NON contiene SPARE DATA in una console che li richiede, spegni la console per interrompere!"
#define MSG_WARNING_YOU_ARE_ABOUT_TO_FLASH_SPARE_TO_NO_SPARE_CONSOLE_AUTO "\n\nATTENZIONE! Stai flashando un'immagine che contiene SPARE DATA in una console che NON li richiede \n spegni la console per interrompere!"

#define MSG_COMPLETED_AFTER_SECONDS "Processo Completato dopo %4.2f secondi\n"
#define MSG_REBOOTING_IN "Riavvio in "
#define MSG_BYE "CIAO!!"
#define MSG_TRY_AGAIN "Prova di nuovo:\n"

#define MSG_BB_DETECTED_SETTING_64MB " * %d MB NAND Rilevata! Impostazione dimensione NAND a 64MB!"

#define MSG_EXECUTING_COMMAND_IN_SECONDS "\rEsecuzione comando in %d secondi"
#define MSG_EXECUTING_COMMAND "\rComando eseguito!\n"

#define MSG_LOOKING_FOR_CMD_FILE_FOR_AUTO_MODE " * Ricerca di simpleflasher.cmd per features automatiche...\n"
#define MSG_AUTO_DUMP_FOUND " * Comando AutoDump trovato!\n * Esecuzione comando!\n\n"
#define MSG_AUTO_FLASH_FOUND " * Comando AutoFlash trovato!\n\n"
#define MSG_AUTO_SAFE_FLASH_FOUND " * Comando AutoSafeFlash trovato!\n\n"
#define MSG_AUTO_EXIT_FOUND " * Comando AutoExit trovato!\n\n"
#define MSG_AUTO_REBOOT_FOUND " * Comando AutoReboot trovato!\n\n"
#define MSG_HASH_DONT_MATCH "L'Hash non corrisponde, o il file non esiste... Interruzione!\n"
#define MSG_BAD_COMMAND_FILE_RETURNING_TO_MANUAL_MODE "! ERRORE:  file di comando sbagliato, perfavore leggi il readme!\nRitorno in modalità manuale!\n"
#define MSG_COMMAND_FILE_NOT_FOUND_ENTERING_MANUAL_MODE "game:\\simpleflasher.cmd Non trovato!\n * Entro in modalità manuale!\n\n"

#define MSG_CONSOLE_INFO_LINE   "\n============= Informazioni console: =============\n\n"
#define MSG_CONSOLE_INFO_BOTTOM "\n=================================================\n\n"

#define MSG_DETECTING_NAND_TYPE " * Rilevamento tipo di NAND...\n"
#define MSG_ATTEMTPING_TO_GRAB_CPUKEY " * Tentativo recupero CPUKEY...\n"
#define MSG_INCOMPATIBLE_DASHLAUNCH "Rilevata una versione incompatibile di DashLaunch! Prova ad utilizzare XeLL!\n"

#define MSG_PRESS_A_TO_FLASH_RAWFLASH "Premi A se vuoi flashare la nand con Rawflash V5\n"
#define MSG_PRESS_A_TO_FLASH_RAWFLASH4G "Premi A se vuoi flashare la nand con Rawflash4G v1\n"
#define MSG_PRESS_B_TO_SAFE_FLASH_RAWFLASH "Premi B se vuoi scrivere in safeflash la tua nand con Rawflash v5 (Lettura + Scrittura)\n"
#define MSG_PRESS_B_TO_SAFE_FLASH_RAWFLASH4G "Premi B se vuoi scrivere in safeflash la tua nand con Rawflash4G v1 (Lettura + Scrittura)\n"
#define MSG_PRESS_X_TO_DUMP_RAWFLASH "Premi X se vuoi dumpare la nand con Rawdump v1\n"
#define MSG_PRESS_X_TO_DUMP_RAWFLASH4G "Premi X se vuoi dumpare la nand con Rawdump4G v1\n"
#define MSG_PRESS_ANY_OTHER_BUTTON_TO_EXIT "Se premi qualsiasi altro tasto l'applicazione verrà chiusa\n"
#define MSG_PRESS_ANY_BUTTON_TO_EXIT "Premi qualsiasi tasto per uscire\n"

#define MSG_PRESS_B_TO_OVERWRITE_EXISTING_FILE_SERIAL "Oppure premi B per salvare/sovrascrivere %s_%s.bin\n"
#define MSG_ATTEMPTING_TO_GET_CONSOLE_SERIAL " * Provo a ricavare il Numero Seriale della Console...\n"
#define MSG_CONSOLE_SERIAL "Numero Seriale della Console: %s\n"
#define MSG_GAME_NOT_MOUNTED_TRYING_USB "game:\\ non risulta montata, verifico se è disponibile una periferica usb...\n"
#define MSG_GAME_NOT_MOUNTED_TRYING_HDD "game:\\ non risulta montata, verifico se è disponibile un hdd...\n"
#define MSG_GAME_NOT_MOUNTED "game:\\ non risulta montata, impossibile proseguire!\n"

#endif