#pragma once

namespace MatrixMatch {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  lbMatrix1;
	private: System::Windows::Forms::Label^  lbMatrix2;
	protected:

	protected:

	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::TextBox^  txtAx;
	private: System::Windows::Forms::TextBox^  txtBx;






















































	private: System::Windows::Forms::TextBox^  txtB00;
	private: System::Windows::Forms::TextBox^  txtB01;
	private: System::Windows::Forms::TextBox^  txtB02;
	private: System::Windows::Forms::TextBox^  txtB03;
	private: System::Windows::Forms::TextBox^  txtB04;
	private: System::Windows::Forms::TextBox^  txtB10;
	private: System::Windows::Forms::TextBox^  txtB11;
	private: System::Windows::Forms::TextBox^  txtB12;
	private: System::Windows::Forms::TextBox^  txtB13;
	private: System::Windows::Forms::TextBox^  txtB14;
	private: System::Windows::Forms::TextBox^  txtB20;
	private: System::Windows::Forms::TextBox^  txtB21;
	private: System::Windows::Forms::TextBox^  txtB22;
	private: System::Windows::Forms::TextBox^  txtB23;
	private: System::Windows::Forms::TextBox^  txtB24;
	private: System::Windows::Forms::TextBox^  txtB30;
private: System::Windows::Forms::TextBox^  txtB31;
private: System::Windows::Forms::TextBox^  txtB32;
private: System::Windows::Forms::TextBox^  txtB33;
private: System::Windows::Forms::TextBox^  txtB34;
private: System::Windows::Forms::TextBox^  txtB40;
private: System::Windows::Forms::TextBox^  txtB41;
private: System::Windows::Forms::TextBox^  txtB42;
private: System::Windows::Forms::TextBox^  txtB43;
private: System::Windows::Forms::TextBox^  txtB44;


































private: System::Windows::Forms::TextBox^  txtR00;
private: System::Windows::Forms::TextBox^  txtR01;
private: System::Windows::Forms::TextBox^  txtR02;
private: System::Windows::Forms::TextBox^  txtR03;
private: System::Windows::Forms::TextBox^  txtR04;
private: System::Windows::Forms::TextBox^  txtR10;
private: System::Windows::Forms::TextBox^  txtR11;
private: System::Windows::Forms::TextBox^  txtR12;
private: System::Windows::Forms::TextBox^  txtR13;
private: System::Windows::Forms::TextBox^  txtR14;















private: System::Windows::Forms::TextBox^  txtR20;
private: System::Windows::Forms::TextBox^  txtR21;
private: System::Windows::Forms::TextBox^  txtR22;
private: System::Windows::Forms::TextBox^  txtR23;
private: System::Windows::Forms::TextBox^  txtR24;





private: System::Windows::Forms::TextBox^  txtR30;
private: System::Windows::Forms::TextBox^  txtR31;
private: System::Windows::Forms::TextBox^  txtR32;
private: System::Windows::Forms::TextBox^  txtR33;
private: System::Windows::Forms::TextBox^  txtR34;





private: System::Windows::Forms::TextBox^  txtR40;
private: System::Windows::Forms::TextBox^  txtR41;
private: System::Windows::Forms::TextBox^  txtR42;
private: System::Windows::Forms::TextBox^  txtR43;
private: System::Windows::Forms::TextBox^  txtR44;






private: System::Windows::Forms::Button^  btnCong;
private: System::Windows::Forms::Button^  btnNhan;


private: System::Windows::Forms::Button^  btnTru;
private: System::Windows::Forms::Button^  btnChia;


private: System::Windows::Forms::TextBox^  txtBy;

private: System::Windows::Forms::TextBox^  txtAy;

private: System::Windows::Forms::Button^  btnNhap;
private: System::Windows::Forms::Label^  lbError;
private: System::Windows::Forms::TextBox^  txtA00;
private: System::Windows::Forms::TextBox^  txtA01;
private: System::Windows::Forms::TextBox^  txtA02;
private: System::Windows::Forms::TextBox^  txtA03;
private: System::Windows::Forms::TextBox^  txtA04;
private: System::Windows::Forms::TextBox^  txtA10;
private: System::Windows::Forms::TextBox^  txtA11;
private: System::Windows::Forms::TextBox^  txtA12;
private: System::Windows::Forms::TextBox^  txtA13;
private: System::Windows::Forms::TextBox^  txtA14;
private: System::Windows::Forms::TextBox^  txtA20;
private: System::Windows::Forms::TextBox^  txtA21;
private: System::Windows::Forms::TextBox^  txtA22;
private: System::Windows::Forms::TextBox^  txtA23;
private: System::Windows::Forms::TextBox^  txtA24;
private: System::Windows::Forms::TextBox^  txtA30;
private: System::Windows::Forms::TextBox^  txtA31;
private: System::Windows::Forms::TextBox^  txtA32;
private: System::Windows::Forms::TextBox^  txtA33;
private: System::Windows::Forms::TextBox^  txtA34;
private: System::Windows::Forms::TextBox^  txtA40;
private: System::Windows::Forms::TextBox^  txtA41;
private: System::Windows::Forms::TextBox^  txtA42;
private: System::Windows::Forms::TextBox^  txtA43;
private: System::Windows::Forms::TextBox^  txtA44;
private: System::Windows::Forms::GroupBox^  grbResult;
private: System::Windows::Forms::GroupBox^  grbMatrixA;
private: System::Windows::Forms::GroupBox^  grbMatrixB;
private: System::Windows::Forms::Label^  lblErrorAx;
private: System::Windows::Forms::Label^  lblErrorBx;
private: System::Windows::Forms::Label^  lblErrorBy;
private: System::Windows::Forms::Label^  lblErrorAy;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->lbMatrix1 = (gcnew System::Windows::Forms::Label());
			this->lbMatrix2 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->txtAx = (gcnew System::Windows::Forms::TextBox());
			this->txtBx = (gcnew System::Windows::Forms::TextBox());
			this->txtB00 = (gcnew System::Windows::Forms::TextBox());
			this->txtB01 = (gcnew System::Windows::Forms::TextBox());
			this->txtB02 = (gcnew System::Windows::Forms::TextBox());
			this->txtB03 = (gcnew System::Windows::Forms::TextBox());
			this->txtB04 = (gcnew System::Windows::Forms::TextBox());
			this->txtB10 = (gcnew System::Windows::Forms::TextBox());
			this->txtB11 = (gcnew System::Windows::Forms::TextBox());
			this->txtB12 = (gcnew System::Windows::Forms::TextBox());
			this->txtB13 = (gcnew System::Windows::Forms::TextBox());
			this->txtB14 = (gcnew System::Windows::Forms::TextBox());
			this->txtB20 = (gcnew System::Windows::Forms::TextBox());
			this->txtB21 = (gcnew System::Windows::Forms::TextBox());
			this->txtB22 = (gcnew System::Windows::Forms::TextBox());
			this->txtB23 = (gcnew System::Windows::Forms::TextBox());
			this->txtB24 = (gcnew System::Windows::Forms::TextBox());
			this->txtB30 = (gcnew System::Windows::Forms::TextBox());
			this->txtB31 = (gcnew System::Windows::Forms::TextBox());
			this->txtB32 = (gcnew System::Windows::Forms::TextBox());
			this->txtB33 = (gcnew System::Windows::Forms::TextBox());
			this->txtB34 = (gcnew System::Windows::Forms::TextBox());
			this->txtB40 = (gcnew System::Windows::Forms::TextBox());
			this->txtB41 = (gcnew System::Windows::Forms::TextBox());
			this->txtB42 = (gcnew System::Windows::Forms::TextBox());
			this->txtB43 = (gcnew System::Windows::Forms::TextBox());
			this->txtB44 = (gcnew System::Windows::Forms::TextBox());
			this->txtR00 = (gcnew System::Windows::Forms::TextBox());
			this->txtR01 = (gcnew System::Windows::Forms::TextBox());
			this->txtR02 = (gcnew System::Windows::Forms::TextBox());
			this->txtR03 = (gcnew System::Windows::Forms::TextBox());
			this->txtR04 = (gcnew System::Windows::Forms::TextBox());
			this->txtR10 = (gcnew System::Windows::Forms::TextBox());
			this->txtR11 = (gcnew System::Windows::Forms::TextBox());
			this->txtR12 = (gcnew System::Windows::Forms::TextBox());
			this->txtR13 = (gcnew System::Windows::Forms::TextBox());
			this->txtR14 = (gcnew System::Windows::Forms::TextBox());
			this->txtR20 = (gcnew System::Windows::Forms::TextBox());
			this->txtR21 = (gcnew System::Windows::Forms::TextBox());
			this->txtR22 = (gcnew System::Windows::Forms::TextBox());
			this->txtR23 = (gcnew System::Windows::Forms::TextBox());
			this->txtR24 = (gcnew System::Windows::Forms::TextBox());
			this->txtR30 = (gcnew System::Windows::Forms::TextBox());
			this->txtR31 = (gcnew System::Windows::Forms::TextBox());
			this->txtR32 = (gcnew System::Windows::Forms::TextBox());
			this->txtR33 = (gcnew System::Windows::Forms::TextBox());
			this->txtR34 = (gcnew System::Windows::Forms::TextBox());
			this->txtR40 = (gcnew System::Windows::Forms::TextBox());
			this->txtR41 = (gcnew System::Windows::Forms::TextBox());
			this->txtR42 = (gcnew System::Windows::Forms::TextBox());
			this->txtR43 = (gcnew System::Windows::Forms::TextBox());
			this->txtR44 = (gcnew System::Windows::Forms::TextBox());
			this->btnCong = (gcnew System::Windows::Forms::Button());
			this->btnNhan = (gcnew System::Windows::Forms::Button());
			this->btnTru = (gcnew System::Windows::Forms::Button());
			this->btnChia = (gcnew System::Windows::Forms::Button());
			this->txtBy = (gcnew System::Windows::Forms::TextBox());
			this->txtAy = (gcnew System::Windows::Forms::TextBox());
			this->btnNhap = (gcnew System::Windows::Forms::Button());
			this->lbError = (gcnew System::Windows::Forms::Label());
			this->txtA00 = (gcnew System::Windows::Forms::TextBox());
			this->txtA01 = (gcnew System::Windows::Forms::TextBox());
			this->txtA02 = (gcnew System::Windows::Forms::TextBox());
			this->txtA03 = (gcnew System::Windows::Forms::TextBox());
			this->txtA04 = (gcnew System::Windows::Forms::TextBox());
			this->txtA10 = (gcnew System::Windows::Forms::TextBox());
			this->txtA11 = (gcnew System::Windows::Forms::TextBox());
			this->txtA12 = (gcnew System::Windows::Forms::TextBox());
			this->txtA13 = (gcnew System::Windows::Forms::TextBox());
			this->txtA14 = (gcnew System::Windows::Forms::TextBox());
			this->txtA20 = (gcnew System::Windows::Forms::TextBox());
			this->txtA21 = (gcnew System::Windows::Forms::TextBox());
			this->txtA22 = (gcnew System::Windows::Forms::TextBox());
			this->txtA23 = (gcnew System::Windows::Forms::TextBox());
			this->txtA24 = (gcnew System::Windows::Forms::TextBox());
			this->txtA30 = (gcnew System::Windows::Forms::TextBox());
			this->txtA31 = (gcnew System::Windows::Forms::TextBox());
			this->txtA32 = (gcnew System::Windows::Forms::TextBox());
			this->txtA33 = (gcnew System::Windows::Forms::TextBox());
			this->txtA34 = (gcnew System::Windows::Forms::TextBox());
			this->txtA40 = (gcnew System::Windows::Forms::TextBox());
			this->txtA41 = (gcnew System::Windows::Forms::TextBox());
			this->txtA42 = (gcnew System::Windows::Forms::TextBox());
			this->txtA43 = (gcnew System::Windows::Forms::TextBox());
			this->txtA44 = (gcnew System::Windows::Forms::TextBox());
			this->grbResult = (gcnew System::Windows::Forms::GroupBox());
			this->grbMatrixA = (gcnew System::Windows::Forms::GroupBox());
			this->grbMatrixB = (gcnew System::Windows::Forms::GroupBox());
			this->lblErrorAx = (gcnew System::Windows::Forms::Label());
			this->lblErrorBx = (gcnew System::Windows::Forms::Label());
			this->lblErrorBy = (gcnew System::Windows::Forms::Label());
			this->lblErrorAy = (gcnew System::Windows::Forms::Label());
			this->grbResult->SuspendLayout();
			this->grbMatrixA->SuspendLayout();
			this->grbMatrixB->SuspendLayout();
			this->SuspendLayout();
			// 
			// lbMatrix1
			// 
			this->lbMatrix1->AutoSize = true;
			this->lbMatrix1->Location = System::Drawing::Point(26, 24);
			this->lbMatrix1->Name = L"lbMatrix1";
			this->lbMatrix1->Size = System::Drawing::Size(104, 19);
			this->lbMatrix1->TabIndex = 0;
			this->lbMatrix1->Text = L"Matrix A (1~5):";
			// 
			// lbMatrix2
			// 
			this->lbMatrix2->AutoSize = true;
			this->lbMatrix2->Location = System::Drawing::Point(26, 67);
			this->lbMatrix2->Name = L"lbMatrix2";
			this->lbMatrix2->Size = System::Drawing::Size(105, 19);
			this->lbMatrix2->TabIndex = 0;
			this->lbMatrix2->Text = L"Matrix B (1~5):";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(258, 28);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(16, 19);
			this->label5->TabIndex = 0;
			this->label5->Text = L"x";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(258, 71);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(16, 19);
			this->label6->TabIndex = 0;
			this->label6->Text = L"x";
			// 
			// txtAx
			// 
			this->txtAx->Location = System::Drawing::Point(154, 25);
			this->txtAx->Name = L"txtAx";
			this->txtAx->Size = System::Drawing::Size(80, 26);
			this->txtAx->TabIndex = 1;
			// 
			// txtBx
			// 
			this->txtBx->Location = System::Drawing::Point(154, 64);
			this->txtBx->Name = L"txtBx";
			this->txtBx->Size = System::Drawing::Size(80, 26);
			this->txtBx->TabIndex = 1;
			// 
			// txtB00
			// 
			this->txtB00->Location = System::Drawing::Point(26, 36);
			this->txtB00->Name = L"txtB00";
			this->txtB00->Size = System::Drawing::Size(41, 26);
			this->txtB00->TabIndex = 1;
			// 
			// txtB01
			// 
			this->txtB01->Location = System::Drawing::Point(73, 36);
			this->txtB01->Name = L"txtB01";
			this->txtB01->Size = System::Drawing::Size(41, 26);
			this->txtB01->TabIndex = 1;
			// 
			// txtB02
			// 
			this->txtB02->Location = System::Drawing::Point(120, 36);
			this->txtB02->Name = L"txtB02";
			this->txtB02->Size = System::Drawing::Size(41, 26);
			this->txtB02->TabIndex = 1;
			// 
			// txtB03
			// 
			this->txtB03->Location = System::Drawing::Point(167, 36);
			this->txtB03->Name = L"txtB03";
			this->txtB03->Size = System::Drawing::Size(41, 26);
			this->txtB03->TabIndex = 1;
			// 
			// txtB04
			// 
			this->txtB04->Location = System::Drawing::Point(214, 36);
			this->txtB04->Name = L"txtB04";
			this->txtB04->Size = System::Drawing::Size(41, 26);
			this->txtB04->TabIndex = 1;
			// 
			// txtB10
			// 
			this->txtB10->Location = System::Drawing::Point(26, 68);
			this->txtB10->Name = L"txtB10";
			this->txtB10->Size = System::Drawing::Size(41, 26);
			this->txtB10->TabIndex = 1;
			// 
			// txtB11
			// 
			this->txtB11->Location = System::Drawing::Point(73, 68);
			this->txtB11->Name = L"txtB11";
			this->txtB11->Size = System::Drawing::Size(41, 26);
			this->txtB11->TabIndex = 1;
			// 
			// txtB12
			// 
			this->txtB12->Location = System::Drawing::Point(120, 68);
			this->txtB12->Name = L"txtB12";
			this->txtB12->Size = System::Drawing::Size(41, 26);
			this->txtB12->TabIndex = 1;
			// 
			// txtB13
			// 
			this->txtB13->Location = System::Drawing::Point(167, 68);
			this->txtB13->Name = L"txtB13";
			this->txtB13->Size = System::Drawing::Size(41, 26);
			this->txtB13->TabIndex = 1;
			// 
			// txtB14
			// 
			this->txtB14->Location = System::Drawing::Point(214, 68);
			this->txtB14->Name = L"txtB14";
			this->txtB14->Size = System::Drawing::Size(41, 26);
			this->txtB14->TabIndex = 1;
			// 
			// txtB20
			// 
			this->txtB20->Location = System::Drawing::Point(26, 100);
			this->txtB20->Name = L"txtB20";
			this->txtB20->Size = System::Drawing::Size(41, 26);
			this->txtB20->TabIndex = 1;
			// 
			// txtB21
			// 
			this->txtB21->Location = System::Drawing::Point(73, 100);
			this->txtB21->Name = L"txtB21";
			this->txtB21->Size = System::Drawing::Size(41, 26);
			this->txtB21->TabIndex = 1;
			// 
			// txtB22
			// 
			this->txtB22->Location = System::Drawing::Point(120, 100);
			this->txtB22->Name = L"txtB22";
			this->txtB22->Size = System::Drawing::Size(41, 26);
			this->txtB22->TabIndex = 1;
			// 
			// txtB23
			// 
			this->txtB23->Location = System::Drawing::Point(167, 100);
			this->txtB23->Name = L"txtB23";
			this->txtB23->Size = System::Drawing::Size(41, 26);
			this->txtB23->TabIndex = 1;
			// 
			// txtB24
			// 
			this->txtB24->Location = System::Drawing::Point(214, 100);
			this->txtB24->Name = L"txtB24";
			this->txtB24->Size = System::Drawing::Size(41, 26);
			this->txtB24->TabIndex = 1;
			// 
			// txtB30
			// 
			this->txtB30->Location = System::Drawing::Point(26, 132);
			this->txtB30->Name = L"txtB30";
			this->txtB30->Size = System::Drawing::Size(41, 26);
			this->txtB30->TabIndex = 1;
			// 
			// txtB31
			// 
			this->txtB31->Location = System::Drawing::Point(73, 132);
			this->txtB31->Name = L"txtB31";
			this->txtB31->Size = System::Drawing::Size(41, 26);
			this->txtB31->TabIndex = 1;
			// 
			// txtB32
			// 
			this->txtB32->Location = System::Drawing::Point(120, 132);
			this->txtB32->Name = L"txtB32";
			this->txtB32->Size = System::Drawing::Size(41, 26);
			this->txtB32->TabIndex = 1;
			// 
			// txtB33
			// 
			this->txtB33->Location = System::Drawing::Point(167, 132);
			this->txtB33->Name = L"txtB33";
			this->txtB33->Size = System::Drawing::Size(41, 26);
			this->txtB33->TabIndex = 1;
			// 
			// txtB34
			// 
			this->txtB34->Location = System::Drawing::Point(214, 132);
			this->txtB34->Name = L"txtB34";
			this->txtB34->Size = System::Drawing::Size(41, 26);
			this->txtB34->TabIndex = 1;
			// 
			// txtB40
			// 
			this->txtB40->Location = System::Drawing::Point(26, 164);
			this->txtB40->Name = L"txtB40";
			this->txtB40->Size = System::Drawing::Size(41, 26);
			this->txtB40->TabIndex = 1;
			// 
			// txtB41
			// 
			this->txtB41->Location = System::Drawing::Point(73, 164);
			this->txtB41->Name = L"txtB41";
			this->txtB41->Size = System::Drawing::Size(41, 26);
			this->txtB41->TabIndex = 1;
			// 
			// txtB42
			// 
			this->txtB42->Location = System::Drawing::Point(120, 164);
			this->txtB42->Name = L"txtB42";
			this->txtB42->Size = System::Drawing::Size(41, 26);
			this->txtB42->TabIndex = 1;
			// 
			// txtB43
			// 
			this->txtB43->Location = System::Drawing::Point(167, 164);
			this->txtB43->Name = L"txtB43";
			this->txtB43->Size = System::Drawing::Size(41, 26);
			this->txtB43->TabIndex = 1;
			// 
			// txtB44
			// 
			this->txtB44->Location = System::Drawing::Point(214, 164);
			this->txtB44->Name = L"txtB44";
			this->txtB44->Size = System::Drawing::Size(41, 26);
			this->txtB44->TabIndex = 1;
			// 
			// txtR00
			// 
			this->txtR00->Location = System::Drawing::Point(163, 39);
			this->txtR00->Name = L"txtR00";
			this->txtR00->Size = System::Drawing::Size(41, 26);
			this->txtR00->TabIndex = 1;
			// 
			// txtR01
			// 
			this->txtR01->Location = System::Drawing::Point(210, 39);
			this->txtR01->Name = L"txtR01";
			this->txtR01->Size = System::Drawing::Size(41, 26);
			this->txtR01->TabIndex = 1;
			// 
			// txtR02
			// 
			this->txtR02->Location = System::Drawing::Point(257, 39);
			this->txtR02->Name = L"txtR02";
			this->txtR02->Size = System::Drawing::Size(41, 26);
			this->txtR02->TabIndex = 1;
			// 
			// txtR03
			// 
			this->txtR03->Location = System::Drawing::Point(304, 39);
			this->txtR03->Name = L"txtR03";
			this->txtR03->Size = System::Drawing::Size(41, 26);
			this->txtR03->TabIndex = 1;
			// 
			// txtR04
			// 
			this->txtR04->Location = System::Drawing::Point(351, 39);
			this->txtR04->Name = L"txtR04";
			this->txtR04->Size = System::Drawing::Size(41, 26);
			this->txtR04->TabIndex = 1;
			// 
			// txtR10
			// 
			this->txtR10->Location = System::Drawing::Point(163, 71);
			this->txtR10->Name = L"txtR10";
			this->txtR10->Size = System::Drawing::Size(41, 26);
			this->txtR10->TabIndex = 1;
			// 
			// txtR11
			// 
			this->txtR11->Location = System::Drawing::Point(210, 71);
			this->txtR11->Name = L"txtR11";
			this->txtR11->Size = System::Drawing::Size(41, 26);
			this->txtR11->TabIndex = 1;
			// 
			// txtR12
			// 
			this->txtR12->Location = System::Drawing::Point(257, 71);
			this->txtR12->Name = L"txtR12";
			this->txtR12->Size = System::Drawing::Size(41, 26);
			this->txtR12->TabIndex = 1;
			// 
			// txtR13
			// 
			this->txtR13->Location = System::Drawing::Point(304, 71);
			this->txtR13->Name = L"txtR13";
			this->txtR13->Size = System::Drawing::Size(41, 26);
			this->txtR13->TabIndex = 1;
			// 
			// txtR14
			// 
			this->txtR14->Location = System::Drawing::Point(351, 71);
			this->txtR14->Name = L"txtR14";
			this->txtR14->Size = System::Drawing::Size(41, 26);
			this->txtR14->TabIndex = 1;
			// 
			// txtR20
			// 
			this->txtR20->Location = System::Drawing::Point(163, 103);
			this->txtR20->Name = L"txtR20";
			this->txtR20->Size = System::Drawing::Size(41, 26);
			this->txtR20->TabIndex = 1;
			// 
			// txtR21
			// 
			this->txtR21->Location = System::Drawing::Point(210, 103);
			this->txtR21->Name = L"txtR21";
			this->txtR21->Size = System::Drawing::Size(41, 26);
			this->txtR21->TabIndex = 1;
			// 
			// txtR22
			// 
			this->txtR22->Location = System::Drawing::Point(257, 103);
			this->txtR22->Name = L"txtR22";
			this->txtR22->Size = System::Drawing::Size(41, 26);
			this->txtR22->TabIndex = 1;
			// 
			// txtR23
			// 
			this->txtR23->Location = System::Drawing::Point(304, 103);
			this->txtR23->Name = L"txtR23";
			this->txtR23->Size = System::Drawing::Size(41, 26);
			this->txtR23->TabIndex = 1;
			// 
			// txtR24
			// 
			this->txtR24->Location = System::Drawing::Point(351, 103);
			this->txtR24->Name = L"txtR24";
			this->txtR24->Size = System::Drawing::Size(41, 26);
			this->txtR24->TabIndex = 1;
			// 
			// txtR30
			// 
			this->txtR30->Location = System::Drawing::Point(163, 135);
			this->txtR30->Name = L"txtR30";
			this->txtR30->Size = System::Drawing::Size(41, 26);
			this->txtR30->TabIndex = 1;
			// 
			// txtR31
			// 
			this->txtR31->Location = System::Drawing::Point(210, 135);
			this->txtR31->Name = L"txtR31";
			this->txtR31->Size = System::Drawing::Size(41, 26);
			this->txtR31->TabIndex = 1;
			// 
			// txtR32
			// 
			this->txtR32->Location = System::Drawing::Point(257, 135);
			this->txtR32->Name = L"txtR32";
			this->txtR32->Size = System::Drawing::Size(41, 26);
			this->txtR32->TabIndex = 1;
			// 
			// txtR33
			// 
			this->txtR33->Location = System::Drawing::Point(304, 135);
			this->txtR33->Name = L"txtR33";
			this->txtR33->Size = System::Drawing::Size(41, 26);
			this->txtR33->TabIndex = 1;
			// 
			// txtR34
			// 
			this->txtR34->Location = System::Drawing::Point(351, 135);
			this->txtR34->Name = L"txtR34";
			this->txtR34->Size = System::Drawing::Size(41, 26);
			this->txtR34->TabIndex = 1;
			// 
			// txtR40
			// 
			this->txtR40->Location = System::Drawing::Point(163, 167);
			this->txtR40->Name = L"txtR40";
			this->txtR40->Size = System::Drawing::Size(41, 26);
			this->txtR40->TabIndex = 1;
			// 
			// txtR41
			// 
			this->txtR41->Location = System::Drawing::Point(210, 167);
			this->txtR41->Name = L"txtR41";
			this->txtR41->Size = System::Drawing::Size(41, 26);
			this->txtR41->TabIndex = 1;
			// 
			// txtR42
			// 
			this->txtR42->Location = System::Drawing::Point(257, 167);
			this->txtR42->Name = L"txtR42";
			this->txtR42->Size = System::Drawing::Size(41, 26);
			this->txtR42->TabIndex = 1;
			// 
			// txtR43
			// 
			this->txtR43->Location = System::Drawing::Point(304, 167);
			this->txtR43->Name = L"txtR43";
			this->txtR43->Size = System::Drawing::Size(41, 26);
			this->txtR43->TabIndex = 1;
			// 
			// txtR44
			// 
			this->txtR44->Location = System::Drawing::Point(351, 167);
			this->txtR44->Name = L"txtR44";
			this->txtR44->Size = System::Drawing::Size(41, 26);
			this->txtR44->TabIndex = 1;
			// 
			// btnCong
			// 
			this->btnCong->Location = System::Drawing::Point(87, 376);
			this->btnCong->Name = L"btnCong";
			this->btnCong->Size = System::Drawing::Size(67, 29);
			this->btnCong->TabIndex = 2;
			this->btnCong->Text = L"Cộng";
			this->btnCong->UseVisualStyleBackColor = true;
			// 
			// btnNhan
			// 
			this->btnNhan->Location = System::Drawing::Point(337, 376);
			this->btnNhan->Name = L"btnNhan";
			this->btnNhan->Size = System::Drawing::Size(67, 29);
			this->btnNhan->TabIndex = 2;
			this->btnNhan->Text = L"Nhân";
			this->btnNhan->UseVisualStyleBackColor = true;
			// 
			// btnTru
			// 
			this->btnTru->Location = System::Drawing::Point(202, 376);
			this->btnTru->Name = L"btnTru";
			this->btnTru->Size = System::Drawing::Size(67, 29);
			this->btnTru->TabIndex = 2;
			this->btnTru->Text = L"Trừ";
			this->btnTru->UseVisualStyleBackColor = true;
			// 
			// btnChia
			// 
			this->btnChia->Location = System::Drawing::Point(452, 376);
			this->btnChia->Name = L"btnChia";
			this->btnChia->Size = System::Drawing::Size(67, 29);
			this->btnChia->TabIndex = 2;
			this->btnChia->Text = L"Chia";
			this->btnChia->UseVisualStyleBackColor = true;
			// 
			// txtBy
			// 
			this->txtBy->Location = System::Drawing::Point(302, 64);
			this->txtBy->Name = L"txtBy";
			this->txtBy->Size = System::Drawing::Size(80, 26);
			this->txtBy->TabIndex = 3;
			// 
			// txtAy
			// 
			this->txtAy->Location = System::Drawing::Point(302, 25);
			this->txtAy->Name = L"txtAy";
			this->txtAy->Size = System::Drawing::Size(80, 26);
			this->txtAy->TabIndex = 4;
			// 
			// btnNhap
			// 
			this->btnNhap->Location = System::Drawing::Point(452, 40);
			this->btnNhap->Name = L"btnNhap";
			this->btnNhap->Size = System::Drawing::Size(67, 29);
			this->btnNhap->TabIndex = 2;
			this->btnNhap->Text = L"Nhập";
			this->btnNhap->UseVisualStyleBackColor = true;
			// 
			// lbError
			// 
			this->lbError->AutoSize = true;
			this->lbError->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbError->ForeColor = System::Drawing::Color::Red;
			this->lbError->Location = System::Drawing::Point(27, 101);
			this->lbError->Name = L"lbError";
			this->lbError->Size = System::Drawing::Size(34, 15);
			this->lbError->TabIndex = 5;
			this->lbError->Text = L"* Lỗi";
			// 
			// txtA00
			// 
			this->txtA00->Location = System::Drawing::Point(28, 37);
			this->txtA00->Name = L"txtA00";
			this->txtA00->Size = System::Drawing::Size(41, 26);
			this->txtA00->TabIndex = 1;
			// 
			// txtA01
			// 
			this->txtA01->Location = System::Drawing::Point(75, 37);
			this->txtA01->Name = L"txtA01";
			this->txtA01->Size = System::Drawing::Size(41, 26);
			this->txtA01->TabIndex = 1;
			// 
			// txtA02
			// 
			this->txtA02->Location = System::Drawing::Point(122, 37);
			this->txtA02->Name = L"txtA02";
			this->txtA02->Size = System::Drawing::Size(41, 26);
			this->txtA02->TabIndex = 1;
			// 
			// txtA03
			// 
			this->txtA03->Location = System::Drawing::Point(169, 37);
			this->txtA03->Name = L"txtA03";
			this->txtA03->Size = System::Drawing::Size(41, 26);
			this->txtA03->TabIndex = 1;
			// 
			// txtA04
			// 
			this->txtA04->Location = System::Drawing::Point(216, 37);
			this->txtA04->Name = L"txtA04";
			this->txtA04->Size = System::Drawing::Size(41, 26);
			this->txtA04->TabIndex = 1;
			// 
			// txtA10
			// 
			this->txtA10->Location = System::Drawing::Point(28, 69);
			this->txtA10->Name = L"txtA10";
			this->txtA10->Size = System::Drawing::Size(41, 26);
			this->txtA10->TabIndex = 1;
			// 
			// txtA11
			// 
			this->txtA11->Location = System::Drawing::Point(75, 69);
			this->txtA11->Name = L"txtA11";
			this->txtA11->Size = System::Drawing::Size(41, 26);
			this->txtA11->TabIndex = 1;
			// 
			// txtA12
			// 
			this->txtA12->Location = System::Drawing::Point(122, 69);
			this->txtA12->Name = L"txtA12";
			this->txtA12->Size = System::Drawing::Size(41, 26);
			this->txtA12->TabIndex = 1;
			// 
			// txtA13
			// 
			this->txtA13->Location = System::Drawing::Point(169, 69);
			this->txtA13->Name = L"txtA13";
			this->txtA13->Size = System::Drawing::Size(41, 26);
			this->txtA13->TabIndex = 1;
			// 
			// txtA14
			// 
			this->txtA14->Location = System::Drawing::Point(216, 69);
			this->txtA14->Name = L"txtA14";
			this->txtA14->Size = System::Drawing::Size(41, 26);
			this->txtA14->TabIndex = 1;
			// 
			// txtA20
			// 
			this->txtA20->Location = System::Drawing::Point(28, 101);
			this->txtA20->Name = L"txtA20";
			this->txtA20->Size = System::Drawing::Size(41, 26);
			this->txtA20->TabIndex = 1;
			// 
			// txtA21
			// 
			this->txtA21->Location = System::Drawing::Point(75, 101);
			this->txtA21->Name = L"txtA21";
			this->txtA21->Size = System::Drawing::Size(41, 26);
			this->txtA21->TabIndex = 1;
			// 
			// txtA22
			// 
			this->txtA22->Location = System::Drawing::Point(122, 101);
			this->txtA22->Name = L"txtA22";
			this->txtA22->Size = System::Drawing::Size(41, 26);
			this->txtA22->TabIndex = 1;
			// 
			// txtA23
			// 
			this->txtA23->Location = System::Drawing::Point(169, 101);
			this->txtA23->Name = L"txtA23";
			this->txtA23->Size = System::Drawing::Size(41, 26);
			this->txtA23->TabIndex = 1;
			// 
			// txtA24
			// 
			this->txtA24->Location = System::Drawing::Point(216, 101);
			this->txtA24->Name = L"txtA24";
			this->txtA24->Size = System::Drawing::Size(41, 26);
			this->txtA24->TabIndex = 1;
			// 
			// txtA30
			// 
			this->txtA30->Location = System::Drawing::Point(28, 133);
			this->txtA30->Name = L"txtA30";
			this->txtA30->Size = System::Drawing::Size(41, 26);
			this->txtA30->TabIndex = 1;
			// 
			// txtA31
			// 
			this->txtA31->Location = System::Drawing::Point(75, 133);
			this->txtA31->Name = L"txtA31";
			this->txtA31->Size = System::Drawing::Size(41, 26);
			this->txtA31->TabIndex = 1;
			// 
			// txtA32
			// 
			this->txtA32->Location = System::Drawing::Point(122, 133);
			this->txtA32->Name = L"txtA32";
			this->txtA32->Size = System::Drawing::Size(41, 26);
			this->txtA32->TabIndex = 1;
			// 
			// txtA33
			// 
			this->txtA33->Location = System::Drawing::Point(169, 133);
			this->txtA33->Name = L"txtA33";
			this->txtA33->Size = System::Drawing::Size(41, 26);
			this->txtA33->TabIndex = 1;
			// 
			// txtA34
			// 
			this->txtA34->Location = System::Drawing::Point(216, 133);
			this->txtA34->Name = L"txtA34";
			this->txtA34->Size = System::Drawing::Size(41, 26);
			this->txtA34->TabIndex = 1;
			// 
			// txtA40
			// 
			this->txtA40->Location = System::Drawing::Point(28, 165);
			this->txtA40->Name = L"txtA40";
			this->txtA40->Size = System::Drawing::Size(41, 26);
			this->txtA40->TabIndex = 1;
			// 
			// txtA41
			// 
			this->txtA41->Location = System::Drawing::Point(75, 165);
			this->txtA41->Name = L"txtA41";
			this->txtA41->Size = System::Drawing::Size(41, 26);
			this->txtA41->TabIndex = 1;
			// 
			// txtA42
			// 
			this->txtA42->Location = System::Drawing::Point(122, 165);
			this->txtA42->Name = L"txtA42";
			this->txtA42->Size = System::Drawing::Size(41, 26);
			this->txtA42->TabIndex = 1;
			// 
			// txtA43
			// 
			this->txtA43->Location = System::Drawing::Point(169, 165);
			this->txtA43->Name = L"txtA43";
			this->txtA43->Size = System::Drawing::Size(41, 26);
			this->txtA43->TabIndex = 1;
			// 
			// txtA44
			// 
			this->txtA44->Location = System::Drawing::Point(216, 165);
			this->txtA44->Name = L"txtA44";
			this->txtA44->Size = System::Drawing::Size(41, 26);
			this->txtA44->TabIndex = 1;
			// 
			// grbResult
			// 
			this->grbResult->Controls->Add(this->txtR44);
			this->grbResult->Controls->Add(this->txtR43);
			this->grbResult->Controls->Add(this->txtR42);
			this->grbResult->Controls->Add(this->txtR41);
			this->grbResult->Controls->Add(this->txtR40);
			this->grbResult->Controls->Add(this->txtR34);
			this->grbResult->Controls->Add(this->txtR33);
			this->grbResult->Controls->Add(this->txtR32);
			this->grbResult->Controls->Add(this->txtR31);
			this->grbResult->Controls->Add(this->txtR30);
			this->grbResult->Controls->Add(this->txtR24);
			this->grbResult->Controls->Add(this->txtR23);
			this->grbResult->Controls->Add(this->txtR22);
			this->grbResult->Controls->Add(this->txtR21);
			this->grbResult->Controls->Add(this->txtR20);
			this->grbResult->Controls->Add(this->txtR14);
			this->grbResult->Controls->Add(this->txtR13);
			this->grbResult->Controls->Add(this->txtR12);
			this->grbResult->Controls->Add(this->txtR11);
			this->grbResult->Controls->Add(this->txtR10);
			this->grbResult->Controls->Add(this->txtR04);
			this->grbResult->Controls->Add(this->txtR03);
			this->grbResult->Controls->Add(this->txtR02);
			this->grbResult->Controls->Add(this->txtR01);
			this->grbResult->Controls->Add(this->txtR00);
			this->grbResult->Location = System::Drawing::Point(12, 424);
			this->grbResult->Name = L"grbResult";
			this->grbResult->Size = System::Drawing::Size(577, 211);
			this->grbResult->TabIndex = 6;
			this->grbResult->TabStop = false;
			this->grbResult->Text = L"Kết quả:";
			// 
			// grbMatrixA
			// 
			this->grbMatrixA->Controls->Add(this->txtA44);
			this->grbMatrixA->Controls->Add(this->txtA43);
			this->grbMatrixA->Controls->Add(this->txtA42);
			this->grbMatrixA->Controls->Add(this->txtA41);
			this->grbMatrixA->Controls->Add(this->txtA40);
			this->grbMatrixA->Controls->Add(this->txtA34);
			this->grbMatrixA->Controls->Add(this->txtA33);
			this->grbMatrixA->Controls->Add(this->txtA32);
			this->grbMatrixA->Controls->Add(this->txtA31);
			this->grbMatrixA->Controls->Add(this->txtA30);
			this->grbMatrixA->Controls->Add(this->txtA24);
			this->grbMatrixA->Controls->Add(this->txtA23);
			this->grbMatrixA->Controls->Add(this->txtA22);
			this->grbMatrixA->Controls->Add(this->txtA21);
			this->grbMatrixA->Controls->Add(this->txtA20);
			this->grbMatrixA->Controls->Add(this->txtA14);
			this->grbMatrixA->Controls->Add(this->txtA13);
			this->grbMatrixA->Controls->Add(this->txtA12);
			this->grbMatrixA->Controls->Add(this->txtA11);
			this->grbMatrixA->Controls->Add(this->txtA10);
			this->grbMatrixA->Controls->Add(this->txtA04);
			this->grbMatrixA->Controls->Add(this->txtA03);
			this->grbMatrixA->Controls->Add(this->txtA02);
			this->grbMatrixA->Controls->Add(this->txtA01);
			this->grbMatrixA->Controls->Add(this->txtA00);
			this->grbMatrixA->Location = System::Drawing::Point(12, 130);
			this->grbMatrixA->Name = L"grbMatrixA";
			this->grbMatrixA->Size = System::Drawing::Size(284, 218);
			this->grbMatrixA->TabIndex = 7;
			this->grbMatrixA->TabStop = false;
			this->grbMatrixA->Text = L"Matrix A:";
			// 
			// grbMatrixB
			// 
			this->grbMatrixB->Controls->Add(this->txtB44);
			this->grbMatrixB->Controls->Add(this->txtB43);
			this->grbMatrixB->Controls->Add(this->txtB42);
			this->grbMatrixB->Controls->Add(this->txtB41);
			this->grbMatrixB->Controls->Add(this->txtB40);
			this->grbMatrixB->Controls->Add(this->txtB34);
			this->grbMatrixB->Controls->Add(this->txtB33);
			this->grbMatrixB->Controls->Add(this->txtB32);
			this->grbMatrixB->Controls->Add(this->txtB31);
			this->grbMatrixB->Controls->Add(this->txtB30);
			this->grbMatrixB->Controls->Add(this->txtB24);
			this->grbMatrixB->Controls->Add(this->txtB23);
			this->grbMatrixB->Controls->Add(this->txtB22);
			this->grbMatrixB->Controls->Add(this->txtB21);
			this->grbMatrixB->Controls->Add(this->txtB20);
			this->grbMatrixB->Controls->Add(this->txtB14);
			this->grbMatrixB->Controls->Add(this->txtB13);
			this->grbMatrixB->Controls->Add(this->txtB12);
			this->grbMatrixB->Controls->Add(this->txtB11);
			this->grbMatrixB->Controls->Add(this->txtB10);
			this->grbMatrixB->Controls->Add(this->txtB04);
			this->grbMatrixB->Controls->Add(this->txtB03);
			this->grbMatrixB->Controls->Add(this->txtB02);
			this->grbMatrixB->Controls->Add(this->txtB01);
			this->grbMatrixB->Controls->Add(this->txtB00);
			this->grbMatrixB->Location = System::Drawing::Point(311, 131);
			this->grbMatrixB->Name = L"grbMatrixB";
			this->grbMatrixB->Size = System::Drawing::Size(278, 217);
			this->grbMatrixB->TabIndex = 8;
			this->grbMatrixB->TabStop = false;
			this->grbMatrixB->Text = L"Matrix B:";
			// 
			// lblErrorAx
			// 
			this->lblErrorAx->AutoSize = true;
			this->lblErrorAx->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblErrorAx->ForeColor = System::Drawing::Color::Red;
			this->lblErrorAx->Location = System::Drawing::Point(142, 31);
			this->lblErrorAx->Name = L"lblErrorAx";
			this->lblErrorAx->Size = System::Drawing::Size(11, 15);
			this->lblErrorAx->TabIndex = 9;
			this->lblErrorAx->Text = L"!";
			// 
			// lblErrorBx
			// 
			this->lblErrorBx->AutoSize = true;
			this->lblErrorBx->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblErrorBx->ForeColor = System::Drawing::Color::Red;
			this->lblErrorBx->Location = System::Drawing::Point(142, 71);
			this->lblErrorBx->Name = L"lblErrorBx";
			this->lblErrorBx->Size = System::Drawing::Size(11, 15);
			this->lblErrorBx->TabIndex = 9;
			this->lblErrorBx->Text = L"!";
			// 
			// lblErrorBy
			// 
			this->lblErrorBy->AutoSize = true;
			this->lblErrorBy->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblErrorBy->ForeColor = System::Drawing::Color::Red;
			this->lblErrorBy->Location = System::Drawing::Point(289, 70);
			this->lblErrorBy->Name = L"lblErrorBy";
			this->lblErrorBy->Size = System::Drawing::Size(11, 15);
			this->lblErrorBy->TabIndex = 9;
			this->lblErrorBy->Text = L"!";
			// 
			// lblErrorAy
			// 
			this->lblErrorAy->AutoSize = true;
			this->lblErrorAy->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblErrorAy->ForeColor = System::Drawing::Color::Red;
			this->lblErrorAy->Location = System::Drawing::Point(289, 31);
			this->lblErrorAy->Name = L"lblErrorAy";
			this->lblErrorAy->Size = System::Drawing::Size(11, 15);
			this->lblErrorAy->TabIndex = 9;
			this->lblErrorAy->Text = L"!";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 19);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(602, 653);
			this->Controls->Add(this->lblErrorAy);
			this->Controls->Add(this->lblErrorBy);
			this->Controls->Add(this->lblErrorBx);
			this->Controls->Add(this->lblErrorAx);
			this->Controls->Add(this->grbMatrixB);
			this->Controls->Add(this->lbError);
			this->Controls->Add(this->grbMatrixA);
			this->Controls->Add(this->grbResult);
			this->Controls->Add(this->txtBy);
			this->Controls->Add(this->txtAy);
			this->Controls->Add(this->btnChia);
			this->Controls->Add(this->btnTru);
			this->Controls->Add(this->btnNhan);
			this->Controls->Add(this->btnNhap);
			this->Controls->Add(this->btnCong);
			this->Controls->Add(this->txtBx);
			this->Controls->Add(this->txtAx);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->lbMatrix2);
			this->Controls->Add(this->lbMatrix1);
			this->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"MyForm";
			this->Text = L"Matrix Calculator";
			this->grbResult->ResumeLayout(false);
			this->grbResult->PerformLayout();
			this->grbMatrixA->ResumeLayout(false);
			this->grbMatrixA->PerformLayout();
			this->grbMatrixB->ResumeLayout(false);
			this->grbMatrixB->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
