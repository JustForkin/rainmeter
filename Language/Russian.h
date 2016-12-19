#define NUM_BUTTONWIDTH           85
#define NUM_LABELWIDTH            80
#define LANGUAGE_LTR

// ============================================================================
// Context menus
// ============================================================================

// Rainmeter menu
#define STR_UPDATEAVAILABLE       "Доступно обновление"
#define STR_MANAGE                "Управление"
#define STR_ABOUT                 "О программе"
#define STR_HELP                  "Помощь"
#define STR_SKINS                 "Скины"
#define STR_NOSKINS               "Нет доступных скинов"
#define STR_OPENFOLDER            "Открыть папку скина"
#define STR_DISABLEDRAGGING       "Отключить перетаскивание"
#define STR_THEMES                "Темы"
#define STR_NOTHEMES              "Нет доступных тем"
#define STR_EDITSETTINGS          "Изменить настройки"
#define STR_REFRESHALL            "Обновить всё"
#define STR_LOGGING               "Логирование"
#define STR_SHOWLOGFILE           "Показать лог-файл"
#define STR_STARTLOGGING          "Запустить лог"
#define STR_STOPLOGGING           "Остановить лог"
#define STR_DELETELOGFILE         "Удалить лог-файл"
#define STR_DEBUGMODE             "Режим отладки"
#define STR_EXIT                  "Выход"
#define STR_FAVORITES             "Избранные скины"
#define STR_NOFAVORITES           "Нет избранных скинов"

// Skin menu
#define STR_VARIANTS              "Варианты"
#define STR_SETTINGS              "Настройки"
#define STR_POSITION              "Позиция"
#define STR_DISPLAYMONITOR        "Выбор монитора"
#define STR_USEDEFAULTMONITOR     "По умолчанию: Основной монитор"
#define STR_VIRTUALSCREEN         "@0: Виртуальный"
#define STR_AUTOSELECTMONITOR     "Автоопределение на основе расположения окна"
#define STR_STAYTOPMOST           "Всегда поверх окон"
#define STR_TOPMOST               "Поверх окон"
#define STR_NORMAL                "Нормально"
#define STR_BOTTOM                "Позади"
#define STR_ONDESKTOP             "Всегда позади"
#define STR_FROMRIGHT             "Справа"
#define STR_FROMBOTTOM            "Снизу"
#define STR_XASPERCENTAGE         "X в процентном отношении"
#define STR_YASPERCENTAGE         "Y в процентном отношении"
#define STR_TRANSPARENCY          "Прозрачность"
#define STR_FADEIN                "Проявление"
#define STR_FADEOUT               "Затухание"
#define STR_HIDEONMOUSEOVER       "Прятать при наведении мыши"
#define STR_DRAGGABLE             "Подвижность"
#define STR_SAVEPOSITION          "Сохранять позицию"
#define STR_SNAPTOEDGES           "Зацепляться за края"
#define STR_CLICKTHROUGH          "Некликабельно"
#define STR_KEEPONSCREEN          "Оставаться на экране"
#define STR_MANAGESKIN            "Управление скином"
#define STR_EDITSKIN              "Редактировать скин"
#define STR_REFRESHSKIN           "Обновить скин"
#define STR_UNLOADSKIN            "Закрыть скин"
#define STR_CUSTOMSKINACTIONS     "Пользовательские действия"
#define STR_FAVORITE              "Избранный скин"

// ============================================================================
// Dialogs
// ============================================================================

#define STR_CLOSE                 "Закрыть"

