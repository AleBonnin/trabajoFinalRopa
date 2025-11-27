///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version 4.2.1-0-g80c4cb6)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#pragma once

#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
#include <wx/string.h>
#include <wx/stattext.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/textctrl.h>
#include <wx/choice.h>
#include <wx/checkbox.h>
#include <wx/button.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/sizer.h>
#include <wx/grid.h>
#include <wx/frame.h>
#include <wx/dialog.h>
#include <wx/datectrl.h>
#include <wx/dateevt.h>
#include <wx/combobox.h>

///////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////
/// Class VentanaPadre
///////////////////////////////////////////////////////////////////////////////
class VentanaPadre : public wxFrame
{
	private:

	protected:
		wxStaticText* m_staticText1;
		wxTextCtrl* m_TextoCodigo;
		wxStaticText* m_staticText90;
		wxTextCtrl* m_TextoDesc;
		wxStaticText* m_staticText2;
		wxChoice* m_EleccionTalle;
		wxStaticText* m_staticText3;
		wxCheckBox* m_CheckStockBajo;
		wxButton* m_BotonBuscar;
		wxGrid* m_inventario;
		wxButton* m_button2;
		wxButton* BotonVender;
		wxButton* BotonAgregar;
		wxButton* m_button5;
		wxButton* m_button6;

		// Virtual event handlers, override them in your derived class
		virtual void BuscarStockBajo( wxCommandEvent& event ) { event.Skip(); }
		virtual void BuscarCodigo( wxCommandEvent& event ) { event.Skip(); }
		virtual void ClickBotonHistorial( wxCommandEvent& event ) { event.Skip(); }
		virtual void ClickBotonVender( wxCommandEvent& event ) { event.Skip(); }
		virtual void ClickBotonAgregar( wxCommandEvent& event ) { event.Skip(); }
		virtual void ClickBotonEditar( wxCommandEvent& event ) { event.Skip(); }
		virtual void BotonEliminar( wxCommandEvent& event ) { event.Skip(); }


	public:

		VentanaPadre( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Stock"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 846,578 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );

		~VentanaPadre();

};

///////////////////////////////////////////////////////////////////////////////
/// Class VentanaEditar
///////////////////////////////////////////////////////////////////////////////
class VentanaEditar : public wxDialog
{
	private:

	protected:
		wxStaticText* m_staticText88;
		wxTextCtrl* m_textCtrl119;
		wxButton* m_button20;
		wxStaticText* m_staticText89;
		wxTextCtrl* m_textCtrl120;
		wxStaticText* m_staticText15;
		wxStaticText* m_staticText181;
		wxStaticText* m_staticText191;
		wxStaticText* m_staticText20;
		wxStaticText* m_staticText21;
		wxStaticText* m_staticText23;
		wxStaticText* m_staticText24;
		wxTextCtrl* m_CantS;
		wxTextCtrl* m_CantM;
		wxTextCtrl* m_CantL;
		wxTextCtrl* m_CantXL;
		wxTextCtrl* m_CantXXL;
		wxStaticText* m_staticText17;
		wxTextCtrl* m_PreVenS;
		wxTextCtrl* m_PreVenM;
		wxTextCtrl* m_PreVenL;
		wxTextCtrl* m_PreVenXL;
		wxTextCtrl* m_PreVenXXL;
		wxStaticText* m_staticText18;
		wxTextCtrl* m_PreCosS;
		wxTextCtrl* m_PreCosM;
		wxTextCtrl* m_PreCosL;
		wxTextCtrl* m_PreCosXL;
		wxTextCtrl* m_PreCosXXL;
		wxStaticText* m_staticText19;
		wxTextCtrl* m_DescuS;
		wxTextCtrl* m_DescuM;
		wxTextCtrl* m_DescuL;
		wxTextCtrl* m_DescuXL;
		wxTextCtrl* m_DescuXXL;
		wxButton* BotonAceptar;
		wxButton* BotonCancelar;

		// Virtual event handlers, override them in your derived class
		virtual void ClickBotonConfirmar( wxCommandEvent& event ) { event.Skip(); }
		virtual void ClickBotonCancelar( wxCommandEvent& event ) { event.Skip(); }


	public:

		VentanaEditar( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxDEFAULT_DIALOG_STYLE );

		~VentanaEditar();

};

///////////////////////////////////////////////////////////////////////////////
/// Class VentanaEliminar
///////////////////////////////////////////////////////////////////////////////
class VentanaEliminar : public wxDialog
{
	private:

	protected:
		wxStaticText* m_staticText29;
		wxTextCtrl* m_Codigo;
		wxStaticText* m_staticText35;
		wxStaticText* m_staticText40;
		wxCheckBox* m_CheckS;
		wxStaticText* m_staticText36;
		wxCheckBox* m_CheckM;
		wxStaticText* m_staticText37;
		wxCheckBox* m_CheckL;
		wxStaticText* m_staticText38;
		wxCheckBox* m_CheckXL;
		wxStaticText* m_staticText39;
		wxCheckBox* m_CheckXXL;
		wxButton* m_button14;
		wxButton* m_button15;

		// Virtual event handlers, override them in your derived class
		virtual void ClickEliminar( wxCommandEvent& event ) { event.Skip(); }


	public:

		VentanaEliminar( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 418,259 ), long style = wxDEFAULT_DIALOG_STYLE );

		~VentanaEliminar();

};

