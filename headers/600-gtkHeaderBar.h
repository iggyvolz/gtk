extern GtkWidget* gtk_header_bar_new(void);
extern void gtk_header_bar_pack_start(GtkHeaderBar* bar, GtkWidget* child);
extern void gtk_header_bar_set_show_title_buttons(GtkHeaderBar* bar, gboolean setting);
extern void gtk_header_bar_pack_end(GtkHeaderBar* bar, GtkWidget* child);
extern const char* gtk_header_bar_get_decoration_layout(GtkHeaderBar* bar);
extern gboolean gtk_header_bar_get_show_title_buttons(GtkHeaderBar* bar);
extern GtkWidget* gtk_header_bar_get_title_widget(GtkHeaderBar* bar);
extern void gtk_header_bar_remove(GtkHeaderBar* bar, GtkWidget* child);
extern void gtk_header_bar_set_decoration_layout(GtkHeaderBar* bar, const char* layout);
extern void gtk_header_bar_set_title_widget(GtkHeaderBar* bar, GtkWidget* title_widget);