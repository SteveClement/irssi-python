#include "pymodule.h"
#include "pyirssi_irc.h"

void pyconstants_init(void)
{
    PyModule_AddIntConstant(py_module, "IO_IN", G_IO_IN);
    PyModule_AddIntConstant(py_module, "IO_OUT", G_IO_OUT);
    PyModule_AddIntConstant(py_module, "IO_PRI", G_IO_PRI);
    PyModule_AddIntConstant(py_module, "IO_ERR", G_IO_ERR);
    PyModule_AddIntConstant(py_module, "IO_HUP", G_IO_HUP);
    PyModule_AddIntConstant(py_module, "IRSSI_GUI_GNOME", IRSSI_GUI_GNOME);
    PyModule_AddIntConstant(py_module, "IRSSI_GUI_GTK", IRSSI_GUI_GTK);
    PyModule_AddIntConstant(py_module, "IRSSI_GUI_KDE", IRSSI_GUI_KDE);
    PyModule_AddIntConstant(py_module, "IRSSI_GUI_NONE", IRSSI_GUI_NONE);
    PyModule_AddIntConstant(py_module, "IRSSI_GUI_QT", IRSSI_GUI_QT);
    PyModule_AddIntConstant(py_module, "IRSSI_GUI_TEXT", IRSSI_GUI_TEXT);
    PyModule_AddIntConstant(py_module, "IRC_MASK_DOMAIN", IRC_MASK_DOMAIN);
    PyModule_AddIntConstant(py_module, "IRC_MASK_HOST", IRC_MASK_HOST);
    PyModule_AddIntConstant(py_module, "IRC_MASK_NICK", IRC_MASK_NICK);
    PyModule_AddIntConstant(py_module, "IRC_MASK_USER", IRC_MASK_USER);
    PyModule_AddIntConstant(py_module, "MSGLEVEL_ACTIONS", MSGLEVEL_ACTIONS);
    PyModule_AddIntConstant(py_module, "MSGLEVEL_ALL", MSGLEVEL_ALL);
    PyModule_AddIntConstant(py_module, "MSGLEVEL_CLIENTCRAP", MSGLEVEL_CLIENTCRAP);
    PyModule_AddIntConstant(py_module, "MSGLEVEL_CLIENTERROR", MSGLEVEL_CLIENTERROR);
    PyModule_AddIntConstant(py_module, "MSGLEVEL_CLIENTNOTICE", MSGLEVEL_CLIENTNOTICE);
    PyModule_AddIntConstant(py_module, "MSGLEVEL_CRAP", MSGLEVEL_CRAP);
    PyModule_AddIntConstant(py_module, "MSGLEVEL_CTCPS", MSGLEVEL_CTCPS);
    PyModule_AddIntConstant(py_module, "MSGLEVEL_DCC", MSGLEVEL_DCC);
    PyModule_AddIntConstant(py_module, "MSGLEVEL_DCCMSGS", MSGLEVEL_DCCMSGS);
    PyModule_AddIntConstant(py_module, "MSGLEVEL_HILIGHT", MSGLEVEL_HILIGHT);
    PyModule_AddIntConstant(py_module, "MSGLEVEL_INVITES", MSGLEVEL_INVITES);
    PyModule_AddIntConstant(py_module, "MSGLEVEL_JOINS", MSGLEVEL_JOINS);
    PyModule_AddIntConstant(py_module, "MSGLEVEL_KICKS", MSGLEVEL_KICKS);
    PyModule_AddIntConstant(py_module, "MSGLEVEL_LASTLOG", MSGLEVEL_LASTLOG);
    PyModule_AddIntConstant(py_module, "MSGLEVEL_MODES", MSGLEVEL_MODES);
    PyModule_AddIntConstant(py_module, "MSGLEVEL_MSGS", MSGLEVEL_MSGS);
    PyModule_AddIntConstant(py_module, "MSGLEVEL_NEVER", MSGLEVEL_NEVER);
    PyModule_AddIntConstant(py_module, "MSGLEVEL_NICKS", MSGLEVEL_NICKS);
    PyModule_AddIntConstant(py_module, "MSGLEVEL_NO_ACT", MSGLEVEL_NO_ACT);
    PyModule_AddIntConstant(py_module, "MSGLEVEL_NOHILIGHT", MSGLEVEL_NOHILIGHT);
    PyModule_AddIntConstant(py_module, "MSGLEVEL_NOTICES", MSGLEVEL_NOTICES);
    PyModule_AddIntConstant(py_module, "MSGLEVEL_PARTS", MSGLEVEL_PARTS);
    PyModule_AddIntConstant(py_module, "MSGLEVEL_PUBLIC", MSGLEVEL_PUBLIC);
    PyModule_AddIntConstant(py_module, "MSGLEVEL_QUITS", MSGLEVEL_QUITS);
    PyModule_AddIntConstant(py_module, "MSGLEVEL_SNOTES", MSGLEVEL_SNOTES);
    PyModule_AddIntConstant(py_module, "MSGLEVEL_TOPICS", MSGLEVEL_TOPICS);
    PyModule_AddIntConstant(py_module, "MSGLEVEL_WALLOPS", MSGLEVEL_WALLOPS);
    PyModule_AddIntConstant(py_module, "SIGNAL_PRIORITY_DEFAULT", SIGNAL_PRIORITY_DEFAULT);
    PyModule_AddIntConstant(py_module, "SIGNAL_PRIORITY_HIGH", SIGNAL_PRIORITY_HIGH);
    PyModule_AddIntConstant(py_module, "SIGNAL_PRIORITY_LOW", SIGNAL_PRIORITY_LOW);
}
