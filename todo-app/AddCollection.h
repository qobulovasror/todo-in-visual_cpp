#pragma once

namespace todo_app {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace SqlClient;

	/// <summary>
	/// Summary for AddCollection
	/// </summary>
	public ref class AddCollection : public System::Windows::Forms::Form
	{
	public: 
		bool Displaymode = true;
		int editId = -1;
		String ^editName;
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker1;
	private: System::Windows::Forms::CheckBox^  checkBox1;
			 SqlConnection ^connStr = gcnew SqlConnection("Data Source=(LocalDB)\\MSSQLLocalDB;AttachDbFilename=C:\\Users\\CodingMyLife\\Documents\\Visual Studio 2015\\Projects\\todo-app\\db\\todoDB.mdf;Integrated Security=True;Connect Timeout=30");

	public:
		AddCollection(void)
		{
			InitializeComponent();
		}

		AddCollection(bool Displaymode, int editId, String ^editName)
		{
			this->Displaymode = Displaymode;
			this->editId = editId;
			this->editName = editName;
			InitializeComponent();
		}
		
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~AddCollection()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  panel1;
	protected:
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  add;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  name;
	private: System::Windows::Forms::Panel^  panel2;

	private: System::Windows::Forms::Button^  button1;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(AddCollection::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->add = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->name = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel1->Controls->Add(this->dateTimePicker1);
			this->panel1->Controls->Add(this->checkBox1);
			this->panel1->Controls->Add(this->textBox1);
			this->panel1->Controls->Add(this->add);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->name);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel1->Location = System::Drawing::Point(0, 33);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(320, 225);
			this->panel1->TabIndex = 0;
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Enabled = false;
			this->dateTimePicker1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimePicker1->Location = System::Drawing::Point(174, 113);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(112, 24);
			this->dateTimePicker1->TabIndex = 5;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox1->Location = System::Drawing::Point(35, 117);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(107, 22);
			this->checkBox1->TabIndex = 4;
			this->checkBox1->Text = L"Allow didline";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &AddCollection::checkBox1_CheckedChanged);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(85, 57);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(191, 31);
			this->textBox1->TabIndex = 3;
			// 
			// add
			// 
			this->add->Location = System::Drawing::Point(108, 167);
			this->add->Name = L"add";
			this->add->Size = System::Drawing::Size(107, 31);
			this->add->TabIndex = 2;
			this->add->Text = L"Add";
			this->add->UseVisualStyleBackColor = true;
			this->add->Click += gcnew System::EventHandler(this, &AddCollection::add_Click1);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(11, 66);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(45, 17);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Name";
			// 
			// name
			// 
			this->name->AutoSize = true;
			this->name->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->name->Location = System::Drawing::Point(117, 20);
			this->name->Name = L"name";
			this->name->Size = System::Drawing::Size(98, 17);
			this->name->TabIndex = 0;
			this->name->Text = L"Add Collection";
			// 
			// panel2
			// 
			this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel2->Controls->Add(this->button1);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel2->Location = System::Drawing::Point(0, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(320, 33);
			this->panel2->TabIndex = 1;
			this->panel2->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &AddCollection::panel1_MouseDown);
			this->panel2->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &AddCollection::panel1_MouseMove);
			this->panel2->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &AddCollection::panel1_MouseUp);
			// 
			// button1
			// 
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Location = System::Drawing::Point(7, 6);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(20, 20);
			this->button1->TabIndex = 1;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &AddCollection::button1_Click);
			this->button1->MouseEnter += gcnew System::EventHandler(this, &AddCollection::button6_MouseEnter);
			this->button1->MouseLeave += gcnew System::EventHandler(this, &AddCollection::button6_MouseLeave);
			// 
			// AddCollection
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(320, 258);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"AddCollection";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"AddCollection";
			this->Load += gcnew System::EventHandler(this, &AddCollection::AddCollection_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	//load
	private: System::Void AddCollection_Load(System::Object^  sender, System::EventArgs^  e) {
		//display mode auto
		if (!this->Displaymode) {
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)));
			this->ForeColor = System::Drawing::SystemColors::Control;
			this->add->BackColor = Color::Black;
			this->add->ForeColor = System::Drawing::SystemColors::Control;
		}
		//Edit for open window
		if (this->editId != -1) {
			this->add->Text = "Edit";
			this->name->Text = L"Edit Collection name";
			this->textBox1->Text = editName;
		}
	
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

	//Add col OR Edit col
	private: System::Void add_Click1(System::Object^  sender, System::EventArgs^  e) {
		if (textBox1->Text == "") {
			MessageBox::Show("Maydon bo'sh", "xatolik");
			return;
		}
		if (this->editId != -1) {
			try {
				//db update coll
				SqlCommand ^cmd = gcnew SqlCommand("UPDATE collection SET name=@name where Id=@id", this->connStr);
				connStr->Open();
				cmd->Parameters->AddWithValue("@name", textBox1->Text);
				cmd->Parameters->AddWithValue("@id", this->editId);
				//cmd->Parameters->AddWithValue("@dedline", textBox1->Text);
				cmd->ExecuteNonQuery();
				connStr->Close();
				this->Close();
			}
			catch (String ^ str) {
				MessageBox::Show(str, "Error");
			}
		}
		else {
			try {
				//db write code
				SqlCommand ^cmd = gcnew SqlCommand("INSERT INTO collection (name, count) VALUES(@name, @count)", this->connStr);
				connStr->Open();
				cmd->Parameters->AddWithValue("@name", textBox1->Text);
				cmd->Parameters->AddWithValue("@count", 0);
				//cmd->Parameters->AddWithValue("@dedline", textBox1->Text);
				cmd->ExecuteNonQuery();
				connStr->Close();
				this->Close();
				/*CREATE TABLE[dbo].[collection]
				([Id] INT NOT NULL IDENTITY(1, 1) PRIMARY KEY,
				[name] VARCHAR(50) NOT NULL,
				[count] INT NULL DEFAULT 0,
				[dedline] DATETIME NULL
				)*/
			}
			catch(String ^ str) {
				MessageBox::Show(str, "Error");
			}
		}
	}
	//allow didline
	private: System::Void checkBox1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		if (checkBox1->Checked == true)
			dateTimePicker1->Enabled = true;
		else
			dateTimePicker1->Enabled = false;
	}
	};
}
