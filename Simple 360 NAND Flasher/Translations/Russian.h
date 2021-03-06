#ifndef __RUSSIAN_TRANSLATION
#define __RUSSIAN_TRANSLATION

#define TRANSLATION_BY L"Над переводом работали: RichY,MazheM,Sindyrello,Cosmaty31,Acousticks \n\n"

#define MSG_SIMPLEFLASHER_CMD_FOUND_ENTERING_AUTO L"game:\\simpleflasher.cmd Found!\n * Entering Automatic mode!\n"

#define MSG_GETTING_NAND_SIZE L"Получение размера NAND...\n"
#define MSG_SIZE L" * Размер: 0x%X (%hs)\n"

#define MSG_ERROR L"\n ! ОШИБКА: "

#define MSG_ERROR_READING_BYTES L"\rошибка чтения 0x%X байта по адресу 0x%X (считано: 0x%X байт)!\n"
#define MSG_ERROR_WRITING_BYTES L"\rошибка записи 0x%X байта по адресу 0x%X (записано: 0x%X байт)!\n"
#define MSG_ERROR_FAILED_TO_READ_BYTES_FROM_FILE L"\rОШИБКА: не удалось считать %d байт из файла\n\n"
#define MSG_ERROR_FAILED_TO_WRITE_BYTES_TO_FILE L"\rОШИБКА: Не удалось записать %d байт в файл\n\n"

#define MSG_ERROR_INVALID_FILE_SIZE L"ошибка: %hs - размер %d не является корректным для образа!\n"
#define MSG_ERROR_SIZE_NOT_SUPPORTED L"ошибка: размер %d не поддерживается!\n"

#define MSG_FILE_NOT_FOUND L"Файл %hs не найден\n"

#define MSG_UNABLE_TO_MOUNT_FLASH L"Невозможно подключиться к памяти"
#define MSG_UNABLE_TO_OPEN_FLASH_FOR_READING L"Не удалось открыть память: для чтения\n"
#define MSG_UNABLE_TO_OPEN_FLASH_FOR_WRITING L"Не удалось открыть память: для записи\n"
#define MSG_UNABLE_TO_OPEN_FOR_WRITING L"Невозможно открыть %hs для записи\n"
#define MSG_UNABLE_TO_OPEN_FOR_READING L"Невозможно открыть %hs для чтения, ошибка: 0x%X\n"
#define MSG_UNABLE_TO_GET_SIZE_OF_FLASH L"Невозможно получить размер памяти!\n"
#define MSG_UNABLE_TO_WRITE_BYTES_TO_FLASH L"Невозможно записать 0x%X байт в память, ОШИБКА: 0x%X Адрес: 0x%X"
#define MSG_UNABLE_TO_READ_FROM L"Невозможно считать 0x%X байт из %hs (считано: 0x%X байт)\n"
#define MSG_UNABLE_TO_ALLOCATE_BUFFER_FOR L"Невозможно выделить 0x%X байт в буфере для %hs\n"
#define MSG_UNABLE_TO_ALLOCATE_BUFFER L"Невозможно выделить 0x%X байт для буфера!\n"
#define MSG_UNABLE_TO_READ_0X630_BYTES_FROM L"Невозможно прочитать 0x630 байт из %hs!\n"

#define MSG_PROCESSING_BLOCK L"\rобработка блока 0x%X из 0x%X (%3.2f %%)"
#define MSG_PROCESSED_OF_BYTES L"\rОбработано 0x%X из 0x%X байт (%3.2f %%)"
#define MSG_PROCESSING_START L"\rобработка блока"
#define MSG_PROCESSED_START L"\rОбработано"

#define MSG_DONE_SUCCESS_DUMPED_BYTES L"\nЗавершено! успешно считано 0x%X байт в %hs\n"
#define MSG_DONE_READ_BYTES_FROM_NAND_WROTE L"\nЗавершено! считано 0x%X байт из NAND, записано 0x%X байт в %hs\n"
#define MSG_DONE_SUCCESS_WROTE_BYTES L"Успешно записано 0x%X байт в память из %hs\n"
#define MSG_DONE_FAILED_WRITE_BYTES L"Не удалось записать 0x%X байт в память из %hs\n"

