///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version 4.2.1-0-g80c4cb6)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "wxfb_project.h"

///////////////////////////////////////////////////////////////////////////

VentanaPadre::VentanaPadre( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	this->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_WINDOW ) );
	this->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_ACTIVEBORDER ) );

	wxBoxSizer* bSizer1;
	bSizer1 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer2;
	bSizer2 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText1 = new wxStaticText( this, wxID_ANY, wxT("Código"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText1->Wrap( -1 );
	bSizer2->Add( m_staticText1, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_TextoCodigo = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer2->Add( m_TextoCodigo, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer2->Add( 0, 0, 1, wxEXPAND, 5 );

	m_staticText90 = new wxStaticText( this, wxID_ANY, wxT("Desc."), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText90->Wrap( -1 );
	bSizer2->Add( m_staticText90, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_TextoDesc = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer2->Add( m_TextoDesc, 0, wxALL, 5 );


	bSizer2->Add( 0, 0, 1, wxEXPAND, 5 );

	m_staticText2 = new wxStaticText( this, wxID_ANY, wxT("Talles:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText2->Wrap( -1 );
	bSizer2->Add( m_staticText2, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	wxString m_EleccionTalleChoices[] = { wxEmptyString, wxT("S"), wxT("M"), wxT("L"), wxT("XL"), wxT("XXL") };
	int m_EleccionTalleNChoices = sizeof( m_EleccionTalleChoices ) / sizeof( wxString );
	m_EleccionTalle = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, m_EleccionTalleNChoices, m_EleccionTalleChoices, 0 );
	m_EleccionTalle->SetSelection( 0 );
	bSizer2->Add( m_EleccionTalle, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer2->Add( 0, 0, 1, wxEXPAND, 5 );

	m_staticText3 = new wxStaticText( this, wxID_ANY, wxT("Stock bajo"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText3->Wrap( -1 );
	bSizer2->Add( m_staticText3, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_CheckStockBajo = new wxCheckBox( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer2->Add( m_CheckStockBajo, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer2->Add( 0, 0, 1, wxEXPAND, 5 );

	m_BotonBuscar = new wxButton( this, wxID_ANY, wxT("Buscar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer2->Add( m_BotonBuscar, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer2->Add( 0, 0, 1, wxEXPAND, 5 );


	bSizer1->Add( bSizer2, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer3;
	bSizer3 = new wxBoxSizer( wxHORIZONTAL );

	m_inventario = new wxGrid( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );

	// Grid
	m_inventario->CreateGrid( 0, 7 );
	m_inventario->EnableEditing( true );
	m_inventario->EnableGridLines( true );
	m_inventario->EnableDragGridSize( false );
	m_inventario->SetMargins( 0, 0 );

	// Columns
	m_inventario->SetColSize( 0, 375 );
	m_inventario->SetColSize( 1, 94 );
	m_inventario->SetColSize( 2, 58 );
	m_inventario->SetColSize( 3, 80 );
	m_inventario->SetColSize( 4, 59 );
	m_inventario->SetColSize( 5, 80 );
	m_inventario->SetColSize( 6, 74 );
	m_inventario->EnableDragColMove( false );
	m_inventario->EnableDragColSize( true );
	m_inventario->SetColLabelValue( 0, wxT("Descripción") );
	m_inventario->SetColLabelValue( 1, wxT("Código") );
	m_inventario->SetColLabelValue( 2, wxT("Talle") );
	m_inventario->SetColLabelValue( 3, wxT("Cantidad") );
	m_inventario->SetColLabelValue( 4, wxT("Precio") );
	m_inventario->SetColLabelValue( 5, wxT("Costo") );
	m_inventario->SetColLabelValue( 6, wxT("Descu.") );
	m_inventario->SetColLabelAlignment( wxALIGN_CENTER, wxALIGN_CENTER );

	// Rows
	m_inventario->EnableDragRowSize( true );
	m_inventario->SetRowLabelSize( 0 );
	m_inventario->SetRowLabelAlignment( wxALIGN_CENTER, wxALIGN_CENTER );

	// Label Appearance

	// Cell Defaults
	m_inventario->SetDefaultCellAlignment( wxALIGN_LEFT, wxALIGN_TOP );
	bSizer3->Add( m_inventario, 1, wxALL|wxEXPAND, 5 );


	bSizer1->Add( bSizer3, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer4;
	bSizer4 = new wxBoxSizer( wxHORIZONTAL );

	m_button2 = new wxButton( this, wxID_ANY, wxT("Historial"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer4->Add( m_button2, 0, wxALL, 5 );

	BotonVender = new wxButton( this, wxID_ANY, wxT("Vender"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer4->Add( BotonVender, 0, wxALL, 5 );


	bSizer4->Add( 0, 0, 1, wxEXPAND, 5 );

	BotonAgregar = new wxButton( this, wxID_ANY, wxT("Agregar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer4->Add( BotonAgregar, 0, wxALL, 5 );

	m_button5 = new wxButton( this, wxID_ANY, wxT("Editar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer4->Add( m_button5, 0, wxALL, 5 );

	m_button6 = new wxButton( this, wxID_ANY, wxT("Eliminar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer4->Add( m_button6, 0, wxALL, 5 );


	bSizer1->Add( bSizer4, 0, wxEXPAND, 5 );


	this->SetSizer( bSizer1 );
	this->Layout();

	this->Centre( wxBOTH );

	// Connect Events
	m_CheckStockBajo->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( VentanaPadre::BuscarStockBajo ), NULL, this );
	m_BotonBuscar->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( VentanaPadre::BuscarCodigo ), NULL, this );
	m_button2->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( VentanaPadre::ClickBotonHistorial ), NULL, this );
	BotonVender->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( VentanaPadre::ClickBotonVender ), NULL, this );
	BotonAgregar->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( VentanaPadre::ClickBotonAgregar ), NULL, this );
	m_button5->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( VentanaPadre::ClickBotonEditar ), NULL, this );
	m_button6->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( VentanaPadre::BotonEliminar ), NULL, this );
}

VentanaPadre::~VentanaPadre()
{
	// Disconnect Events
	m_CheckStockBajo->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( VentanaPadre::BuscarStockBajo ), NULL, this );
	m_BotonBuscar->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( VentanaPadre::BuscarCodigo ), NULL, this );
	m_button2->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( VentanaPadre::ClickBotonHistorial ), NULL, this );
	BotonVender->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( VentanaPadre::ClickBotonVender ), NULL, this );
	BotonAgregar->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( VentanaPadre::ClickBotonAgregar ), NULL, this );
	m_button5->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( VentanaPadre::ClickBotonEditar ), NULL, this );
	m_button6->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( VentanaPadre::BotonEliminar ), NULL, this );

}

VentanaEditar::VentanaEditar( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	wxBoxSizer* bSizer17;
	bSizer17 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer55;
	bSizer55 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText88 = new wxStaticText( this, wxID_ANY, wxT("Código        "), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText88->Wrap( -1 );
	bSizer55->Add( m_staticText88, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_textCtrl119 = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer55->Add( m_textCtrl119, 1, wxALL, 5 );

	m_button20 = new wxButton( this, wxID_ANY, wxT("Buscar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer55->Add( m_button20, 0, wxALL, 5 );


	bSizer17->Add( bSizer55, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer56;
	bSizer56 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText89 = new wxStaticText( this, wxID_ANY, wxT("Descripción"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText89->Wrap( -1 );
	bSizer56->Add( m_staticText89, 0, wxALL, 5 );

	m_textCtrl120 = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer56->Add( m_textCtrl120, 1, wxALL, 5 );


	bSizer17->Add( bSizer56, 0, wxEXPAND, 5 );

	wxFlexGridSizer* fgSizer5;
	fgSizer5 = new wxFlexGridSizer( 6, 6, 0, 0 );
	fgSizer5->SetFlexibleDirection( wxBOTH );
	fgSizer5->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText15 = new wxStaticText( this, wxID_ANY, wxT("Talle:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText15->Wrap( -1 );
	fgSizer5->Add( m_staticText15, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );

	wxBoxSizer* bSizer7;
	bSizer7 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText181 = new wxStaticText( this, wxID_ANY, wxT("S"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText181->Wrap( -1 );
	m_staticText181->SetFont( wxFont( 9, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("Arial") ) );
	m_staticText181->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_INACTIVECAPTIONTEXT ) );

	bSizer7->Add( m_staticText181, 0, wxALL, 5 );


	fgSizer5->Add( bSizer7, 1, wxALIGN_CENTER_HORIZONTAL, 5 );

	wxBoxSizer* bSizer10;
	bSizer10 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText191 = new wxStaticText( this, wxID_ANY, wxT("M"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText191->Wrap( -1 );
	m_staticText191->SetFont( wxFont( 9, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("Arial") ) );

	bSizer10->Add( m_staticText191, 0, wxALL, 5 );


	fgSizer5->Add( bSizer10, 1, wxALIGN_CENTER_HORIZONTAL, 5 );

	wxBoxSizer* bSizer12;
	bSizer12 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText20 = new wxStaticText( this, wxID_ANY, wxT("L"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText20->Wrap( -1 );
	m_staticText20->SetFont( wxFont( 9, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("Arial") ) );

	bSizer12->Add( m_staticText20, 0, wxALL, 5 );


	fgSizer5->Add( bSizer12, 1, wxALIGN_CENTER_HORIZONTAL, 5 );

	wxBoxSizer* bSizer14;
	bSizer14 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText21 = new wxStaticText( this, wxID_ANY, wxT("XL"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText21->Wrap( -1 );
	m_staticText21->SetFont( wxFont( 9, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("Arial") ) );

	bSizer14->Add( m_staticText21, 0, wxALL, 5 );


	fgSizer5->Add( bSizer14, 1, wxALIGN_CENTER_HORIZONTAL, 5 );

	wxBoxSizer* bSizer16;
	bSizer16 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText23 = new wxStaticText( this, wxID_ANY, wxT("XXL"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText23->Wrap( -1 );
	m_staticText23->SetFont( wxFont( 9, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("Arial") ) );

	bSizer16->Add( m_staticText23, 0, wxALL, 5 );


	fgSizer5->Add( bSizer16, 1, wxALIGN_CENTER_HORIZONTAL, 5 );

	m_staticText24 = new wxStaticText( this, wxID_ANY, wxT("Cantidad:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText24->Wrap( -1 );
	fgSizer5->Add( m_staticText24, 0, wxALL, 5 );

	m_CantS = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer5->Add( m_CantS, 0, wxALL, 5 );

	m_CantM = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer5->Add( m_CantM, 0, wxALL, 5 );

	m_CantL = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer5->Add( m_CantL, 0, wxALL, 5 );

	m_CantXL = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer5->Add( m_CantXL, 0, wxALL, 5 );

	m_CantXXL = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer5->Add( m_CantXXL, 0, wxALL, 5 );

	m_staticText17 = new wxStaticText( this, wxID_ANY, wxT("Pre. venta:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText17->Wrap( -1 );
	fgSizer5->Add( m_staticText17, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );

	m_PreVenS = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer5->Add( m_PreVenS, 0, wxALL, 5 );

	m_PreVenM = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer5->Add( m_PreVenM, 0, wxALL, 5 );

	m_PreVenL = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer5->Add( m_PreVenL, 0, wxALL, 5 );

	m_PreVenXL = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer5->Add( m_PreVenXL, 0, wxALL, 5 );

	m_PreVenXXL = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer5->Add( m_PreVenXXL, 0, wxALL|wxEXPAND, 5 );

	m_staticText18 = new wxStaticText( this, wxID_ANY, wxT("Costo:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText18->Wrap( -1 );
	fgSizer5->Add( m_staticText18, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );

	m_PreCosS = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer5->Add( m_PreCosS, 0, wxALL, 5 );

	m_PreCosM = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer5->Add( m_PreCosM, 0, wxALL, 5 );

	m_PreCosL = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer5->Add( m_PreCosL, 0, wxALL, 5 );

	m_PreCosXL = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer5->Add( m_PreCosXL, 0, wxALL, 5 );

	m_PreCosXXL = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer5->Add( m_PreCosXXL, 0, wxALL|wxEXPAND, 5 );

	m_staticText19 = new wxStaticText( this, wxID_ANY, wxT("Descuento:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText19->Wrap( -1 );
	fgSizer5->Add( m_staticText19, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );

	m_DescuS = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer5->Add( m_DescuS, 1, wxALL|wxEXPAND, 5 );

	m_DescuM = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer5->Add( m_DescuM, 0, wxALL, 5 );

	m_DescuL = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer5->Add( m_DescuL, 0, wxALL, 5 );

	m_DescuXL = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer5->Add( m_DescuXL, 0, wxALL, 5 );

	m_DescuXXL = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer5->Add( m_DescuXXL, 0, wxALL, 5 );


	bSizer17->Add( fgSizer5, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer18;
	bSizer18 = new wxBoxSizer( wxHORIZONTAL );


	bSizer18->Add( 0, 0, 1, wxEXPAND, 5 );

	BotonAceptar = new wxButton( this, wxID_ANY, wxT("Confirmar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer18->Add( BotonAceptar, 0, wxALL, 5 );

	BotonCancelar = new wxButton( this, wxID_ANY, wxT("Cancelar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer18->Add( BotonCancelar, 0, wxALL, 5 );


	bSizer17->Add( bSizer18, 0, wxEXPAND, 5 );


	this->SetSizer( bSizer17 );
	this->Layout();
	bSizer17->Fit( this );

	this->Centre( wxBOTH );

	// Connect Events
	BotonAceptar->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( VentanaEditar::ClickBotonConfirmar ), NULL, this );
	BotonCancelar->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( VentanaEditar::ClickBotonCancelar ), NULL, this );
}

VentanaEditar::~VentanaEditar()
{
	// Disconnect Events
	BotonAceptar->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( VentanaEditar::ClickBotonConfirmar ), NULL, this );
	BotonCancelar->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( VentanaEditar::ClickBotonCancelar ), NULL, this );

}

VentanaEliminar::VentanaEliminar( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	wxBoxSizer* bSizer19;
	bSizer19 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer20;
	bSizer20 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText29 = new wxStaticText( this, wxID_ANY, wxT("Código:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText29->Wrap( -1 );
	bSizer20->Add( m_staticText29, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_Codigo = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer20->Add( m_Codigo, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer19->Add( bSizer20, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer21;
	bSizer21 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText35 = new wxStaticText( this, wxID_ANY, wxT("Talles:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText35->Wrap( -1 );
	bSizer21->Add( m_staticText35, 0, wxALL, 5 );

	m_staticText40 = new wxStaticText( this, wxID_ANY, wxT("S"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText40->Wrap( -1 );
	bSizer21->Add( m_staticText40, 0, wxALL, 5 );

	m_CheckS = new wxCheckBox( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer21->Add( m_CheckS, 0, wxALL, 5 );


	bSizer21->Add( 0, 0, 1, wxEXPAND, 5 );

	m_staticText36 = new wxStaticText( this, wxID_ANY, wxT("M"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText36->Wrap( -1 );
	bSizer21->Add( m_staticText36, 0, wxALL, 5 );

	m_CheckM = new wxCheckBox( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer21->Add( m_CheckM, 0, wxALL, 5 );


	bSizer21->Add( 0, 0, 1, wxEXPAND, 5 );

	m_staticText37 = new wxStaticText( this, wxID_ANY, wxT("L"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText37->Wrap( -1 );
	bSizer21->Add( m_staticText37, 0, wxALL, 5 );

	m_CheckL = new wxCheckBox( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer21->Add( m_CheckL, 0, wxALL, 5 );


	bSizer21->Add( 0, 0, 1, wxEXPAND, 5 );

	m_staticText38 = new wxStaticText( this, wxID_ANY, wxT("XL"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText38->Wrap( -1 );
	bSizer21->Add( m_staticText38, 0, wxALL, 5 );

	m_CheckXL = new wxCheckBox( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer21->Add( m_CheckXL, 0, wxALL, 5 );


	bSizer21->Add( 0, 0, 1, wxEXPAND, 5 );

	m_staticText39 = new wxStaticText( this, wxID_ANY, wxT("XXL"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText39->Wrap( -1 );
	bSizer21->Add( m_staticText39, 0, wxALL, 5 );

	m_CheckXXL = new wxCheckBox( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer21->Add( m_CheckXXL, 0, wxALL, 5 );


	bSizer19->Add( bSizer21, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer23;
	bSizer23 = new wxBoxSizer( wxHORIZONTAL );

	m_button14 = new wxButton( this, wxID_ANY, wxT("Cancelar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer23->Add( m_button14, 0, wxALL, 5 );


	bSizer23->Add( 0, 0, 1, wxEXPAND, 5 );

	m_button15 = new wxButton( this, wxID_ANY, wxT("Eliminar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer23->Add( m_button15, 0, wxALL, 5 );


	bSizer19->Add( bSizer23, 0, wxEXPAND, 5 );


	this->SetSizer( bSizer19 );
	this->Layout();

	this->Centre( wxBOTH );

	// Connect Events
	m_button15->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( VentanaEliminar::ClickEliminar ), NULL, this );
}

VentanaEliminar::~VentanaEliminar()
{
	// Disconnect Events
	m_button15->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( VentanaEliminar::ClickEliminar ), NULL, this );

}

VentanaVender::VentanaVender( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	wxBoxSizer* bSizer13;
	bSizer13 = new wxBoxSizer( wxVERTICAL );

	wxFlexGridSizer* fgSizer3;
	fgSizer3 = new wxFlexGridSizer( 6, 2, 0, 0 );
	fgSizer3->AddGrowableCol( 1 );
	fgSizer3->SetFlexibleDirection( wxBOTH );
	fgSizer3->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText19 = new wxStaticText( this, wxID_ANY, wxT("Código"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText19->Wrap( -1 );
	fgSizer3->Add( m_staticText19, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );

	m_CodVen = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer3->Add( m_CodVen, 1, wxALL|wxEXPAND, 5 );

	m_staticText24 = new wxStaticText( this, wxID_ANY, wxT("Talle"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText24->Wrap( -1 );
	fgSizer3->Add( m_staticText24, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );

	wxString m_TalleVenChoices[] = { wxEmptyString, wxT("S"), wxT("M"), wxT("L"), wxT("XL"), wxT("XXL") };
	int m_TalleVenNChoices = sizeof( m_TalleVenChoices ) / sizeof( wxString );
	m_TalleVen = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, m_TalleVenNChoices, m_TalleVenChoices, 0 );
	m_TalleVen->SetSelection( 0 );
	fgSizer3->Add( m_TalleVen, 0, wxALL, 5 );

	m_staticText20 = new wxStaticText( this, wxID_ANY, wxT("Cantidad"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText20->Wrap( -1 );
	fgSizer3->Add( m_staticText20, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );

	m_CantVen = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer3->Add( m_CantVen, 1, wxALL|wxEXPAND, 5 );

	m_staticText21 = new wxStaticText( this, wxID_ANY, wxT("DNI del cliente"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText21->Wrap( -1 );
	fgSizer3->Add( m_staticText21, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );

	m_ClieDNI = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer3->Add( m_ClieDNI, 1, wxALL|wxEXPAND, 5 );

	m_staticText23 = new wxStaticText( this, wxID_ANY, wxT("Fecha"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText23->Wrap( -1 );
	fgSizer3->Add( m_staticText23, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );

	m_fecha = new wxDatePickerCtrl( this, wxID_ANY, wxDefaultDateTime, wxDefaultPosition, wxDefaultSize, wxDP_DEFAULT );
	fgSizer3->Add( m_fecha, 1, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );


	fgSizer3->Add( 0, 0, 1, wxEXPAND, 5 );

	m_BotonAgregarVenta = new wxButton( this, wxID_ANY, wxT("Agregar"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer3->Add( m_BotonAgregarVenta, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );


	bSizer13->Add( fgSizer3, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer17;
	bSizer17 = new wxBoxSizer( wxVERTICAL );

	m_GrillaVentas = new wxGrid( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );

	// Grid
	m_GrillaVentas->CreateGrid( 0, 4 );
	m_GrillaVentas->EnableEditing( true );
	m_GrillaVentas->EnableGridLines( true );
	m_GrillaVentas->EnableDragGridSize( false );
	m_GrillaVentas->SetMargins( 0, 0 );

	// Columns
	m_GrillaVentas->SetColSize( 0, 89 );
	m_GrillaVentas->SetColSize( 1, 76 );
	m_GrillaVentas->SetColSize( 2, 90 );
	m_GrillaVentas->SetColSize( 3, 170 );
	m_GrillaVentas->EnableDragColMove( false );
	m_GrillaVentas->EnableDragColSize( true );
	m_GrillaVentas->SetColLabelValue( 0, wxT("Código") );
	m_GrillaVentas->SetColLabelValue( 1, wxT("Talle") );
	m_GrillaVentas->SetColLabelValue( 2, wxT("Cantidad") );
	m_GrillaVentas->SetColLabelValue( 3, wxT("Monto") );
	m_GrillaVentas->SetColLabelAlignment( wxALIGN_CENTER, wxALIGN_CENTER );

	// Rows
	m_GrillaVentas->EnableDragRowSize( true );
	m_GrillaVentas->SetRowLabelAlignment( wxALIGN_CENTER, wxALIGN_CENTER );

	// Label Appearance

	// Cell Defaults
	m_GrillaVentas->SetDefaultCellAlignment( wxALIGN_LEFT, wxALIGN_TOP );
	bSizer17->Add( m_GrillaVentas, 1, wxALL|wxEXPAND, 5 );


	bSizer13->Add( bSizer17, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer15;
	bSizer15 = new wxBoxSizer( wxHORIZONTAL );

	m_BotonCancelarVenta = new wxButton( this, wxID_ANY, wxT("Cancelar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer15->Add( m_BotonCancelarVenta, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer15->Add( 0, 0, 1, wxEXPAND, 5 );

	BotonVender = new wxButton( this, wxID_ANY, wxT("Vender"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer15->Add( BotonVender, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer13->Add( bSizer15, 0, wxEXPAND, 5 );


	this->SetSizer( bSizer13 );
	this->Layout();

	this->Centre( wxBOTH );

	// Connect Events
	m_BotonAgregarVenta->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( VentanaVender::ClickBotonAgregarVenta ), NULL, this );
	m_BotonCancelarVenta->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( VentanaVender::ClickBotonCancelarVenta ), NULL, this );
	BotonVender->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( VentanaVender::ClickBotonVender ), NULL, this );
}

VentanaVender::~VentanaVender()
{
	// Disconnect Events
	m_BotonAgregarVenta->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( VentanaVender::ClickBotonAgregarVenta ), NULL, this );
	m_BotonCancelarVenta->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( VentanaVender::ClickBotonCancelarVenta ), NULL, this );
	BotonVender->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( VentanaVender::ClickBotonVender ), NULL, this );

}

VentanaHistorial2::VentanaHistorial2( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	wxBoxSizer* bSizer12;
	bSizer12 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer20;
	bSizer20 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText22 = new wxStaticText( this, wxID_ANY, wxT("Cod."), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText22->Wrap( -1 );
	bSizer20->Add( m_staticText22, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_desc_cod = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer20->Add( m_desc_cod, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_staticText91 = new wxStaticText( this, wxID_ANY, wxT("Desc."), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText91->Wrap( -1 );
	bSizer20->Add( m_staticText91, 0, wxALL, 5 );

	m_desc = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer20->Add( m_desc, 0, wxALL, 5 );

	m_staticText23 = new wxStaticText( this, wxID_ANY, wxT("N° Venta"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText23->Wrap( -1 );
	bSizer20->Add( m_staticText23, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_numven = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer20->Add( m_numven, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );

	m_staticText24 = new wxStaticText( this, wxID_ANY, wxT("DNI"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText24->Wrap( -1 );
	bSizer20->Add( m_staticText24, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_dni = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer20->Add( m_dni, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_staticText25 = new wxStaticText( this, wxID_ANY, wxT("Talle"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText25->Wrap( -1 );
	bSizer20->Add( m_staticText25, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_talles = new wxComboBox( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, NULL, 0 );
	m_talles->Append( wxT("S") );
	m_talles->Append( wxT("M") );
	m_talles->Append( wxT("L") );
	m_talles->Append( wxT("XL") );
	m_talles->Append( wxT("XXL") );
	bSizer20->Add( m_talles, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer20->Add( 0, 0, 1, wxEXPAND, 5 );

	m_staticText26 = new wxStaticText( this, wxID_ANY, wxT("Fecha entre"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText26->Wrap( -1 );
	bSizer20->Add( m_staticText26, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_fecha_desde = new wxDatePickerCtrl( this, wxID_ANY, wxDefaultDateTime, wxDefaultPosition, wxDefaultSize, wxDP_DEFAULT );
	bSizer20->Add( m_fecha_desde, 0, wxALL, 5 );

	m_staticText27 = new wxStaticText( this, wxID_ANY, wxT("-"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText27->Wrap( -1 );
	bSizer20->Add( m_staticText27, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_fecha_hasta = new wxDatePickerCtrl( this, wxID_ANY, wxDefaultDateTime, wxDefaultPosition, wxDefaultSize, wxDP_DEFAULT );
	bSizer20->Add( m_fecha_hasta, 0, wxALL, 5 );


	bSizer20->Add( 0, 0, 1, wxEXPAND, 5 );

	m_button13 = new wxButton( this, wxID_ANY, wxT("Buscar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer20->Add( m_button13, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer12->Add( bSizer20, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer21;
	bSizer21 = new wxBoxSizer( wxHORIZONTAL );

	m_grillahist = new wxGrid( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );

	// Grid
	m_grillahist->CreateGrid( 0, 9 );
	m_grillahist->EnableEditing( true );
	m_grillahist->EnableGridLines( true );
	m_grillahist->EnableDragGridSize( false );
	m_grillahist->SetMargins( 0, 0 );

	// Columns
	m_grillahist->SetColSize( 0, 65 );
	m_grillahist->SetColSize( 1, 262 );
	m_grillahist->SetColSize( 2, 85 );
	m_grillahist->SetColSize( 3, 129 );
	m_grillahist->SetColSize( 4, 86 );
	m_grillahist->SetColSize( 5, 76 );
	m_grillahist->SetColSize( 6, 133 );
	m_grillahist->SetColSize( 7, 90 );
	m_grillahist->SetColSize( 8, 69 );
	m_grillahist->EnableDragColMove( false );
	m_grillahist->EnableDragColSize( true );
	m_grillahist->SetColLabelValue( 0, wxT("Código") );
	m_grillahist->SetColLabelValue( 1, wxT("Desc.") );
	m_grillahist->SetColLabelValue( 2, wxT("Talle") );
	m_grillahist->SetColLabelValue( 3, wxT("Total") );
	m_grillahist->SetColLabelValue( 4, wxT("Pre. Unitario") );
	m_grillahist->SetColLabelValue( 5, wxT("Cantidad") );
	m_grillahist->SetColLabelValue( 6, wxT("Fecha") );
	m_grillahist->SetColLabelValue( 7, wxT("DNI") );
	m_grillahist->SetColLabelValue( 8, wxT("N° venta") );
	m_grillahist->SetColLabelAlignment( wxALIGN_CENTER, wxALIGN_CENTER );

	// Rows
	m_grillahist->EnableDragRowSize( true );
	m_grillahist->SetRowLabelAlignment( wxALIGN_CENTER, wxALIGN_CENTER );

	// Label Appearance

	// Cell Defaults
	m_grillahist->SetDefaultCellAlignment( wxALIGN_LEFT, wxALIGN_TOP );
	bSizer21->Add( m_grillahist, 1, wxALL|wxEXPAND, 5 );


	bSizer12->Add( bSizer21, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer22;
	bSizer22 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText28 = new wxStaticText( this, wxID_ANY, wxT("Total"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText28->Wrap( -1 );
	bSizer22->Add( m_staticText28, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_totalsumado = new wxTextCtrl( this, wxID_ANY, wxT("0.00"), wxDefaultPosition, wxDefaultSize, wxTE_READONLY );
	m_totalsumado->Enable( false );

	bSizer22->Add( m_totalsumado, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer12->Add( bSizer22, 0, wxEXPAND, 5 );


	this->SetSizer( bSizer12 );
	this->Layout();

	this->Centre( wxBOTH );

	// Connect Events
	m_button13->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( VentanaHistorial2::ClickBuscarHistorial ), NULL, this );
}

VentanaHistorial2::~VentanaHistorial2()
{
	// Disconnect Events
	m_button13->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( VentanaHistorial2::ClickBuscarHistorial ), NULL, this );

}

VentanaAgregar::VentanaAgregar( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	wxBoxSizer* bSizer17;
	bSizer17 = new wxBoxSizer( wxVERTICAL );

	wxFlexGridSizer* fgSizer3;
	fgSizer3 = new wxFlexGridSizer( 3, 2, 0, 0 );
	fgSizer3->AddGrowableCol( 1 );
	fgSizer3->SetFlexibleDirection( wxBOTH );
	fgSizer3->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText12 = new wxStaticText( this, wxID_ANY, wxT("Descripción:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText12->Wrap( -1 );
	fgSizer3->Add( m_staticText12, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );

	m_Descr = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer3->Add( m_Descr, 1, wxALL|wxEXPAND, 5 );

	m_staticText13 = new wxStaticText( this, wxID_ANY, wxT("Código:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText13->Wrap( -1 );
	fgSizer3->Add( m_staticText13, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );

	m_Cod = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer3->Add( m_Cod, 0, wxALL|wxEXPAND, 5 );


	bSizer17->Add( fgSizer3, 0, wxEXPAND, 5 );

	wxFlexGridSizer* fgSizer5;
	fgSizer5 = new wxFlexGridSizer( 5, 6, 0, 0 );
	fgSizer5->SetFlexibleDirection( wxBOTH );
	fgSizer5->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText15 = new wxStaticText( this, wxID_ANY, wxT("Talle:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText15->Wrap( -1 );
	fgSizer5->Add( m_staticText15, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );

	wxBoxSizer* bSizer7;
	bSizer7 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText181 = new wxStaticText( this, wxID_ANY, wxT("S"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText181->Wrap( -1 );
	m_staticText181->SetFont( wxFont( 9, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("Arial") ) );
	m_staticText181->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_INACTIVECAPTIONTEXT ) );

	bSizer7->Add( m_staticText181, 0, wxALL, 5 );

	CheckS = new wxCheckBox( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	CheckS->SetValue(true);
	bSizer7->Add( CheckS, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	fgSizer5->Add( bSizer7, 1, wxALIGN_CENTER_HORIZONTAL, 5 );

	wxBoxSizer* bSizer10;
	bSizer10 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText191 = new wxStaticText( this, wxID_ANY, wxT("M"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText191->Wrap( -1 );
	m_staticText191->SetFont( wxFont( 9, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("Arial") ) );

	bSizer10->Add( m_staticText191, 0, wxALL, 5 );

	CheckM = new wxCheckBox( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	CheckM->SetValue(true);
	bSizer10->Add( CheckM, 0, wxALL, 5 );


	fgSizer5->Add( bSizer10, 1, wxALIGN_CENTER_HORIZONTAL, 5 );

	wxBoxSizer* bSizer12;
	bSizer12 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText20 = new wxStaticText( this, wxID_ANY, wxT("L"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText20->Wrap( -1 );
	m_staticText20->SetFont( wxFont( 9, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("Arial") ) );

	bSizer12->Add( m_staticText20, 0, wxALL, 5 );

	CheckL = new wxCheckBox( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	CheckL->SetValue(true);
	bSizer12->Add( CheckL, 0, wxALL, 5 );


	fgSizer5->Add( bSizer12, 1, wxALIGN_CENTER_HORIZONTAL, 5 );

	wxBoxSizer* bSizer14;
	bSizer14 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText21 = new wxStaticText( this, wxID_ANY, wxT("XL"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText21->Wrap( -1 );
	m_staticText21->SetFont( wxFont( 9, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("Arial") ) );

	bSizer14->Add( m_staticText21, 0, wxALL, 5 );

	CheckXL = new wxCheckBox( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	CheckXL->SetValue(true);
	bSizer14->Add( CheckXL, 0, wxALL, 5 );


	fgSizer5->Add( bSizer14, 1, wxALIGN_CENTER_HORIZONTAL, 5 );

	wxBoxSizer* bSizer16;
	bSizer16 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText23 = new wxStaticText( this, wxID_ANY, wxT("XXL"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText23->Wrap( -1 );
	m_staticText23->SetFont( wxFont( 9, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("Arial") ) );

	bSizer16->Add( m_staticText23, 0, wxALL, 5 );

	CheckXXL = new wxCheckBox( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	CheckXXL->SetValue(true);
	bSizer16->Add( CheckXXL, 0, wxALL, 5 );


	fgSizer5->Add( bSizer16, 1, wxALIGN_CENTER_HORIZONTAL, 5 );

	m_staticText24 = new wxStaticText( this, wxID_ANY, wxT("Cantidad:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText24->Wrap( -1 );
	fgSizer5->Add( m_staticText24, 0, wxALL, 5 );

	m_CantS = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer5->Add( m_CantS, 0, wxALL, 5 );

	m_CantM = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer5->Add( m_CantM, 0, wxALL, 5 );

	m_CantL = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer5->Add( m_CantL, 0, wxALL, 5 );

	m_CantXL = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer5->Add( m_CantXL, 0, wxALL, 5 );

	m_CantXXL = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer5->Add( m_CantXXL, 0, wxALL, 5 );

	m_staticText17 = new wxStaticText( this, wxID_ANY, wxT("Pre. venta:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText17->Wrap( -1 );
	fgSizer5->Add( m_staticText17, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );

	m_PreVenS = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer5->Add( m_PreVenS, 0, wxALL, 5 );

	m_PreVenM = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer5->Add( m_PreVenM, 0, wxALL, 5 );

	m_PreVenL = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer5->Add( m_PreVenL, 0, wxALL, 5 );

	m_PreVenXL = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer5->Add( m_PreVenXL, 0, wxALL, 5 );

	m_PreVenXXL = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer5->Add( m_PreVenXXL, 0, wxALL|wxEXPAND, 5 );

	m_staticText18 = new wxStaticText( this, wxID_ANY, wxT("Costo:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText18->Wrap( -1 );
	fgSizer5->Add( m_staticText18, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );

	m_PreCosS = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer5->Add( m_PreCosS, 0, wxALL, 5 );

	m_PreCosM = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer5->Add( m_PreCosM, 0, wxALL, 5 );

	m_PreCosL = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer5->Add( m_PreCosL, 0, wxALL, 5 );

	m_PreCosXL = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer5->Add( m_PreCosXL, 0, wxALL, 5 );

	m_PreCosXXL = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer5->Add( m_PreCosXXL, 0, wxALL|wxEXPAND, 5 );

	m_staticText19 = new wxStaticText( this, wxID_ANY, wxT("Descuento:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText19->Wrap( -1 );
	fgSizer5->Add( m_staticText19, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );

	m_DescuS = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer5->Add( m_DescuS, 1, wxALL|wxEXPAND, 5 );

	m_DescuM = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer5->Add( m_DescuM, 0, wxALL, 5 );

	m_DescuL = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer5->Add( m_DescuL, 0, wxALL, 5 );

	m_DescuXL = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer5->Add( m_DescuXL, 0, wxALL, 5 );

	m_DescuXXL = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer5->Add( m_DescuXXL, 0, wxALL, 5 );


	bSizer17->Add( fgSizer5, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer18;
	bSizer18 = new wxBoxSizer( wxHORIZONTAL );


	bSizer18->Add( 0, 0, 1, wxEXPAND, 5 );

	BotonAceptar = new wxButton( this, wxID_ANY, wxT("Agregar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer18->Add( BotonAceptar, 0, wxALL, 5 );

	BotonCancelar = new wxButton( this, wxID_ANY, wxT("Cancelar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer18->Add( BotonCancelar, 0, wxALL, 5 );


	bSizer17->Add( bSizer18, 0, wxEXPAND, 5 );


	this->SetSizer( bSizer17 );
	this->Layout();

	this->Centre( wxBOTH );

	// Connect Events
	CheckS->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( VentanaAgregar::MarcarS ), NULL, this );
	CheckM->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( VentanaAgregar::MarcarM ), NULL, this );
	CheckL->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( VentanaAgregar::MarcarL ), NULL, this );
	CheckXL->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( VentanaAgregar::MarcarXL ), NULL, this );
	CheckXXL->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( VentanaAgregar::MarcarXXL ), NULL, this );
	BotonAceptar->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( VentanaAgregar::ClickBotonAceptar ), NULL, this );
	BotonCancelar->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( VentanaAgregar::ClickBotonCancelar ), NULL, this );
}

VentanaAgregar::~VentanaAgregar()
{
	// Disconnect Events
	CheckS->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( VentanaAgregar::MarcarS ), NULL, this );
	CheckM->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( VentanaAgregar::MarcarM ), NULL, this );
	CheckL->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( VentanaAgregar::MarcarL ), NULL, this );
	CheckXL->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( VentanaAgregar::MarcarXL ), NULL, this );
	CheckXXL->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( VentanaAgregar::MarcarXXL ), NULL, this );
	BotonAceptar->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( VentanaAgregar::ClickBotonAceptar ), NULL, this );
	BotonCancelar->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( VentanaAgregar::ClickBotonCancelar ), NULL, this );

}
