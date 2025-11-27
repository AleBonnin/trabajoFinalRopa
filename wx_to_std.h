#ifndef WX_TO_STD_H
#define WX_TO_STD_H
/// para convertir un c-string, o una constante, a wxString
inline wxString c_to_wx(const char *c_str);

/// para convertir un std::string a wxString
inline wxString std_to_wx(const std::string &std_str);

/// para convertir wxString a std::string
inline std::string wx_to_std(const wxString &wx_str);

#endif