#define MSG_IMAGE_WRITTEN L"образ записан :D\n"
#define MSG_IMAGE_DUMPED L"NAND считан и сохранен! :D\n"
#define MSG_FAILED_TO_WRITE_IMAGE L"не удалось записать образ :(\n"
#define MSG_FAILED_TO_DUMP_NAND L"не удалось считать NAND :(\n"

#define MSG_OPENED_OK_ATTEMPTING_READ_FROM_FLASH L"%hs открыт успешно, пытаемся считать 0x%X байт из памяти...\n"
#define MSG_OPENED_OK_ATTEMPTING_READ_FROM_FLASH_READABLE L"%hs открыт успешно, пытаемся считать 0x%X байт (%hs) из памяти...\n"
#define MSG_OPENED_OK_ATTEMPTING_WRITE_TO_FLASH L"%hs открыт успешно, пытаемся записать 0x%X байт в память...\n"

#define MSG_READING_TO_MEMORY L" * Чтение из образа в память...\n"
#define MSG_IS_BIGGER_THEN_FLASH L"%hs больше чем память! Прекращаем!\n"
#define MSG_IS_SMALLER_THEN_FLASH L"%hs меньше чем память! Прекращаем!\n"
#define MSG_WRITING_TO_FLASH L" * Запись образа в память...\n"

#define MSG_SFCX_ERROR L"\r ! SFCX: "
#define MSG_BAD_BLOCK_FOUND_AT L"Bad block найден в 0x%X\n"
#define MSG_ILLEGAL_LOGICAL_BLOCK L"Недопустимый логический блок в 0x%X (статус: 0x%X)\n"
#define MSG_UNKNOWN_ERROR_AT_ADDRESS L"Неизвестная ошибка по адресу 0x%X: 0x%X. Советуем побеспокоиться.\n"
#define MSG_UNEXPECTED_SFCX_WRITE_PAGE_STATUS L"Неожиданный статус записи страницы sfcx 0x%X\n"

#define MSG_BLOCK_SEEMS_BAD L"\rблок 0x%X похож на bad block, статус 0x%X\n"
#define MSG_ATTEMPTING_BLOCK_RECOVERY L"Пытаемся восстановить  блок...\n"
#define MSG_BLOCK_RECOVERED_SUCCESSFULLY L"Блок восстановлен! (Это не был bad block...)\n"
#define MSG_BLOCK_CANNOT_BE_RECOVERED L"Блок не может быть восстановлен! (Это реальный bad block)\n"
#define MSG_SFCX_UNSUPPORTED_TYPE_A0 L"Неподдерживаемый тип A-0\n"
#define MSG_SFCX_UNSUPPORTED_TYPE_B0 L"Неподдерживаемый тип B-0\n"
#define MSG_SFCX_UNSUPPORTED_TYPE L"Неподдерживаемый тип\n"

#define MSG_RAW_NAND_DETECTED L" * Обнаружено устройство RAW NAND!\n * Переход в режим NAND...\n\n"
#define MSG_MMC_NAND_DETECTED L" * Обнаружено устройство MMC NAND!\n * Переход в режим MMC/Corona v2/v4/v6 [4GB] Mode...\n\n"

#define MSG_CALCULATED_VALUE L"\nПересчитанное значение: %08X"
#define MSG_EXPECTED_VALUE L"\nНужное значение:   %08X"
#define MSG_CHECKING_CRC32 L" * Проверка %hs Crc32: "
#define MSG_CALCULATING_CRC32_FOR L"Расчет CRC32 для: %hs\n"
#define MSG_ATTEMPTING_TO_SAVE_CRC32_TO L" * Попытка сохранить значение CRC32 для %hs...\n"
#define MSG_SUCCESSFULLY_SAVED_CRC32 L" * Значение CRC32 успешно сохранено!\n"

#define MSG_LOOKING_FOR L" * Поиск в %hs... "
#define MSG_FOUND_CHECKING_CRC32 L"Найдено!\n * Проверка CRC32...\n"
#define MSG_NOT_FOUND L"Не найдено\n"