// About dialog
#define STR_ABOUTRAINMETER        "Про Rainmeter"
#define STR_LOG                   "Лог"
#define STR_MEASURES              "Измерения"
#define STR_VARIABLES             "Переменные"
#define STR_PLUGINS               "Плагины"
#define STR_VERSION               "Версия"
#define STR_TYPE                  "Тип"
#define STR_TIME                  "Время"
#define STR_SOURCE                "Источник"
#define STR_MESSAGE               "Сообщение"
#define STR_NAME                  "Имя"
#define STR_RANGE                 "Диапазон"
#define STR_VALUE                 "Значение"
#define STR_AUTHOR                "Автор"
#define STR_ERROR                 "Ошибка"
#define STR_WARNING               "Предупреждение"
#define STR_NOTICE                "Уведомление"
#define STR_DEBUG                 "Отладка"
#define STR_CLEAR                 "Очистить"
#define STR_GETLATESTVERSION      "Получить последнюю версию на <a href=""http://rainmeter.net"">rainmeter.net</a>."
#define STR_COPYRIGHTNOTICE       "Распространяется под <a href=""http://www.gnu.org/licenses"">GNU GPL v2</a> лицензией."
#define STR_COPYTOCLIPBOARD       "Скопировать в буфер обмена"

// Manage dialog
#define STR_MANAGERAINMETER       "Управление Rainmeter"
#define STR_ACTIVESKINS           "Активные скины"
#define STR_EXPAND                "Развернуть"
#define STR_COLLAPSE              "Свернуть"
#define STR_CREATERMSKIN          "Создать .rmskin пакет..."
#define STR_OPENLOG               "Открыть лог"
#define STR_LOAD                  "Загрузить"
#define STR_UNLOAD                "Закрыть"
#define STR_REFRESH               "Обновить"
#define STR_EDIT                  "Изменить"
#define STR_AUTHORSC              "Автор:"
#define STR_VERSIONSC             "Версия:"
#define STR_LICENSESC             "Лицензия:"
#define STR_INFORMATIONSC         "Информация:"
#define STR_ADDMETADATA           "<a>Добавить метаданные</a>"
#define STR_COORDINATESSC         "Координаты:"
#define STR_POSITIONSC            "Позиция:"
#define STR_LOADORDERSC           "Порядок загрузки:"
#define STR_TRANSPARENCYSC        "Прозрачность:"
#define STR_ONHOVERSC             "При наведении:"
#define STR_DONOTHING             "Ничего не делать"
#define STR_HIDE                  "Спрятать"
#define STR_SAVENEWTHEME          "Сохранить новую тему"
#define STR_THEMEDESCRIPTION      "Тема позволяет Вам сохранять текущую схему ваших Rainmeter скинов и позднее их восстановить. Восстановление старой темы восстановит схему расположения, но не отменит изменения или обновления ваших скинов."
#define STR_SAVEASEMPTYTHEME      "Сохранить как пустую тему"
#define STR_EXCLUDEUNUSEDSKINS    "Исключить неиспользуемые скины"
#define STR_INCLUDEWALLPAPER      "Добавить текущие обои рабочего стола"
#define STR_NAMESC                "Имя:"
#define STR_SAVE                  "Сохранить"
#define STR_SAVEDTHEMES           "Сохранённые темы"
#define STR_DELETE                "Удалить"
#define STR_BACKUP                "Бэкап"
#define STR_BACKUPDESCRIPTION     "Резервное копирование позволяет полностью восстановить Rainmeter в предыдущее состояние, в том числе скины и статистику. В отличие от темы, установка резервной копии заменит все изменения и обновления ваших скинов на момент создания резервной копии."
#define STR_BACKUPE               "Бэкап..."
#define STR_LANGUAGESC            "Язык (Language):"
#define STR_EDITORSC              "Редактор:"
#define STR_GENERAL               "Основные"
#define STR_CHECKFORUPDATES       "Проверять обновления"
#define STR_SHOWNOTIFAREAICON     "Показывать значок в области уведомлений"
#define STR_RESETSTATISTICS       "Обнулить статистику"
#define STR_LOGTOFILE             "Сохранять лог в файл"

// NewSkin dialog
#define STR_CREATENEWSKIN         "Create new skin"
#define STR_NEWSKIN               "New skin"
#define STR_TEMPLATE              "Template"
#define STR_TEMPLATEE             "Template..."
#define STR_ADDFOLDER             "Add Folder"
#define STR_ADDSKIN               "Add skin"
#define STR_RENAME                "Rename"
#define STR_SAVENEWTEMPLATE       "Save new template"
#define STR_SAVEDTEMPLATES        "Saved templates"
#define STR_USEDEFAULTTEMPLATE    "Use default template"

