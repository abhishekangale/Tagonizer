#pragma once
#include "filed.h";
namespace Tagonizer {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;
	using namespace System::Diagnostics;
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

	protected:




	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::TabPage^ tabPage3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;





	private: System::ComponentModel::IContainer^ components;

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
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->tabPage3->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Location = System::Drawing::Point(-2, 4);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1059, 539);
			this->tabControl1->TabIndex = 5;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->button3);
			this->tabPage1->Controls->Add(this->button2);
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Controls->Add(this->textBox2);
			this->tabPage1->Controls->Add(this->textBox1);
			this->tabPage1->Controls->Add(this->button1);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Location = System::Drawing::Point(4, 25);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(1051, 510);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"General";
			this->tabPage1->UseVisualStyleBackColor = true;
			this->tabPage1->Click += gcnew System::EventHandler(this, &MyForm::tabPage1_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(630, 236);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(77, 31);
			this->button3->TabIndex = 6;
			this->button3->Text = L"DELETE";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(454, 236);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(77, 31);
			this->button2->TabIndex = 5;
			this->button2->Text = L"ADD";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(244, 156);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(97, 22);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Enter Tag :";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(390, 156);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(384, 22);
			this->textBox2->TabIndex = 3;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(390, 107);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(384, 22);
			this->textBox1->TabIndex = 2;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged_1);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(826, 107);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(77, 31);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Browse";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_1);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Stencil", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(484, 28);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(174, 33);
			this->label1->TabIndex = 0;
			this->label1->Text = L"TAGONIZER";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click_1);
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->textBox5);
			this->tabPage2->Controls->Add(this->button4);
			this->tabPage2->Controls->Add(this->textBox3);
			this->tabPage2->Controls->Add(this->label4);
			this->tabPage2->Controls->Add(this->label3);
			this->tabPage2->Location = System::Drawing::Point(4, 25);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(1051, 510);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Tag";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(3, 163);
			this->textBox5->Multiline = true;
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(1042, 342);
			this->textBox5->TabIndex = 9;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(515, 126);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(77, 31);
			this->button4->TabIndex = 8;
			this->button4->Text = L"Search";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(403, 85);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(293, 22);
			this->textBox3->TabIndex = 7;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox3_TextChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Stencil", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(463, 22);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(174, 33);
			this->label4->TabIndex = 6;
			this->label4->Text = L"TAGONIZER";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(226, 84);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(97, 22);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Enter Tag :";
			this->label3->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->textBox6);
			this->tabPage3->Controls->Add(this->button5);
			this->tabPage3->Controls->Add(this->textBox4);
			this->tabPage3->Controls->Add(this->label5);
			this->tabPage3->Location = System::Drawing::Point(4, 25);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(1051, 510);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Files";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(3, 138);
			this->textBox6->Multiline = true;
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(1042, 366);
			this->textBox6->TabIndex = 10;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(868, 88);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(77, 31);
			this->button5->TabIndex = 4;
			this->button5->Text = L"Browse";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(266, 92);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(543, 22);
			this->textBox4->TabIndex = 3;
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox4_TextChanged);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Stencil", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(466, 30);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(174, 33);
			this->label5->TabIndex = 1;
			this->label5->Text = L"TAGONIZER";
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1062, 546);
			this->Controls->Add(this->tabControl1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
		String^ FilePath;
		String^ FileName;
		String^ TagTitle;
		String^ SearchTag;
		String^ SearchFile;
	public: DFile^ ffile = nullptr;
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void openFileDialog1_FileOk(System::Object^ sender, System::ComponentModel::CancelEventArgs^ e) {
	}
	private: System::Void tabPage1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
		OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;
		openFileDialog1->ShowDialog();
		FilePath = openFileDialog1->FileName;
		FileName = System::IO::Path::GetFileName(openFileDialog1->FileName);
		textBox1->Text = FilePath;

	}
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			String^ connString = "Data Source=localhost\\SQLEXPRESS;Initial Catalog=FileDB;Integrated Security=True;";
			SqlConnection sqlConn(connString);
			sqlConn.Open();
			try {
				String^ sqlQuery = "select f.dir, f.fname from TagMap tm, Tag t, FileD f WHERE tm.TagID = t.ID AND(t.Title IN(@SearchTag)) AND f.ID = tm.FileID";
				SqlCommand command(sqlQuery, % sqlConn);
				command.Parameters->AddWithValue("@SearchTag", SearchTag);
				SqlDataReader^ reader = command.ExecuteReader();

				while (reader->HasRows)
				{
					// textBox5->Text = reader->GetName(0), reader->GetName(1);
					
					// Console->WriteLine("\t{0}\t{1}", reader->GetName(0), reader.GetName(1));

					while (reader->Read())
					{
						textBox5->Text += reader->GetString(0) + "\t" +
							reader->GetString(1);
						textBox5->Text += "\r\n";
					}
					
					reader->NextResult();
				}
				MessageBox::Show("Done",
					"Success", MessageBoxButtons::OK);
			}
			catch (Exception^ e) {
				MessageBox::Show("Failed",
					"Invalid Query", MessageBoxButtons::OK);
			}
		}
		catch (Exception^ e) {
			MessageBox::Show("Failed to connect to database",
				"Database Connection Error", MessageBoxButtons::OK);
		}
	}
	private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		OpenFileDialog^ openFileDialog2 = gcnew OpenFileDialog;
		openFileDialog2->ShowDialog();
		FilePath = openFileDialog2->FileName;
		FileName = System::IO::Path::GetFileName(openFileDialog2->FileName);
		textBox4->Text = FilePath;
	}
	private: System::Void textBox1_TextChanged_1(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		TagTitle = textBox2->Text;
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

		try {
			String^ connString = "Data Source=localhost\\SQLEXPRESS;Initial Catalog=FileDB;Integrated Security=True;";
			SqlConnection sqlConn(connString);
			sqlConn.Open();
				String^ sqlQuery = "insert into FileD (dir, fname) values (@FilePath, @FileName); insert into Tag (title) values (@tag); insert into TagMap (FileID, TagID) values ((select ID from FileD where dir = @FilePath), (select ID from Tag where title = @tag));";
				SqlCommand command(sqlQuery, % sqlConn);
				command.Parameters->AddWithValue("@FilePath", FilePath);
				command.Parameters->AddWithValue("@FileName", FileName);
				command.Parameters->AddWithValue("@tag", TagTitle);
				command.ExecuteNonQuery();
				MessageBox::Show("Done",
					"Success", MessageBoxButtons::OK);
		}
		catch (Exception^ e) {
			MessageBox::Show("Done",
				"Success", MessageBoxButtons::OK);
		}
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			String^ connString = "Data Source=localhost\\SQLEXPRESS;Initial Catalog=FileDB;Integrated Security=True;";
			SqlConnection sqlConn(connString);
			sqlConn.Open();
				String^ sqlQuery = "delete from TagMap where TagID = (select ID from Tag where title = @tag) and FileID = (select ID from FileD where dir = @Filepath)";
				SqlCommand command(sqlQuery, % sqlConn);
				command.Parameters->AddWithValue("@Filepath", FilePath);
				command.Parameters->AddWithValue("@tag", TagTitle);
				command.ExecuteNonQuery();
				MessageBox::Show("Done",
					"Success", MessageBoxButtons::OK);
		}
		catch (Exception^ e) {
			MessageBox::Show("Done",
				"Success", MessageBoxButtons::OK);
		}
		
	}
	private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		SearchTag = textBox3->Text;
	}
private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	SearchFile = textBox4->Text;
	try {
		String^ connString = "Data Source=localhost\\SQLEXPRESS;Initial Catalog=FileDB;Integrated Security=True;";
		SqlConnection sqlConn(connString);
		sqlConn.Open();
		try {
			String^ sqlQuery = "select t.title from TagMap tm, Tag t, FileD f WHERE tm.TagID = t.ID AND(f.dir IN(@SearchFile)) AND f.ID = tm.FileID";
			SqlCommand command(sqlQuery, % sqlConn);
			command.Parameters->AddWithValue("@SearchFile", SearchFile);
			SqlDataReader^ reader = command.ExecuteReader();

			while (reader->HasRows)
			{

				while (reader->Read())
				{
					textBox6->Text += reader->GetString(0);
					textBox6->Text += "\r\n";
				}

				reader->NextResult();
			}
			MessageBox::Show("Done",
				"Success", MessageBoxButtons::OK);
		}
		catch (Exception^ e) {
			MessageBox::Show("Failed",
				"Invalid Query", MessageBoxButtons::OK);
		}
	}
	catch (Exception^ e) {
		MessageBox::Show("Failed to connect to database",
			"Database Connection Error", MessageBoxButtons::OK);
	}
}
};
}