#define MSG_CURRENT_DASHBOARD L"Текущий Dashboard: %d.%d.%d.%d\n"
#define MSG_CURRENT_DASHLAUNCH L"Текущий  DashLaunch: %hu.%02hu (%hu)\n"
#define MSG_DASHLAUNCH_NOT_RUNNING L"Текущая версия DashLaunch : Не работает\n"
#define MSG_SYSCALL_RETURN_VALUE L"SysCall вернул значение: 0x%llX\n" // Should probably be left alone as it has no use for anyone that isn't a developer whom wish to solve problems with this tool...
#define MSG_YOUR_CPUKEY_IS L"Ваш CPUKey : "
#define MSG_CPUKEY_SUCCESSFULLY_SAVED L" * CPUKey успешно сохранен в: %hs\n"

#define MSG_CHECKING_FOR_SPARE L"Проверка %hs на наличие разметки в образе... "
#define MSG_BAD_MAGIC L"%hs Не содержит \"magic bytes\" ожидаемых в образе NAND Xbox 360, прекращаем работу!\n"
#define MSG_SPARE_DETECTED L"Разметка в образе обнаружена!\n"
#define MSG_SPARE_NOT_DETECTED L"Разметка в образе не обнаружена!\n"

#define MSG_YOU_HAVE_SECONDS_BEFORE_CONTINUE L"\rУ вас есть %d что бы выключить консоль и отменить запись..."
#define MSG_TIMES_UP L"Время вышло! Надеемся, что вы не допустили ошибок! ;)\n"

#define MSG_PRESS_START_TO_FLASH L"Нажмите кнопку START для записи NAND или любую другую для выхода!\n\n"
#define MSG_PRESS_START_TO_OVERWRITE_EXISTING_FILE L" **** ВНИМАНИЕ: %hs уже существует! ****\nНажмите START, если хотите перезаписать файл!"
#define MSG_PRESS_A_TO_DUMP_SYSTEM_ONLY L"Нажмите A для чтения только Системного раздела (64MB, Рекомендуется!)\n"
#define MSG_PRESS_B_TO_DUMP_FULL_NAND L"Нажмите B для чтения всей памяти (256MB/512MB, тут придется подождать...)\n"
#define MSG_PRESS_BACK_TO_ABORT_DUMP L"Нажмите кнопку BACK чтобы прервать считывание...\n"

#define MSG_WARNING_DO_NOT_TOUCH_CONSOLE_OR_CONTROLLER L"ВНИМАНИЕ! НЕ ТРОГАЙТЕ КОНСОЛЬ ИЛИ ДЖОЙСТИК, ПОКА ИДЕТ ЗАПИСЬ!!\nКонсоль выключится после завершения!\n\n"
#define MSG_WARNING_YOU_ARE_ABOUT_TO_FLASH_NO_SPARE_TO_SPARE_CONSOLE L"\n\nВНИМАНИЕ! Вы собираетесь записать образ, не содержащий разметки на консоль, где она необходима!\nЕсли вы уверены в том, что делаете, нажмите кнопку START для продолжения или любую другую для выхода!\n"
#define MSG_WARNING_YOU_ARE_ABOUT_TO_FLASH_SPARE_TO_NO_SPARE_CONSOLE L"\n\nВНИМАНИЕ! Вы собираетесь записать образ, содержащий разметку на консоль, которая этого не требует!\nЕсли вы уверены в том, что делаете, нажмите кнопку START для продолжения или любую другую для выхода!\n"
#define MSG_WARNING_YOU_ARE_ABOUT_TO_FLASH_NO_SPARE_TO_SPARE_CONSOLE_AUTO L"\n\nВНИМАНИЕ! Вы собираетесь записать образ, не содержащий разметки на консоль, где она необходима!\nВыключите консоль для отмены!"
#define MSG_WARNING_YOU_ARE_ABOUT_TO_FLASH_SPARE_TO_NO_SPARE_CONSOLE_AUTO L"\n\nВНИМАНИЕ! Вы собираетесь записать образ, содержащий разметку на консоль, которая этого не требует!\nВыключите консоль для отмены!"

#define MSG_COMPLETED_AFTER_SECONDS L"Выполнено за %4.2f секнуды\n"
#define MSG_REBOOTING_IN L"Перезагрузка через "
#define MSG_BYE L"Всего доброго!"
#define MSG_TRY_AGAIN L"Повторите попытку:\n"

#define MSG_BB_DETECTED_SETTING_64MB L" * %d MB NAND Обнаружен! Настройка размера дампа 64MB!"