// ============================================================================
// Messages
// ============================================================================

#define STR_SETTINGSNOTWRITABLE   "Невозможно записать информацию в RainMeter.ini. Параметры не будут сохранены."
#define STR_SETTINGSMOVEFILE      "Закройте Rainmeter и переместите файл настроек из:\n%1\n\nв:\n%2\n\nТакже, можно просто удалить этот файл (настройки будут утеряны) и он будет автоматически создан заново при следующем запуске."
#define STR_SETTINGSREADONLY      "Убедитесь, что файлу не заданы свойства ''только для чтения'', и что папка доступна для записи. Этот файл расположен в:\n%1"
#define STR_THEMEALREADYEXISTS    "Тема ""%1"" уже существует.\n\nВы хотите заменить ее?"
#define STR_THEMESAVEFAIL         "Не удается сохранить тему:\n%1"
#define STR_THEMEDELETE           "Вы уверены, что хотите удалить тему ""%1""?"
#define STR_LOGFILECREATEFAIL     "Не удается создать лог-файл:\n%1"
#define STR_LOGFILEDELETE         "Вы действительно хотите удалить файл журнала (лог-файл)?\n%1"
#define STR_NOAVAILABLESKINS      "Нет доступных скинов в:\n%1"
#define STR_UNABLETOACTIVATESKIN  "Не удалось активировать скин ""%1\\%2"": Файл не найден."
#define STR_UNABLETOREFRESHSKIN   "Не удалось обновить скин ""%1\\%2"": Файл не найден."
#define STR_NEWVERSIONREQUIRED    "Для работы скина ""%1\\%2"" требуется Rainmeter %3 или выше. Скачайте последнюю версию с rainmeter.net."
#define STR_NOMETERSINSKIN        "Скин ""%1\\%2"" не содержит каких-либо значений и он будет деактивирован.\n\nФайл может быть поврежден, или он не является скином вообще."
#define STR_INCLUDEINFINITELOOP   "Вы создали бесконечный цикл с @include. Пожалуйста, проверьте Ваш скин."
#define STR_CREATEFOLDERFAIL      "Could not create folder: %1"
#define STR_CREATEFILEFAIL        "Could not create file: %1"
#define STR_FOLDEREXISTS          "The folder ""%1"" already exists."
#define STR_FILEEXISTS            "The file ""%1"" already exists."
#define STR_RENAMEFOLDERFAIL      "The folder ""%1"" could not be renamed.\nError code: %2"
#define STR_RENAMEFILEFAIL        "The file ""%1"" could not be renamed.\nError code: %2"
#define STR_FOLDERDELETE          "Are you sure you want to delete this folder?\n%1"
#define STR_FILEDELETE            "Are you sure you want to delete this file?\n%1"
#define STR_FOLDERDELETEFAIL      "Unable to delete the folder:\n%1"
#define STR_FILEDELETEFAIL        "Unable to delete the file:\n%1"
#define STR_TEMPLATEDOESNOTEXIST  "The template ""%1"" does not exist.\nDo you want to use the default template instead?"
#define STR_TEMPLATEEXISTS        "Template ""%1 already exists."
#define STR_TEMPLATEFOLDERFAIL    "Unable to create template folder."
#define STR_TEMPLATEFILEFAIL      "Unable to create template file: %1"
#define STR_TEMPLATEDELETE        "Are you sure you want to delete the template ""%1""?"

// ============================================================================
// Notifications
// ============================================================================

#define STR_WELCOME               "Добро пожаловать в Rainmeter"
#define STR_CLICKTOMANAGE         "Нажмите на иконку Rainmeter для управления скинами и настройками."
#define STR_CLICKTODOWNLOAD       "Нажмите здесь, чтобы загрузить Rainmeter %1."