///////////////////////////////////////////////////////////////////////////////
/// Class VentanaVender
///////////////////////////////////////////////////////////////////////////////
class VentanaVender : public wxDialog
{
	private:

	protected:
		wxStaticText* m_staticText19;
		wxTextCtrl* m_CodVen;
		wxStaticText* m_staticText24;
		wxChoice* m_TalleVen;
		wxStaticText* m_staticText20;
		wxTextCtrl* m_CantVen;
		wxStaticText* m_staticText21;
		wxTextCtrl* m_ClieDNI;
		wxStaticText* m_staticText23;
		wxDatePickerCtrl* m_fecha;
		wxButton* m_BotonAgregarVenta;
		wxGrid* m_GrillaVentas;
		wxButton* m_BotonCancelarVenta;
		wxButton* BotonVender;

		// Virtual event handlers, override them in your derived class
		virtual void ClickBotonAgregarVenta( wxCommandEvent& event ) { event.Skip(); }
		virtual void ClickBotonCancelarVenta( wxCommandEvent& event ) { event.Skip(); }
		virtual void ClickBotonVender( wxCommandEvent& event ) { event.Skip(); }


	public:

		VentanaVender( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 526,421 ), long style = wxDEFAULT_DIALOG_STYLE );

		~VentanaVender();

};

///////////////////////////////////////////////////////////////////////////////
/// Class VentanaHistorial2
///////////////////////////////////////////////////////////////////////////////
class VentanaHistorial2 : public wxDialog
{
	private:

	protected:
		wxStaticText* m_staticText22;
		wxTextCtrl* m_desc_cod;
		wxStaticText* m_staticText91;
		wxTextCtrl* m_desc;
		wxStaticText* m_staticText23;
		wxTextCtrl* m_numven;
		wxStaticText* m_staticText24;
		wxTextCtrl* m_dni;
		wxStaticText* m_staticText25;
		wxComboBox* m_talles;
		wxStaticText* m_staticText26;
		wxDatePickerCtrl* m_fecha_desde;
		wxStaticText* m_staticText27;
		wxDatePickerCtrl* m_fecha_hasta;
		wxButton* m_button13;
		wxGrid* m_grillahist;
		wxStaticText* m_staticText28;
		wxTextCtrl* m_totalsumado;

		// Virtual event handlers, override them in your derived class
		virtual void ClickBuscarHistorial( wxCommandEvent& event ) { event.Skip(); }


	public:

		VentanaHistorial2( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Historial"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 1096,610 ), long style = wxDEFAULT_DIALOG_STYLE );

		~VentanaHistorial2();

};

///////////////////////////////////////////////////////////////////////////////
/// Class VentanaAgregar
///////////////////////////////////////////////////////////////////////////////
class VentanaAgregar : public wxDialog
{
	private:

	protected:
		wxStaticText* m_staticText12;
		wxTextCtrl* m_Descr;
		wxStaticText* m_staticText13;
		wxTextCtrl* m_Cod;
		wxStaticText* m_staticText15;
		wxStaticText* m_staticText181;
		wxCheckBox* CheckS;
		wxStaticText* m_staticText191;
		wxCheckBox* CheckM;
		wxStaticText* m_staticText20;
		wxCheckBox* CheckL;
		wxStaticText* m_staticText21;
		wxCheckBox* CheckXL;
		wxStaticText* m_staticText23;
		wxCheckBox* CheckXXL;
		wxStaticText* m_staticText24;
		wxTextCtrl* m_CantS;
		wxTextCtrl* m_CantM;
		wxTextCtrl* m_CantL;
		wxTextCtrl* m_CantXL;
		wxTextCtrl* m_CantXXL;
		wxStaticText* m_staticText17;
		wxTextCtrl* m_PreVenS;
		wxTextCtrl* m_PreVenM;
		wxTextCtrl* m_PreVenL;
		wxTextCtrl* m_PreVenXL;
		wxTextCtrl* m_PreVenXXL;
		wxStaticText* m_staticText18;
		wxTextCtrl* m_PreCosS;
		wxTextCtrl* m_PreCosM;
		wxTextCtrl* m_PreCosL;
		wxTextCtrl* m_PreCosXL;
		wxTextCtrl* m_PreCosXXL;
		wxStaticText* m_staticText19;
		wxTextCtrl* m_DescuS;
		wxTextCtrl* m_DescuM;
		wxTextCtrl* m_DescuL;
		wxTextCtrl* m_DescuXL;
		wxTextCtrl* m_DescuXXL;
		wxButton* BotonAceptar;
		wxButton* BotonCancelar;

		// Virtual event handlers, override them in your derived class
		virtual void MarcarS( wxCommandEvent& event ) { event.Skip(); }
		virtual void MarcarM( wxCommandEvent& event ) { event.Skip(); }
		virtual void MarcarL( wxCommandEvent& event ) { event.Skip(); }
		virtual void MarcarXL( wxCommandEvent& event ) { event.Skip(); }
		virtual void MarcarXXL( wxCommandEvent& event ) { event.Skip(); }
		virtual void ClickBotonAceptar( wxCommandEvent& event ) { event.Skip(); }
		virtual void ClickBotonCancelar( wxCommandEvent& event ) { event.Skip(); }


	public:

		VentanaAgregar( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 680,292 ), long style = wxDEFAULT_DIALOG_STYLE );

		~VentanaAgregar();

};