#define MSG_EXECUTING_COMMAND_IN_SECONDS L"\rВыполнение команды через %d секунд"
#define MSG_EXECUTING_COMMAND L"\rВыполнение команды!\n"

#define MSG_LOOKING_FOR_CMD_FILE_FOR_AUTO_MODE L" * Поиск в simpleflasher.cmd автоматических функций...\n"
#define MSG_AUTO_DUMP_FOUND L" * AutoDump команда найдена!\n * Выполнение команды!\n\n"
#define MSG_AUTO_FLASH_FOUND L" * AutoFlash команда найдена!\n\n"
#define MSG_AUTO_SAFE_FLASH_FOUND L" * AutoSafeFlash команда найдена!\n\n"
#define MSG_AUTO_EXIT_FOUND L" * AutoExit команда найдена!\n\n"
#define MSG_AUTO_REBOOT_FOUND L" * AutoReboot команда найдена!\n\n"
#define MSG_HASH_DONT_MATCH L"Хэш не совпадает, или файл не существует ... Отмена!\n"
#define MSG_BAD_COMMAND_FILE_RETURNING_TO_MANUAL_MODE L"! Ошибка: Неправильный файл с авто-командами, читайте readme!\nПереход в ручной режим!\n"
#define MSG_COMMAND_FILE_NOT_FOUND_ENTERING_MANUAL_MODE L"game:\\simpleflasher.cmd не найден!\n * Переход в ручной режим!\n\n"

#define MSG_CONSOLE_INFO_LINE   L"\n============= Информация о консоли: =============\n\n"
#define MSG_CONSOLE_INFO_BOTTOM L"\n================================================\n\n"

#define MSG_DETECTING_NAND_TYPE L" * Определение типа NAND...\n"
#define MSG_ATTEMTPING_TO_GRAB_CPUKEY L" * Пытаемся считать ваш CPUKey...\n"
#define MSG_INCOMPATIBLE_DASHLAUNCH L"Обнаружена несовместимая версия Dashlaunch! Используйте XeLL для получения CPUkey!\n"

#define MSG_PRESS_A_TO_FLASH_RAWFLASH L"Нажмитие A, если вы хотите записать nand с помощью Rawflash v5\n"
#define MSG_PRESS_A_TO_FLASH_RAWFLASH4G L"Нажмите A, если вы хотите записать nand c помощью Rawflash4G v1\n"
#define MSG_PRESS_B_TO_SAFE_FLASH_RAWFLASH L"Нажмите B, если вы хотите безопасно записать nand с помощью Rawflash v5 (Чтение + Запись)\n"
#define MSG_PRESS_B_TO_SAFE_FLASH_RAWFLASH4G L"Нажмите B, если вы хотите безопасно записать nand с помощью Rawflash4G v1 (Чтение + Запись)\n"
#define MSG_PRESS_X_TO_DUMP_RAWFLASH L"Нажмите X, если вы хотите снять дамп вашего Nand c помощью Rawdump v1\n"
#define MSG_PRESS_X_TO_DUMP_RAWFLASH4G L"Нажмите X, если вы хотите снять дамп вашего Nand c помощью Rawdump4G v1\n"
#define MSG_PRESS_ANY_OTHER_BUTTON_TO_EXIT L"Если нажмете что-то другое, приложение закроется...\n"
#define MSG_PRESS_ANY_BUTTON_TO_EXIT L"Нажмите любую кнопку для выхода!\n"

#define MSG_PRESS_B_TO_OVERWRITE_EXISTING_FILE_SERIAL L"Or press B to save/overwrite as %s_%s.bin\n"
#define MSG_ATTEMPTING_TO_GET_CONSOLE_SERIAL L" * Attempting to get Console Serial...\n"
#define MSG_CONSOLE_SERIAL L"Console Serial: %s\n"
#define MSG_GAME_NOT_MOUNTED_TRYING_USB L"game:\\ isn't mounted, checking if a usb device is available...\n"
#define MSG_GAME_NOT_MOUNTED_TRYING_HDD L"game:\\ isn't mounted, checking if a hdd is available...\n"
#define MSG_GAME_NOT_MOUNTED L"game:\\ isn't mounted, unable to continue!\n"

#endif