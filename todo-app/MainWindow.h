#pragma once
#include "AddCollection.h"
#include "AddItem.h"
namespace todo_app {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace SqlClient;

	/// <summary>
	/// Summary for MainWindow
	/// </summary>
	public ref class MainWindow : public System::Windows::Forms::Form
	{
	public:
		SqlConnection ^connStr = gcnew SqlConnection("Data Source=(LocalDB)\\MSSQLLocalDB;AttachDbFilename=C:\\Users\\CodingMyLife\\Documents\\Visual Studio 2015\\Projects\\todo-app\\db\\todoDB.mdf;Integrated Security=True;Connect Timeout=30");
		MainWindow(void)
		{
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MainWindow()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  panel1;
	protected:
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::TextBox^  search;

	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::FlowLayoutPanel^  flowLayoutPanel2;

	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Panel^  panel3;
	private: System::Windows::Forms::Button^  help;
	private: System::Windows::Forms::Label^  title;
	private: System::Windows::Forms::RadioButton^  radioBtnlight;


	private: System::Windows::Forms::RadioButton^  radioBtnDark;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  AddCol;

	private: System::Windows::Forms::Button^  setting;
	private: System::Windows::Forms::DataGridView^  dataGridView1;

	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel1;
	private: System::Windows::Forms::ToolTip^  toolTip1;
	private: System::Windows::Forms::Panel^  panel4;
	private: System::Windows::Forms::Button^  additem;
	private: System::Windows::Forms::Label^  selectAcc;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::DataGridView^  dataGridView2;

	private: System::Windows::Forms::Panel^  panel5;
	private: System::Windows::Forms::Button^  editDescription;
	private: System::Windows::Forms::Label^  descriptionName;
	private: System::Windows::Forms::TextBox^  description;


	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column3;
	private: System::Windows::Forms::DataGridViewButtonColumn^  Column6;
	private: System::Windows::Forms::DataGridViewButtonColumn^  Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn1;
	private: System::Windows::Forms::DataGridViewCheckBoxColumn^  Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn2;
	private: System::Windows::Forms::DataGridViewButtonColumn^  dataGridViewTextBoxColumn3;
	private: System::Windows::Forms::DataGridViewButtonColumn^  dataGridViewButtonColumn1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column7;


	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MainWindow::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->title = (gcnew System::Windows::Forms::Label());
			this->radioBtnlight = (gcnew System::Windows::Forms::RadioButton());
			this->radioBtnDark = (gcnew System::Windows::Forms::RadioButton());
			this->flowLayoutPanel2 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->AddCol = (gcnew System::Windows::Forms::Button());
			this->setting = (gcnew System::Windows::Forms::Button());
			this->help = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->search = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewButtonColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewButtonColumn());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->additem = (gcnew System::Windows::Forms::Button());
			this->selectAcc = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->editDescription = (gcnew System::Windows::Forms::Button());
			this->descriptionName = (gcnew System::Windows::Forms::Label());
			this->description = (gcnew System::Windows::Forms::TextBox());
			this->toolTip1 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewCheckBoxColumn());
			this->dataGridViewTextBoxColumn2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn3 = (gcnew System::Windows::Forms::DataGridViewButtonColumn());
			this->dataGridViewButtonColumn1 = (gcnew System::Windows::Forms::DataGridViewButtonColumn());
			this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->panel3->SuspendLayout();
			this->tableLayoutPanel1->SuspendLayout();
			this->panel4->SuspendLayout();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->panel5->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel1->Controls->Add(this->title);
			this->panel1->Controls->Add(this->radioBtnlight);
			this->panel1->Controls->Add(this->radioBtnDark);
			this->panel1->Controls->Add(this->flowLayoutPanel2);
			this->panel1->Controls->Add(this->button3);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(858, 27);
			this->panel1->TabIndex = 0;
			this->panel1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MainWindow::panel1_MouseDown);
			this->panel1->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MainWindow::panel1_MouseMove);
			this->panel1->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MainWindow::panel1_MouseUp);
			// 
			// title
			// 
			this->title->AutoSize = true;
			this->title->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->title->Location = System::Drawing::Point(395, 3);
			this->title->Name = L"title";
			this->title->Size = System::Drawing::Size(64, 17);
			this->title->TabIndex = 6;
			this->title->Text = L"ToDo list";
			this->title->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MainWindow::panel1_MouseDown);
			this->title->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MainWindow::panel1_MouseMove);
			this->title->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MainWindow::panel1_MouseUp);
			// 
			// radioBtnlight
			// 
			this->radioBtnlight->AutoSize = true;
			this->radioBtnlight->Checked = true;
			this->radioBtnlight->Location = System::Drawing::Point(777, 4);
			this->radioBtnlight->Name = L"radioBtnlight";
			this->radioBtnlight->Size = System::Drawing::Size(44, 17);
			this->radioBtnlight->TabIndex = 5;
			this->radioBtnlight->TabStop = true;
			this->radioBtnlight->Text = L"light";
			this->radioBtnlight->UseVisualStyleBackColor = true;
			// 
			// radioBtnDark
			// 
			this->radioBtnDark->AutoSize = true;
			this->radioBtnDark->Location = System::Drawing::Point(728, 4);
			this->radioBtnDark->Name = L"radioBtnDark";
			this->radioBtnDark->Size = System::Drawing::Size(48, 17);
			this->radioBtnDark->TabIndex = 4;
			this->radioBtnDark->Text = L"Dark";
			this->radioBtnDark->UseVisualStyleBackColor = true;
			// 
			// flowLayoutPanel2
			// 
			this->flowLayoutPanel2->Location = System::Drawing::Point(617, 25);
			this->flowLayoutPanel2->Name = L"flowLayoutPanel2";
			this->flowLayoutPanel2->Size = System::Drawing::Size(241, 446);
			this->flowLayoutPanel2->TabIndex = 3;
			// 
			// button3
			// 
			this->button3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.BackgroundImage")));
			this->button3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)),
				static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(253)));
			this->button3->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)),
				static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(253)));
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Location = System::Drawing::Point(62, 2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(20, 20);
			this->button3->TabIndex = 3;
			this->toolTip1->SetToolTip(this->button3, L"Maximize");
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MainWindow::button3_Click);
			this->button3->MouseEnter += gcnew System::EventHandler(this, &MainWindow::button4_MouseEnter);
			this->button3->MouseLeave += gcnew System::EventHandler(this, &MainWindow::button4_MouseLeave);
			// 
			// button2
			// 
			this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.BackgroundImage")));
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)),
				static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(253)));
			this->button2->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)),
				static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(253)));
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Location = System::Drawing::Point(34, 3);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(20, 20);
			this->button2->TabIndex = 2;
			this->toolTip1->SetToolTip(this->button2, L"Minimize");
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MainWindow::button2_Click);
			this->button2->MouseEnter += gcnew System::EventHandler(this, &MainWindow::button5_MouseEnter);
			this->button2->MouseLeave += gcnew System::EventHandler(this, &MainWindow::button5_MouseLeave);
			// 
			// button1
			// 
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Location = System::Drawing::Point(6, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(20, 20);
			this->button1->TabIndex = 1;
			this->toolTip1->SetToolTip(this->button1, L"Exit");
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MainWindow::button1_Click);
			this->button1->MouseEnter += gcnew System::EventHandler(this, &MainWindow::button6_MouseEnter);
			this->button1->MouseLeave += gcnew System::EventHandler(this, &MainWindow::button6_MouseLeave);
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->button4);
			this->panel2->Controls->Add(this->button6);
			this->panel2->Controls->Add(this->button5);
			this->panel2->Controls->Add(this->AddCol);
			this->panel2->Controls->Add(this->setting);
			this->panel2->Controls->Add(this->help);
			this->panel2->Controls->Add(this->pictureBox1);
			this->panel2->Location = System::Drawing::Point(0, 0);
			this->panel2->Margin = System::Windows::Forms::Padding(0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(49, 445);
			this->panel2->TabIndex = 1;
			// 
			// button4
			// 
			this->button4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button4.BackgroundImage")));
			this->button4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button4->FlatAppearance->BorderSize = 0;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Location = System::Drawing::Point(12, 181);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(24, 25);
			this->button4->TabIndex = 6;
			this->toolTip1->SetToolTip(this->button4, L"date");
			this->button4->UseVisualStyleBackColor = true;
			// 
			// button6
			// 
			this->button6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button6.BackgroundImage")));
			this->button6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button6->FlatAppearance->BorderSize = 0;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Location = System::Drawing::Point(12, 138);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(24, 25);
			this->button6->TabIndex = 5;
			this->toolTip1->SetToolTip(this->button6, L"Notification");
			this->button6->UseVisualStyleBackColor = true;
			// 
			// button5
			// 
			this->button5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button5.BackgroundImage")));
			this->button5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button5->FlatAppearance->BorderSize = 0;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Location = System::Drawing::Point(12, 98);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(24, 25);
			this->button5->TabIndex = 4;
			this->toolTip1->SetToolTip(this->button5, L"Refresh");
			this->button5->UseVisualStyleBackColor = true;
			// 
			// AddCol
			// 
			this->AddCol->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"AddCol.BackgroundImage")));
			this->AddCol->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->AddCol->FlatAppearance->BorderSize = 0;
			this->AddCol->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->AddCol->Location = System::Drawing::Point(12, 63);
			this->AddCol->Name = L"AddCol";
			this->AddCol->Size = System::Drawing::Size(24, 25);
			this->AddCol->TabIndex = 3;
			this->toolTip1->SetToolTip(this->AddCol, L"Add collection");
			this->AddCol->UseVisualStyleBackColor = true;
			this->AddCol->Click += gcnew System::EventHandler(this, &MainWindow::AddCol_Click);
			// 
			// setting
			// 
			this->setting->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"setting.BackgroundImage")));
			this->setting->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->setting->FlatAppearance->BorderSize = 0;
			this->setting->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->setting->Location = System::Drawing::Point(12, 353);
			this->setting->Name = L"setting";
			this->setting->Size = System::Drawing::Size(24, 25);
			this->setting->TabIndex = 2;
			this->toolTip1->SetToolTip(this->setting, L"help");
			this->setting->UseVisualStyleBackColor = true;
			// 
			// help
			// 
			this->help->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"help.BackgroundImage")));
			this->help->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->help->FlatAppearance->BorderSize = 0;
			this->help->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->help->Location = System::Drawing::Point(12, 396);
			this->help->Name = L"help";
			this->help->Size = System::Drawing::Size(24, 25);
			this->help->TabIndex = 1;
			this->toolTip1->SetToolTip(this->help, L"setting");
			this->help->UseVisualStyleBackColor = true;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(8, 13);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(35, 35);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->toolTip1->SetToolTip(this->pictureBox1, L"Username\r\n");
			// 
			// search
			// 
			this->search->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->search->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->search->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->search->Location = System::Drawing::Point(14, 16);
			this->search->Name = L"search";
			this->search->Size = System::Drawing::Size(208, 27);
			this->search->TabIndex = 1;
			this->search->Text = L"Search...";
			this->toolTip1->SetToolTip(this->search, L"Search");
			this->search->Enter += gcnew System::EventHandler(this, &MainWindow::search_Enter);
			this->search->Leave += gcnew System::EventHandler(this, &MainWindow::search_Leave);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->dataGridView1);
			this->groupBox1->Location = System::Drawing::Point(-1, 49);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(0);
			this->groupBox1->Size = System::Drawing::Size(237, 385);
			this->groupBox1->TabIndex = 2;
			this->groupBox1->TabStop = false;
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)),
				static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(253)));
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->Column1,
					this->Column2, this->Column3, this->Column6, this->Column4
			});
			this->dataGridView1->Dock = System::Windows::Forms::DockStyle::Top;
			this->dataGridView1->Location = System::Drawing::Point(0, 13);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowHeadersWidth = 20;
			this->dataGridView1->Size = System::Drawing::Size(237, 368);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MainWindow::dataGridView1_CellContentClick);
			this->dataGridView1->RowHeaderMouseClick += gcnew System::Windows::Forms::DataGridViewCellMouseEventHandler(this, &MainWindow::dataGridView1_RowHeaderMouseClick);
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"T/r";
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
			this->Column1->Width = 25;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Name";
			this->Column2->Name = L"Column2";
			this->Column2->ReadOnly = true;
			this->Column2->Width = 80;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Count";
			this->Column3->Name = L"Column3";
			this->Column3->ReadOnly = true;
			this->Column3->Width = 38;
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"edit";
			this->Column6->Name = L"Column6";
			this->Column6->ReadOnly = true;
			this->Column6->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			this->Column6->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::Automatic;
			this->Column6->Width = 33;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"delete";
			this->Column4->Name = L"Column4";
			this->Column4->ReadOnly = true;
			this->Column4->Text = L"";
			this->Column4->ToolTipText = L"delete is selected item";
			this->Column4->Width = 37;
			// 
			// panel3
			// 
			this->panel3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel3->Controls->Add(this->groupBox1);
			this->panel3->Controls->Add(this->search);
			this->panel3->Location = System::Drawing::Point(52, 3);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(236, 431);
			this->panel3->TabIndex = 3;
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 4;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				5.710956F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				28.20513F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				36)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				30)));
			this->tableLayoutPanel1->Controls->Add(this->panel2, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->panel3, 1, 0);
			this->tableLayoutPanel1->Controls->Add(this->panel4, 2, 0);
			this->tableLayoutPanel1->Controls->Add(this->panel5, 3, 0);
			this->tableLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel1->Location = System::Drawing::Point(0, 27);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 1;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(858, 445);
			this->tableLayoutPanel1->TabIndex = 4;
			// 
			// panel4
			// 
			this->panel4->Controls->Add(this->additem);
			this->panel4->Controls->Add(this->selectAcc);
			this->panel4->Controls->Add(this->groupBox2);
			this->panel4->Location = System::Drawing::Point(294, 3);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(303, 439);
			this->panel4->TabIndex = 1;
			// 
			// additem
			// 
			this->additem->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"additem.BackgroundImage")));
			this->additem->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->additem->FlatAppearance->BorderSize = 0;
			this->additem->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->additem->Location = System::Drawing::Point(241, 15);
			this->additem->Name = L"additem";
			this->additem->Size = System::Drawing::Size(39, 34);
			this->additem->TabIndex = 6;
			this->toolTip1->SetToolTip(this->additem, L"Add item to \r\nselection collection");
			this->additem->UseVisualStyleBackColor = true;
			this->additem->Click += gcnew System::EventHandler(this, &MainWindow::additem_Click);
			// 
			// selectAcc
			// 
			this->selectAcc->AutoSize = true;
			this->selectAcc->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->selectAcc->Location = System::Drawing::Point(16, 21);
			this->selectAcc->Name = L"selectAcc";
			this->selectAcc->Size = System::Drawing::Size(111, 20);
			this->selectAcc->TabIndex = 5;
			this->selectAcc->Text = L"Selected item";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->dataGridView2);
			this->groupBox2->Location = System::Drawing::Point(3, 50);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Padding = System::Windows::Forms::Padding(0);
			this->groupBox2->Size = System::Drawing::Size(297, 380);
			this->groupBox2->TabIndex = 4;
			this->groupBox2->TabStop = false;
			// 
			// dataGridView2
			// 
			this->dataGridView2->AllowUserToAddRows = false;
			this->dataGridView2->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)),
				static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(253)));
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->dataGridViewTextBoxColumn1,
					this->Column5, this->dataGridViewTextBoxColumn2, this->dataGridViewTextBoxColumn3, this->dataGridViewButtonColumn1, this->Column7
			});
			this->dataGridView2->Dock = System::Windows::Forms::DockStyle::Top;
			this->dataGridView2->Location = System::Drawing::Point(0, 13);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->ReadOnly = true;
			this->dataGridView2->RowHeadersWidth = 20;
			this->dataGridView2->Size = System::Drawing::Size(297, 367);
			this->dataGridView2->TabIndex = 0;
			this->dataGridView2->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MainWindow::dataGridView2_CellContentClick);
			// 
			// panel5
			// 
			this->panel5->Controls->Add(this->editDescription);
			this->panel5->Controls->Add(this->descriptionName);
			this->panel5->Controls->Add(this->description);
			this->panel5->Location = System::Drawing::Point(603, 3);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(252, 439);
			this->panel5->TabIndex = 4;
			// 
			// editDescription
			// 
			this->editDescription->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"editDescription.BackgroundImage")));
			this->editDescription->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->editDescription->FlatAppearance->BorderSize = 0;
			this->editDescription->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->editDescription->Location = System::Drawing::Point(196, 17);
			this->editDescription->Name = L"editDescription";
			this->editDescription->Size = System::Drawing::Size(34, 31);
			this->editDescription->TabIndex = 2;
			this->toolTip1->SetToolTip(this->editDescription, L"Edit description");
			this->editDescription->UseVisualStyleBackColor = true;
			// 
			// descriptionName
			// 
			this->descriptionName->AutoSize = true;
			this->descriptionName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->descriptionName->Location = System::Drawing::Point(15, 20);
			this->descriptionName->Name = L"descriptionName";
			this->descriptionName->Size = System::Drawing::Size(79, 17);
			this->descriptionName->TabIndex = 1;
			this->descriptionName->Text = L"Description";
			// 
			// description
			// 
			this->description->Location = System::Drawing::Point(13, 60);
			this->description->Multiline = true;
			this->description->Name = L"description";
			this->description->ReadOnly = true;
			this->description->Size = System::Drawing::Size(228, 370);
			this->description->TabIndex = 0;
			// 
			// dataGridViewTextBoxColumn1
			// 
			this->dataGridViewTextBoxColumn1->HeaderText = L"T/r";
			this->dataGridViewTextBoxColumn1->Name = L"dataGridViewTextBoxColumn1";
			this->dataGridViewTextBoxColumn1->ReadOnly = true;
			this->dataGridViewTextBoxColumn1->Width = 25;
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"Check";
			this->Column5->Name = L"Column5";
			this->Column5->ReadOnly = true;
			this->Column5->Width = 42;
			// 
			// dataGridViewTextBoxColumn2
			// 
			this->dataGridViewTextBoxColumn2->HeaderText = L"Name";
			this->dataGridViewTextBoxColumn2->Name = L"dataGridViewTextBoxColumn2";
			this->dataGridViewTextBoxColumn2->ReadOnly = true;
			this->dataGridViewTextBoxColumn2->Width = 120;
			// 
			// dataGridViewTextBoxColumn3
			// 
			this->dataGridViewTextBoxColumn3->HeaderText = L"edit";
			this->dataGridViewTextBoxColumn3->Name = L"dataGridViewTextBoxColumn3";
			this->dataGridViewTextBoxColumn3->ReadOnly = true;
			this->dataGridViewTextBoxColumn3->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridViewTextBoxColumn3->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::Automatic;
			this->dataGridViewTextBoxColumn3->Width = 40;
			// 
			// dataGridViewButtonColumn1
			// 
			this->dataGridViewButtonColumn1->HeaderText = L"delete";
			this->dataGridViewButtonColumn1->Name = L"dataGridViewButtonColumn1";
			this->dataGridViewButtonColumn1->ReadOnly = true;
			this->dataGridViewButtonColumn1->Text = L"";
			this->dataGridViewButtonColumn1->ToolTipText = L"delete is selected item";
			this->dataGridViewButtonColumn1->Width = 42;
			// 
			// Column7
			// 
			this->Column7->HeaderText = L"id";
			this->Column7->Name = L"Column7";
			this->Column7->ReadOnly = true;
			this->Column7->Width = 5;
			// 
			// MainWindow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(249)),
				static_cast<System::Int32>(static_cast<System::Byte>(253)));
			this->ClientSize = System::Drawing::Size(858, 472);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MainWindow";
			this->Text = L"MainWindow";
			this->Load += gcnew System::EventHandler(this, &MainWindow::MainWindow_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->tableLayoutPanel1->ResumeLayout(false);
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	public: int selectColId = -1;
	public: int selectColDBId = -1;
	//load window
	private: System::Void MainWindow_Load(System::Object^  sender, System::EventArgs^  e) {
		this->dbRefesh();
	}
	//db refesh
	private: System::Void dbRefesh() {
		/*[collection]([Id] [name][count] [dedline] */
		dataGridView1->Rows->Clear();
		try {
			connStr->Open();
			SqlCommand^ command = gcnew SqlCommand("SELECT * FROM collection", connStr);
			SqlDataReader ^ dataReader = command->ExecuteReader();
			int i = 0;
			while (dataReader->Read()) {
				dataGridView1->Rows->Add(1);
				dataGridView1->Rows[i]->Cells[0]->Value = dataReader->GetValue(0)->ToString();
				dataGridView1->Rows[i]->Cells[1]->Value = dataReader->GetValue(1)->ToString();
				dataGridView1->Rows[i]->Cells[2]->Value = dataReader->GetValue(2)->ToString();

				++i;
			}
			connStr->Close();
		}
		catch (String^ str) {
			MessageBox::Show(str, "xato");
		}
	}
	private: System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MainWindow::typeid));
	//close buttom
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
	}
	private: System::Void button6_MouseEnter(System::Object^  sender, System::EventArgs^  e) {
		button1->Image = Image::FromFile("img/x111.png");
	}
	private: System::Void button6_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
		button1->Image = nullptr;
	}
	//minimaze
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		this->WindowState = FormWindowState::Minimized;
	}
	private: System::Void button5_MouseEnter(System::Object^  sender, System::EventArgs^  e) {
		button2->Image = Image::FromFile("img/mini11.png");
	}
	private: System::Void button5_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
		button2->Image = nullptr;
	}
	//maxmaze
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		if(this->WindowState == FormWindowState::Maximized)
			return this->WindowState = FormWindowState::Normal;
		this->WindowState = FormWindowState::Maximized;
	}
	private: System::Void button4_MouseEnter(System::Object^  sender, System::EventArgs^  e) {
		button3->Image = Image::FromFile("img/max11.png");
	}
	private: System::Void button4_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
		button3->Image = nullptr;
	}
	
	//oynani surish
	private: bool dragging = false;
	private: Point dragCursorPoint;
	private: Point dragFormpoint;
	private: System::Void panel1_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		dragging = true;
		dragCursorPoint = Cursor->Position;
		dragFormpoint = this->Location;
	}
	private: System::Void panel1_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		if (dragging) {
			Point dif = Point::Subtract(Cursor->Position, System::Drawing::Size(dragCursorPoint));
			this->Location = Point::Add(dragFormpoint, System::Drawing::Size(dif));
		}
	}
	private: System::Void panel1_MouseUp(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		dragging = false;
	}

	//izlash uchun
	private: System::Void search_Enter(System::Object^  sender, System::EventArgs^  e) {
		if (search->Text == "Search...") {
			search->Text = "";
			search->ForeColor = Color::Black;
			//button7->Visible = true;
		}
	}
	private: System::Void search_Leave(System::Object^  sender, System::EventArgs^  e) {
		if (search->Text == "") {
			search->Text = "Search...";
			search->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			//button7->Visible = false;
		}
	}
	//add collection
	private: System::Void AddCol_Click(System::Object^  sender, System::EventArgs^  e) {
		//displey rejm, edit, 
		int editId = -1;
		bool Displaymode = radioBtnlight->Checked;
		String^ editName = "";
		AddCollection ^ addCollection = gcnew AddCollection(Displaymode, editId, "");
		addCollection->ShowDialog();
		//refesh all table items or db reaf refesh
		this->dbRefesh();
	}
	//delete and edit and view items
	private: System::Void dataGridView1_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
		int editId = Convert::ToInt32(dataGridView1->Rows[e->RowIndex]->Cells[0]->Value);
		//edit
		if (dataGridView1->Rows[e->RowIndex]->Cells[3]->Selected) {
			bool Displaymode = radioBtnlight->Checked;
			String^ editName = Convert::ToString(dataGridView1->Rows[e->RowIndex]->Cells[1]->Value);
			AddCollection ^ addCollection = gcnew AddCollection(Displaymode, editId, editName);
			addCollection->ShowDialog();
			//refesh all table items or db reaf refesh
			this->dbRefesh();
		}
		//delete
		if (dataGridView1->Rows[e->RowIndex]->Cells[4]->Selected) {
			String^ editName = Convert::ToString(dataGridView1->Rows[e->RowIndex]->Cells[1]->Value);
			System::Windows::Forms::DialogResult ^ res = MessageBox::Show("delete this collection", "confirmation", MessageBoxButtons::YesNo);
			String ^msg = res->ToString();
			if (msg != "Yes") return;
			try{
				SqlCommand ^cmd = gcnew SqlCommand("DELETE collection WHERE Id=@id", connStr);
				connStr->Open();
				cmd->Parameters->AddWithValue("@id", editId);
				cmd->ExecuteNonQuery();
				connStr->Close();
			}
			catch (String ^str){
				MessageBox::Show(str);
			}
			//refesh all table items or db reaf refesh
			this->dbRefesh();
		}
		//select col and view coll items
		if (dataGridView1->Rows[e->RowIndex]->Cells[1]->Selected) {
			this->selectColId = e->RowIndex;
			this->refreshTable2(editId);
		}else{
			this->selectColId = -1;
		}
	}
	//select col and view coll items
	private: System::Void dataGridView1_RowHeaderMouseClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellMouseEventArgs^  e) {
		if (dataGridView1->Rows[e->RowIndex]->Selected) {
			int editId = Convert::ToInt32(dataGridView1->Rows[e->RowIndex]->Cells[0]->Value);
			this->refreshTable2(editId);
		}
	}
	//dateGridview refresh
	private: System::Void refreshTable2(int idSelCol) {
		this->selectColDBId = idSelCol;
		dataGridView2->Rows->Clear();
		try {
			/*[colItems]([Id]  [name] [check] [didline] [createTime][coll_ID]*/
			connStr->Open();
			SqlCommand^ command = gcnew SqlCommand("SELECT Id, name FROM colItems where coll_ID="+ selectColDBId, connStr);
			SqlDataReader ^ dataReader = command->ExecuteReader();
			int i = 0;
			while (dataReader->Read()) {
				dataGridView2->Rows->Add(1);
				dataGridView2->Rows[i]->Cells[0]->Value = i+1;
				//dataGridView2->Rows[i]->Cells[1]->Value = dataReader->GetValue(2)->ToString();
				dataGridView2->Rows[i]->Cells[2]->Value = dataReader->GetValue(1)->ToString();
				dataGridView2->Rows[i]->Cells[5]->Value = dataReader->GetValue(0)->ToString();

				++i;
			}
			connStr->Close();
		}
		catch (String^ str) {
			MessageBox::Show(str, "xato");
		}
	}
	//add item to selection collec
	private: System::Void additem_Click(System::Object^  sender, System::EventArgs^  e) {
		if (this->selectColId == -1) {
			MessageBox::Show("collection not select", "Error");
			return;
		}
		bool Displaymode = radioBtnlight->Checked;
		int editItemId = -1;
		int colId = selectColDBId;
		AddItem ^addItem = gcnew AddItem(colId, Displaymode, editItemId, "");
		addItem->ShowDialog();
		this->refreshTable2(selectColDBId);
	}


	// select table2 item then description will active
	private: System::Void dataGridView2_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
		int editId = Convert::ToInt32(dataGridView2->Rows[e->RowIndex]->Cells[5]->Value);
		//edit
		if (dataGridView2->Rows[e->RowIndex]->Cells[3]->Selected) {
			bool Displaymode = radioBtnlight->Checked;
			String^ editName = Convert::ToString(dataGridView2->Rows[e->RowIndex]->Cells[2]->Value);
			int colId = selectColDBId;
			AddItem ^addItem = gcnew AddItem(colId, Displaymode, editId, editName);
			addItem->ShowDialog();
			//refesh all table items or db reaf refesh
			this->refreshTable2(selectColDBId);
		}

		//delete
		if (dataGridView2->Rows[e->RowIndex]->Cells[4]->Selected) {
			String^ editName = Convert::ToString(dataGridView2->Rows[e->RowIndex]->Cells[2]->Value);
			System::Windows::Forms::DialogResult ^ res = MessageBox::Show("delete this item: " + editName , "confirmation", MessageBoxButtons::YesNo);
			String ^msg = res->ToString();
			if (msg != "Yes") return;
			try {
				SqlCommand ^cmd = gcnew SqlCommand("DELETE colItems WHERE Id=@id", connStr);
				connStr->Open();
				cmd->Parameters->AddWithValue("@id", editId);
				cmd->ExecuteNonQuery();
				connStr->Close();
			}
			catch (String ^str) {
				MessageBox::Show(str);
			}
			//refesh all table items or db reaf refesh
			this->refreshTable2(selectColDBId);
		}
	}
};
}
