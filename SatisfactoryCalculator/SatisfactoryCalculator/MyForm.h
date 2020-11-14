#pragma once
#include <iomanip>
#include <string>

short aluminum_ingot_recipe = 1, aluminum_scrap_recipe = 1, automated_wiring_recipe = 1, beacon_recipe = 1, black_powder_recipe = 1, cable_recipe = 1
	, caterium_ingot_recipe = 1, circuit_board_recipe = 1, computer_recipe = 1, concrete_recipe = 1, copper_ingot_recipe = 1, copper_sheet_recipe = 1
	, crystal_oscillator_recipe = 1, electromagnetic_control_rod_recipe = 1, encased_industrial_beam_recipe = 1, encased_uranium_cell_recipe = 1, fabric_recipe = 1
	, heat_sink_recipe = 1, heavy_modular_frame_recipe = 1, high_speed_connector_recipe = 1, iron_ingot_recipe = 1, iron_plate_recipe = 1, iron_rod_recipe = 1
	, modular_frame_recipe = 1, motor_recipe = 1, nuclear_fuel_rod_recipe = 1, plastic_recipe = 1, quartz_crystal_recipe = 1, quickwire_recipe = 1, radio_control_unit_recipe = 1
	, reinforced_iron_plate_recipe = 1, rotor_recipe = 1, rubber_recipe = 1, screw_recipe = 1, silica_recipe = 1, smart_plating_recipe = 1, stator_recipe = 1
	, steel_ingot_recipe = 1, turbo_motor_recipe = 1, versatile_framework_recipe = 1, wire_recipe = 1;
bool button_changing = true;
short lvlcount = 1;
long double TironOre[1000], TcopperOre[1000], Tcoal[1000], Tlimestone[1000], TcateriumOre[1000], TrawQuartz[1000], Tplastic[1000], Trubber[1000]
	, TpolymerResin[1000], Tsulfur[1000], Tbauxite[1000], Turanium[1000], Tmycelia[1000], Tbiomass[1000], Twater[1000], TcrudeOil[1000], Tfuel[1000], TheavyOilResidue[1000], TaluminaSolution[1000]
	, TsulfurAcid[1000], Tenergy[1000]
	, Tsmelter[1000], Tfoundry[1000], Trefinery[1000], Tconstructor[1000], Tassembler[1000], Tmanufacturer[1000];
short mods = 0; bool modList = false;
short revItems = 0; bool revItemView = false;
std::string vanillaItemList[1000]{"A.I. Limiter",
"Adaptive Control Unit",
"Alclad Aluminum Sheet",
"Aluminum Ingot (Recipe: 1)",
"Aluminum Scrap (Recipe: 1)",
"Automated Wiring (Recipe: 1)",
"Battery",
"Beacon (Recipe: 1)",
"Black Powder (Recipe: 1)",
"Cable (Recipe: 1)",
"Caterium Ingot (Recipe: 1)",
"Circuit Board (Recipe: 1)",
"Computer (Recipe: 1)",
"Concrete (Recipe: 1)",
"Copper Ingot (Recipe: 1)",
"Copper Sheet (Recipe: 1)",
"Crystal Oscillator (Recipe: 1)",
"Electromagnetic Control Rod (Recipe: 1)",
"Empty Canister",
"Encased Industrial Beam (Recipe: 1)",
"Encased Uranium Cell (Recipe: 1)",
"Fabric (Recipe: 1)",
"Gas Filter",
"Heat Sink (Recipe: 1)",
"Heavy Modular Frame (Recipe: 1)",
"High-Speed Connector (Recipe: 1)",
"Iodine Infused Filter",
"Iron Ingot (Recipe: 1)",
"Iron Plate (Recipe: 1)",
"Iron Rod (Recipe: 1)",
"Modular Engine",
"Modular Frame (Recipe: 1)",
"Motor (Recipe: 1)",
"Nuclear Fuel Rod (Recipe: 1)",
"Plastic (Recipe: 1)",
"Quartz Crystal (Recipe: 1)",
"Quickwire (Recipe: 1)",
"Radio Control Unit (Recipe: 1)",
"Reinforced Iron Plate (Recipe: 1)",
"Rifle Cartridge",
"Rotor (Recipe: 1)",
"Rubber (Recipe: 1)",
"Screw (Recipe: 1)",
"Silica (Recipe: 1)",
"Smart Plating (Recipe: 1)",
"Stator (Recipe: 1)",
"Steel Beam",
"Steel Ingot (Recipe: 1)",
"Steel Pipe",
"Supercomputer",
"Turbo Motor (Recipe: 1)",
"Versatile Framework (Recipe: 1)",
"Wire (Recipe: 1)" };

// ============================================================================================	Windows forms
namespace SatisfactoryCalculator {

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
			//TODO: add constructor code
			//
		}

	protected:
		/// <summary>
		/// Free up all used resources.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TreeView^ treeView1;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::RadioButton^ radioButton4;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::ListView^ listView1;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::ImageList^ imageList1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::TreeView^ vanillaItems;
	private: System::Windows::Forms::Label^ label10;

	private: System::Windows::Forms::CheckBox^ checkBox1;

	private: System::Windows::Forms::Label^ reverseItemList;

	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::ListView^ reverseItemView;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::PictureBox^ pictureBox2;

	private: System::Windows::Forms::VScrollBar^ vScrollBar1;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::CheckedListBox^ checkedListBox1;
	private: System::Windows::Forms::TreeView^ modItems;








	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Required constructor variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for constructor support - do not modify
		/// the contents of this method using a code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::Windows::Forms::TreeNode^ treeNode1 = (gcnew System::Windows::Forms::TreeNode(L"(X machines) Example.1.1 - X count - X WM"));
			System::Windows::Forms::TreeNode^ treeNode2 = (gcnew System::Windows::Forms::TreeNode(L"(X machines) Example.1 - X count - My + X WM",
				gcnew cli::array< System::Windows::Forms::TreeNode^  >(1) { treeNode1 }));
			System::Windows::Forms::TreeNode^ treeNode3 = (gcnew System::Windows::Forms::TreeNode(L"(X machines) Example.2.1 - X count - X WM"));
			System::Windows::Forms::TreeNode^ treeNode4 = (gcnew System::Windows::Forms::TreeNode(L"(X machines) Example.2.2 - X count - X WM"));
			System::Windows::Forms::TreeNode^ treeNode5 = (gcnew System::Windows::Forms::TreeNode(L"(X machines) Example.2 - X count - My + X WM",
				gcnew cli::array< System::Windows::Forms::TreeNode^  >(2) { treeNode3, treeNode4 }));
			System::Windows::Forms::TreeNode^ treeNode6 = (gcnew System::Windows::Forms::TreeNode(L"(X machines) Example - X count - My + X WM",
				gcnew cli::array< System::Windows::Forms::TreeNode^  >(2) { treeNode2, treeNode5 }));
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			System::Windows::Forms::ListViewItem^ listViewItem1 = (gcnew System::Windows::Forms::ListViewItem(L"Iron Ore: Example", L"Iron Ore"));
			System::Windows::Forms::ListViewItem^ listViewItem2 = (gcnew System::Windows::Forms::ListViewItem(L"Copper Ore: Example", L"Copper Ore"));
			System::Windows::Forms::TreeNode^ treeNode7 = (gcnew System::Windows::Forms::TreeNode(L"A.I. Limiter"));
			System::Windows::Forms::TreeNode^ treeNode8 = (gcnew System::Windows::Forms::TreeNode(L"Adaptive Control Unit"));
			System::Windows::Forms::TreeNode^ treeNode9 = (gcnew System::Windows::Forms::TreeNode(L"Alclad Aluminum Sheet"));
			System::Windows::Forms::TreeNode^ treeNode10 = (gcnew System::Windows::Forms::TreeNode(L"Aluminum Ingot (Recipe: 1)"));
			System::Windows::Forms::TreeNode^ treeNode11 = (gcnew System::Windows::Forms::TreeNode(L"Aluminum Scrap (Recipe: 1)"));
			System::Windows::Forms::TreeNode^ treeNode12 = (gcnew System::Windows::Forms::TreeNode(L"Automated Wiring (Recipe: 1)"));
			System::Windows::Forms::TreeNode^ treeNode13 = (gcnew System::Windows::Forms::TreeNode(L"Battery"));
			System::Windows::Forms::TreeNode^ treeNode14 = (gcnew System::Windows::Forms::TreeNode(L"Beacon (Recipe: 1)"));
			System::Windows::Forms::TreeNode^ treeNode15 = (gcnew System::Windows::Forms::TreeNode(L"Black Powder (Recipe: 1)"));
			System::Windows::Forms::TreeNode^ treeNode16 = (gcnew System::Windows::Forms::TreeNode(L"Cable (Recipe: 1)"));
			System::Windows::Forms::TreeNode^ treeNode17 = (gcnew System::Windows::Forms::TreeNode(L"Caterium Ingot (Recipe: 1)"));
			System::Windows::Forms::TreeNode^ treeNode18 = (gcnew System::Windows::Forms::TreeNode(L"Circuit Board (Recipe: 1)"));
			System::Windows::Forms::TreeNode^ treeNode19 = (gcnew System::Windows::Forms::TreeNode(L"Computer (Recipe: 1)"));
			System::Windows::Forms::TreeNode^ treeNode20 = (gcnew System::Windows::Forms::TreeNode(L"Concrete (Recipe: 1)"));
			System::Windows::Forms::TreeNode^ treeNode21 = (gcnew System::Windows::Forms::TreeNode(L"Copper Ingot (Recipe: 1)"));
			System::Windows::Forms::TreeNode^ treeNode22 = (gcnew System::Windows::Forms::TreeNode(L"Copper Sheet (Recipe: 1)"));
			System::Windows::Forms::TreeNode^ treeNode23 = (gcnew System::Windows::Forms::TreeNode(L"Crystal Oscillator (Recipe: 1)"));
			System::Windows::Forms::TreeNode^ treeNode24 = (gcnew System::Windows::Forms::TreeNode(L"Electromagnetic Control Rod (Recipe: 1)"));
			System::Windows::Forms::TreeNode^ treeNode25 = (gcnew System::Windows::Forms::TreeNode(L"Empty Canister"));
			System::Windows::Forms::TreeNode^ treeNode26 = (gcnew System::Windows::Forms::TreeNode(L"Encased Industrial Beam (Recipe: 1)"));
			System::Windows::Forms::TreeNode^ treeNode27 = (gcnew System::Windows::Forms::TreeNode(L"Encased Uranium Cell (Recipe: 1)"));
			System::Windows::Forms::TreeNode^ treeNode28 = (gcnew System::Windows::Forms::TreeNode(L"Fabric (Recipe: 1)"));
			System::Windows::Forms::TreeNode^ treeNode29 = (gcnew System::Windows::Forms::TreeNode(L"Gas Filter"));
			System::Windows::Forms::TreeNode^ treeNode30 = (gcnew System::Windows::Forms::TreeNode(L"Heat Sink (Recipe: 1)"));
			System::Windows::Forms::TreeNode^ treeNode31 = (gcnew System::Windows::Forms::TreeNode(L"Heavy Modular Frame (Recipe: 1)"));
			System::Windows::Forms::TreeNode^ treeNode32 = (gcnew System::Windows::Forms::TreeNode(L"High-Speed Connector (Recipe: 1)"));
			System::Windows::Forms::TreeNode^ treeNode33 = (gcnew System::Windows::Forms::TreeNode(L"Iodine Infused Filter"));
			System::Windows::Forms::TreeNode^ treeNode34 = (gcnew System::Windows::Forms::TreeNode(L"Iron Ingot (Recipe: 1)"));
			System::Windows::Forms::TreeNode^ treeNode35 = (gcnew System::Windows::Forms::TreeNode(L"Iron Plate (Recipe: 1)"));
			System::Windows::Forms::TreeNode^ treeNode36 = (gcnew System::Windows::Forms::TreeNode(L"Iron Rod (Recipe: 1)"));
			System::Windows::Forms::TreeNode^ treeNode37 = (gcnew System::Windows::Forms::TreeNode(L"Modular Engine"));
			System::Windows::Forms::TreeNode^ treeNode38 = (gcnew System::Windows::Forms::TreeNode(L"Modular Frame (Recipe: 1)"));
			System::Windows::Forms::TreeNode^ treeNode39 = (gcnew System::Windows::Forms::TreeNode(L"Motor (Recipe: 1)"));
			System::Windows::Forms::TreeNode^ treeNode40 = (gcnew System::Windows::Forms::TreeNode(L"Nuclear Fuel Rod (Recipe: 1)"));
			System::Windows::Forms::TreeNode^ treeNode41 = (gcnew System::Windows::Forms::TreeNode(L"Plastic (Recipe: 1)"));
			System::Windows::Forms::TreeNode^ treeNode42 = (gcnew System::Windows::Forms::TreeNode(L"Quartz Crystal (Recipe: 1)"));
			System::Windows::Forms::TreeNode^ treeNode43 = (gcnew System::Windows::Forms::TreeNode(L"Quickwire (Recipe: 1)"));
			System::Windows::Forms::TreeNode^ treeNode44 = (gcnew System::Windows::Forms::TreeNode(L"Radio Control Unit (Recipe: 1)"));
			System::Windows::Forms::TreeNode^ treeNode45 = (gcnew System::Windows::Forms::TreeNode(L"Reinforced Iron Plate (Recipe: 1)"));
			System::Windows::Forms::TreeNode^ treeNode46 = (gcnew System::Windows::Forms::TreeNode(L"Rifle Cartridge"));
			System::Windows::Forms::TreeNode^ treeNode47 = (gcnew System::Windows::Forms::TreeNode(L"Rotor (Recipe: 1)"));
			System::Windows::Forms::TreeNode^ treeNode48 = (gcnew System::Windows::Forms::TreeNode(L"Rubber (Recipe: 1)"));
			System::Windows::Forms::TreeNode^ treeNode49 = (gcnew System::Windows::Forms::TreeNode(L"Screw (Recipe: 1)"));
			System::Windows::Forms::TreeNode^ treeNode50 = (gcnew System::Windows::Forms::TreeNode(L"Silica (Recipe: 1)"));
			System::Windows::Forms::TreeNode^ treeNode51 = (gcnew System::Windows::Forms::TreeNode(L"Smart Plating (Recipe: 1)"));
			System::Windows::Forms::TreeNode^ treeNode52 = (gcnew System::Windows::Forms::TreeNode(L"Stator (Recipe: 1)"));
			System::Windows::Forms::TreeNode^ treeNode53 = (gcnew System::Windows::Forms::TreeNode(L"Steel Beam"));
			System::Windows::Forms::TreeNode^ treeNode54 = (gcnew System::Windows::Forms::TreeNode(L"Steel Ingot (Recipe: 1)"));
			System::Windows::Forms::TreeNode^ treeNode55 = (gcnew System::Windows::Forms::TreeNode(L"Steel Pipe"));
			System::Windows::Forms::TreeNode^ treeNode56 = (gcnew System::Windows::Forms::TreeNode(L"Supercomputer"));
			System::Windows::Forms::TreeNode^ treeNode57 = (gcnew System::Windows::Forms::TreeNode(L"Turbo Motor (Recipe: 1)"));
			System::Windows::Forms::TreeNode^ treeNode58 = (gcnew System::Windows::Forms::TreeNode(L"Versatile Framework (Recipe: 1)"));
			System::Windows::Forms::TreeNode^ treeNode59 = (gcnew System::Windows::Forms::TreeNode(L"Wire (Recipe: 1)"));
			System::Windows::Forms::ListViewItem^ listViewItem3 = (gcnew System::Windows::Forms::ListViewItem(gcnew cli::array< System::String^  >(1) { L"nothing here yet" },
				-1, System::Drawing::SystemColors::WindowFrame, System::Drawing::Color::Empty, nullptr));
			System::Windows::Forms::TreeNode^ treeNode60 = (gcnew System::Windows::Forms::TreeNode(L"Carbon Dust"));
			System::Windows::Forms::TreeNode^ treeNode61 = (gcnew System::Windows::Forms::TreeNode(L"Carbon Mesh"));
			System::Windows::Forms::TreeNode^ treeNode62 = (gcnew System::Windows::Forms::TreeNode(L"Refined Carbon"));
			System::Windows::Forms::TreeNode^ treeNode63 = (gcnew System::Windows::Forms::TreeNode(L"Refined Power", gcnew cli::array< System::Windows::Forms::TreeNode^  >(3) {
				treeNode60,
					treeNode61, treeNode62
			}));
			this->treeView1 = (gcnew System::Windows::Forms::TreeView());
			this->imageList1 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->vanillaItems = (gcnew System::Windows::Forms::TreeView());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->reverseItemList = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->reverseItemView = (gcnew System::Windows::Forms::ListView());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->vScrollBar1 = (gcnew System::Windows::Forms::VScrollBar());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->checkedListBox1 = (gcnew System::Windows::Forms::CheckedListBox());
			this->modItems = (gcnew System::Windows::Forms::TreeView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// treeView1
			// 
			this->treeView1->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->treeView1->ForeColor = System::Drawing::SystemColors::ControlText;
			this->treeView1->HideSelection = false;
			this->treeView1->ImageKey = L"Supercomputer";
			this->treeView1->ImageList = this->imageList1;
			this->treeView1->Indent = 15;
			this->treeView1->Location = System::Drawing::Point(12, 25);
			this->treeView1->Name = L"treeView1";
			treeNode1->Name = L"Óçåë3";
			treeNode1->Text = L"(X machines) Example.1.1 - X count - X WM";
			treeNode2->Name = L"Óçåë1";
			treeNode2->Text = L"(X machines) Example.1 - X count - My + X WM";
			treeNode3->Name = L"Óçåë4";
			treeNode3->Text = L"(X machines) Example.2.1 - X count - X WM";
			treeNode4->Name = L"Óçåë5";
			treeNode4->Text = L"(X machines) Example.2.2 - X count - X WM";
			treeNode5->Name = L"Óçåë2";
			treeNode5->Text = L"(X machines) Example.2 - X count - My + X WM";
			treeNode6->Name = L"Óçåë0";
			treeNode6->Text = L"(X machines) Example - X count - My + X WM";
			this->treeView1->Nodes->AddRange(gcnew cli::array< System::Windows::Forms::TreeNode^  >(1) { treeNode6 });
			this->treeView1->SelectedImageKey = L"Supercomputer";
			this->treeView1->Size = System::Drawing::Size(454, 541);
			this->treeView1->TabIndex = 0;
			this->treeView1->AfterSelect += gcnew System::Windows::Forms::TreeViewEventHandler(this, &MyForm::treeView1_AfterSelect);
			// 
			// imageList1
			// 
			this->imageList1->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^>(resources->GetObject(L"imageList1.ImageStream")));
			this->imageList1->TransparentColor = System::Drawing::Color::Transparent;
			this->imageList1->Images->SetKeyName(0, L"Example");
			this->imageList1->Images->SetKeyName(1, L"Iron Ingot");
			this->imageList1->Images->SetKeyName(2, L"Copper Ingot");
			this->imageList1->Images->SetKeyName(3, L"Steel Ingot");
			this->imageList1->Images->SetKeyName(4, L"Caterium Ingot");
			this->imageList1->Images->SetKeyName(5, L"Wire");
			this->imageList1->Images->SetKeyName(6, L"Computer");
			this->imageList1->Images->SetKeyName(7, L"Heavy Modular Frame");
			this->imageList1->Images->SetKeyName(8, L"Limestone");
			this->imageList1->Images->SetKeyName(9, L"Water");
			this->imageList1->Images->SetKeyName(10, L"Modular Frame");
			this->imageList1->Images->SetKeyName(11, L"Plastic");
			this->imageList1->Images->SetKeyName(12, L"Raw Quartz");
			this->imageList1->Images->SetKeyName(13, L"Aluminum Scrap");
			this->imageList1->Images->SetKeyName(14, L"Alumina Solution");
			this->imageList1->Images->SetKeyName(15, L"Concrete");
			this->imageList1->Images->SetKeyName(16, L"Heavy Oil Residue");
			this->imageList1->Images->SetKeyName(17, L"Quickwire");
			this->imageList1->Images->SetKeyName(18, L"Motor");
			this->imageList1->Images->SetKeyName(19, L"Iron Ore");
			this->imageList1->Images->SetKeyName(20, L"Copper Ore");
			this->imageList1->Images->SetKeyName(21, L"Caterium Ore");
			this->imageList1->Images->SetKeyName(22, L"Coal");
			this->imageList1->Images->SetKeyName(23, L"Sulfur");
			this->imageList1->Images->SetKeyName(24, L"Bauxite");
			this->imageList1->Images->SetKeyName(25, L"Uranium");
			this->imageList1->Images->SetKeyName(26, L"Crude Oil");
			this->imageList1->Images->SetKeyName(27, L"Fuel");
			this->imageList1->Images->SetKeyName(28, L"Sulfur Acid");
			this->imageList1->Images->SetKeyName(29, L"Aluminum Ingot");
			this->imageList1->Images->SetKeyName(30, L"Quartz Crystal");
			this->imageList1->Images->SetKeyName(31, L"Polymer Resin");
			this->imageList1->Images->SetKeyName(32, L"Petroleum Coke");
			this->imageList1->Images->SetKeyName(33, L"Silica");
			this->imageList1->Images->SetKeyName(34, L"Black Powder");
			this->imageList1->Images->SetKeyName(35, L"Cable");
			this->imageList1->Images->SetKeyName(36, L"Iron Rod");
			this->imageList1->Images->SetKeyName(37, L"Screw");
			this->imageList1->Images->SetKeyName(38, L"Iron Plate");
			this->imageList1->Images->SetKeyName(39, L"Reinforced Iron Plate");
			this->imageList1->Images->SetKeyName(40, L"Copper Sheet");
			this->imageList1->Images->SetKeyName(41, L"Alclad Aluminum Sheet");
			this->imageList1->Images->SetKeyName(42, L"Rubber");
			this->imageList1->Images->SetKeyName(43, L"Steel Pipe");
			this->imageList1->Images->SetKeyName(44, L"Steel Beam");
			this->imageList1->Images->SetKeyName(45, L"Encased Industrial Beam");
			this->imageList1->Images->SetKeyName(46, L"Crystal Oscillator");
			this->imageList1->Images->SetKeyName(47, L"Fabric");
			this->imageList1->Images->SetKeyName(48, L"Rotor");
			this->imageList1->Images->SetKeyName(49, L"Stator");
			this->imageList1->Images->SetKeyName(50, L"Circuit Board");
			this->imageList1->Images->SetKeyName(51, L"A.I. Limiter");
			this->imageList1->Images->SetKeyName(52, L"High-Speed Connector");
			this->imageList1->Images->SetKeyName(53, L"Battery");
			this->imageList1->Images->SetKeyName(54, L"Heat Sink");
			this->imageList1->Images->SetKeyName(55, L"Radio Control Unit");
			this->imageList1->Images->SetKeyName(56, L"Turbo Motor");
			this->imageList1->Images->SetKeyName(57, L"Electromagnetic Control Rod");
			this->imageList1->Images->SetKeyName(58, L"Uranium Pellet");
			this->imageList1->Images->SetKeyName(59, L"Encased Uranium Cell");
			this->imageList1->Images->SetKeyName(60, L"Beacon");
			this->imageList1->Images->SetKeyName(61, L"Nuclear Fuel Rod");
			this->imageList1->Images->SetKeyName(62, L"Gas Filter");
			this->imageList1->Images->SetKeyName(63, L"Rifle Cartridge");
			this->imageList1->Images->SetKeyName(64, L"Iodine Infused Filter");
			this->imageList1->Images->SetKeyName(65, L"Smart Plating");
			this->imageList1->Images->SetKeyName(66, L"Versatile Framework");
			this->imageList1->Images->SetKeyName(67, L"Automated Wiring");
			this->imageList1->Images->SetKeyName(68, L"Modular Engine");
			this->imageList1->Images->SetKeyName(69, L"Adaptive Control Unit");
			this->imageList1->Images->SetKeyName(70, L"Empty Canister");
			this->imageList1->Images->SetKeyName(71, L"Mycelia");
			this->imageList1->Images->SetKeyName(72, L"Biomass");
			this->imageList1->Images->SetKeyName(73, L"Compacted Coal");
			this->imageList1->Images->SetKeyName(74, L"Delete");
			this->imageList1->Images->SetKeyName(75, L"Supercomputer");
			this->imageList1->Images->SetKeyName(76, L"Energy");
			this->imageList1->Images->SetKeyName(77, L"Smelter");
			this->imageList1->Images->SetKeyName(78, L"Foundry");
			this->imageList1->Images->SetKeyName(79, L"Refinery");
			this->imageList1->Images->SetKeyName(80, L"Constructor");
			this->imageList1->Images->SetKeyName(81, L"Assembler");
			this->imageList1->Images->SetKeyName(82, L"Manufacturer");
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label1->Location = System::Drawing::Point(473, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(30, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Item:";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label2->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label2->Location = System::Drawing::Point(517, 9);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(35, 15);
			this->label2->TabIndex = 2;
			this->label2->Text = L"None";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// listBox1
			// 
			this->listBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(22)), static_cast<System::Int32>(static_cast<System::Byte>(23)),
				static_cast<System::Int32>(static_cast<System::Byte>(26)));
			this->listBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->listBox1->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Items->AddRange(gcnew cli::array< System::Object^  >(53) {
				L"A.I. Limiter", L"Adaptive Control Unit", L"Alclad Aluminum Sheet",
					L"Aluminum Ingot (Recipe: 1)", L"Aluminum Scrap (Recipe: 1)", L"Automated Wiring (Recipe: 1)", L"Battery", L"Beacon (Recipe: 1)",
					L"Black Powder (Recipe: 1)", L"Cable (Recipe: 1)", L"Caterium Ingot (Recipe: 1)", L"Circuit Board (Recipe: 1)", L"Computer (Recipe: 1)",
					L"Concrete (Recipe: 1)", L"Copper Ingot (Recipe: 1)", L"Copper Sheet (Recipe: 1)", L"Crystal Oscillator (Recipe: 1)", L"Electromagnetic Control Rod (Recipe: 1)",
					L"Empty Canister", L"Encased Industrial Beam (Recipe: 1)", L"Encased Uranium Cell (Recipe: 1)", L"Fabric (Recipe: 1)", L"Gas Filter",
					L"Heat Sink (Recipe: 1)", L"Heavy Modular Frame (Recipe: 1)", L"High-Speed Connector (Recipe: 1)", L"Iodine Infused Filter",
					L"Iron Ingot (Recipe: 1)", L"Iron Plate (Recipe: 1)", L"Iron Rod (Recipe: 1)", L"Modular Engine", L"Modular Frame (Recipe: 1)",
					L"Motor (Recipe: 1)", L"Nuclear Fuel Rod (Recipe: 1)", L"Plastic (Recipe: 1)", L"Quartz Crystal (Recipe: 1)", L"Quickwire (Recipe: 1)",
					L"Radio Control Unit (Recipe: 1)", L"Reinforced Iron Plate (Recipe: 1)", L"Rifle Cartridge", L"Rotor (Recipe: 1)", L"Rubber (Recipe: 1)",
					L"Screw (Recipe: 1)", L"Silica (Recipe: 1)", L"Smart Plating (Recipe: 1)", L"Stator (Recipe: 1)", L"Steel Beam", L"Steel Ingot (Recipe: 1)",
					L"Steel Pipe", L"Supercomputer", L"Turbo Motor (Recipe: 1)", L"Versatile Framework (Recipe: 1)", L"Wire (Recipe: 1)"
			});
			this->listBox1->Location = System::Drawing::Point(476, 77);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(251, 249);
			this->listBox1->Sorted = true;
			this->listBox1->TabIndex = 3;
			this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::listBox1_SelectedIndexChanged);
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(22)), static_cast<System::Int32>(static_cast<System::Byte>(23)),
				static_cast<System::Int32>(static_cast<System::Byte>(26)));
			this->numericUpDown1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->numericUpDown1->DecimalPlaces = 2;
			this->numericUpDown1->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->numericUpDown1->Location = System::Drawing::Point(556, 25);
			this->numericUpDown1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1010, 0, 0, 0 });
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(171, 20);
			this->numericUpDown1->TabIndex = 4;
			this->numericUpDown1->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label3->Location = System::Drawing::Point(12, 9);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(68, 13);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Factory map:";
			this->label3->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Checked = true;
			this->radioButton1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->radioButton1->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->radioButton1->Location = System::Drawing::Point(476, 349);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(71, 17);
			this->radioButton1->TabIndex = 6;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Recipe 1:";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton1_CheckedChanged);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->radioButton2->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->radioButton2->Location = System::Drawing::Point(476, 422);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(71, 17);
			this->radioButton2->TabIndex = 7;
			this->radioButton2->Text = L"Recipe 2:";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton2_CheckedChanged);
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->radioButton3->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->radioButton3->Location = System::Drawing::Point(476, 495);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(71, 17);
			this->radioButton3->TabIndex = 8;
			this->radioButton3->Text = L"Recipe 3:";
			this->radioButton3->UseVisualStyleBackColor = true;
			this->radioButton3->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton3_CheckedChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label4->Location = System::Drawing::Point(473, 27);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(77, 13);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Count/ minute:";
			this->label4->Click += gcnew System::EventHandler(this, &MyForm::label4_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Cursor = System::Windows::Forms::Cursors::Default;
			this->label5->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label5->Location = System::Drawing::Point(553, 351);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(33, 65);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Item1\r\nItem2\r\nItem3\r\nItem4\r\nItem5";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label6->Location = System::Drawing::Point(553, 424);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(33, 65);
			this->label6->TabIndex = 11;
			this->label6->Text = L"Item1\r\nItem2\r\nItem3\r\nItem4\r\nItem5";
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->radioButton4->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->radioButton4->Location = System::Drawing::Point(476, 568);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(71, 17);
			this->radioButton4->TabIndex = 12;
			this->radioButton4->Text = L"Recipe 4:";
			this->radioButton4->UseVisualStyleBackColor = true;
			this->radioButton4->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton4_CheckedChanged);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label7->Location = System::Drawing::Point(553, 497);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(33, 65);
			this->label7->TabIndex = 13;
			this->label7->Text = L"Item1\r\nItem2\r\nItem3\r\nItem4\r\nItem5\r\n";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label8->Location = System::Drawing::Point(553, 570);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(33, 65);
			this->label8->TabIndex = 14;
			this->label8->Text = L"Item1\r\nItem2\r\nItem3\r\nItem4\r\nItem5";
			// 
			// listView1
			// 
			this->listView1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(22)), static_cast<System::Int32>(static_cast<System::Byte>(23)),
				static_cast<System::Int32>(static_cast<System::Byte>(26)));
			this->listView1->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->listView1->HideSelection = false;
			this->listView1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ListViewItem^  >(2) { listViewItem1, listViewItem2 });
			this->listView1->Location = System::Drawing::Point(12, 617);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(454, 133);
			this->listView1->SmallImageList = this->imageList1;
			this->listView1->TabIndex = 15;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::List;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label9->Location = System::Drawing::Point(9, 601);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(73, 13);
			this->label9->TabIndex = 16;
			this->label9->Text = L"Total needed:";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(52)), static_cast<System::Int32>(static_cast<System::Byte>(53)),
				static_cast<System::Int32>(static_cast<System::Byte>(56)));
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->Enabled = false;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->button1->Location = System::Drawing::Point(472, 640);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(251, 52);
			this->button1->TabIndex = 17;
			this->button1->Text = L"Calculate";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(53)), static_cast<System::Int32>(static_cast<System::Byte>(54)),
				static_cast<System::Int32>(static_cast<System::Byte>(56)));
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->button2->Location = System::Drawing::Point(472, 698);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(251, 52);
			this->button2->TabIndex = 18;
			this->button2->Text = L"Delete tree";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(22)), static_cast<System::Int32>(static_cast<System::Byte>(23)),
				static_cast<System::Int32>(static_cast<System::Byte>(26)));
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox1->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->textBox1->Location = System::Drawing::Point(501, 51);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(226, 20);
			this->textBox1->TabIndex = 19;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(476, 51);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(19, 20);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 20;
			this->pictureBox1->TabStop = false;
			// 
			// vanillaItems
			// 
			this->vanillaItems->ImageIndex = 75;
			this->vanillaItems->ImageList = this->imageList1;
			this->vanillaItems->Location = System::Drawing::Point(476, 372);
			this->vanillaItems->Name = L"vanillaItems";
			treeNode7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			treeNode7->ForeColor = System::Drawing::Color::Red;
			treeNode7->Name = L"Óçåë0";
			treeNode7->Text = L"A.I. Limiter";
			treeNode8->Name = L"Óçåë1";
			treeNode8->Text = L"Adaptive Control Unit";
			treeNode9->Name = L"Óçåë2";
			treeNode9->Text = L"Alclad Aluminum Sheet";
			treeNode10->Name = L"Óçåë3";
			treeNode10->Text = L"Aluminum Ingot (Recipe: 1)";
			treeNode11->Name = L"Óçåë4";
			treeNode11->Text = L"Aluminum Scrap (Recipe: 1)";
			treeNode12->Name = L"Óçåë5";
			treeNode12->Text = L"Automated Wiring (Recipe: 1)";
			treeNode13->Name = L"Óçåë6";
			treeNode13->Text = L"Battery";
			treeNode14->Name = L"Óçåë7";
			treeNode14->Text = L"Beacon (Recipe: 1)";
			treeNode15->Name = L"Óçåë8";
			treeNode15->Text = L"Black Powder (Recipe: 1)";
			treeNode16->Name = L"Óçåë9";
			treeNode16->Text = L"Cable (Recipe: 1)";
			treeNode17->Name = L"Óçåë10";
			treeNode17->Text = L"Caterium Ingot (Recipe: 1)";
			treeNode18->Name = L"Óçåë11";
			treeNode18->Text = L"Circuit Board (Recipe: 1)";
			treeNode19->Name = L"Óçåë12";
			treeNode19->Text = L"Computer (Recipe: 1)";
			treeNode20->Name = L"Óçåë13";
			treeNode20->Text = L"Concrete (Recipe: 1)";
			treeNode21->Name = L"Óçåë14";
			treeNode21->Text = L"Copper Ingot (Recipe: 1)";
			treeNode22->Name = L"Óçåë15";
			treeNode22->Text = L"Copper Sheet (Recipe: 1)";
			treeNode23->Name = L"Óçåë16";
			treeNode23->Text = L"Crystal Oscillator (Recipe: 1)";
			treeNode24->Name = L"Óçåë17";
			treeNode24->Text = L"Electromagnetic Control Rod (Recipe: 1)";
			treeNode25->Name = L"Óçåë18";
			treeNode25->Text = L"Empty Canister";
			treeNode26->Name = L"Óçåë19";
			treeNode26->Text = L"Encased Industrial Beam (Recipe: 1)";
			treeNode27->Name = L"Óçåë20";
			treeNode27->Text = L"Encased Uranium Cell (Recipe: 1)";
			treeNode28->Name = L"Óçåë21";
			treeNode28->Text = L"Fabric (Recipe: 1)";
			treeNode29->Name = L"Óçåë22";
			treeNode29->Text = L"Gas Filter";
			treeNode30->Name = L"Óçåë23";
			treeNode30->Text = L"Heat Sink (Recipe: 1)";
			treeNode31->Name = L"Óçåë24";
			treeNode31->Text = L"Heavy Modular Frame (Recipe: 1)";
			treeNode32->Name = L"Óçåë25";
			treeNode32->Text = L"High-Speed Connector (Recipe: 1)";
			treeNode33->Name = L"Óçåë26";
			treeNode33->Text = L"Iodine Infused Filter";
			treeNode34->Name = L"Óçåë27";
			treeNode34->Text = L"Iron Ingot (Recipe: 1)";
			treeNode35->Name = L"Óçåë28";
			treeNode35->Text = L"Iron Plate (Recipe: 1)";
			treeNode36->Name = L"Óçåë29";
			treeNode36->Text = L"Iron Rod (Recipe: 1)";
			treeNode37->Name = L"Óçåë30";
			treeNode37->Text = L"Modular Engine";
			treeNode38->Name = L"Óçåë31";
			treeNode38->Text = L"Modular Frame (Recipe: 1)";
			treeNode39->Name = L"Óçåë32";
			treeNode39->Text = L"Motor (Recipe: 1)";
			treeNode40->Name = L"Óçåë33";
			treeNode40->Text = L"Nuclear Fuel Rod (Recipe: 1)";
			treeNode41->Name = L"Óçåë34";
			treeNode41->Text = L"Plastic (Recipe: 1)";
			treeNode42->Name = L"Óçåë35";
			treeNode42->Text = L"Quartz Crystal (Recipe: 1)";
			treeNode43->Name = L"Óçåë36";
			treeNode43->Text = L"Quickwire (Recipe: 1)";
			treeNode44->Name = L"Óçåë37";
			treeNode44->Text = L"Radio Control Unit (Recipe: 1)";
			treeNode45->Name = L"Óçåë38";
			treeNode45->Text = L"Reinforced Iron Plate (Recipe: 1)";
			treeNode46->Name = L"Óçåë39";
			treeNode46->Text = L"Rifle Cartridge";
			treeNode47->Name = L"Óçåë40";
			treeNode47->Text = L"Rotor (Recipe: 1)";
			treeNode48->Name = L"Óçåë41";
			treeNode48->Text = L"Rubber (Recipe: 1)";
			treeNode49->Name = L"Óçåë42";
			treeNode49->Text = L"Screw (Recipe: 1)";
			treeNode50->Name = L"Óçåë43";
			treeNode50->Text = L"Silica (Recipe: 1)";
			treeNode51->Name = L"Óçåë44";
			treeNode51->Text = L"Smart Plating (Recipe: 1)";
			treeNode52->Name = L"Óçåë45";
			treeNode52->Text = L"Stator (Recipe: 1)";
			treeNode53->Name = L"Óçåë46";
			treeNode53->Text = L"Steel Beam";
			treeNode54->Name = L"Óçåë47";
			treeNode54->Text = L"Steel Ingot (Recipe: 1)";
			treeNode55->Name = L"Óçåë48";
			treeNode55->Text = L"Steel Pipe";
			treeNode56->Name = L"Óçåë49";
			treeNode56->Text = L"Supercomputer";
			treeNode57->Name = L"Óçåë50";
			treeNode57->Text = L"Turbo Motor (Recipe: 1)";
			treeNode58->Name = L"Óçåë51";
			treeNode58->Text = L"Versatile Framework (Recipe: 1)";
			treeNode59->Name = L"Óçåë52";
			treeNode59->Text = L"Wire (Recipe: 1)";
			this->vanillaItems->Nodes->AddRange(gcnew cli::array< System::Windows::Forms::TreeNode^  >(53) {
				treeNode7, treeNode8, treeNode9,
					treeNode10, treeNode11, treeNode12, treeNode13, treeNode14, treeNode15, treeNode16, treeNode17, treeNode18, treeNode19, treeNode20,
					treeNode21, treeNode22, treeNode23, treeNode24, treeNode25, treeNode26, treeNode27, treeNode28, treeNode29, treeNode30, treeNode31,
					treeNode32, treeNode33, treeNode34, treeNode35, treeNode36, treeNode37, treeNode38, treeNode39, treeNode40, treeNode41, treeNode42,
					treeNode43, treeNode44, treeNode45, treeNode46, treeNode47, treeNode48, treeNode49, treeNode50, treeNode51, treeNode52, treeNode53,
					treeNode54, treeNode55, treeNode56, treeNode57, treeNode58, treeNode59
			});
			this->vanillaItems->SelectedImageIndex = 0;
			this->vanillaItems->ShowLines = false;
			this->vanillaItems->ShowPlusMinus = false;
			this->vanillaItems->Size = System::Drawing::Size(251, 21);
			this->vanillaItems->TabIndex = 21;
			this->vanillaItems->Visible = false;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label10->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label10->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label10->Location = System::Drawing::Point(476, 329);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(89, 15);
			this->label10->TabIndex = 22;
			this->label10->Text = L"Mods Installed: 0";
			this->label10->Click += gcnew System::EventHandler(this, &MyForm::label10_Click);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->checkBox1->Location = System::Drawing::Point(12, 568);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(95, 17);
			this->checkBox1->TabIndex = 24;
			this->checkBox1->Text = L"Reverse mode";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->Visible = false;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox1_CheckedChanged);
			// 
			// reverseItemList
			// 
			this->reverseItemList->AutoSize = true;
			this->reverseItemList->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->reverseItemList->Cursor = System::Windows::Forms::Cursors::Hand;
			this->reverseItemList->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->reverseItemList->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->reverseItemList->Location = System::Drawing::Point(113, 569);
			this->reverseItemList->Name = L"reverseItemList";
			this->reverseItemList->Size = System::Drawing::Size(60, 15);
			this->reverseItemList->TabIndex = 26;
			this->reverseItemList->Text = L"Item List: 0";
			this->reverseItemList->Visible = false;
			this->reverseItemList->Click += gcnew System::EventHandler(this, &MyForm::reverseItemList_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(52)), static_cast<System::Int32>(static_cast<System::Byte>(53)),
				static_cast<System::Int32>(static_cast<System::Byte>(56)));
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->Enabled = false;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->button3->Location = System::Drawing::Point(635, 640);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(88, 52);
			this->button3->TabIndex = 27;
			this->button3->Text = L"Add in Item List";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Visible = false;
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(52)), static_cast<System::Int32>(static_cast<System::Byte>(53)),
				static_cast<System::Int32>(static_cast<System::Byte>(56)));
			this->button4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button4->Enabled = false;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->button4->Location = System::Drawing::Point(635, 698);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(88, 52);
			this->button4->TabIndex = 28;
			this->button4->Text = L"Delete from Item List";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Visible = false;
			// 
			// reverseItemView
			// 
			this->reverseItemView->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(22)), static_cast<System::Int32>(static_cast<System::Byte>(23)),
				static_cast<System::Int32>(static_cast<System::Byte>(26)));
			this->reverseItemView->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->reverseItemView->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->reverseItemView->HideSelection = false;
			this->reverseItemView->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			listViewItem3->StateImageIndex = 0;
			this->reverseItemView->Items->AddRange(gcnew cli::array< System::Windows::Forms::ListViewItem^  >(1) { listViewItem3 });
			this->reverseItemView->Location = System::Drawing::Point(113, 587);
			this->reverseItemView->Name = L"reverseItemView";
			this->reverseItemView->Size = System::Drawing::Size(251, 24);
			this->reverseItemView->SmallImageList = this->imageList1;
			this->reverseItemView->Sorting = System::Windows::Forms::SortOrder::Ascending;
			this->reverseItemView->TabIndex = 29;
			this->reverseItemView->UseCompatibleStateImageBehavior = false;
			this->reverseItemView->View = System::Windows::Forms::View::List;
			this->reverseItemView->Visible = false;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label11->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label11->ForeColor = System::Drawing::Color::Cyan;
			this->label11->Location = System::Drawing::Point(435, 569);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(31, 15);
			this->label11->TabIndex = 30;
			this->label11->Text = L"Help";
			this->label11->Click += gcnew System::EventHandler(this, &MyForm::label11_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(12, 90);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(454, 476);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 31;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Visible = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &MyForm::pictureBox2_Click);
			// 
			// vScrollBar1
			// 
			this->vScrollBar1->Location = System::Drawing::Point(709, 349);
			this->vScrollBar1->Maximum = 11;
			this->vScrollBar1->Name = L"vScrollBar1";
			this->vScrollBar1->Size = System::Drawing::Size(18, 284);
			this->vScrollBar1->SmallChange = 2;
			this->vScrollBar1->TabIndex = 33;
			this->vScrollBar1->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &MyForm::vScrollBar1_Scroll);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label12->Location = System::Drawing::Point(686, 331);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(41, 13);
			this->label12->TabIndex = 34;
			this->label12->Text = L"label12";
			// 
			// checkedListBox1
			// 
			this->checkedListBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(22)), static_cast<System::Int32>(static_cast<System::Byte>(23)),
				static_cast<System::Int32>(static_cast<System::Byte>(26)));
			this->checkedListBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->checkedListBox1->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->checkedListBox1->FormattingEnabled = true;
			this->checkedListBox1->Items->AddRange(gcnew cli::array< System::Object^  >(1) { L"Refined Power v.2.1.7" });
			this->checkedListBox1->Location = System::Drawing::Point(476, 347);
			this->checkedListBox1->Name = L"checkedListBox1";
			this->checkedListBox1->Size = System::Drawing::Size(251, 15);
			this->checkedListBox1->Sorted = true;
			this->checkedListBox1->TabIndex = 35;
			this->checkedListBox1->Visible = false;
			this->checkedListBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::checkedListBox1_SelectedIndexChanged_1);
			// 
			// modItems
			// 
			this->modItems->Location = System::Drawing::Point(476, 395);
			this->modItems->Name = L"modItems";
			treeNode60->Name = L"Carbon Dust";
			treeNode60->Text = L"Carbon Dust";
			treeNode61->Name = L"Carbon Mesh";
			treeNode61->Text = L"Carbon Mesh";
			treeNode62->Name = L"Refined Carbon";
			treeNode62->Text = L"Refined Carbon";
			treeNode63->Name = L"Refined Power";
			treeNode63->Text = L"Refined Power";
			this->modItems->Nodes->AddRange(gcnew cli::array< System::Windows::Forms::TreeNode^  >(1) { treeNode63 });
			this->modItems->Size = System::Drawing::Size(251, 21);
			this->modItems->TabIndex = 36;
			this->modItems->Visible = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(34)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->ClientSize = System::Drawing::Size(739, 762);
			this->Controls->Add(this->modItems);
			this->Controls->Add(this->checkedListBox1);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->vScrollBar1);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->reverseItemView);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->reverseItemList);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->vanillaItems);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->listView1);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->radioButton4);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->radioButton3);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->numericUpDown1);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->treeView1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->SizeGripStyle = System::Windows::Forms::SizeGripStyle::Hide;
			this->Text = L"Satisfactory calculator";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
//=====================================================================================================================	Functions
#define dicount4 double(int(count*10000)/10000.0)	

		/*done-res*/ TreeNode^ petroleumCoke(long double *Wt, double count) {
			long double machines = 10000 * count, fWt = 0, aWt = 0;
			short image = 0;
			TreeNode^ out = gcnew TreeNode();
			out->ImageKey = "Petroleum Coke"; out->SelectedImageKey = "Petroleum Coke";
			
			machines /= 120.0;
			machines = int(machines) / 10000.0;
			*Wt += machines * 30.0;
			
			out->Text = ("(" + machines + " - Refinery) " + dicount4 + " - Petroleum Coke (" + *Wt + " MW)");
			out->Nodes->Add(double(int(count * 10000.0 / 3.0) / 10000.0) + " - Heavy Oil Residue");
			out->Nodes[image]->ImageKey = "Heavy Oil Residue"; out->Nodes[image++]->SelectedImageKey = "Heavy Oil Residue";

			Trefinery[lvlcount] += ceil(machines);
			TheavyOilResidue[lvlcount] += double(int(count * 10000.0 / 3.0) / 10000.0);

			out->ExpandAll();
			*Wt += aWt;
			Tenergy[lvlcount] = *Wt;
			return out;
		}
		/*done-res*/ TreeNode^ compactedCoal(long double* Wt, double count) {
			long double machines = 10000 * count, fWt = 0, aWt = 0;
			short image = 0;
			TreeNode^ out = gcnew TreeNode();
			out->ImageKey = "Compacted Coal"; out->SelectedImageKey = "Compacted Coal";

			machines /= 25.0;
			machines = int(machines) / 10000.0;
			*Wt += machines * 15.0;

			out->Text = ("(" + machines + " - Assembler) " + dicount4 + " - Compacted Coal (" + *Wt + " MW)");
			out->Nodes->Add(dicount4 + " - Coal");
			out->Nodes[image]->ImageKey = "Coal"; out->Nodes[image++]->SelectedImageKey = "Coal";
			out->Nodes->Add(dicount4 + " - Sulfur");
			out->Nodes[image]->ImageKey = "Sulfur"; out->Nodes[image++]->SelectedImageKey = "Sulfur";

			Tassembler[lvlcount] += ceil(machines);
			Tcoal[lvlcount] += dicount4;
			Tsulfur[lvlcount] += dicount4;

			out->ExpandAll();
			*Wt += aWt;
			Tenergy[lvlcount] = *Wt;
			return out;
		}
		/*done-res*/ TreeNode^ silica(long double *Wt, double count) {
			long double machines = 10000 * count, fWt = 0, aWt = 0;
			short image = 0;
			TreeNode^ out = gcnew TreeNode();
			out->ImageKey = "Silica"; out->SelectedImageKey = "Silica";

			if (silica_recipe == 1) {
				machines /= 37.5;
				machines = int(machines) / 10000.0;
				*Wt += machines * 4.0;

				out->Text = ("(" + machines + " - Constructor) " + dicount4 + " - Silica [1] (" + *Wt + " MW)");
				out->Nodes->Add(double(int(count * 30000.0/5.0) / 10000.0) + " - Raw Quartz");
				out->Nodes[image]->ImageKey = "Raw Quartz"; out->Nodes[image++]->SelectedImageKey = "Raw Quartz";
				
				Tconstructor[lvlcount] += ceil(machines);
				TrawQuartz[lvlcount] += double(int(count * 30000.0 / 5.0) / 10000.0);
				
			}
			else if (silica_recipe == 2) {
				machines /= 26.25;
				machines = int(machines) / 10000.0;
				*Wt += machines * 15.0;
				
				out->Text = ("(" + machines + " - Assembler) " + dicount4 + " - Silica [2] (" + *Wt + " MW)");
				out->Nodes->Add(double(int(count * 30000.0 / 7.0) / 10000.0) + " - Raw Quartz");
				out->Nodes[image]->ImageKey = "Raw Quartz"; out->Nodes[image++]->SelectedImageKey = "Raw Quartz";
				out->Nodes->Add(double(int(count * 50000.0 / 7.0) / 10000.0) + " - Limestone");
				out->Nodes[image]->ImageKey = "Limestone"; out->Nodes[image++]->SelectedImageKey = "Limestone";
				
				Tassembler[lvlcount] += ceil(machines);
				TrawQuartz[lvlcount] += double(int(count * 30000.0 / 7.0) / 10000.0);
				Tlimestone[lvlcount] += double(int(count * 50000.0 / 7.0) / 10000.0);
				
			}
			else {
				machines /= 20.0;
				machines = int(machines) / 10000.0;
				*Wt += machines * 30.0;
				
				out->Text = ("(" + machines + " - Refinery) " + dicount4 + " - Silica [3] (" + *Wt + " MW)");
				out->Nodes->Add(double(int(count * 70000.0 / 2.0) / 10000.0) + " - Bauxite");
				out->Nodes[image]->ImageKey = "Bauxite"; out->Nodes[image++]->SelectedImageKey = "Bauxite";
				out->Nodes->Add((dicount4 * 5) + " - Water");
				out->Nodes[image]->ImageKey = "Water"; out->Nodes[image++]->SelectedImageKey = "Water";
				out->Nodes->Add("+" + (dicount4 * 4) + " - Alumina Solution");
				out->Nodes[image]->ImageKey = "Alumina Solution"; out->Nodes[image++]->SelectedImageKey = "Alumina Solution";
				
				Trefinery[lvlcount] += ceil(machines);
				Tbauxite[lvlcount] += double(int(count * 70000.0 / 2.0) / 10000.0);
				Twater[lvlcount] += (dicount4 * 5);
				TaluminaSolution[lvlcount] -= (dicount4 * 4);
				
			}
			out->ExpandAll();
			*Wt += aWt;
			Tenergy[lvlcount] = *Wt;
			return out;
		}
		/*done-res*/ TreeNode^ aluminaSolution(long double* Wt, double count) {
			long double machines = 10000 * count, fWt = 0, aWt = 0;
			short image = 0;
			TreeNode^ out = gcnew TreeNode();
			out->ImageKey = "Alumina Solution"; out->SelectedImageKey = "Alumina Solution";

			machines /= 80.0;
			machines = int(machines) / 10000.0;
			*Wt += machines * 30.0;

			int Arecipe = silica_recipe;
			silica_recipe = 3;
			out->Nodes->Add(silica(Wt, count / 4.0));
			fWt += *Wt; *Wt = fWt; image++; silica_recipe = Arecipe;
			out->Text = "(" + machines + " - Refinery) " + dicount4 + " - Alumina Solution (" + aWt + " + " + *Wt + " MW)";

			Trefinery[lvlcount] += ceil(machines);
			TaluminaSolution[lvlcount] += dicount4;

			out->ExpandAll();
			*Wt += aWt;
			Tenergy[lvlcount] = *Wt;
			return out;
		}
		/*done-res*/ TreeNode^ quartzCrystal(long double *Wt, double count) {
			long double machines = 10000 * count, fWt = 0, aWt = 0;
			short image = 0;
			TreeNode^ out = gcnew TreeNode();
			out->ImageKey = "Quartz Crystal"; out->SelectedImageKey = "Quartz Crystal";

			if (quartz_crystal_recipe == 1) {
				machines /= 22.5;
				machines = int(machines) / 10000.0;
				*Wt += machines * 4.0;

				out->Text = ("(" + machines + " - Constructor) " + dicount4 + " - Quartz Crystal [1] (" + *Wt + " MW)");
				out->Nodes->Add(double(int(count * 50000.0 / 3.0) / 10000.0) + " - Raw Quartz");
				out->Nodes[image]->ImageKey = "Raw Quartz"; out->Nodes[image++]->SelectedImageKey = "Raw Quartz";

				Tconstructor[lvlcount] += ceil(machines);
				TrawQuartz[lvlcount] += double(int(count * 50000.0 / 3.0) / 10000.0);
				
			}
			else {
				machines /= 52.5;
				machines = int(machines) / 10000.0;
				*Wt += machines * 30.0;
				
				out->Text = ("(" + machines + " - Refinery) " + dicount4 + " - Quartz Crystal [2] (" + *Wt + " MW)");
				out->Nodes->Add(double(int(count * 90000.0 / 7.0) / 10000.0) + " - Raw Quartz");
				out->Nodes[image]->ImageKey = "Raw Quartz"; out->Nodes[image++]->SelectedImageKey = "Raw Quartz";
				out->Nodes->Add(double(int(count * 50000.0 / 7.0) / 10000.0) + " - Water");
				out->Nodes[image]->ImageKey = "Water"; out->Nodes[image++]->SelectedImageKey = "Water";

				Trefinery[lvlcount] += ceil(machines);
				TrawQuartz[lvlcount] += double(int(count * 90000.0 / 7.0) / 10000.0);
				Twater[lvlcount] += double(int(count * 50000.0 / 7.0) / 10000.0);
				
			}
			out->ExpandAll();
			*Wt += aWt;
			Tenergy[lvlcount] = *Wt;
			return out;
		}
		/*done-res*/ TreeNode^ ironIngot(long double *Wt, double count) {
			long double machines = 10000*count, fWt = 0, aWt = 0;
			short image = 0;
			TreeNode^ out = gcnew TreeNode();
			out->ImageKey = "Iron Ingot"; out->SelectedImageKey = "Iron Ingot";

			if (iron_ingot_recipe == 1) {
				machines /= 30.0;
				machines = int(machines) / 10000.0;
				*Wt += machines * 4.0;

				out->Text = ("(" + machines + " - Smelter) " + dicount4 + " - Iron Ingot [1] (" + *Wt + " MW)");
				out->Nodes->Add(dicount4 + " - Iron Ore");
				out->Nodes[image]->ImageKey = "Iron Ore"; out->Nodes[image++]->SelectedImageKey = "Iron Ore";

				Tsmelter[lvlcount] += ceil(machines);
				TironOre[lvlcount] += dicount4;

			}
			else if (iron_ingot_recipe == 2) {
				machines /= 65.0;
				machines = int(machines) / 10000.0;
				*Wt += machines * 30.0;

				out->Text = ("(" + machines + " - Refinery) " + dicount4 + " - Iron Ingot [2] (" + *Wt + " MW)");
				out->Nodes->Add(double(int(count * 650000.0 / 35.0) / 10000.0) + " - Iron Ore");
				out->Nodes[image]->ImageKey = "Iron Ore"; out->Nodes[image++]->SelectedImageKey = "Iron Ore";
				out->Nodes->Add(double(int(count * 650000.0 / 20.0) / 10000.0) + " - Water");
				out->Nodes[image]->ImageKey = "Water"; out->Nodes[image++]->SelectedImageKey = "Water";

				Trefinery[lvlcount] += ceil(machines);
				TironOre[lvlcount] += double(int(count * 650000.0 / 35.0) / 10000.0);
				Twater[lvlcount] += double(int(count * 650000.0 / 20.0) / 10000.0);
				
			}
			else {
				machines /= 50.0;
				machines = int(machines) / 10000.0;
				*Wt += machines * 16.0;

				out->Text = ("(" + machines + " - Foundry) " + dicount4 + " - Iron Ingot [3] (" + *Wt + " MW)");
				out->Nodes->Add(dicount4 * 0.4 + " - Iron Ore");
				out->Nodes[image]->ImageKey = "Iron Ore"; out->Nodes[image++]->SelectedImageKey = "Iron Ore";
				out->Nodes->Add(dicount4 * 0.4 + " - Copper Ore");
				out->Nodes[image]->ImageKey = "Copper Ore"; out->Nodes[image++]->SelectedImageKey = "Copper Ore";

				Tfoundry[lvlcount] += ceil(machines);
				TironOre[lvlcount] += dicount4 * 0.4;
				TcopperOre[lvlcount] += dicount4 * 0.4;
				
			}
			out->ExpandAll();
			*Wt += aWt;
			Tenergy[lvlcount] = *Wt;
			return out;
		}
		/*done-res*/ TreeNode^ copperIngot(long double *Wt, double count) {
			long double machines = 10000 * count, fWt = 0, aWt = 0;
			short image = 0;
			TreeNode^ out = gcnew TreeNode();
			out->ImageKey = "Copper Ingot"; out->SelectedImageKey = "Copper Ingot";

			if (copper_ingot_recipe == 1) {
				machines /= 30.0;
				machines = int(machines) / 10000.0;
				*Wt += machines * 4.0;

				out->Text = ("(" + machines + " - Smelter) " + dicount4 + " - Copper Ingot [1] (" + *Wt + " MW)");
				out->Nodes->Add(dicount4 + " - Copper Ore");
				out->Nodes[image]->ImageKey = "Copper Ore"; out->Nodes[image++]->SelectedImageKey = "Copper Ore";

				Tsmelter[lvlcount] += ceil(machines);
				TcopperOre[lvlcount] += dicount4;
				
			}
			else if (copper_ingot_recipe == 2) {
				machines /= 100.0;
				machines = int(machines) / 10000.0;
				*Wt += machines * 16.0;

				out->Text = ("(" + machines + " - Foundry) " + dicount4 + " - Copper Ingot [2] (" + *Wt + " MW)");
				out->Nodes->Add(dicount4 * 0.5 + " - Copper Ore");
				out->Nodes[image]->ImageKey = "Copper Ore"; out->Nodes[image++]->SelectedImageKey = "Copper Ore";
				out->Nodes->Add(dicount4 * 0.25 + " - Iron Ore");
				out->Nodes[image]->ImageKey = "Iron Ore"; out->Nodes[image++]->SelectedImageKey = "Iron Ore";

				Tfoundry[lvlcount] += ceil(machines);
				TcopperOre[lvlcount] += dicount4 * 0.5;
				TironOre[lvlcount] += dicount4 * 0.25;
			
			}
			else {
				machines /= 37.5;
				machines = int(machines) / 10000.0;
				*Wt += machines * 30.0;

				out->Text = ("(" + machines + " - Refinery) " + count + " - Copper Ingot [3] (" + *Wt + " MW)");
				out->Nodes->Add(double(int(count * 150000.0 / 37.5) / 10000.0) + " - Copper Ore");
				out->Nodes[image]->ImageKey = "Copper Ore"; out->Nodes[image++]->SelectedImageKey = "Copper Ore";
				out->Nodes->Add(double(int(count * 100000.0 / 37.5) / 10000.0) + " - Water");
				out->Nodes[image]->ImageKey = "Water"; out->Nodes[image++]->SelectedImageKey = "Water";

				Trefinery[lvlcount] += ceil(machines);
				TcopperOre[lvlcount] += double(int(count * 150000.0 / 37.5) / 10000.0);
				Twater[lvlcount] += double(int(count * 100000.0 / 37.5) / 10000.0);
				
			}
			out->ExpandAll();
			*Wt += aWt;
			Tenergy[lvlcount] = *Wt;
			return out;
		}
		/*done-res*/ TreeNode^ steelIngot(long double *Wt, double count) {
			long double machines = 10000 * count, fWt = 0, aWt = 0;
			short image = 0;
			TreeNode^ out = gcnew TreeNode();
			out->ImageKey = "Steel Ingot"; out->SelectedImageKey = "Steel Ingot";

			if (steel_ingot_recipe == 1) {
				machines /= 45.0;
				machines = int(machines) / 10000.0;
				*Wt += machines * 16.0;
				
				out->Text = ("(" + machines + " - Foundry) " + dicount4 + " - Steel Ingot [1] (" + *Wt + " MW)");
				out->Nodes->Add(dicount4 + " - Iron Ore");
				out->Nodes[image]->ImageKey = "Iron Ore"; out->Nodes[image++]->SelectedImageKey = "Iron Ore";
				out->Nodes->Add(dicount4 + " - Coal");
				out->Nodes[image]->ImageKey = "Coal"; out->Nodes[image++]->SelectedImageKey = "Coal";
				
				Tfoundry[lvlcount] += ceil(machines);
				TironOre[lvlcount] += dicount4;
				Tcoal[lvlcount] += dicount4;

			}
			else if (steel_ingot_recipe == 2) {
				machines /= 100.0;
				machines = int(machines) / 10000.0;
				aWt += machines * 16.0;
				
				out->Nodes->Add(ironIngot(Wt, count * 3.0 / 4.0));
				fWt += *Wt; *Wt = 0; image++;
				out->Nodes->Add(petroleumCoke(Wt, count * 3.0 / 4.0));
				fWt += *Wt; *Wt = fWt; image++;
				out->Text = "(" + machines + " - Foundry) " + dicount4 + " - Steel Ingot [2] (" + aWt + " + " + *Wt + " MW)";
				
				Tfoundry[lvlcount] += ceil(machines);

			}
			else if (steel_ingot_recipe == 3) {
				machines /= 60.0;
				machines = int(machines) / 10000.0;
				aWt += machines * 16.0;
				
				out->Nodes->Add(ironIngot(Wt, count * 2.0 / 3.0));
				fWt += *Wt; *Wt = fWt; image++;
				out->Nodes->Add(double(int(count * 20000.0 / 3.0) / 10000.0) + " - Coal");
				out->Nodes[image]->ImageKey = "Coal"; out->Nodes[image++]->SelectedImageKey = "Coal";
				out->Text = "(" + machines + " - Foundry) " + dicount4 + " - Steel Ingot [3] (" + aWt + " + " + *Wt + " MW)";

				Tfoundry[lvlcount] += ceil(machines);
				Tcoal[lvlcount] += double(int(count * 20000.0 / 3.0) / 10000.0);
				
			}
			else if (steel_ingot_recipe == 4) {
				machines /= 37.5;
				machines = int(machines) / 10000.0;
				aWt += machines * 16.0;
				
				out->Nodes->Add(ironIngot(Wt, count * 22.5 / 37.5));
				fWt += *Wt; *Wt = 0; image++;
				out->Nodes->Add(compactedCoal(Wt, count*3.0/10.0));
				fWt += *Wt; *Wt = fWt; image++;
				out->Text = "(" + machines + " - Foundry) " + dicount4 + " - Steel Ingot [4] (" + aWt + " + " + *Wt + " MW)";
				
				Tfoundry[lvlcount] += ceil(machines);
			}
			/*Refined Power mod*/ else {
				// NOTHING WORK RIGHT
			}
			out->ExpandAll();
			*Wt += aWt;
			Tenergy[lvlcount] = *Wt;
			return out;
		}
		/*done-res*/ TreeNode^ cateriumIngot(long double *Wt, double count) {
			long double machines = 10000 * count, fWt = 0, aWt = 0;
			short image = 0;
			TreeNode^ out = gcnew TreeNode();
			out->ImageKey = "Caterium Ingot"; out->SelectedImageKey = "Caterium Ingot";

			if (caterium_ingot_recipe == 1) {
				machines /= 15.0;
				machines = int(machines) / 10000.0;
				*Wt += machines * 4.0;
					
				out->Text = ("(" + machines + " - Smelter) " + dicount4 + " - Caterium Ingot [1] (" + *Wt + " MW)");
				out->Nodes->Add(dicount4*3 + " - Caterium Ore");
				out->Nodes[image]->ImageKey = "Caterium Ore"; out->Nodes[image++]->SelectedImageKey = "Caterium Ore";
				
				Tsmelter[lvlcount] += ceil(machines);
				TcateriumOre[lvlcount] += dicount4 * 3;

			}
			else {
				machines /= 12.0;
				machines = int(machines) / 10000.0;
				*Wt += machines * 30.0;
				
				out->Text = ("(" + machines + " - Refinery) " + dicount4 + " - Caterium Ingot [2] (" + *Wt + " MW)");
				out->Nodes->Add(dicount4 * 2 + " - Caterium Ore");
				out->Nodes[image]->ImageKey = "Caterium Ore"; out->Nodes[image++]->SelectedImageKey = "Caterium Ore";
				out->Nodes->Add(dicount4 * 2 + " - Water");
				out->Nodes[image]->ImageKey = "Water"; out->Nodes[image++]->SelectedImageKey = "Water";

				Trefinery[lvlcount] += ceil(machines);
				TcateriumOre[lvlcount] += dicount4 * 2;
				Twater[lvlcount] += dicount4 * 2;
				
			}
			out->ExpandAll();
			*Wt += aWt;
			Tenergy[lvlcount] = *Wt;
			return out;
		}
		/*done-res*/ TreeNode^ plastic(long double *Wt, double count) {
			long double machines = 10000 * count, fWt = 0, aWt = 0;
			short image = 0;
			TreeNode^ out = gcnew TreeNode();
			out->ImageKey = "Plastic"; out->SelectedImageKey = "Plastic";

			if (plastic_recipe == 1) {
				machines /= 20.0;
				machines = int(machines) / 10000.0;
				*Wt += machines * 30.0;
					
				out->Text = ("(" + machines + " - Refinery) " + dicount4 + " - Plastic [1] (" + *Wt + " MW)");
				out->Nodes->Add(double(int(count * 15000) / 10000.0) + " - Crude Oil");
				out->Nodes[image]->ImageKey = "Crude Oil"; out->Nodes[image++]->SelectedImageKey = "Crude Oil";
				out->Nodes->Add("+" + double(int(count * 5000) / 10000.0) + " - Heavy Oil Residue");
				out->Nodes[image]->ImageKey = "Heavy Oil Residue"; out->Nodes[image++]->SelectedImageKey = "Heavy Oil Residue";
				
				Trefinery[lvlcount] += ceil(machines);
				TcrudeOil[lvlcount] += double(int(count * 15000) / 10000.0);
				TheavyOilResidue[lvlcount] -= double(int(count * 5000) / 10000.0);

			}
			else if (plastic_recipe == 2) {
				machines /= 20.0;
				machines = int(machines) / 10000.0;
				*Wt += machines * 30.0;
				
				out->Text = ("(" + machines + " - Refinery) " + dicount4 + " - Plastic [2] (" + *Wt + " MW)");
				out->Nodes->Add(dicount4 * 3 + " - Polymer Resin");
				out->Nodes[image]->ImageKey = "Polymer Resin"; out->Nodes[image++]->SelectedImageKey = "Polymer Resin";
				out->Nodes->Add(dicount4 + " - Water");
				out->Nodes[image]->ImageKey = "Water"; out->Nodes[image++]->SelectedImageKey = "Water";
				
				Trefinery[lvlcount] += ceil(machines);
				TpolymerResin[lvlcount] += dicount4 * 3;
				Twater[lvlcount] += dicount4;

			}
			else {
				machines /= 60.0;
				machines = int(machines) / 10000.0;
				*Wt += machines * 30.0;
				
				out->Text = ("(" + machines + " - Refinery) " + dicount4 + " - Plastic [3] (" + *Wt + " MW)");
				out->Nodes->Add(double(int(count * 5000) / 10000.0) + " - Rubber");
				out->Nodes[image]->ImageKey = "Rubber"; out->Nodes[image++]->SelectedImageKey = "Rubber";
				out->Nodes->Add(double(int(count * 5000) / 10000.0) + " - Fuel");
				out->Nodes[image]->ImageKey = "Fuel"; out->Nodes[image++]->SelectedImageKey = "Fuel";
				
				Trefinery[lvlcount] += ceil(machines);
				Trubber[lvlcount] += double(int(count * 5000) / 10000.0);
				Tfuel[lvlcount] += double(int(count * 5000) / 10000.0);

			}
			out->ExpandAll();
			*Wt += aWt;
			Tenergy[lvlcount] = *Wt;
			return out;
		}
		/*done-res*/ TreeNode^ rubber(long double *Wt, double count) {
			long double machines = 10000 * count, fWt = 0, aWt = 0;
			short image = 0;
			TreeNode^ out = gcnew TreeNode();
			out->ImageKey = "Rubber"; out->SelectedImageKey = "Rubber";

			if (rubber_recipe == 1) {
				machines /= 20.0;
				machines = int(machines) / 10000.0;
				*Wt += machines * 30.0;
					
				out->Text = ("(" + machines + " - Refinery) " + dicount4 + " - Rubber [1] (" + *Wt + " MW)");
				out->Nodes->Add(double(int(count * 15000) / 10000.0) + " - Crude Oil");
				out->Nodes[image]->ImageKey = "Crude Oil"; out->Nodes[image++]->SelectedImageKey = "Crude Oil";
				out->Nodes->Add("+" + dicount4 + " - Heavy Oil Residue");
				out->Nodes[image]->ImageKey = "Heavy Oil Residue"; out->Nodes[image++]->SelectedImageKey = "Heavy Oil Residue";
				
				Trefinery[lvlcount] += ceil(machines);
				TcrudeOil[lvlcount] += double(int(count * 15000) / 10000.0);
				TheavyOilResidue[lvlcount] -= dicount4;

			}
			else if (rubber_recipe == 2) {
				machines /= 20.0;
				machines = int(machines) / 10000.0;
				*Wt += machines * 30.0;
				
				out->Text = ("(" + machines + " - Refinery) " + dicount4 + " - Rubber [2] (" + *Wt + " MW)");
				out->Nodes->Add(dicount4 * 2 + " - Polymer Resin");
				out->Nodes[image]->ImageKey = "Polymer Resin"; out->Nodes[image++]->SelectedImageKey = "Polymer Resin";
				out->Nodes->Add(dicount4 * 2 + " - Water");
				out->Nodes[image]->ImageKey = "Water"; out->Nodes[image++]->SelectedImageKey = "Water";
				
				Trefinery[lvlcount] += ceil(machines);
				TpolymerResin[lvlcount] += dicount4 * 2;
				Twater[lvlcount] += dicount4 * 2;

			}
			else {
				machines /= 60.0;
				machines = int(machines) / 10000.0;
				aWt += machines * 30.0;
				
				out->Text = "(" + machines + " - Refinery) " + dicount4 + " - Rubber [3] (" + aWt + " + " + *Wt + " MW)";
				out->Nodes->Add(dicount4 * 0.5 + " - Plastic");
				out->Nodes[image]->ImageKey = "Plastic"; out->Nodes[image++]->SelectedImageKey = "Plastic";
				out->Nodes->Add(dicount4 * 0.5 + " - Fuel");
				out->Nodes[image]->ImageKey = "Fuel"; out->Nodes[image++]->SelectedImageKey = "Fuel";
				
				Trefinery[lvlcount] += ceil(machines);
				Tplastic[lvlcount] += dicount4 * 0.5;
				Tfuel[lvlcount] += dicount4 * 0.5;

			}
			out->ExpandAll();
			*Wt += aWt;
			Tenergy[lvlcount] = *Wt;
			return out;
		}
		/*done-res*/ TreeNode^ concrete(long double *Wt, double count) {
			long double machines = 10000 * count, fWt = 0, aWt = 0;
			short image = 0;
			TreeNode^ out = gcnew TreeNode();
			out->ImageKey = "Concrete"; out->SelectedImageKey = "Concrete";

			if (concrete_recipe == 1) {
				machines /= 15.0;
				machines = int(machines) / 10000.0;
				*Wt += machines * 4.0;
					
				out->Text = ("(" + machines + " - Constructor) " + dicount4 + " - Concrete [1] (" + *Wt + " MW)");
				out->Nodes->Add(dicount4 * 3 + " - Limestone");
				out->Nodes[image]->ImageKey = "Limestone"; out->Nodes[image++]->SelectedImageKey = "Limestone";
				
				Tconstructor[lvlcount] += ceil(machines);
				Tlimestone[lvlcount] += dicount4 * 3;

			}
			else if (concrete_recipe == 2) {
				machines /= 45.0;
				machines = int(machines) / 10000.0;
				aWt += machines * 16.0;
				
				out->Nodes->Add(double(int(count * 100000.0 / 9.0) / 10000.0) + " - Limestone");
				out->Nodes[image]->ImageKey = "Limestone"; out->Nodes[image++]->SelectedImageKey = "Limestone";
				out->Nodes->Add(rubber(Wt, count * 2.0 / 9.0));
				fWt += *Wt; *Wt = fWt; image++;
				out->Text = "(" + machines + " - Assembler) " + dicount4 + " - Concrete [2] (" + aWt + " + " + *Wt + " MW)";
				
				Tassembler[lvlcount] += ceil(machines);
				Tlimestone[lvlcount] += double(int(count * 100000.0 / 9.0) / 10000.0);

			}
			else if (concrete_recipe == 3) {
				machines /= 80.0;
				machines = int(machines) / 10000.0;
				*Wt += machines * 30.0;
				
				out->Text = ("(" + machines + " - Refinery) " + count + " - Concrete [3] (" + *Wt + " MW)");
				out->Nodes->Add(double(int(count * 15000) / 10000.0) + " - Limestone");
				out->Nodes[image]->ImageKey = "Limestone"; out->Nodes[image++]->SelectedImageKey = "Limestone";
				out->Nodes->Add(double(int(count * 12500) / 10000.0) + " - Water");
				out->Nodes[image]->ImageKey = "Water"; out->Nodes[image++]->SelectedImageKey = "Water";
				
				Trefinery[lvlcount] += ceil(machines);
				Tlimestone[lvlcount] += double(int(count * 15000) / 10000.0);
				Twater[lvlcount] += double(int(count * 12500) / 10000.0);

			}
			else {
				machines /= 25.0;
				machines = int(machines) / 10000.0;
				aWt += machines * 16.0;

				out->Nodes->Add(silica(Wt, count * 0.3));
				fWt += *Wt; *Wt = fWt; image++;
				out->Nodes->Add(double(int(count * 12000) / 10000.0) + " - Limestone");
				out->Nodes[image]->ImageKey = "Limestone"; out->Nodes[image++]->SelectedImageKey = "Limestone";
				out->Text = "(" + machines + " - Assembler) " + dicount4 + " - Concrete [4] (" + aWt + " + " + *Wt + " MW)";
				
				Tassembler[lvlcount] += ceil(machines);
				Tlimestone[lvlcount] += double(int(count * 12000) / 10000.0);

			}
			out->ExpandAll();
			*Wt += aWt;
			Tenergy[lvlcount] = *Wt;
			return out;
		}
		/*done-res*/ TreeNode^ aluminumScrap(long double *Wt, double count) {
			long double machines = 10000 * count, fWt = 0, aWt = 0;
			short image = 0;
			TreeNode^ out = gcnew TreeNode();
			out->ImageKey = "Aluminum Scrap"; out->SelectedImageKey = "Aluminum Scrap";

			if (aluminum_scrap_recipe == 1) {
				machines /= 360.0;
				machines = int(machines) / 10000.0;
				aWt += machines * 30.0;

				out->Nodes->Add(aluminaSolution(Wt, count * 2.0 / 3.0));
				fWt += *Wt; *Wt = 0; image++;
				//out->Nodes->Add(double(int(count * 20000 / 3.0) / 10000.0) + " - Alumina Solution");
				//out->Nodes[image]->ImageKey = "Alumina Solution"; out->Nodes[image++]->SelectedImageKey = "Alumina Solution";
				out->Nodes->Add(petroleumCoke(Wt, count / 6.0));
				fWt += *Wt; *Wt = fWt; image++;
				out->Nodes->Add("+" + double(int(count * 10000 / 6.0) / 10000.0) + " - Water");
				out->Nodes[image]->ImageKey = "Water"; out->Nodes[image++]->SelectedImageKey = "Water";
				out->Text = "(" + machines + " - Refinery) " + dicount4 + " - Aluminum Scrap [1] (" + aWt + " + " + *Wt + " MW)";
				
				Trefinery[lvlcount] += ceil(machines);
				//TaluminaSolution[lvlcount] += double(int(count * 20000 / 3.0) / 10000.0);
				Twater[lvlcount] -= double(int(count * 10000 / 6.0) / 10000.0) / 6.0;

			}
			else {
				machines /= 150.0;
				machines = int(machines) / 10000.0;
				*Wt += machines * 30.0;
				
				out->Text = ("(" + machines + " - Refinery) " + dicount4 + " - Aluminum Scrap [2] (" + *Wt + " MW)");
				out->Nodes->Add(aluminaSolution(Wt, count * 0.6));
				fWt += *Wt; *Wt = fWt; image++;
				//out->Nodes->Add(dicount4 * 0.6 + " - Alumina Solution");
				//out->Nodes[image]->ImageKey = "Alumina Solution"; out->Nodes[image++]->SelectedImageKey = "Alumina Solution";
				out->Nodes->Add(dicount4 * 0.2 + " - Coal");
				out->Nodes[image]->ImageKey = "Coal"; out->Nodes[image++]->SelectedImageKey = "Coal";
				out->Nodes->Add("+" + dicount4 * 0.2 + " - Water");
				out->Nodes[image]->ImageKey = "Water"; out->Nodes[image++]->SelectedImageKey = "Water";

				Trefinery[lvlcount] += ceil(machines);
				//TaluminaSolution[lvlcount] += dicount4 * 0.6;
				Tcoal[lvlcount] += dicount4 * 0.2;
				Twater[lvlcount] -= dicount4 * 0.2;

			}
			out->ExpandAll();
			*Wt += aWt;
			Tenergy[lvlcount] = *Wt;
			return out;
		}
		/*done-res*/ TreeNode^ aluminumIngot(long double *Wt, double count) {
			long double machines = 10000 * count, fWt = 0, aWt = 0;
			short image = 0;
			TreeNode^ out = gcnew TreeNode();
			out->ImageKey = "Aluminum Ingot"; out->SelectedImageKey = "Aluminum Ingot";

			if (aluminum_ingot_recipe == 1) {
				machines /= 80.0;
				machines = int(machines) / 10000.0;
				aWt += machines * 16.0;
				
				out->Nodes->Add(aluminumScrap(Wt, count * 3));
				fWt += *Wt; *Wt = 0; image++;
				out->Nodes->Add(silica(Wt, count * 7.0 / 4.0));
				fWt += *Wt; *Wt = fWt; image++;
				out->Text = "(" + machines + " - Foundry) " + dicount4 + " - Aluminum Ingot [1] (" + aWt + " + " + *Wt + " MW)";

				Tfoundry[lvlcount] += ceil(machines);

			}
			else {
				machines /= 36.0;
				machines = int(machines) / 10000.0;
				aWt += machines * 4.0;
				
				out->Nodes->Add(aluminumScrap(Wt, count * 4));
				fWt += *Wt; *Wt = fWt; image++;
				out->Text = "(" + machines + " - Smelter) " + dicount4 + " - Aluminum Ingot [2] (" + aWt + " + " + *Wt + " MW)";
				
				Tsmelter[lvlcount] += ceil(machines);

			}
			out->ExpandAll();
			*Wt += aWt;
			Tenergy[lvlcount] = *Wt;
			return out;
		}
		//==========================================================================================================================================================================
		/*done-res*/ TreeNode^ steelBeam(long double *Wt, double count) {
			long double machines = 10000 * count, fWt = 0, aWt = 0;
			short image = 0;
			TreeNode^ out = gcnew TreeNode();
			out->ImageKey = "Steel Beam"; out->SelectedImageKey = "Steel Beam";

			machines /= 15;
			machines = int(machines) / 10000.0;
			aWt += machines * 4.0;

			out->Nodes->Add(steelIngot(Wt, count * 4));
			fWt += *Wt; *Wt = fWt; image++;
			out->Text = "(" + machines + " - Constructor) " + dicount4 + " - Steel Beam (" + aWt + " + " + *Wt + " MW)";

			Tconstructor[lvlcount] += ceil(machines);

			out->ExpandAll();
			*Wt += aWt;
			Tenergy[lvlcount] = *Wt;
			return out;
		}
		/*done-res*/ TreeNode^ steelPipe(long double *Wt, double count) {
			long double machines = 10000 * count, fWt = 0, aWt = 0;
			short image = 0;
			TreeNode^ out = gcnew TreeNode();
			out->ImageKey = "Steel Pipe"; out->SelectedImageKey = "Steel Pipe";

			machines /= 20;
			machines = int(machines) / 10000.0;
			aWt += machines * 4.0;

			out->Nodes->Add(steelIngot(Wt, count * 3 / 2));
			fWt += *Wt; *Wt = fWt; image++;
			out->Text = "(" + machines + " - Constructor) " + dicount4 + " - Steel Pipe (" + aWt + " + " + *Wt + " MW)";

			Tconstructor[lvlcount] += ceil(machines);

			out->ExpandAll();
			*Wt += aWt;
			Tenergy[lvlcount] = *Wt;
			return out;
		}
		/*done-res*/ TreeNode^ ironRod(long double *Wt, double count) {
			long double machines = 10000 * count, fWt = 0, aWt = 0;
			short image = 0;
			TreeNode^ out = gcnew TreeNode();
			out->ImageKey = "Iron Rod"; out->SelectedImageKey = "Iron Rod";

			if (iron_rod_recipe == 1) {
				machines /= 15;
				machines = int(machines) / 10000.0;
				aWt += machines * 4.0;

				out->Nodes->Add(ironIngot(Wt, count));
				fWt += *Wt; *Wt = fWt; image++;
				out->Text = "(" + machines + " - Constructor) " + dicount4 + " - Iron Rod [1] (" + aWt + " + " + *Wt + " MW)";
				
				Tconstructor[lvlcount] += ceil(machines);

			}
			else {
				machines /= 48;
				machines = int(machines) / 10000.0;
				aWt += machines * 4.0;
				
				out->Nodes->Add(steelIngot(Wt, count / 4.0));
				fWt += *Wt; *Wt = fWt; image++;
				out->Text = "(" + machines + " - Constructor) " + dicount4 + " - Iron Rod [2] (" + aWt + " + " + *Wt + " MW)";
				
				Tconstructor[lvlcount] += ceil(machines);

			}
			out->ExpandAll();
			*Wt += aWt;
			Tenergy[lvlcount] = *Wt;
			return out;
		}
		/*done-res*/ TreeNode^ ironPlate(long double *Wt, double count) {
			long double machines = 10000 * count, fWt = 0, aWt = 0;
			short image = 0;
			TreeNode^ out = gcnew TreeNode();
			out->ImageKey = "Iron Plate"; out->SelectedImageKey = "Iron Plate";

			if (iron_plate_recipe == 1) {
				machines /= 20;
				machines = int(machines) / 10000.0;
				aWt = machines * 4.0;
				
				out->Nodes->Add(ironIngot(Wt,count*3.0/2.0));
				fWt += *Wt; *Wt = fWt; image++;
				out->Text = "(" + machines + " - Constructor) " + dicount4 + " - Iron Plate [1] (" + aWt + " + " + *Wt + " MW)";
				
				Tconstructor[lvlcount] += ceil(machines);

			}
			else if (iron_plate_recipe == 2) {
				machines /= 75;
				machines = int(machines) / 10000.0;
				aWt += machines * 15.0;
				
				out->Nodes->Add(ironIngot(Wt, count * 2.0 / 3.0));
				fWt += *Wt; *Wt = 0; image++;
				out->Nodes->Add(plastic(Wt, count * 2.0 / 15.0));
				fWt += *Wt; *Wt = fWt; image++;
				out->Text = "(" + machines + " - Assembler) " + dicount4 + " - Iron Plate [2] (" + aWt + " + " + *Wt + " MW)";
				
				Tassembler[lvlcount] += ceil(machines);

			}
			else {
				machines /= 45;
				machines = int(machines) / 10000.0;
				aWt += machines * 15.0;
				
				out->Nodes->Add(steelIngot(Wt, count / 6.0));
				fWt += *Wt; *Wt = 0; image++;
				out->Nodes->Add(plastic(Wt, count / 9.0));
				fWt += *Wt; *Wt = fWt; image++;
				out->Text = "(" + machines + " - Assembler) " + dicount4 + " - Iron Plate [3] (" + aWt + " + " + *Wt + " MW)";
				
				Tassembler[lvlcount] += ceil(machines);

			}
			out->ExpandAll();
			*Wt += aWt;
			Tenergy[lvlcount] = *Wt;
			return out;
		}
		/*done-res*/ TreeNode^ copperSheet(long double *Wt, double count) {
			long double machines = 10000 * count, fWt = 0, aWt = 0;
			short image = 0;
			TreeNode^ out = gcnew TreeNode();
			out->ImageKey = "Copper Sheet"; out->SelectedImageKey = "Copper Sheet";

			if (copper_sheet_recipe == 1) {
				machines /= 10;
				machines = int(machines) / 10000.0;
				aWt = machines * 4.0;
				
				out->Nodes->Add(copperIngot(Wt, count * 2.0));
				fWt += *Wt; *Wt = fWt; image++;
				out->Text = "(" + machines + " - Constructor) " + dicount4 + " - Copper Sheet [1] (" + aWt + " + " + *Wt + " MW)";
				
				Tconstructor[lvlcount] += ceil(machines);

			}
			else {
				machines /= 22.5;
				machines = int(machines) / 10000.0;
				aWt = machines * 30.0;
				
				out->Nodes->Add(copperIngot( Wt, count));
				fWt += *Wt; *Wt = fWt; image++;
				out->Nodes->Add(dicount4 + " - Water");
				out->Nodes[image]->ImageKey = "Water"; out->Nodes[image++]->SelectedImageKey = "Water";
				out->Text = "(" + machines + " - Assembler) " + dicount4 + " - Copper Sheet [2] (" + aWt + " + " + *Wt + " MW)";
				
				Tassembler[lvlcount] += ceil(machines);

			}
			out->ExpandAll();
			*Wt += aWt;
			Tenergy[lvlcount] = *Wt;
			return out;
		}
		/*done-res*/ TreeNode^ alcladAluminumSheet(long double *Wt, double count) {
			long double machines = 10000 * count, fWt = 0, aWt = 0;
			short image = 0;
			TreeNode^ out = gcnew TreeNode();
			out->ImageKey = "Alclad Aluminum Sheet"; out->SelectedImageKey = "Alclad Aluminum Sheet";

			machines /= 30;
			machines = int(machines) / 10000.0;
			aWt += machines * 15.0;

			out->Nodes->Add(aluminumIngot(Wt, count * 2));
			fWt += *Wt; *Wt = 0; image++;
			out->Nodes->Add(copperIngot(Wt, count * 3 / 4));
			fWt += *Wt; *Wt = fWt; image++;
			out->Text = "(" + machines + " - Assembler) " + dicount4 + " - Alclad Aluminum Sheet (" + aWt + " + " + *Wt + " MW)";

			Tassembler[lvlcount] += ceil(machines);

			out->ExpandAll();
			*Wt += aWt;
			Tenergy[lvlcount] = *Wt;
			return out;
		}
		/*done-res*/ TreeNode^ screw(long double *Wt, double count) {
			long double machines = 10000 * count, fWt = 0, aWt = 0;
			short image = 0;
			TreeNode^ out = gcnew TreeNode();
			out->ImageKey = "Screw"; out->SelectedImageKey = "Screw";

			if (screw_recipe == 1) {
				machines /= 40;
				machines = int(machines) / 10000.0;
				aWt += machines * 4.0;
				
				out->Nodes->Add(ironRod(Wt, count / 4.0));
				fWt += *Wt; *Wt = fWt; image++;
				out->Text = "(" + machines + " - Constructor) " + dicount4 + " - Screw [1] (" + aWt + " + " + *Wt + " MW)";
				
				Tconstructor[lvlcount] += ceil(machines);

			}
			else if (screw_recipe == 2) {
				machines /= 50;
				machines = int(machines) / 10000.0;
				aWt += machines * 4.0;
				
				out->Nodes->Add(ironIngot(Wt, count / 4.0));
				fWt += *Wt; *Wt = fWt; image++;
				out->Text = "(" + machines + " - Constructor) " + dicount4 + " - Screw [2] (" + aWt + " + " + *Wt + " MW)";
				
				Tconstructor[lvlcount] += ceil(machines);

			}
			else {
				machines /= 260;
				machines = int(machines) / 10000.0;
				aWt += machines * 4.0;
				
				out->Nodes->Add(steelBeam(Wt, count / 52.0));
				fWt += *Wt; *Wt = fWt; image++;
				out->Text = "(" + machines + " - Constructor) " + dicount4 + " - Screw [3] (" + aWt + " + " + *Wt + " MW)";
				
				Tconstructor[lvlcount] += ceil(machines);

			}
			out->ExpandAll();
			*Wt += aWt;
			Tenergy[lvlcount] = *Wt;
			return out;
		}
		/*done-res*/ TreeNode^ wire(long double *Wt, double count) {
			long double machines = 10000 * count, fWt = 0, aWt = 0;
			short image = 0;
			TreeNode^ out = gcnew TreeNode();
			out->ImageKey = "Wire"; out->SelectedImageKey = "Wire";

			if (wire_recipe == 1) {
				machines /= 30;
				machines = int(machines) / 10000.0;
				aWt = machines * 4.0;
				
				out->Nodes->Add(copperIngot(Wt, count * 0.5));
				fWt += *Wt; *Wt = fWt; image++;
				out->Text = "(" + machines + " - Constructor) " + dicount4 + " - Wire [1] (" + aWt + " + " + *Wt + " MW)";
				
				Tconstructor[lvlcount] += ceil(machines);

			}
			else if (wire_recipe == 2) {
				machines /= 90;
				machines = int(machines) / 10000.0;
				aWt = machines * 15.0;
				
				out->Nodes->Add(copperIngot(Wt, count * 2 / 15));
				fWt += *Wt; *Wt = 0; image++;
				out->Nodes->Add(cateriumIngot(Wt, count / 30));
				fWt += *Wt; *Wt = fWt; image++;
				out->Text = "(" + machines + " - Assembler) " + dicount4 + " - Wire [2] (" + aWt + " + " + *Wt + " MW)";
				
				Tassembler[lvlcount] += ceil(machines);

			}
			else if (wire_recipe == 3) {
				machines /= 22.5;
				machines = int(machines) / 10000.0;
				aWt = machines * 4.0;
				
				out->Nodes->Add(ironIngot(Wt, count * 5 / 9));
				fWt += *Wt; *Wt = fWt; image++;
				out->Text = "(" + machines + " - Constructor) " + dicount4 + " - Wire [3] (" + aWt + " + " + *Wt + " MW)";
				
				Tconstructor[lvlcount] += ceil(machines);

			}
			else {
				machines /= 120;
				machines = int(machines) / 10000.0;
				aWt = machines * 4.0;
				
				out->Nodes->Add(cateriumIngot(Wt, count / 8));
				fWt += *Wt; *Wt = fWt; image++;
				out->Text = "(" + machines + " - Constructor) " + dicount4 + " - Wire [4] (" + aWt + " + " + *Wt + " MW)";
				
				Tconstructor[lvlcount] += ceil(machines);

			}
			out->ExpandAll();
			*Wt += aWt;
			Tenergy[lvlcount] = *Wt;
			return out;
		}
		/*done-res*/ TreeNode^ quickwire(long double *Wt, double count) {
			long double machines = 10000 * count, fWt = 0, aWt = 0;
			short image = 0;
			TreeNode^ out = gcnew TreeNode();
			out->ImageKey = "Quickwire"; out->SelectedImageKey = "Quickwire";

			if (quickwire_recipe == 1) {
				machines /= 60;
				machines = int(machines) / 10000.0;
				aWt = machines * 4.0;
				
				out->Nodes->Add(cateriumIngot(Wt, count / 5));
				fWt += *Wt; *Wt = fWt; image++;
				out->Text = "(" + machines + " - Constructor) " + dicount4 + " - Quickwire [1] (" + aWt + " + " + *Wt + " MW)";
				
				Tconstructor[lvlcount] += ceil(machines);
			}
			else {
				machines /= 90;
				machines = int(machines) / 10000.0;
				aWt = machines * 15.0;
				
				out->Nodes->Add(cateriumIngot(Wt, count / 12));
				fWt += *Wt; *Wt = 0; image++;
				out->Nodes->Add(copperIngot(Wt, count * 5 / 12));
				fWt += *Wt; *Wt = fWt; image++;
				out->Text = "(" + machines + " - Assembler) " + dicount4 + " - Quickwire [2] (" + aWt + " + " + *Wt + " MW)";
				
				Tassembler[lvlcount] += ceil(machines);

			}
			out->ExpandAll();
			*Wt += aWt;
			Tenergy[lvlcount] = *Wt;
			return out;
		}
		/*done-res*/ TreeNode^ cable(long double *Wt, double count) {
			long double machines = 10000 * count, fWt = 0, aWt = 0;
			short image = 0;
			TreeNode^ out = gcnew TreeNode();
			out->ImageKey = "Cable"; out->SelectedImageKey = "Cable";

			if (cable_recipe == 1) {
				machines /= 30;
				machines = int(machines) / 10000.0;
				aWt = machines * 4.0;
				
				out->Nodes->Add(wire(Wt, count * 2));
				fWt += *Wt; *Wt = fWt; image++;
				out->Text = "(" + machines + " - Constructor) " + dicount4 + " - Cable [1] (" + aWt + " + " + *Wt + " MW)";
				
				Tconstructor[lvlcount] += ceil(machines);

			}
			else if (cable_recipe == 2) {
				machines /= 67.5;
				machines = int(machines) / 10000.0;
				aWt = machines * 30.0;
				
				out->Nodes->Add(wire(Wt, count * 5 / 9));
				fWt += *Wt; *Wt = fWt; image++;
				out->Nodes->Add(double(int(count * 20000 / 9.0) / 10000.0) + " - Heavy Oil Residue");
				out->Nodes[image]->ImageKey = "Heavy Oil Residue"; out->Nodes[image++]->SelectedImageKey = "Heavy Oil Residue";
				out->Text = "(" + machines + " - Refinery) " + dicount4 + " - Cable [2] (" + aWt + " + " + *Wt + " MW)";

				Trefinery[lvlcount] += ceil(machines);
				TheavyOilResidue[lvlcount] += double(int(count * 20000 / 9.0) / 10000.0);
				
			}
			else if (cable_recipe == 3) {
				machines /= 100;
				machines = int(machines) / 10000.0;
				aWt = machines * 15.0;
				
				out->Nodes->Add(wire(Wt, count * 9 / 20));
				fWt += *Wt; *Wt = 0; image++;
				out->Nodes->Add(rubber(Wt, count * 0.3));
				fWt += *Wt; *Wt = fWt; image++;
				out->Text = "(" + machines + " - Assembler) " + dicount4 + " - Cable [3] (" + aWt + " + " + *Wt + " MW)";
				
				Tassembler[lvlcount] += ceil(machines);

			}
			else {
				machines /= 27.5;
				machines = int(machines) / 10000.0;
				aWt = machines * 15.0;
				
				out->Nodes->Add(quickwire(Wt, count * 3 / 11));
				fWt += *Wt; *Wt = 0; image++;
				out->Nodes->Add(rubber(Wt, count * 2 / 11));
				fWt += *Wt; *Wt = fWt; image++;
				out->Text = "(" + machines + " - Assembler) " + dicount4 + " - Cable [4] (" + aWt + " + " + *Wt + " MW)";
				
				Tassembler[lvlcount] += ceil(machines);

			}
			out->ExpandAll();
			*Wt += aWt;
			Tenergy[lvlcount] = *Wt;
			return out;
		}
		/*done-res*/ TreeNode^ emptyCanister(long double* Wt, double count) {
			long double machines = 10000 * count, fWt = 0, aWt = 0;
			short image = 0;
			TreeNode^ out = gcnew TreeNode();
			out->ImageKey = "Empty Canister"; out->SelectedImageKey = "Empty Canister";

			machines /= 60;
			machines = int(machines) / 10000.0;
			aWt = machines * 4.0;

			out->Nodes->Add(plastic(Wt, count / 2.0));
			fWt += *Wt; *Wt = fWt; image++;
			out->Text = "(" + machines + " - Constructor) " + dicount4 + " - Empty Canister (" + aWt + " + " + *Wt + " MW)";

			Tconstructor[lvlcount] += ceil(machines);

			out->ExpandAll();
			*Wt += aWt;
			Tenergy[lvlcount] = *Wt;
			return out;
		}
		//==========================================================================================================================================================================
		/*done-res*/ TreeNode^ reinforcedIronPlate(long double *Wt, double count) {
			long double machines = 10000 * count, fWt = 0, aWt = 0;
			short image = 0;
			TreeNode^ out = gcnew TreeNode();
			out->ImageKey = "Reinforced Iron Plate"; out->SelectedImageKey = "Reinforced Iron Plate";

			if (reinforced_iron_plate_recipe == 1) {
				machines /= 5;
				machines = int(machines) / 10000.0;
				aWt = machines * 15.0;
				
				out->Nodes->Add(ironPlate(Wt, count * 6.0));
				fWt += *Wt; *Wt = 0; image++;
				out->Nodes->Add(screw(Wt, count * 12.0));
				fWt += *Wt; *Wt = fWt; image++;
				out->Text = "(" + machines + " - Assembler) " + dicount4 + " - Reinforced Iron Plate [1] (" + aWt + " + " + *Wt + " MW)";

				Tassembler[lvlcount] += ceil(machines);

			}
			else if (reinforced_iron_plate_recipe == 2) {
				machines /= 3.75;
				machines = int(machines) / 10000.0;
				aWt = machines * 15.0;
				
				out->Nodes->Add(ironPlate(Wt, count * 3.0));
				fWt += *Wt; *Wt = 0; image++;
				out->Nodes->Add(rubber(Wt, count));
				fWt += *Wt; *Wt = fWt; image++;
				out->Text = "(" + machines + " - Assembler) " + dicount4 + " - Reinforced Iron Plate [2] (" + aWt + " + " + *Wt + " MW)";

				Tassembler[lvlcount] += ceil(machines);

			}
			else if (reinforced_iron_plate_recipe == 3) {
				machines /= 15;
				machines = int(machines) / 10000.0;
				aWt = machines * 15.0;
				
				out->Nodes->Add(ironPlate(Wt, count * 6.0));
				fWt += *Wt; *Wt = 0; image++;
				out->Nodes->Add(screw(Wt, count * 50.0 / 3.0));
				fWt += *Wt; *Wt = fWt; image++;
				out->Text = "(" + machines + " - Assembler) " + dicount4 + " - Reinforced Iron Plate [3] (" + aWt + " + " + *Wt + " MW)";

				Tassembler[lvlcount] += ceil(machines);

			}
			else {
				machines /= 5.625;
				machines = int(machines) / 10000.0;
				aWt = machines * 15.0;
				
				out->Nodes->Add(ironPlate(Wt, count * 10.0 / 3.0));
				fWt += *Wt; *Wt = 0; image++;
				out->Nodes->Add(wire(Wt, count * 20.0 / 3.0));
				fWt += *Wt; *Wt = fWt; image++;
				out->Text = "(" + machines + " - Assembler) " + dicount4 + " - Reinforced Iron Plate [4] (" + aWt + " + " + *Wt + " MW)";
				
				Tassembler[lvlcount] += ceil(machines);

			}
			out->ExpandAll();
			*Wt += aWt;
			Tenergy[lvlcount] = *Wt;
			return out;
		}
		/*done-res*/ TreeNode^ modularFrame(long double* Wt, double count) {
			long double machines = 10000 * count, fWt = 0, aWt = 0;
			short image = 0;
			TreeNode^ out = gcnew TreeNode();
			out->ImageKey = "Modular Frame"; out->SelectedImageKey = "Modular Frame";

			if (modular_frame_recipe == 1) {
				machines /= 2;
				machines = int(machines) / 10000.0;
				aWt = machines * 15.0;

				out->Nodes->Add(reinforcedIronPlate(Wt, count * 3.0 / 2.0));
				fWt += *Wt; *Wt = 0; image++;
				out->Nodes->Add(ironRod(Wt, count * 6.0));
				fWt += *Wt; *Wt = fWt; image++;
				out->Text = "(" + machines + " - Assembler) " + dicount4 + " - Modular Frame [1] (" + aWt + " + " + *Wt + " MW)";

				Tassembler[lvlcount] += ceil(machines);

			}
			else if (modular_frame_recipe == 2) {
				machines /= 5;
				machines = int(machines) / 10000.0;
				aWt = machines * 15.0;

				out->Nodes->Add(reinforcedIronPlate(Wt, count * 7.5 / 5.0));
				fWt += *Wt; *Wt = 0; image++;
				out->Nodes->Add(screw(Wt, count * 28.0));
				fWt += *Wt; *Wt = fWt; image++;
				out->Text = "(" + machines + " - Assembler) " + dicount4 + " - Modular Frame [2] (" + aWt + " + " + *Wt + " MW)";

				Tassembler[lvlcount] += ceil(machines);

			}
			else {
				machines /= 3;
				machines = int(machines) / 10000.0;
				aWt = machines * 15.0;

				out->Nodes->Add(reinforcedIronPlate(Wt, count * 2.0 / 3.0));
				fWt += *Wt; *Wt = 0; image++;
				out->Nodes->Add(steelPipe(Wt, count * 10.0 / 3.0));
				fWt += *Wt; *Wt = fWt; image++;
				out->Text = "(" + machines + " - Assembler) " + dicount4 + " - Modular Frame [3] (" + aWt + " + " + *Wt + " MW)";

				Tassembler[lvlcount] += ceil(machines);

			}
			out->ExpandAll();
			*Wt += aWt;
			Tenergy[lvlcount] = *Wt;
			return out;
		}
		/*done-res*/ TreeNode^ AILimiter(long double* Wt, double count) {
			long double machines = 10000 * count, fWt = 0, aWt = 0;
			short image = 0;
			TreeNode^ out = gcnew TreeNode();
			out->ImageKey = "A.I. Limiter"; out->SelectedImageKey = "A.I. Limiter";

			machines /= 5;
			machines = int(machines) / 10000.0;
			aWt = machines * 15.0;

			out->Nodes->Add(copperSheet(Wt, count * 5.0));
			fWt += *Wt; *Wt = 0; image++;
			out->Nodes->Add(quickwire(Wt, count * 20.0));
			fWt += *Wt; *Wt = fWt; image++;
			out->Text = "(" + machines + " - Assembler) " + dicount4 + " - A.I. Limiter (" + aWt + " + " + *Wt + " MW)";

			Tassembler[lvlcount] += ceil(machines);

			out->ExpandAll();
			*Wt += aWt;
			Tenergy[lvlcount] = *Wt;
			return out;
		}
		/*done-res*/ TreeNode^ circuitBoard(long double* Wt, double count) {
			long double machines = 10000 * count, fWt = 0, aWt = 0;
			short image = 0;
			TreeNode^ out = gcnew TreeNode();
			out->ImageKey = "Circuit Board"; out->SelectedImageKey = "Circuit Board";

			if (circuit_board_recipe == 1) {
				machines /= 7.5;
				machines = int(machines) / 10000.0;
				aWt = machines * 15.0;

				out->Nodes->Add(copperSheet(Wt, count * 2.0));
				fWt += *Wt; *Wt = 0; image++;
				out->Nodes->Add(plastic(Wt, count * 4.0));
				fWt += *Wt; *Wt = fWt; image++;
				out->Text = "(" + machines + " - Assembler) " + dicount4 + " - Circuit Board [1] (" + aWt + " + " + *Wt + " MW)";

				Tassembler[lvlcount] += ceil(machines);

			}
			else if (circuit_board_recipe == 2) {
				machines /= 5.0;
				machines = int(machines) / 10000.0;
				aWt = machines * 15.0;

				out->Nodes->Add(rubber(Wt, count * 6.0));
				fWt += *Wt; *Wt = 0; image++;
				out->Nodes->Add(petroleumCoke(Wt, count * 9.0));
				fWt += *Wt; *Wt = fWt; image++;
				out->Text = "(" + machines + " - Assembler) " + dicount4 + " - Circuit Board [2] (" + aWt + " + " + *Wt + " MW)";

				Tassembler[lvlcount] += ceil(machines);

			}
			else if (circuit_board_recipe == 3) {
				machines /= 12.5;
				machines = int(machines) / 10000.0;
				aWt = machines * 15.0;

				out->Nodes->Add(copperSheet(Wt, count * 11.0 / 5.0));
				fWt += *Wt; *Wt = 0; image++;
				out->Nodes->Add(silica(Wt, count * 11.0 / 5.0));
				fWt += *Wt; *Wt = fWt; image++;
				out->Text = "(" + machines + " - Assembler) " + dicount4 + " - Circuit Board [3] (" + aWt + " + " + *Wt + " MW)";

				Tassembler[lvlcount] += ceil(machines);

			}
			else {
				machines /= 8.75;
				machines = int(machines) / 10000.0;
				aWt = machines * 15.0;

				out->Nodes->Add(plastic(Wt, count * 10.0 / 7.0));
				fWt += *Wt; *Wt = 0; image++;
				out->Nodes->Add(quickwire(Wt, count * 30.0 / 7.0));
				fWt += *Wt; *Wt = fWt; image++;
				out->Text = "(" + machines + " - Assembler) " + dicount4 + " - Circuit Board [4] (" + aWt + " + " + *Wt + " MW)";

				Tassembler[lvlcount] += ceil(machines);

			}
			out->ExpandAll();
			*Wt += aWt;
			Tenergy[lvlcount] = *Wt;
			return out;
		}
		/*done-res*/ TreeNode^ crystalOscillator(long double* Wt, double count) {
			long double machines = 10000 * count, fWt = 0, aWt = 0;
			short image = 0;
			TreeNode^ out = gcnew TreeNode();
			out->ImageKey = "Crystal Oscillator"; out->SelectedImageKey = "Crystal Oscillator";

			if (crystal_oscillator_recipe == 1) {
				machines /= 1;
				machines = int(machines) / 10000.0;
				aWt = machines * 55.0;

				out->Nodes->Add(quartzCrystal(Wt, count * 18.0));
				fWt += *Wt; *Wt = 0; image++;
				out->Nodes->Add(cable(Wt, count * 14.0));
				fWt += *Wt; *Wt = 0; image++;
				out->Nodes->Add(reinforcedIronPlate(Wt, count * 2.5));
				fWt += *Wt; *Wt = fWt; image++;
				out->Text = "(" + machines + " - Manufacturer) " + dicount4 + " - Crystal Oscillator [1] (" + aWt + " + " + *Wt + " MW)";

				Tmanufacturer[lvlcount] += ceil(machines);

			}
			else {
				machines /= 1.875;
				machines = int(machines) / 10000.0;
				aWt = machines * 55.0;

				out->Nodes->Add(quartzCrystal(Wt, count * 10.0));
				fWt += *Wt; *Wt = 0; image++;
				out->Nodes->Add(rubber(Wt, count * 7.0));
				fWt += *Wt; *Wt = 0; image++;
				out->Nodes->Add(AILimiter(Wt, count * 1.0));
				fWt += *Wt; *Wt = fWt; image++;
				out->Text = "(" + machines + " - Manufacturer) " + dicount4 + " - Crystal Oscillator [2] (" + aWt + " + " + *Wt + " MW)";

				Tmanufacturer[lvlcount] += ceil(machines);

			}
			out->ExpandAll();
			*Wt += aWt;
			Tenergy[lvlcount] = *Wt;
			return out;
		}
		/*done-res*/ TreeNode^ rotor(long double* Wt, double count) {
			long double machines = 10000 * count, fWt = 0, aWt = 0;
			short image = 0;
			TreeNode^ out = gcnew TreeNode();
			out->ImageKey = "Rotor"; out->SelectedImageKey = "Rotor";

			if (rotor_recipe == 1) {
				machines /= 4;
				machines = int(machines) / 10000.0;
				aWt = machines * 15.0;

				out->Nodes->Add(ironRod(Wt, count * 5.0));
				fWt += *Wt; *Wt = 0; image++;
				out->Nodes->Add(screw(Wt, count * 25.0));
				fWt += *Wt; *Wt = fWt; image++;
				out->Text = "(" + machines + " - Assembler) " + dicount4 + " - Rotor [1] (" + aWt + " + " + *Wt + " MW)";

				Tassembler[lvlcount] += ceil(machines);

			}
			else if (rotor_recipe == 2) {
				machines /= 11.25;
				machines = int(machines) / 10000.0;
				aWt = machines * 15.0;

				out->Nodes->Add(copperSheet(Wt, count * 2.0));
				fWt += *Wt; *Wt = 0; image++;
				out->Nodes->Add(screw(Wt, count * 195.0 / 11.25));
				fWt += *Wt; *Wt = fWt; image++;
				out->Text = "(" + machines + " - Assembler) " + dicount4 + " - Rotor [2] (" + aWt + " + " + *Wt + " MW)";

				Tassembler[lvlcount] += ceil(machines);

			}
			else {
				machines /= 5;
				machines = int(machines) / 10000.0;
				aWt = machines * 15.0;

				out->Nodes->Add(steelPipe(Wt, count * 2.0));
				fWt += *Wt; *Wt = 0; image++;
				out->Nodes->Add(wire(Wt, count * 6.0));
				fWt += *Wt; *Wt = fWt; image++;
				out->Text = "(" + machines + " - Assembler) " + dicount4 + " - Rotor [3] (" + aWt + " + " + *Wt + " MW)";

				Tassembler[lvlcount] += ceil(machines);

			}
			out->ExpandAll();
			*Wt += aWt;
			Tenergy[lvlcount] = *Wt;
			return out;
		}
		/*done-res*/ TreeNode^ stator(long double* Wt, double count) {
			long double machines = 10000 * count, fWt = 0, aWt = 0;
			short image = 0;
			TreeNode^ out = gcnew TreeNode();
			out->ImageKey = "Stator"; out->SelectedImageKey = "Stator";

			if (stator_recipe == 1) {
				machines /= 5;
				machines = int(machines) / 10000.0;
				aWt = machines * 15.0;

				out->Nodes->Add(steelPipe(Wt, count * 3.0));
				fWt += *Wt; *Wt = 0; image++;
				out->Nodes->Add(wire(Wt, count * 8.0));
				fWt += *Wt; *Wt = fWt; image++;
				out->Text = "(" + machines + " - Assembler) " + dicount4 + " - Stator [1] (" + aWt + " + " + *Wt + " MW)";

				Tassembler[lvlcount] += ceil(machines);

			}
			else {
				machines /= 8;
				machines = int(machines) / 10000.0;
				aWt = machines * 15.0;

				out->Nodes->Add(steelPipe(Wt, count * 2.0));
				fWt += *Wt; *Wt = 0; image++;
				out->Nodes->Add(quickwire(Wt, count * 7.5));
				fWt += *Wt; *Wt = fWt; image++;
				out->Text = "(" + machines + " - Assembler) " + dicount4 + " - Stator [2] (" + aWt + " + " + *Wt + " MW)";

				Tassembler[lvlcount] += ceil(machines);

			}
			out->ExpandAll();
			*Wt += aWt;
			Tenergy[lvlcount] = *Wt;
			return out;
		}
		/*done-res*/ TreeNode^ motor(long double* Wt, double count) {
			long double machines = 10000 * count, fWt = 0, aWt = 0;
			short image = 0;
			TreeNode^ out = gcnew TreeNode();
			out->ImageKey = "Motor"; out->SelectedImageKey = "Motor";

			if (motor_recipe == 1) {
				machines /= 5.0;
				machines = int(machines) / 10000.0;
				aWt = machines * 15.0;

				out->Nodes->Add(rotor(Wt, count * 2.0));
				fWt += *Wt; *Wt = 0; image++;
				out->Nodes->Add(stator(Wt, count * 2.0));
				fWt += *Wt; *Wt = fWt; image++;
				out->Text = "(" + machines + " - Assembler) " + dicount4 + " - Motor [1] (" + aWt + " + " + *Wt + " MW)";

				Tassembler[lvlcount] += ceil(machines);

			}
			else {
				machines /= 7.5;
				machines = int(machines) / 10000.0;
				aWt = machines * 55.0;

				out->Nodes->Add(rotor(Wt, count / 2.0));
				fWt += *Wt; *Wt = 0; image++;
				out->Nodes->Add(stator(Wt, count / 2.0));
				fWt += *Wt; *Wt = 0; image++;
				out->Nodes->Add(crystalOscillator(Wt, count / 6.0));
				fWt += *Wt; *Wt = fWt; image++;
				out->Text = "(" + machines + " - Manufacturer) " + dicount4 + " - Motor [2] (" + aWt + " + " + *Wt + " MW)";

				Tmanufacturer[lvlcount] += ceil(machines);

			}
			out->ExpandAll();
			*Wt += aWt;
			Tenergy[lvlcount] = *Wt;
			return out;
		}
		/*done-res*/ TreeNode^ encasedIndustrialBeam(long double *Wt, double count) {
			long double machines = 10000 * count, fWt = 0, aWt = 0;
			short image = 0;
			TreeNode^ out = gcnew TreeNode();
			out->ImageKey = "Encased Industrial Beam"; out->SelectedImageKey = "Encased Industrial Beam";

			if (encased_industrial_beam_recipe == 1) {
				machines /= 6;
				machines = int(machines) / 10000.0;
				aWt += machines * 15.0;

				out->Nodes->Add(steelBeam(Wt, count * 4.0));
				fWt += *Wt; *Wt = 0; image++;
				out->Nodes->Add(concrete(Wt, count * 5.0));
				fWt += *Wt; *Wt = fWt; image++;
				out->Text = "(" + machines + " - Assembler) " + dicount4 + " - Encased Industrial Beam [1] (" + aWt + " + " + *Wt + " MW)";

				Tassembler[lvlcount] += ceil(machines);

			}
			else {
				machines /= 4;
				machines = int(machines) / 10000.0;
				aWt += machines * 15.0;
					
				out->Nodes->Add(steelPipe(Wt, count * 7.0));
				fWt += *Wt; *Wt = 0; image++;
				out->Nodes->Add(concrete(Wt, count * 5.0));
				fWt += *Wt; *Wt = fWt; image++;
				out->Text = "(" + machines + " - Assembler) " + dicount4 + " - Encased Industrial Beam [2] (" + aWt + " + " + *Wt + " MW)";

				Tassembler[lvlcount] += ceil(machines);

			}
			out->ExpandAll();
			*Wt += aWt;
			Tenergy[lvlcount] = *Wt;
			return out;
		}
		/*done-res*/ TreeNode^ heatSink(long double* Wt, double count) {
			long double machines = 10000 * count, fWt = 0, aWt = 0;
			short image = 0;
			TreeNode^ out = gcnew TreeNode();
			out->ImageKey = "Heat Sink"; out->SelectedImageKey = "Heat Sink";

			if (heat_sink_recipe == 1) {
				machines /= 10.0;
				machines = int(machines) / 10000.0;
				aWt += machines * 15.0;

				out->Nodes->Add(alcladAluminumSheet(Wt, count * 4.0));
				fWt += *Wt; *Wt = 0; image++;
				out->Nodes->Add(rubber(Wt, count * 7.0));
				fWt += *Wt; *Wt = fWt; image++;
				out->Text = "(" + machines + " - Assembler) " + dicount4 + " - Heat Sink [1] (" + aWt + " + " + *Wt + " MW)";

				Tassembler[lvlcount] += ceil(machines);

			}
			else {
				machines /= 13.125;
				machines = int(machines) / 10000.0;
				aWt += machines * 15.0;

				out->Nodes->Add(alcladAluminumSheet(Wt, count * 20.0 / 7.0));
				fWt += *Wt; *Wt = 0; image++;
				out->Nodes->Add(copperSheet(Wt, count * 30.0 / 7.0));
				fWt += *Wt; *Wt = fWt; image++;
				out->Text = "(" + machines + " - Assembler) " + dicount4 + " - Heat Sink [2] (" + aWt + " + " + *Wt + " MW)";

				Tassembler[lvlcount] += ceil(machines);

			}
			out->ExpandAll();
			*Wt += aWt;
			Tenergy[lvlcount] = *Wt;
			return out;
		}
		/*done-res*/ TreeNode^ uraniumPellet(long double* Wt, double count) {
			long double machines = 10000 * count, fWt = 0, aWt = 0;
			short image = 0;
			TreeNode^ out = gcnew TreeNode();
			out->ImageKey = "Uranium Pellet"; out->SelectedImageKey = "Uranium Pellet";

			machines /= 50.0;
			machines = int(machines) / 10000.0;
			aWt += machines * 15.0;

			out->Text = ("(" + machines + " - Refinery) " + dicount4 + " - Uranium Pellet (" + *Wt + " MW)");
			out->Nodes->Add(dicount4 + " - Uranium");
			out->Nodes[image]->ImageKey = "Uranium"; out->Nodes[image++]->SelectedImageKey = "Uranium";
			out->Nodes->Add(double(int(count * 80000 / 5.0) / 10000.0) + " - Sulfur Acid");
			out->Nodes[image]->ImageKey = "Sulfur Acid"; out->Nodes[image++]->SelectedImageKey = "Sulfur Acid";
			out->Nodes->Add("+" + double(int(count * 4000) / 10000.0) + " - Sulfur Acid");
			out->Nodes[image]->ImageKey = "Sulfur Acid"; out->Nodes[image++]->SelectedImageKey = "Sulfur Acid";

			Trefinery[lvlcount] += ceil(machines);

			Turanium[lvlcount] += dicount4;
			TsulfurAcid[lvlcount] += double(int(count * 80000 / 5.0) / 10000.0);
			TsulfurAcid[lvlcount] -= double(int(count * 4000) / 10000.0);

			out->ExpandAll();
			*Wt += aWt;
			Tenergy[lvlcount] = *Wt;
			return out;
		}
		/*done-res*/ TreeNode^ encasedUraniumCell(long double* Wt, double count) {
			long double machines = 10000 * count, fWt = 0, aWt = 0;
			short image = 0;
			TreeNode^ out = gcnew TreeNode();
			out->ImageKey = "Encased Uranium Cell"; out->SelectedImageKey = "Encased Uranium Cell";

			if (encased_uranium_cell_recipe == 1) {
				machines /= 10.0;
				machines = int(machines) / 10000.0;
				aWt += machines * 15.0;

				out->Nodes->Add(uraniumPellet(Wt, count * 4.0));
				fWt += *Wt; *Wt = 0; image++;
				out->Nodes->Add(concrete(Wt, count * 9.0 / 10.0));
				fWt += *Wt; *Wt = fWt; image++;
				out->Text = "(" + machines + " - Assembler) " + dicount4 + " - Encased Uranium Cell [1] (" + aWt + " + " + *Wt + " MW)";

				Tassembler[lvlcount] += ceil(machines);

			}
			else {
				machines /= 17.5;
				machines = int(machines) / 10000.0;
				aWt += machines * 55.0;

				out->Nodes->Add(uraniumPellet(Wt, count * 40.0 / 35.0));
				fWt += *Wt; *Wt = 0; image++;
				out->Nodes->Add(double(int(count * 450000.0 / 35.0) / 10000.0) + " - Sulfur");
				out->Nodes[image]->ImageKey = "Sulfur"; out->Nodes[image++]->SelectedImageKey = "Sulfur";
				out->Nodes->Add(silica(Wt, count * 45.0 / 35.0));
				fWt += *Wt; *Wt = 0; image++;
				out->Nodes->Add(quickwire(Wt, count * 75.0 / 35.0));
				fWt += *Wt; *Wt = fWt; image++;
				out->Text = "(" + machines + " - Manufacturer) " + dicount4 + " - Encased Uranium Cell [2] (" + aWt + " + " + *Wt + " MW)";

				Tmanufacturer[lvlcount] += ceil(machines);

				Tsulfur[lvlcount] += double(int(count * 450000.0 / 35.0) / 10000.0);

			}
			out->ExpandAll();
			*Wt += aWt;
			Tenergy[lvlcount] = *Wt;
			return out;
		}
		/*done-res*/ TreeNode^ electromagneticControlRod(long double* Wt, double count) {
			long double machines = 10000 * count, fWt = 0, aWt = 0;
			short image = 0;
			TreeNode^ out = gcnew TreeNode();
			out->ImageKey = "Electromagnetic Control Rod"; out->SelectedImageKey = "Electromagnetic Control Rod";

			if (electromagnetic_control_rod_recipe == 1) {
				machines /= 4.0;
				machines = int(machines) / 10000.0;
				aWt += machines * 15.0;

				out->Nodes->Add(stator(Wt, count * 1.5));
				fWt += *Wt; *Wt = 0; image++;
				out->Nodes->Add(AILimiter(Wt, count));
				fWt += *Wt; *Wt = fWt; image++;
				out->Text = "(" + machines + " - Assembler) " + dicount4 + " - Electromagnetic Control Rod [1] (" + aWt + " + " + *Wt + " MW)";

				Tassembler[lvlcount] += ceil(machines);

			}
			else {
				machines /= 10.0;
				machines = int(machines) / 10000.0;
				aWt += machines * 15.0;

				out->Nodes->Add(stator(Wt, count));
				fWt += *Wt; *Wt = 0; image++;
				out->Nodes->Add(highSpeedConnector(Wt, count * 0.5));
				fWt += *Wt; *Wt = fWt; image++;
				out->Text = "(" + machines + " - Assembler) " + dicount4 + " - Electromagnetic Control Rod [2] (" + aWt + " + " + *Wt + " MW)";

				Tassembler[lvlcount] += ceil(machines);

			}
			out->ExpandAll();
			*Wt += aWt;
			Tenergy[lvlcount] = *Wt;
			return out;
		}
		//==========================================================================================================================================================================
		/*done-res*/ TreeNode^ beacon(long double* Wt, double count) {
			long double machines = 10000 * count, fWt = 0, aWt = 0;
			short image = 0;
			TreeNode^ out = gcnew TreeNode();
			out->ImageKey = "Beacon"; out->SelectedImageKey = "Beacon";

			if (beacon_recipe == 1) {
				machines /= 7.5;
				machines = int(machines) / 10000.0;
				aWt = machines * 55.0;

				out->Nodes->Add(ironPlate(Wt, count * 3.0));
				fWt += *Wt; *Wt = 0; image++;
				out->Nodes->Add(ironRod(Wt, count * 1.0));
				fWt += *Wt; *Wt = 0; image++;
				out->Nodes->Add(wire(Wt, count * 15.0));
				fWt += *Wt; *Wt = 0; image++;
				out->Nodes->Add(cable(Wt, count * 2.0));
				fWt += *Wt; *Wt = fWt; image++;
				out->Text = "(" + machines + " - Manufacturer) " + dicount4 + " - Beacon [1] (" + aWt + " + " + *Wt + " MW)";

				Tmanufacturer[lvlcount] += ceil(machines);

			}
			else {
				machines /= 10.0;
				machines = int(machines) / 10000.0;
				aWt = machines * 55.0;

				out->Nodes->Add(steelBeam(Wt, count * 0.2));
				fWt += *Wt; *Wt = 0; image++;
				out->Nodes->Add(steelPipe(Wt, count * 0.8));
				fWt += *Wt; *Wt = 0; image++;
				out->Nodes->Add(crystalOscillator(Wt, count * 0.05));
				fWt += *Wt; *Wt = fWt; image++;
				out->Text = "(" + machines + " - Manufacturer) " + dicount4 + " - Beacon [2] (" + aWt + " + " + *Wt + " MW)";

				Tmanufacturer[lvlcount] += ceil(machines);

			}
			out->ExpandAll();
			*Wt += aWt;
			Tenergy[lvlcount] = *Wt;
			return out;
		}
		/*done-res*/ TreeNode^ highSpeedConnector(long double* Wt, double count) {
			long double machines = 10000 * count, fWt = 0, aWt = 0;
			short image = 0;
			TreeNode^ out = gcnew TreeNode();
			out->ImageKey = "High-Speed Connector"; out->SelectedImageKey = "High-Speed Connector";

			if (high_speed_connector_recipe == 1) {
				machines /= 3.75;
				machines = int(machines) / 10000.0;
				aWt = machines * 55.0;

				out->Nodes->Add(quickwire(Wt, count * 56.0));
				fWt += *Wt; *Wt = 0; image++;
				out->Nodes->Add(cable(Wt, count * 10.0));
				fWt += *Wt; *Wt = 0; image++;
				out->Nodes->Add(circuitBoard(Wt, count * 1.0));
				fWt += *Wt; *Wt = fWt; image++;
				out->Text = "(" + machines + " - Manufacturer) " + dicount4 + " - High-Speed Connector [1] (" + aWt + " + " + *Wt + " MW)";

				Tmanufacturer[lvlcount] += ceil(machines);

			}
			else {
				machines /= 3.0;
				machines = int(machines) / 10000.0;
				aWt = machines * 55.0;

				out->Nodes->Add(quickwire(Wt, count * 30.0));
				fWt += *Wt; *Wt = 0; image++;
				out->Nodes->Add(silica(Wt, count * 12.5));
				fWt += *Wt; *Wt = 0; image++;
				out->Nodes->Add(circuitBoard(Wt, count * 1.0));
				fWt += *Wt; *Wt = fWt; image++;
				out->Text = "(" + machines + " - Manufacturer) " + dicount4 + " - High-Speed Connector [2] (" + aWt + " + " + *Wt + " MW)";

				Tmanufacturer[lvlcount] += ceil(machines);

			}
			out->ExpandAll();
			*Wt += aWt;
			Tenergy[lvlcount] = *Wt;
			return out;
		}
		/*done-res*/ TreeNode^ computer(long double* Wt, double count) {
			long double machines = 10000 * count, fWt = 0, aWt = 0;
			short image = 0;
			TreeNode^ out = gcnew TreeNode();
			out->ImageKey = "Computer"; out->SelectedImageKey = "Computer";

			if (computer_recipe == 1) {
				machines /= 2.5;
				machines = int(machines) / 10000.0;
				aWt = machines * 55.0;

				out->Nodes->Add(circuitBoard(Wt, count * 10.0));
				fWt += *Wt; *Wt = 0; image++;
				out->Nodes->Add(cable(Wt, count * 9.0));
				fWt += *Wt; *Wt = 0; image++;
				out->Nodes->Add(plastic(Wt, count * 18.0));
				fWt += *Wt; *Wt = 0; image++;
				out->Nodes->Add(screw(Wt, count * 52.0));
				fWt += *Wt; *Wt = fWt; image++;
				out->Text = "(" + machines + " - Manufacturer) " + dicount4 + " - Computer [1] (" + aWt + " + " + *Wt + " MW)";

				Tmanufacturer[lvlcount] += ceil(machines);

			}
			else if (computer_recipe == 2) {
				machines /= 3.75;
				machines = int(machines) / 10000.0;
				aWt = machines * 55.0;

				out->Nodes->Add(circuitBoard(Wt, count * 7.0));
				fWt += *Wt; *Wt = 0; image++;
				out->Nodes->Add(quickwire(Wt, count * 28.0));
				fWt += *Wt; *Wt = 0; image++;
				out->Nodes->Add(rubber(Wt, count * 12.0));
				fWt += *Wt; *Wt = fWt; image++;
				out->Text = "(" + machines + " - Manufacturer) " + dicount4 + " - Computer [2] (" + aWt + " + " + *Wt + " MW)";

				Tmanufacturer[lvlcount] += ceil(machines);

			}
			else {
				machines /= 2.8125;
				machines = int(machines) / 10000.0;
				aWt = machines * 55.0;

				out->Nodes->Add(circuitBoard(Wt, count * 8.0 / 3.0));
				fWt += *Wt; *Wt = 0; image++;
				out->Nodes->Add(crystalOscillator(Wt, count * 1.0));
				fWt += *Wt; *Wt = fWt; image++;
				out->Text = "(" + machines + " - Assembler) " + dicount4 + " - Computer [3] (" + aWt + " + " + *Wt + " MW)";

				Tassembler[lvlcount] += ceil(machines);

			}
			out->ExpandAll();
			*Wt += aWt;
			Tenergy[lvlcount] = *Wt;
			return out;
		}
		/*done-res*/ TreeNode^ supercomputer(long double* Wt, double count) {
			long double machines = 10000 * count, fWt = 0, aWt = 0;
			short image = 0;
			TreeNode^ out = gcnew TreeNode();
			out->ImageKey = "Supercomputer"; out->SelectedImageKey = "Supercomputer";

			machines /= 1.875;
			machines = int(machines) / 10000.0;
			aWt = machines * 55.0;

			out->Nodes->Add(computer(Wt, count * 2.0));
			fWt += *Wt; *Wt = 0; image++;
			out->Nodes->Add(AILimiter(Wt, count * 2.0));
			fWt += *Wt; *Wt = 0; image++;
			out->Nodes->Add(highSpeedConnector(Wt, count * 3.0));
			fWt += *Wt; *Wt = 0; image++;
			out->Nodes->Add(plastic(Wt, count * 28.0));
			fWt += *Wt; *Wt = fWt; image++;
			out->Text = "(" + machines + " - Manufacturer) " + dicount4 + " - Supercomputer (" + aWt + " + " + *Wt + " MW)";

			Tmanufacturer[lvlcount] += ceil(machines);

			out->ExpandAll();
			*Wt += aWt;
			Tenergy[lvlcount] = *Wt;
			return out;
		}
		/*done-res*/ TreeNode^ heavyModularFrame(long double* Wt, double count) {
			long double machines = 10000 * count, fWt = 0, aWt = 0;
			short image = 0;
			TreeNode^ out = gcnew TreeNode();
			out->ImageKey = "Heavy Modular Frame"; out->SelectedImageKey = "Heavy Modular Frame";

			if (heavy_modular_frame_recipe == 1) {
				machines /= 2.0;
				machines = int(machines) / 10000.0;
				aWt = machines * 55.0;

				out->Nodes->Add(modularFrame(Wt, count * 5.0));
				fWt += *Wt; *Wt = 0; image++;
				out->Nodes->Add(steelPipe(Wt, count * 15.0));
				fWt += *Wt; *Wt = 0; image++;
				out->Nodes->Add(encasedIndustrialBeam(Wt, count * 5.0));
				fWt += *Wt; *Wt = 0; image++;
				out->Nodes->Add(screw(Wt, count * 100.0));
				fWt += *Wt; *Wt = fWt; image++;
				out->Text = "(" + machines + " - Manufacturer) " + dicount4 + " - Heavy Modular Frame [1] (" + aWt + " + " + *Wt + " MW)";

				Tmanufacturer[lvlcount] += ceil(machines);

			}
			else if (heavy_modular_frame_recipe == 2) {
				machines /= 3.75;
				machines = int(machines) / 10000.0;
				aWt = machines * 55.0;

				out->Nodes->Add(modularFrame(Wt, count * 5.0));
				fWt += *Wt; *Wt = 0; image++;
				out->Nodes->Add(encasedIndustrialBeam(Wt, count * 3.0));
				fWt += *Wt; *Wt = 0; image++;
				out->Nodes->Add(rubber(Wt, count * 20.0));
				fWt += *Wt; *Wt = 0; image++;
				out->Nodes->Add(screw(Wt, count * 104.0));
				fWt += *Wt; *Wt = fWt; image++;
				out->Text = "(" + machines + " - Manufacturer) " + dicount4 + " - Heavy Modular Frame [2] (" + aWt + " + " + *Wt + " MW)";

				Tmanufacturer[lvlcount] += ceil(machines);

			}
			else {
				machines /= 2.8125;
				machines = int(machines) / 10000.0;
				aWt = machines * 55.0;

				out->Nodes->Add(modularFrame(Wt, count * 8.0 / 3.0));
				fWt += *Wt; *Wt = 0; image++;
				out->Nodes->Add(encasedIndustrialBeam(Wt, count * 10.0 / 3.0));
				fWt += *Wt; *Wt = 0; image++;
				out->Nodes->Add(steelPipe(Wt, count * 12.0));
				fWt += *Wt; *Wt = 0; image++;
				out->Nodes->Add(concrete(Wt, count * 22.0 / 3.0));
				fWt += *Wt; *Wt = fWt; image++;
				out->Text = "(" + machines + " - Manufacturer) " + dicount4 + " - Heavy Modular Frame [3] (" + aWt + " + " + *Wt + " MW)";

				Tmanufacturer[lvlcount] += ceil(machines);

			}
			out->ExpandAll();
			*Wt += aWt;
			Tenergy[lvlcount] = *Wt;
			return out;
		}
		/*done-res*/ TreeNode^ battery(long double* Wt, double count) {
			long double machines = 10000 * count, fWt = 0, aWt = 0;
			short image = 0;
			TreeNode^ out = gcnew TreeNode();
			out->ImageKey = "Battery"; out->SelectedImageKey = "Battery";

			machines /= 5.625;
			machines = int(machines) / 10000.0;
			aWt = machines * 55.0;

			out->Nodes->Add(alcladAluminumSheet(Wt, count * 8.0 / 3.0));
			fWt += *Wt; *Wt = 0; image++;
			out->Nodes->Add(wire(Wt, count * 16.0 / 3.0));
			fWt += *Wt; *Wt = 0; image++;
			out->Nodes->Add(double(int(count * 200000.0 / 3.0) / 10000.0) + " - Sulfur");
			out->Nodes[image]->ImageKey = "Sulfur"; out->Nodes[image++]->SelectedImageKey = "Sulfur";
			out->Nodes->Add(plastic(Wt, count * 8.0 / 3.0));
			fWt += *Wt; *Wt = fWt; image++;
			out->Text = "(" + machines + " - Manufacturer) " + dicount4 + " - Battery (" + aWt + " + " + *Wt + " MW)";

			Tmanufacturer[lvlcount] += ceil(machines);

			Tsulfur[lvlcount] += double(int(count * 200000.0 / 3.0) / 10000.0);

			out->ExpandAll();
			*Wt += aWt;
			Tenergy[lvlcount] = *Wt;
			return out;
		}
		/*done-res*/ TreeNode^ radioControlUnit(long double* Wt, double count) {
			long double machines = 10000 * count, fWt = 0, aWt = 0;
			short image = 0;
			TreeNode^ out = gcnew TreeNode();
			out->ImageKey = "Radio Control Unit"; out->SelectedImageKey = "Radio Control Unit";

			if (radio_control_unit_recipe == 1) {
				machines /= 2.5;
				machines = int(machines) / 10000.0;
				aWt = machines * 55.0;

				out->Nodes->Add(heatSink(Wt, count * 4.0));
				fWt += *Wt; *Wt = 0; image++;
				out->Nodes->Add(rubber(Wt, count * 16.0));
				fWt += *Wt; *Wt = 0; image++;
				out->Nodes->Add(crystalOscillator(Wt, count * 1.0));
				fWt += *Wt; *Wt = 0; image++;
				out->Nodes->Add(computer(Wt, count * 1.0));
				fWt += *Wt; *Wt = fWt; image++;
				out->Text = "(" + machines + " - Manufacturer) " + dicount4 + " - Radio Control Unit [1] (" + aWt + " + " + *Wt + " MW)";

				Tmanufacturer[lvlcount] += ceil(machines);

			}
			else {
				machines /= 3.75;
				machines = int(machines) / 10000.0;
				aWt = machines * 55.0;

				out->Nodes->Add(heatSink(Wt, count * 10.0 / 3.0));
				fWt += *Wt; *Wt = 0; image++;
				out->Nodes->Add(supercomputer(Wt, count / 3.0));
				fWt += *Wt; *Wt = 0; image++;
				out->Nodes->Add(quartzCrystal(Wt, count * 10.0));
				fWt += *Wt; *Wt = fWt; image++;
				out->Text = "(" + machines + " - Manufacturer) " + dicount4 + " - Radio Control Unit [2] (" + aWt + " + " + *Wt + " MW)";

				Tmanufacturer[lvlcount] += ceil(machines);

			}
			out->ExpandAll();
			*Wt += aWt;
			Tenergy[lvlcount] = *Wt;
			return out;
		}
		/*done-res*/ TreeNode^ turboMotor(long double* Wt, double count) {
			long double machines = 10000 * count, fWt = 0, aWt = 0;
			short image = 0;
			TreeNode^ out = gcnew TreeNode();
			out->ImageKey = "Turbo Motor"; out->SelectedImageKey = "Turbo Motor";

			if (turbo_motor_recipe == 1) {
				machines /= 1.875;
				machines = int(machines) / 10000.0;
				aWt = machines * 55.0;

				out->Nodes->Add(heatSink(Wt, count * 4.0));
				fWt += *Wt; *Wt = 0; image++;
				out->Nodes->Add(radioControlUnit(Wt, count * 2.0));
				fWt += *Wt; *Wt = 0; image++;
				out->Nodes->Add(motor(Wt, count * 4.0));
				fWt += *Wt; *Wt = 0; image++;
				out->Nodes->Add(rubber(Wt, count * 24.0));
				fWt += *Wt; *Wt = fWt; image++;
				out->Text = "(" + machines + " - Manufacturer) " + dicount4 + " - Turbo Motor [1] (" + aWt + " + " + *Wt + " MW)";

				Tmanufacturer[lvlcount] += ceil(machines);

			}
			else {
				machines /= 2.8125;
				machines = int(machines) / 10000.0;
				aWt = machines * 55.0;

				out->Nodes->Add(motor(Wt, count * 7.0 / 3.0));
				fWt += *Wt; *Wt = 0; image++;
				out->Nodes->Add(radioControlUnit(Wt, count * 5.0 / 3.0));
				fWt += *Wt; *Wt = 0; image++;
				out->Nodes->Add(AILimiter(Wt, count * 3.0));
				fWt += *Wt; *Wt = 0; image++;
				out->Nodes->Add(stator(Wt, count * 7.0 / 3.0));
				fWt += *Wt; *Wt = fWt; image++;
				out->Text = "(" + machines + " - Manufacturer) " + dicount4 + " - Turbo Motor [2] (" + aWt + " + " + *Wt + " MW)";

				Tmanufacturer[lvlcount] += ceil(machines);

			}
			out->ExpandAll();
			*Wt += aWt;
			Tenergy[lvlcount] = *Wt;
			return out;
		}
		/*done-res*/ TreeNode^ nuclearFuelRod(long double* Wt, double count) {
			long double machines = 10000 * count, fWt = 0, aWt = 0;
			short image = 0;
			TreeNode^ out = gcnew TreeNode();
			out->ImageKey = "Nuclear Fuel Rod"; out->SelectedImageKey = "Nuclear Fuel Rod";

			if (nuclear_fuel_rod_recipe == 1) {
				machines /= 0.4;
				machines = int(machines) / 10000.0;
				aWt = machines * 55.0;

				out->Nodes->Add(encasedUraniumCell(Wt, count * 25.0));
				fWt += *Wt; *Wt = 0; image++;
				out->Nodes->Add(encasedIndustrialBeam(Wt, count * 3.0));
				fWt += *Wt; *Wt = 0; image++;
				out->Nodes->Add(electromagneticControlRod(Wt, count * 5.0));
				fWt += *Wt; *Wt = fWt; image++;
				out->Text = "(" + machines + " - Manufacturer) " + dicount4 + " - Nuclear Fuel Rod [1] (" + aWt + " + " + *Wt + " MW)";

				Tmanufacturer[lvlcount] += ceil(machines);

			}
			else {
				machines /= 0.6;
				machines = int(machines) / 10000.0;
				aWt = machines * 55.0;

				out->Nodes->Add(encasedUraniumCell(Wt, count * 50.0 / 3.0));
				fWt += *Wt; *Wt = 0; image++;
				out->Nodes->Add(electromagneticControlRod(Wt, count * 10.0 / 3.0));
				fWt += *Wt; *Wt = 0; image++;
				out->Nodes->Add(crystalOscillator(Wt, count));
				fWt += *Wt; *Wt = 0; image++;
				out->Nodes->Add(beacon(Wt, count * 2.0));
				fWt += *Wt; *Wt = fWt; image++;
				out->Text = "(" + machines + " - Manufacturer) " + dicount4 + " - Nuclear Fuel Rod [2] (" + aWt + " + " + *Wt + " MW)";

				Tmanufacturer[lvlcount] += ceil(machines);

			}
			out->ExpandAll();
			*Wt += aWt;
			Tenergy[lvlcount] = *Wt;
			return out;
		}
		//==========================================================================================================================================================================
		/*done-res*/ TreeNode^ blackPowder(long double* Wt, double count) {
			long double machines = 10000 * count, fWt = 0, aWt = 0;
			short image = 0;
			TreeNode^ out = gcnew TreeNode();
			out->ImageKey = "Black Powder"; out->SelectedImageKey = "Black Powder";

			if (black_powder_recipe == 1) {
				machines /= 7.5;
				machines = int(machines) / 10000.0;
				*Wt += machines * 15.0;

				out->Text = ("(" + machines + " - Assembler) " + dicount4 + " - Black Powder [1] (" + *Wt + " MW)");
				out->Nodes->Add(dicount4 + " - Coal");
				out->Nodes[image]->ImageKey = "Coal"; out->Nodes[image++]->SelectedImageKey = "Coal";
				out->Nodes->Add(dicount4 * 2 + " - Sulfur");
				out->Nodes[image]->ImageKey = "Sulfur"; out->Nodes[image++]->SelectedImageKey = "Sulfur";

				Tassembler[lvlcount] += ceil(machines);

				Tcoal[lvlcount] += dicount4 ;
				Tsulfur[lvlcount] += dicount4 * 2;

			}
			else {
				machines /= 15.0;
				machines = int(machines) / 10000.0;
				*Wt += machines * 15.0;

				out->Nodes->Add(dicount4 * 0.5 + " - Sulfur");
				out->Nodes[image]->ImageKey = "Sulfur"; out->Nodes[image++]->SelectedImageKey = "Sulfur";
				out->Nodes->Add(compactedCoal(Wt, count * 0.25));
				fWt += *Wt; *Wt = fWt; image++;
				out->Text = "(" + machines + " - Assembler) " + dicount4 + " - Black Powder [2] (" + aWt + " + " + *Wt + " MW)";

				Tassembler[lvlcount] += ceil(machines);

				Tsulfur[lvlcount] += dicount4 * 0.5;

			}
			out->ExpandAll();
			*Wt += aWt;
			Tenergy[lvlcount] = *Wt;
			return out;
		}
		/*done-res*/ TreeNode^ fabric(long double* Wt, double count) {
			long double machines = 10000 * count, fWt = 0, aWt = 0;
			short image = 0;
			TreeNode^ out = gcnew TreeNode();
			out->ImageKey = "Fabric"; out->SelectedImageKey = "Fabric";

			if (fabric_recipe == 1) {
				machines /= 15.0;
				machines = int(machines) / 10000.0;
				*Wt += machines * 15.0;

				out->Text = ("(" + machines + " - Assembler) " + dicount4 + " - Fabric [1] (" + *Wt + " MW)");
				out->Nodes->Add(dicount4 + " - Mycelia");
				out->Nodes[image]->ImageKey = "Mycelia"; out->Nodes[image++]->SelectedImageKey = "Mycelia";
				out->Nodes->Add(dicount4*5 + " - Biomass");
				out->Nodes[image]->ImageKey = "Biomass"; out->Nodes[image++]->SelectedImageKey = "Biomass";

				Tassembler[lvlcount] += ceil(machines);

				Tmycelia[lvlcount] += dicount4;
				Tbiomass[lvlcount] += dicount4 * 5;

			}
			else {
				machines /= 5.0;
				machines = int(machines) / 10000.0;
				*Wt += machines * 15.0;

				out->Text = ("(" + machines + " - Refinery) " + dicount4 + " - Fabric [2] (" + *Wt + " MW)");
				out->Nodes->Add(dicount4*16 + " - Polymer Resin");
				out->Nodes[image]->ImageKey = "Polymer Resin"; out->Nodes[image++]->SelectedImageKey = "Polymer Resin";
				out->Nodes->Add(dicount4*10 + " - Water");
				out->Nodes[image]->ImageKey = "Water"; out->Nodes[image++]->SelectedImageKey = "Water";

				Trefinery[lvlcount] += ceil(machines);

				TpolymerResin[lvlcount] += dicount4 * 16;
				Twater[lvlcount] += dicount4 * 10;

			}
			out->ExpandAll();
			*Wt += aWt;
			Tenergy[lvlcount] = *Wt;
			return out;
		}
		/*done-res*/ TreeNode^ gasFilter(long double* Wt, double count) {
			long double machines = 10000 * count, fWt = 0, aWt = 0;
			short image = 0;
			TreeNode^ out = gcnew TreeNode();
			out->ImageKey = "Gas Filter"; out->SelectedImageKey = "Gas Filter";

			machines /= 7.5;
			machines = int(machines) / 10000.0;
			aWt = machines * 55.0;

			out->Nodes->Add(dicount4 * 5 + " - Coal");
			out->Nodes[image]->ImageKey = "Coal"; out->Nodes[image++]->SelectedImageKey = "Coal";
			out->Nodes->Add(rubber(Wt, count * 2.0));
			fWt += *Wt; *Wt = 0; image++;
			out->Nodes->Add(fabric(Wt, count * 2.0));
			fWt += *Wt; *Wt = fWt; image++;
			out->Text = "(" + machines + " - Manufacturer) " + dicount4 + " - Gas Filter (" + aWt + " + " + *Wt + " MW)";

			Tmanufacturer[lvlcount] += ceil(machines);

			Tcoal[lvlcount] += dicount4 * 5;

			out->ExpandAll();
			*Wt += aWt;
			Tenergy[lvlcount] = *Wt;
			return out;
		}
		/*done-res*/ TreeNode^ iodineInfusedFilter(long double* Wt, double count) {
			long double machines = 10000 * count, fWt = 0, aWt = 0;
			short image = 0;
			TreeNode^ out = gcnew TreeNode();
			out->ImageKey = "Iodine Infused Filter"; out->SelectedImageKey = "Iodine Infused Filter";

			machines /= 3.75;
			machines = int(machines) / 10000.0;
			aWt = machines * 55.0;

			out->Nodes->Add(gasFilter(Wt, count));
			fWt += *Wt; *Wt = 0; image++;
			out->Nodes->Add(quickwire(Wt, count * 8.0));
			fWt += *Wt; *Wt = 0; image++;
			out->Nodes->Add(rubber(Wt, count * 2.0));
			fWt += *Wt; *Wt = fWt; image++;
			out->Text = "(" + machines + " - Manufacturer) " + dicount4 + " - Iodine Infused Filter (" + aWt + " + " + *Wt + " MW)";

			Tmanufacturer[lvlcount] += ceil(machines);

			out->ExpandAll();
			*Wt += aWt;
			Tenergy[lvlcount] = *Wt;
			return out;
		}
		/*done-res*/ TreeNode^ rifleCartridge(long double* Wt, double count) {
			long double machines = 10000 * count, fWt = 0, aWt = 0;
			short image = 0;
			TreeNode^ out = gcnew TreeNode();
			out->ImageKey = "Rifle Cartridge"; out->SelectedImageKey = "Rifle Cartridge";

			machines /= 15;
			machines = int(machines) / 10000.0;
			aWt = machines * 55.0;

			out->Nodes->Add(beacon(Wt, count * 0.2));
			fWt += *Wt; *Wt = 0; image++;
			out->Nodes->Add(steelPipe(Wt, count * 2.0));
			fWt += *Wt; *Wt = 0; image++;
			out->Nodes->Add(blackPowder(Wt, count * 2.0));
			fWt += *Wt; *Wt = 0; image++;
			out->Nodes->Add(rubber(Wt, count * 2.0));
			fWt += *Wt; *Wt = fWt; image++;
			out->Text = "(" + machines + " - Manufacturer) " + dicount4 + " - Rifle Cartridge (" + aWt + " + " + *Wt + " MW)";

			Tmanufacturer[lvlcount] += ceil(machines);

			out->ExpandAll();
			*Wt += aWt;
			Tenergy[lvlcount] = *Wt;
			return out;
		}
		//==========================================================================================================================================================================
		/*done-res*/ TreeNode^ smartPlating(long double* Wt, double count) {
			long double machines = 10000 * count, fWt = 0, aWt = 0;
			short image = 0;
			TreeNode^ out = gcnew TreeNode();
			out->ImageKey = "Smart Plating"; out->SelectedImageKey = "Smart Plating";

			if (smart_plating_recipe == 1) {
				machines /= 2;
				machines = int(machines) / 10000.0;
				aWt = machines * 15.0;

				out->Nodes->Add(reinforcedIronPlate(Wt, count));
				fWt += *Wt; *Wt = 0; image++;
				out->Nodes->Add(rotor(Wt, count));
				fWt += *Wt; *Wt = fWt; image++;
				out->Text = "(" + machines + " - Assembler) " + dicount4 + " - Smart Plating [1] (" + aWt + " + " + *Wt + " MW)";

				Tassembler[lvlcount] += ceil(machines);

			}
			else {
				machines /= 5;
				machines = int(machines) / 10000.0;
				aWt = machines * 55.0;

				out->Nodes->Add(reinforcedIronPlate(Wt, count * 0.5));
				fWt += *Wt; *Wt = 0; image++;
				out->Nodes->Add(rotor(Wt, count * 0.5));
				fWt += *Wt; *Wt = 0; image++;
				out->Nodes->Add(plastic(Wt, count * 1.5));
				fWt += *Wt; *Wt = fWt; image++;
				out->Text = "(" + machines + " - Manufacturer) " + dicount4 + " - Smart Plating [2] (" + aWt + " + " + *Wt + " MW)";

				Tmanufacturer[lvlcount] += ceil(machines);

			}
			out->ExpandAll();
			*Wt += aWt;
			Tenergy[lvlcount] = *Wt;
			return out;
		}
		/*done-res*/ TreeNode^ versatileFramework(long double* Wt, double count) {
			long double machines = 10000 * count, fWt = 0, aWt = 0;
			short image = 0;
			TreeNode^ out = gcnew TreeNode();
			out->ImageKey = "Versatile Framework"; out->SelectedImageKey = "Versatile Framework";

			if (versatile_framework_recipe == 1) {
				machines /= 5;
				machines = int(machines) / 10000.0;
				aWt = machines * 15.0;

				out->Nodes->Add(modularFrame(Wt, count * 0.5));
				fWt += *Wt; *Wt = 0; image++;
				out->Nodes->Add(steelBeam(Wt, count * 6.0));
				fWt += *Wt; *Wt = fWt; image++;
				out->Text = "(" + machines + " - Assembler) " + dicount4 + " - Versatile Framework [1] (" + aWt + " + " + *Wt + " MW)";

				Tassembler[lvlcount] += ceil(machines);

			}
			else {
				machines /= 7.5;
				machines = int(machines) / 10000.0;
				aWt = machines * 55.0;

				out->Nodes->Add(modularFrame(Wt, count * 0.5));
				fWt += *Wt; *Wt = 0; image++;
				out->Nodes->Add(steelBeam(Wt, count * 3.0));
				fWt += *Wt; *Wt = 0; image++;
				out->Nodes->Add(rubber(Wt, count * 4.0));
				fWt += *Wt; *Wt = fWt; image++;
				out->Text = "(" + machines + " - Manufacturer) " + dicount4 + " - Versatile Framework [2] (" + aWt + " + " + *Wt + " MW)";

				Tmanufacturer[lvlcount] += ceil(machines);

			}
			out->ExpandAll();
			*Wt += aWt;
			Tenergy[lvlcount] = *Wt;
			return out;
		}
		/*done-res*/ TreeNode^ automatedWiring(long double* Wt, double count) {
			long double machines = 10000 * count, fWt = 0, aWt = 0;
			short image = 0;
			TreeNode^ out = gcnew TreeNode();
			out->ImageKey = "Automated Wiring"; out->SelectedImageKey = "Automated Wiring";

			if (automated_wiring_recipe == 1) {
				machines /= 5;
				machines = int(machines) / 10000.0;
				aWt = machines * 15.0;

				out->Nodes->Add(stator(Wt, count));
				fWt += *Wt; *Wt = 0; image++;
				out->Nodes->Add(cable(Wt, count * 20.0));
				fWt += *Wt; *Wt = fWt; image++;
				out->Text = "(" + machines + " - Assembler) " + dicount4 + " - Automated Wiring [1] (" + aWt + " + " + *Wt + " MW)";

				Tassembler[lvlcount] += ceil(machines);

			}
			else {
				machines /= 7.5;
				machines = int(machines) / 10000.0;
				aWt = machines * 55.0;

				out->Nodes->Add(stator(Wt, count * 0.5));
				fWt += *Wt; *Wt = 0; image++;
				out->Nodes->Add(wire(Wt, count * 10.0));
				fWt += *Wt; *Wt = 0; image++;
				out->Nodes->Add(highSpeedConnector(Wt, count * 0.25));
				fWt += *Wt; *Wt = fWt; image++;
				out->Text = "(" + machines + " - Manufacturer) " + dicount4 + " - Versatile Framework [2] (" + aWt + " + " + *Wt + " MW)";

				Tmanufacturer[lvlcount] += ceil(machines);

			}
			out->ExpandAll();
			*Wt += aWt;
			Tenergy[lvlcount] = *Wt;
			return out;
		}
		/*done-res*/ TreeNode^ modularEngine(long double* Wt, double count) {
			long double machines = 10000 * count, fWt = 0, aWt = 0;
			short image = 0;
			TreeNode^ out = gcnew TreeNode();
			out->ImageKey = "Modular Engine"; out->SelectedImageKey = "Modular Engine";

			machines /= 1.0;
			machines = int(machines) / 10000.0;
			aWt = machines * 55.0;

			out->Nodes->Add(motor(Wt, count * 2.0));
			fWt += *Wt; *Wt = 0; image++;
			out->Nodes->Add(rubber(Wt, count * 15.0));
			fWt += *Wt; *Wt = 0; image++;
			out->Nodes->Add(smartPlating(Wt, count * 2.0));
			fWt += *Wt; *Wt = fWt; image++;
			out->Text = "(" + machines + " - Manufacturer) " + dicount4 + " - Modular Engine (" + aWt + " + " + *Wt + " MW)";

			Tmanufacturer[lvlcount] += ceil(machines);

			out->ExpandAll();
			*Wt += aWt;
			Tenergy[lvlcount] = *Wt;
			return out;
		}
		/*done-res*/ TreeNode^ adaptiveControlUnit(long double* Wt, double count) {
			long double machines = 10000 * count, fWt = 0, aWt = 0;
			short image = 0;
			TreeNode^ out = gcnew TreeNode();
			out->ImageKey = "Adaptive Control Unit"; out->SelectedImageKey = "Adaptive Control Unit";

			machines /= 1.0;
			machines = int(machines) / 10000.0;
			aWt = machines * 55.0;

			out->Nodes->Add(automatedWiring(Wt, count * 7.5));
			fWt += *Wt; *Wt = 0; image++;
			out->Nodes->Add(circuitBoard(Wt, count * 5.0));
			fWt += *Wt; *Wt = 0; image++;
			out->Nodes->Add(heavyModularFrame(Wt, count));
			fWt += *Wt; *Wt = 0; image++;
			out->Nodes->Add(computer(Wt, count));
			fWt += *Wt; *Wt = fWt; image++;
			out->Text = "(" + machines + " - Manufacturer) " + dicount4 + " - Adaptive Control Unit (" + aWt + " + " + *Wt + " MW)";

			Tmanufacturer[lvlcount] += ceil(machines);

			out->ExpandAll();
			*Wt += aWt;
			Tenergy[lvlcount] = *Wt;
			return out;
		}
		//==========================================================================================================================================================================
		/*Refined Power*/ TreeNode^ carbonDust(long double* Wt, double count) {
			long double machines = 10000 * count, fWt = 0, aWt = 0;
			short image = 0;
			TreeNode^ out = gcnew TreeNode();
			out->ImageKey = "Carbon Dust"; out->SelectedImageKey = "Carbon Dust";

			machines /= 100.0;
			machines = int(machines) / 10000.0;
			aWt += machines * 4.0;

			out->Text = ("(" + machines + " - Constructor) " + dicount4 + " - Carbon Dust (" + *Wt + " MW)");
			out->Nodes->Add(double(int(count * 20000.0 / 5.0) / 10000.0) + " - Coal");
			out->Nodes[image]->ImageKey = "Coal"; out->Nodes[image++]->SelectedImageKey = "Coal";

			Tconstructor[lvlcount] += ceil(machines);

			out->ExpandAll();
			*Wt += aWt;
			Tenergy[lvlcount] = *Wt;
			return out;
		}
		/*Refined Power*/ TreeNode^ carbonMesh(long double* Wt, double count) {
			long double machines = 10000 * count, fWt = 0, aWt = 0;
			short image = 0;
			TreeNode^ out = gcnew TreeNode();
			out->ImageKey = "Carbon Mesh"; out->SelectedImageKey = "Carbon Mesh";

			machines /= 20.0;
			machines = int(machines) / 10000.0;
			aWt += machines * 16.0;

			out->Nodes->Add(carbonDust(Wt, count * 40.0));
			fWt += *Wt; *Wt = 0; image++;
			out->Nodes->Add(wire(Wt, count * 80.0));
			fWt += *Wt; *Wt = fWt; image++;
			out->Text = "(" + machines + " - Assembler) " + dicount4 + " - Reinforced Iron Plate (" + aWt + " + " + *Wt + " MW)";

			Tassembler[lvlcount] += ceil(machines);

			out->ExpandAll();
			*Wt += aWt;
			Tenergy[lvlcount] = *Wt;
			return out;
		}
		/*Refined Power*/ TreeNode^ reinforcedCarbon(long double* Wt, double count) {
			long double machines = 10000 * count, fWt = 0, aWt = 0;
			short image = 0;
			TreeNode^ out = gcnew TreeNode();
			out->ImageKey = "Carbon Mesh"; out->SelectedImageKey = "Carbon Mesh";

			machines /= 100.0;
			machines = int(machines) / 10000.0;
			aWt += machines * 16.0;

			out->Nodes->Add(carbonMesh(Wt, count * 40.0));
			fWt += *Wt; *Wt = 0; image++;
			out->Nodes->Add(encasedIndustrialBeam(Wt, count * 100.0));
			fWt += *Wt; *Wt = fWt; image++;
			out->Text = "(" + machines + " - Assembler) " + dicount4 + " - Reinforced Iron Plate (" + aWt + " + " + *Wt + " MW)";

			Tassembler[lvlcount] += ceil(machines);

			out->ExpandAll();
			*Wt += aWt;
			Tenergy[lvlcount] = *Wt;
			return out;
		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		treeView1->ExpandAll();
		radioButton1->Visible = false; label5->Text = "";
		radioButton2->Visible = false; label6->Text = "";
		radioButton3->Visible = false; label7->Text = "";
		radioButton4->Visible = false; label8->Text = "";
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		if (listBox1->SelectedItem) {
			button1->Enabled = true;
			button3->Enabled = true;
			System::String^ str = "";
			label2->Text = listBox1->SelectedItem->ToString();
			str = listBox1->SelectedItem->ToString();
			button_changing = false;
			//lol
			pictureBox2->Visible = false;

			if (str == "A.I. Limiter") {
				radioButton1->Visible = false; label5->Text = "25 - Copper Sheet\n100 - Quickwire\n= 5 - A.I. Limiter";
				radioButton2->Visible = false; label6->Text = "";
				radioButton3->Visible = false; label7->Text = "";
				radioButton4->Visible = false; label8->Text = "";
			}
			else if (str == "Adaptive Control Unit") {
				radioButton1->Visible = false; label5->Text = "7.5 - Automated Wiring\n5 - Circuit Board\n1 - Heavy Modular Frame\n1 - Computer\n= 1 - Adaptive Control Unit";
				radioButton2->Visible = false; label6->Text = "";
				radioButton3->Visible = false; label7->Text = "";
				radioButton4->Visible = false; label8->Text = "";
			}
			else if (str == "Alclad Aluminum Sheet") {
				radioButton1->Visible = false; label5->Text = "60 - Aluminum Ingot\n22.5 - Copper Ingot\n= 30 - Alclad Aluminum Sheet";
				radioButton2->Visible = false; label6->Text = "";
				radioButton3->Visible = false; label7->Text = "";
				radioButton4->Visible = false; label8->Text = "";
			}
			else if (str == "Aluminum Ingot (Recipe: 1)" || str == "Aluminum Ingot (Recipe: 2)") {
				radioButton1->Visible = true; label5->Text = "240 - Aluminum Scrap\n140 - Silica\n= 80 - Aluminum Ingot";
				radioButton2->Visible = true; label6->Text = "144 - Aluminum Scrap\n= 36 - Aluminum Ingot";
				radioButton3->Visible = false; label7->Text = "";
				radioButton4->Visible = false; label8->Text = "";
				if (aluminum_ingot_recipe == 1)
					radioButton1->Checked = true;
				else
					radioButton2->Checked = true;
			}
			else if (str == "Aluminum Scrap (Recipe: 1)" || str == "Aluminum Scrap (Recipe: 2)") {
				radioButton1->Visible = true; label5->Text = "240 - Alumina Solution\n60 - Petroleum Coke\n= 360 - Aluminum Scrap\n+ 60 - Water";
				radioButton2->Visible = true; label6->Text = "90 - Alumina Solution\n30 - Coal\n= 150 - Aluminum Scrap\n+ 30 - Water";
				radioButton3->Visible = false; label7->Text = "";
				radioButton4->Visible = false; label8->Text = "";
				if (aluminum_scrap_recipe == 1)
					radioButton1->Checked = true;
				else
					radioButton2->Checked = true;
			}
			else if (str == "Automated Wiring (Recipe: 1)" || str == "Automated Wiring (Recipe: 2)") {
				radioButton1->Visible = true; label5->Text = "2.5 - Stator\n50 - Cable\n= 2.5 - Automated Wiring";
				radioButton2->Visible = true; label6->Text = "3.75 - Stator\n75 - Wire\n1.875 - High-Speed Connector\n= 7.5 - Automated Wiring";
				radioButton3->Visible = false; label7->Text = "";
				radioButton4->Visible = false; label8->Text = "";
				if (automated_wiring_recipe == 1)
					radioButton1->Checked = true;
				else
					radioButton2->Checked = true;
			}
			else if (str == "Battery") {
				radioButton1->Visible = false; label5->Text = "15 - Alclad Aluminum Sheet\n30 - Wire\n37.5 - Sulfur\n15 - Plastic\n= 5.625 - Battery";
				radioButton2->Visible = false; label6->Text = "";
				radioButton3->Visible = false; label7->Text = "";
				radioButton4->Visible = false; label8->Text = "";
			}
			else if (str == "Beacon (Recipe: 1)" || str == "Beacon (Recipe: 2)") {
				radioButton1->Visible = true; label5->Text = "22.5 - Iron Plate\n7.5 - Iron Rod\n112.5 - Wire\n15 - Cable\n= 7.5 - Beacon";
				radioButton2->Visible = true; label6->Text = "2 - Steel Beam\n8 - Steel Pipe\n0.5 - Crystal Oscillator\n= 10 - Beacon";
				radioButton3->Visible = false; label7->Text = "";
				radioButton4->Visible = false; label8->Text = "";
				if (beacon_recipe == 1)
					radioButton1->Checked = true;
				else
					radioButton2->Checked = true;
			}
			else if (str == "Black Powder (Recipe: 1)" || str == "Black Powder (Recipe: 2)") {
				radioButton1->Visible = true; label5->Text = "7.5 - Coal\n15 - Sulfur\n= 7.5 - Black Powder";
				radioButton2->Visible = true; label6->Text = "7.5 - Sulfur\n3.75 - Compacted Coal\n= 15 - Black Powder";
				radioButton3->Visible = false; label7->Text = "";
				radioButton4->Visible = false; label8->Text = "";
				if (black_powder_recipe == 1)
					radioButton1->Checked = true;
				else
					radioButton2->Checked = true;
			}
			else if (str == "Cable (Recipe: 1)" || str == "Cable (Recipe: 2)" || str == "Cable (Recipe: 3)" || str == "Cable (Recipe: 4)") {
				radioButton1->Visible = true; label5->Text = "60 - Wire\n= 30 - Cable";
				radioButton2->Visible = true; label6->Text = "37.5 - Wire\n15 - Heavy Oil Residue\n= 67.5 - Cable";
				radioButton3->Visible = true; label7->Text = "45 - Wire\n30 - Rubber\n= 100 - Cable";
				radioButton4->Visible = true; label8->Text = "7.5 - Quickwire\n5 - Rubber\n= 27.5 - Cable";
				if (cable_recipe == 1)
					radioButton1->Checked = true;
				else if (cable_recipe == 2)
					radioButton2->Checked = true;
				else if (cable_recipe == 3)
					radioButton3->Checked = true;
				else
					radioButton4->Checked = true;
			}
			else if (str == "Caterium Ingot (Recipe: 1)" || str == "Caterium Ingot (Recipe: 2)") {
				radioButton1->Visible = true; label5->Text = "45 - Caterium Ore\n= 15 - Caterium Ingot";
				radioButton2->Visible = true; label6->Text = "24 - Caterium Ore\n24 - Water\n= 12 - Caterium Ingot";
				radioButton3->Visible = false; label7->Text = "";
				radioButton4->Visible = false; label8->Text = "";
				if (caterium_ingot_recipe == 1)
					radioButton1->Checked = true;
				else
					radioButton2->Checked = true;
			}
			else if (str == "Circuit Board (Recipe: 1)" || str == "Circuit Board (Recipe: 2)" || str == "Circuit Board (Recipe: 3)" || str == "Circuit Board (Recipe: 4)") {
				radioButton1->Visible = true; label5->Text = "15 - Copper Sheet\n30 - Plastic\n= 7.5 - Circuit Board";
				radioButton2->Visible = true; label6->Text = "30 - Rubber\n45 - Petroleum Coke\n= 5 - Circuit Board";
				radioButton3->Visible = true; label7->Text = "27.5 - Copper Sheet\n27.5 - Silica\n= 12.5 - Circuit Board";
				radioButton4->Visible = true; label8->Text = "12.5 - Plastic\n37.5 - Quickwire\n= 8.75 - Circuit Board";
				if (circuit_board_recipe == 1)
					radioButton1->Checked = true;
				else if (circuit_board_recipe == 2)
					radioButton2->Checked = true;
				else if (circuit_board_recipe == 3)
					radioButton3->Checked = true;
				else
					radioButton4->Checked = true;
			}
			else if (str == "Computer (Recipe: 1)" || str == "Computer (Recipe: 2)" || str == "Computer (Recipe: 3)") {
				radioButton1->Visible = true; label5->Text = "25 - Circuit Board\n22.5 - Cable\n45 - Plastic\n130 - Screw\n= 2.5 - Computer";
				radioButton2->Visible = true; label6->Text = "26.25 - Circuit Board\n105 - Quickwire\n45 - Rubber\n= 3.75 - Computer";
				radioButton3->Visible = true; label7->Text = "7.5 - Circuit Board\n2.8125 - Crystal Oscillator\n= 2.8125 - Computer";
				radioButton4->Visible = false; label8->Text = "";
				if (computer_recipe == 1)
					radioButton1->Checked = true;
				else if (computer_recipe == 2)
					radioButton2->Checked = true;
				else
					radioButton3->Checked = true;
			}
			else if (str == "Concrete (Recipe: 1)" || str == "Concrete (Recipe: 2)" || str == "Concrete (Recipe: 3)" || str == "Concrete (Recipe: 4)") {
				radioButton1->Visible = true; label5->Text = "45 - Limestone\n= 15 - Concrete";
				radioButton2->Visible = true; label6->Text = "50 - Limestone\n10 - Rubber\n= 45 - Concrete";
				radioButton3->Visible = true; label7->Text = "120 - Limestone\n100 - Water\n= 80 - Concrete";
				radioButton4->Visible = true; label8->Text = "7.5 - Silica\n30 - Limestone\n= 25 - Concrete";
				if (concrete_recipe == 1)
					radioButton1->Checked = true;
				else if (concrete_recipe == 2)
					radioButton2->Checked = true;
				else if (concrete_recipe == 3)
					radioButton3->Checked = true;
				else
					radioButton4->Checked = true;
			}
			else if (str == "Copper Ingot (Recipe: 1)" || str == "Copper Ingot (Recipe: 2)" || str == "Copper Ingot (Recipe: 3)") {
				radioButton1->Visible = true; label5->Text = "30 - Copper Ore\n= 30 - Copper Ingot";
				radioButton2->Visible = true; label6->Text = "50 - Copper Ore\n25 - Iron Ore\n= 100 - Copper Ingot";
				radioButton3->Visible = true; label7->Text = "15 - Copper Ore\n10 - Water\n= 37.5 Copper Ingot";
				radioButton4->Visible = false; label8->Text = "";
				if (copper_ingot_recipe == 1)
					radioButton1->Checked = true;
				else if (copper_ingot_recipe == 2)
					radioButton2->Checked = true;
				else
					radioButton3->Checked = true;
			}
			else if (str == "Copper Sheet (Recipe: 1)" || str == "Copper Sheet (Recipe: 2)") {
				radioButton1->Visible = true; label5->Text = "20 - Copper Ingot\n= 10 - Copper Sheet";
				radioButton2->Visible = true; label6->Text = "22.5 - Copper Ingot\n22.5 - Water\n= 22.5 - Copper Sheet";
				radioButton3->Visible = false; label7->Text = "";
				radioButton4->Visible = false; label8->Text = "";
				if (copper_sheet_recipe == 1)
					radioButton1->Checked = true;
				else
					radioButton2->Checked = true;
			}
			else if (str == "Crystal Oscillator (Recipe: 1)" || str == "Crystal Oscillator (Recipe: 2)") {
				radioButton1->Visible = true; label5->Text = "18 - Quartz Crystal\n14 - Cable\n2.5 - Reinforced Iron Plate\n= 1 - Crystal Oscillator";
				radioButton2->Visible = true; label6->Text = "18.75 - Quartz Crystal\n13.125 - Rubber\n1.875 - A.I. Limiter\n= 1.875 - Crystal Oscillator";
				radioButton3->Visible = false; label7->Text = "";
				radioButton4->Visible = false; label8->Text = "";
				if (crystal_oscillator_recipe == 1)
					radioButton1->Checked = true;
				else
					radioButton2->Checked = true;
			}
			else if (str == "Electromagnetic Control Rod (Recipe: 1)" || str == "Electromagnetic Control Rod (Recipe: 2)") {
				radioButton1->Visible = true; label5->Text = "6 - Stator\n4 - A.I. Limiter\n= 4 - Electromagnetic Control Rod";
				radioButton2->Visible = true; label6->Text = "10 - Stator\n5 - High-Speed Connector\n= 10 - Electromagnetic Control Rod";
				radioButton3->Visible = false; label7->Text = "";
				radioButton4->Visible = false; label8->Text = "";
				if (electromagnetic_control_rod_recipe == 1)
					radioButton1->Checked = true;
				else
					radioButton2->Checked = true;
			}
			else if (str == "Empty Canister") {
				radioButton1->Visible = false; label5->Text = "30 - Plastic\n= 60 - Empty Canister";
				radioButton2->Visible = false; label6->Text = "";
				radioButton3->Visible = false; label7->Text = "";
				radioButton4->Visible = false; label8->Text = "";
			}
			else if (str == "Encased Industrial Beam (Recipe: 1)" || str == "Encased Industrial Beam (Recipe: 2)") {
				radioButton1->Visible = true; label5->Text = "24 - Steel Beam\n30 - Concrete\n= 6 - Encased Industrial Beam";
				radioButton2->Visible = true; label6->Text = "28 - Steel Pipe\n20 - Concrete\n= 4 - Encased Industrial Beam";
				radioButton3->Visible = false; label7->Text = "";
				radioButton4->Visible = false; label8->Text = "";
				if (encased_industrial_beam_recipe == 1)
					radioButton1->Checked = true;
				else
					radioButton2->Checked = true;
			}
			else if (str == "Encased Uranium Cell (Recipe: 1)" || str == "Encased Uranium Cell (Recipe: 2)") {
				radioButton1->Visible = true; label5->Text = "40 - Uranium Pellet\n9 - Concrete\n= 10 - Encased Uranium Cell";
				radioButton2->Visible = true; label6->Text = "20 - Urenium Pellet\n22.5 - Sulfur\n22.5 - Silica\n37.5 - Quickwire\n= 17.5 - Encased Uranium Cell";
				radioButton3->Visible = false; label7->Text = "";
				radioButton4->Visible = false; label8->Text = "";
				if (encased_uranium_cell_recipe == 1)
					radioButton1->Checked = true;
				else
					radioButton2->Checked = true;
			}
			else if (str == "Fabric (Recipe: 1)" || str == "Fabric (Recipe: 2)") {
				radioButton1->Visible = true; label5->Text = "15 - Mycelia\n75 - Biomass\n= 15 - Fabric";
				radioButton2->Visible = true; label6->Text = "80 - Polymer Resin\n50 - Water\n= 5 - Fabric";
				radioButton3->Visible = false; label7->Text = "";
				radioButton4->Visible = false; label8->Text = "";
				if (fabric_recipe == 1)
					radioButton1->Checked = true;
				else
					radioButton2->Checked = true;
			}
			else if (str == "Gas Filter") {
				radioButton1->Visible = false; label5->Text = "37.5 - Coal\n15 - Rubber\n15 - Fabric\n= 7.5 - Gas Filter";
				radioButton2->Visible = false; label6->Text = "";
				radioButton3->Visible = false; label7->Text = "";
				radioButton4->Visible = false; label8->Text = "";
			}
			else if (str == "Heat Sink (Recipe: 1)" || str == "Heat Sink (Recipe: 2)") {
				radioButton1->Visible = true; label5->Text = "40 - Alclad Aluminum Sheet\n70 - Rubber\n= 10 - Heat Sink";
				radioButton2->Visible = true; label6->Text = "37.5 - Alclad Aluminum Sheet\n56.25 - Copper Sheet\n= 13.125 - Heat Sink";
				radioButton3->Visible = false; label7->Text = "";
				radioButton4->Visible = false; label8->Text = "";
				if (heat_sink_recipe == 1)
					radioButton1->Checked = true;
				else
					radioButton2->Checked = true;
			}
			else if (str == "Heavy Modular Frame (Recipe: 1)" || str == "Heavy Modular Frame (Recipe: 2)" || str == "Heavy Modular Frame (Recipe: 3)") {
				radioButton1->Visible = true; label5->Text = "10 - Modular Frame\n30 - Steel Pipe\n10 - Encased Industrial Beam\n200 - Screw\n= 2 - Heavy Modular Frame";
				radioButton2->Visible = true; label6->Text = "18.75 - Modular Frame\n11.25 - Encased Industrial Beam\n75 - Rubber\n390 - Screw\n= 3.75 - Heavy Modular Frame";
				radioButton3->Visible = true; label7->Text = "7.5 - Modular Frame\n9.375 - Encased Industrial Beam\n33.75 - Steel Pipe\n20.625 - Concrete\n= 2.8125 - Heavy Modular Frame";
				radioButton4->Visible = false; label8->Text = "";
				if (heavy_modular_frame_recipe == 1)
					radioButton1->Checked = true;
				else if (heavy_modular_frame_recipe == 2)
					radioButton2->Checked = true;
				else
					radioButton3->Checked = true;
			}
			else if (str == "High-Speed Connector (Recipe: 1)" || str == "High-Speed Connector (Recipe: 2)") {
				radioButton1->Visible = true; label5->Text = "210 - Quickwire\n37.5 - Cable\n3.75 - Circuit Board\n= 3.75 - High-Speed Connector";
				radioButton2->Visible = true; label6->Text = "90 - Quickwire\n37.5 - Silica\n3 - Circuit Board\n= 3 - High-Speed Connector";
				radioButton3->Visible = false; label7->Text = "";
				radioButton4->Visible = false; label8->Text = "";
				if (high_speed_connector_recipe == 1)
					radioButton1->Checked = true;
				else
					radioButton2->Checked = true;
			}
			else if (str == "Iodine Infused Filter") {
				radioButton1->Visible = false; label5->Text = "3.75 - Gas Filter\n30 - Quickwire\n7.5 - Rubber\n= 3.75 - Iodine Infused Filter";
				radioButton2->Visible = false; label6->Text = "";
				radioButton3->Visible = false; label7->Text = "";
				radioButton4->Visible = false; label8->Text = "";
			}
			else if (str == "Iron Ingot (Recipe: 1)" || str == "Iron Ingot (Recipe: 2)" || str == "Iron Ingot (Recipe: 3)") {
				radioButton1->Visible = true; label5->Text = "30 - Iron Ore\n= 30 - Iron Ingot";
				radioButton2->Visible = true; label6->Text = "35 - Iron Ore\n20 - Water\n= 65 - Iron Ingot";
				radioButton3->Visible = true; label7->Text = "20 - Iron Ore\n20 - Copper Ore\n= 50 - Iron Ingot";
				radioButton4->Visible = false; label8->Text = "";
				if (iron_ingot_recipe == 1)
					radioButton1->Checked = true;
				else if (iron_ingot_recipe == 2)
					radioButton2->Checked = true;
				else
					radioButton3->Checked = true;
			}
			else if (str == "Iron Plate (Recipe: 1)" || str == "Iron Plate (Recipe: 2)" || str == "Iron Plate (Recipe: 3)") {
				radioButton1->Visible = true; label5->Text = "30 - Iron Ingot\n= 20 - Iron Plate";
				radioButton2->Visible = true; label6->Text = "50 - Iron Ingot\n10 - Plastic\n= 75 - Iron Plate";
				radioButton3->Visible = true; label7->Text = "7.5 - Steel Ingot\n5 - Plastic\n= 45 - Iron Plate";
				radioButton4->Visible = false; label8->Text = "";
				if (iron_plate_recipe == 1)
					radioButton1->Checked = true;
				else if (iron_plate_recipe == 2)
					radioButton2->Checked = true;
				else
					radioButton3->Checked = true;
			}
			else if (str == "Iron Rod (Recipe: 1)" || str == "Iron Rod (Recipe: 2)") {
				radioButton1->Visible = true; label5->Text = "15 - Iron Ingot\n= 15 - Iron Rod";
				radioButton2->Visible = true; label6->Text = "12 - Steel Ingot\n= 48 - Iron Rod";
				radioButton3->Visible = false; label7->Text = "";
				radioButton4->Visible = false; label8->Text = "";
				if (iron_rod_recipe == 1)
					radioButton1->Checked = true;
				else
					radioButton2->Checked = true;
			}
			else if (str == "Modular Engine") {
				radioButton1->Visible = false; label5->Text = "2 - Motor\n15 - Rubber\n2 - Smart Plating\n = 1 - Modular Engine";
				radioButton2->Visible = false; label6->Text = "";
				radioButton3->Visible = false; label7->Text = "";
				radioButton4->Visible = false; label8->Text = "";
			}
			else if (str == "Modular Frame (Recipe: 1)" || str == "Modular Frame (Recipe: 2)" || str == "Modular Frame (Recipe: 3)") {
				radioButton1->Visible = true; label5->Text = "3 - Reinforced Iron Plate\n12 - Iron Rod\n= 2 - Modular Frame";
				radioButton2->Visible = true; label6->Text = "7.5 - Reinforced Iron Plate\n140 - Screw\n= 5 - Modular Frame";
				radioButton3->Visible = true; label7->Text = "2 - Reinforced Iron Plate\n10 - Steel Pipe\n= 3 - Modular Frame";
				radioButton4->Visible = false; label8->Text = "";
				if (modular_frame_recipe == 1)
					radioButton1->Checked = true;
				else if (modular_frame_recipe == 2)
					radioButton2->Checked = true;
				else
					radioButton3->Checked = true;
			}
			else if (str == "Motor (Recipe: 1)" || str == "Motor (Recipe: 2)") {
				radioButton1->Visible = true; label5->Text = "10 - Rotor\n10 - Stator\n= 5 - Motor";
				radioButton2->Visible = true; label6->Text = "3.75 - Rotor\n3.75 - Stator\n1.25 - Crystal Oscillator\n= 7.5 - Motor";
				radioButton3->Visible = false; label7->Text = "";
				radioButton4->Visible = false; label8->Text = "";
				if (motor_recipe == 1)
					radioButton1->Checked = true;
				else
					radioButton2->Checked = true;
			}
			else if (str == "Nuclear Fuel Rod (Recipe: 1)" || str == "Nuclear Fuel Rod (Recipe: 2)") {
				radioButton1->Visible = true; label5->Text = "10 - Encased Uranium Cell\n1.2 - Encased Industrial Beam\n2 - Electromagnetic Control Rod\n= 0,4 - Nuclear Fuel Rod";
				radioButton2->Visible = true; label6->Text = "10 - Encased Uranium Cell\n2 - Electromagnetic Control Rod\n0.6 - Crystal Oscillator\n1.2 - Beacon\n= 0.6 - Nuclear Fuel Rod";
				radioButton3->Visible = false; label7->Text = "";
				radioButton4->Visible = false; label8->Text = "";
				if (nuclear_fuel_rod_recipe == 1)
					radioButton1->Checked = true;
				else
					radioButton2->Checked = true;
			}
			else if (str == "Plastic (Recipe: 1)" || str == "Plastic (Recipe: 2)" || str == "Plastic (Recipe: 3)") {
				radioButton1->Visible = true; label5->Text = "30 - Crude Oil\n= 20 - Plastic\n+ 10 - Heavy Oil Residue";
				radioButton2->Visible = true; label6->Text = "60 - Polymer Resin\n20 - Water\n20 - Plastic";
				radioButton3->Visible = true; label7->Text = "30 - Rubber\n30 - Fuel\n= 60 - Plastic";
				radioButton4->Visible = false; label8->Text = "";
				if (plastic_recipe == 1)
					radioButton1->Checked = true;
				else if (plastic_recipe == 2)
					radioButton2->Checked = true;
				else
					radioButton3->Checked = true;
			}
			else if (str == "Quartz Crystal (Recipe: 1)" || str == "Quartz Crystal (Recipe: 2)") {
				radioButton1->Visible = true; label5->Text = "37.5 - Raw Quartz\n= 22.5 - Quartz Crystal";
				radioButton2->Visible = true; label6->Text = "67.5 - Raw Quartz\n37.5 - Water\n= 52.5 - Quartz Crystal";
				radioButton3->Visible = false; label7->Text = "";
				radioButton4->Visible = false; label8->Text = "";
				if (quartz_crystal_recipe == 1)
					radioButton1->Checked = true;
				else
					radioButton2->Checked = true;
			}
			else if (str == "Quickwire (Recipe: 1)" || str == "Quickwire (Recipe: 2)") {
				radioButton1->Visible = true; label5->Text = "12 - Caterium Ingot\n= 60 - Quickwire";
				radioButton2->Visible = true; label6->Text = "7.5 - Caterium Ingot\n37.5 - Copper Ingot\n= 90 - Quickwire";
				radioButton3->Visible = false; label7->Text = "";
				radioButton4->Visible = false; label8->Text = "";
				if (quickwire_recipe == 1)
					radioButton1->Checked = true;
				else
					radioButton2->Checked = true;
			}
			else if (str == "Radio Control Unit (Recipe: 1)" || str == "Radio Control Unit (Recipe: 2)") {
				radioButton1->Visible = true; label5->Text = "10 - Heat Sink\n40 - Rubber\n2.5 - Crystal Oscillator\n2.5 - Computer\n= 2.5 - Radio Control Unit";
				radioButton2->Visible = true; label6->Text = "12.5 - Heat Sink\n1.25 - Supercomputer\n37.5 - Quartz Crystal\n= 3.75 - Radio Control Unit";
				radioButton3->Visible = false; label7->Text = "";
				radioButton4->Visible = false; label8->Text = "";
				if (radio_control_unit_recipe == 1)
					radioButton1->Checked = true;
				else
					radioButton2->Checked = true;
			}
			else if (str == "Reinforced Iron Plate (Recipe: 1)" || str == "Reinforced Iron Plate (Recipe: 2)" || str == "Reinforced Iron Plate (Recipe: 3)" || str == "Reinforced Iron Plate (Recipe: 4)") {
				radioButton1->Visible = true; label5->Text = "30 - Iron Plate\n60 - Screw\n= 5 - Reinforced Iron Plate";
				radioButton2->Visible = true; label6->Text = "11.25 - Iron Plate\n3.75 - Rubber\n= 3.75 - Reinforced Iron Plate";
				radioButton3->Visible = true; label7->Text = "90 - Iron Plate\n250 - Screw\n= 15 - Reinforced Iron Plate";
				radioButton4->Visible = true; label8->Text = "18.75 - Iron Plate\n37.5 - Wire\n= 5.625 - Reinforced Iron Plate";
				if (reinforced_iron_plate_recipe == 1)
					radioButton1->Checked = true;
				else if (reinforced_iron_plate_recipe == 2)
					radioButton2->Checked = true;
				else if (reinforced_iron_plate_recipe == 3)
					radioButton3->Checked = true;
				else
					radioButton4->Checked = true;
			}
			else if (str == "Rifle Cartridge") {
				radioButton1->Visible = false; label5->Text = "3 - Beacon\n30 - Steel Pipe\n30 - Black Powder\n30 - Rubber\n= 15 - Rifle Cartridge";
				radioButton2->Visible = false; label6->Text = "";
				radioButton3->Visible = false; label7->Text = "";
				radioButton4->Visible = false; label8->Text = "";
			}
			else if (str == "Rotor (Recipe: 1)" || str == "Rotor (Recipe: 2)" || str == "Rotor (Recipe: 3)") {
				radioButton1->Visible = true; label5->Text = "20 - Iron Rod\n100 - Screw\n= 4 - Rotor";
				radioButton2->Visible = true; label6->Text = "22.5 - Copper Sheet\n195 - Screw\n= 11.25 - Rotor";
				radioButton3->Visible = true; label7->Text = "10 - Steel Pipe\n30 - Wire\n= 5 - Rotor";
				radioButton4->Visible = false; label8->Text = "";
				if (rotor_recipe == 1)
					radioButton1->Checked = true;
				else if (rotor_recipe == 2)
					radioButton2->Checked = true;
				else
					radioButton3->Checked = true;
			}
			else if (str == "Rubber (Recipe: 1)" || str == "Rubber (Recipe: 2)" || str == "Rubber (Recipe: 3)") {
				radioButton1->Visible = true; label5->Text = "30 - Crude Oil\n= 20 - Rubber\n+ 20 Heavy Oil Residue";
				radioButton2->Visible = true; label6->Text = "40 - Polymer Resin\n40 - Water\n= 20 - Rubber";
				radioButton3->Visible = true; label7->Text = "30 - Plastic\n30 - Fuel\n= 60 - Rubber";
				radioButton4->Visible = false; label8->Text = "";
				if (rubber_recipe == 1)
					radioButton1->Checked = true;
				else if (rubber_recipe == 2)
					radioButton2->Checked = true;
				else
					radioButton3->Checked = true;
			}
			else if (str == "Screw (Recipe: 1)" || str == "Screw (Recipe: 2)" || str == "Screw (Recipe: 3)") {
				radioButton1->Visible = true; label5->Text = "10 - Iron Rod\n= 40 - Screw";
				radioButton2->Visible = true; label6->Text = "12.5 - Iron Ingor\n= 50 - Screw";
				radioButton3->Visible = true; label7->Text = "5 - Steel Beam\n= 260 - Screw";
				radioButton4->Visible = false; label8->Text = "";
				if (screw_recipe == 1)
					radioButton1->Checked = true;
				else if (screw_recipe == 2)
					radioButton2->Checked = true;
				else
					radioButton3->Checked = true;
			}
			else if (str == "Silica (Recipe: 1)" || str == "Silica (Recipe: 2)" || str == "Silica (Recipe: 3)") {
				radioButton1->Visible = true; label5->Text = "22.5 - Raw Quartz\n= 37.5 - Silica";
				radioButton2->Visible = true; label6->Text = "11.25 - Raw Quartz\n18.75 - Limestone\n= 26.25 - Silica";
				radioButton3->Visible = true; label7->Text = "70 - Bauxite\n100 - Water\n= 20 - Silica\n+ 80 - Alumina Solution";
				radioButton4->Visible = false; label8->Text = "";
				if (silica_recipe == 1)
					radioButton1->Checked = true;
				else if (silica_recipe == 2)
					radioButton2->Checked = true;
				else
					radioButton3->Checked = true;
			}
			else if (str == "Smart Plating (Recipe: 1)" || str == "Smart Plating (Recipe: 2)") {
				radioButton1->Visible = true; label5->Text = "2 - Reinforced Iron Plate\n2 - Rotor\n= 2 - Smart Plating";
				radioButton2->Visible = true; label6->Text = "2.5 - Reinforced Iron Plate\n2.5 - Rotor\n7.5 - Plastic\n 5 - Smart Plating";
				radioButton3->Visible = false; label7->Text = "";
				radioButton4->Visible = false; label8->Text = "";
				if (smart_plating_recipe == 1)
					radioButton1->Checked = true;
				else
					radioButton2->Checked = true;
			}
			else if (str == "Stator (Recipe: 1)" || str == "Stator (Recipe: 2)") {
				radioButton1->Visible = true; label5->Text = "15 - Steel Pipe\n40 - Wire\n= 5 - Stator";
				radioButton2->Visible = true; label6->Text = "16 - Steel Pipe\n60 - Quickwire\n= 8 - Stator";
				radioButton3->Visible = false; label7->Text = "";
				radioButton4->Visible = false; label8->Text = "";
				if (stator_recipe == 1)
					radioButton1->Checked = true;
				else
					radioButton2->Checked = true;
			}
			else if (str == "Steel Beam") {
				radioButton1->Visible = false; label5->Text = "60 - Steel Ingot\n= 15 - Steel Beam";
				radioButton2->Visible = false; label6->Text = "";
				radioButton3->Visible = false; label7->Text = "";
				radioButton4->Visible = false; label8->Text = "";
			}
			else if (str == "Steel Ingot (Recipe: 1)" || str == "Steel Ingot (Recipe: 2)" || str == "Steel Ingot (Recipe: 3)" || str == "Steel Ingot (Recipe: 4)") {
				radioButton1->Visible = true; label5->Text = "45 - Iron Ore\n45 - Coal\n= 45 - Steel Ingot";
				radioButton2->Visible = true; label6->Text = "75 - Iron Ingot\n75 - Petroleum Coke\n= 100 - Steel Ingot";
				radioButton3->Visible = true; label7->Text = "40 - Iron Ingot\n40 - Coal\n= 60 - Steel Ingot";
				radioButton4->Visible = true; label8->Text = "22.5 - Iron Ore\n11.25 - Compacted Coal\n= 37.5 - Steel Ingot";
				if (steel_ingot_recipe == 1)
					radioButton1->Checked = true;
				else if (steel_ingot_recipe == 2)
					radioButton2->Checked = true;
				else if (steel_ingot_recipe == 3)
					radioButton3->Checked = true;
				else
					radioButton4->Checked = true;
			}
			else if (str == "Steel Pipe") {
				radioButton1->Visible = false; label5->Text = "30 - Steel Ingot\n= 20 - Steel Pipe";
				radioButton2->Visible = false; label6->Text = "";
				radioButton3->Visible = false; label7->Text = "";
				radioButton4->Visible = false; label8->Text = "";
			}
			else if (str == "Supercomputer") {
				radioButton1->Visible = false; label5->Text = "3.75 - Computer\n3.75 - A.I. Limiter\n5.625 - High-Speed Connector\n52.5 - Plastic\n= 1.875 - Supercomputer";
				radioButton2->Visible = false; label6->Text = "";
				radioButton3->Visible = false; label7->Text = "";
				radioButton4->Visible = false; label8->Text = "";
			}
			else if (str == "Turbo Motor (Recipe: 1)" || str == "Turbo Motor (Recipe: 2)") {
				radioButton1->Visible = true; label5->Text = "7.5 - Heat Sink\n3.75 - Radio Control Unit\n7.5 - Motor\n45 - Rubber\n= 1.875 - Turbo Motor";
				radioButton2->Visible = true; label6->Text = "6.5625 - Motor\n4.6875 - Radio Control Unit\n8.4375 - A.I. Limiter\n6.5625 - Stator\n= 2.8125 - Turbo Motor";
				radioButton3->Visible = false; label7->Text = "";
				radioButton4->Visible = false; label8->Text = "";
				if (turbo_motor_recipe == 1)
					radioButton1->Checked = true;
				else
					radioButton2->Checked = true;
			}
			else if (str == "Versatile Framework (Recipe: 1)" || str == "Versatile Framework (Recipe: 2)") {
				radioButton1->Visible = true; label5->Text = "2.5 - Modular Frame\n30 - Steel Beam\n= 5 - Versatile Framework";
				radioButton2->Visible = true; label6->Text = "3.75 - Modular Frame\n22.5 - Steel Beam\n30 - Rubber\n= 7.5 - Versatile Framework";
				radioButton3->Visible = false; label7->Text = "";
				radioButton4->Visible = false; label8->Text = "";
				if (versatile_framework_recipe == 1)
					radioButton1->Checked = true;
				else
					radioButton2->Checked = true;
			}
			else if (str == "Wire (Recipe: 1)" || str == "Wire (Recipe: 2)" || str == "Wire (Recipe: 3)" || str == "Wire (Recipe: 4)") {
				radioButton1->Visible = true; label5->Text = "15 - Copper Ingot\n= 30 - Wire";
				radioButton2->Visible = true; label6->Text = "12 - Copper Ingpt\n3 - Caterium Ingot\n= 90 - Wire";
				radioButton3->Visible = true; label7->Text = "12.5 - Iron Ingot\n= 22.5 - Wire";
				radioButton4->Visible = true; label8->Text = "15 - Caterium Ingot\n= 120 - Wire";
				if (wire_recipe == 1)
					radioButton1->Checked = true;
				else if (wire_recipe == 2)
					radioButton2->Checked = true;
				else if (wire_recipe == 3)
					radioButton3->Checked = true;
				else
					radioButton4->Checked = true;
			}

			button_changing = true;
		}
		else
			button1->Enabled = false;
	}
	private: System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (button_changing) {
			System::String^ str = listBox1->SelectedItem->ToString();

			if (str == "Aluminum Ingot (Recipe: 2)") {
				for (int i = 0; i < vanillaItems->Nodes->Count; i++)
					if (vanillaItems->Nodes[i]->Text->ToString() == "Aluminum Ingot (Recipe: 2)") {
						vanillaItems->Nodes[i]->Text = "Aluminum Ingot (Recipe: 1)";
						break;
					}
				int id = listBox1->SelectedIndex;
				listBox1->SelectedItem = NULL;
				listBox1->Items[id] = "Aluminum Ingot (Recipe: 1)";
				aluminum_ingot_recipe = 1;
				listBox1->SetSelected(id, true);
			}
			else if (str == "Aluminum Scrap (Recipe: 2)") {
				for (int i = 0; i < vanillaItems->Nodes->Count; i++)
					if (vanillaItems->Nodes[i]->Text->ToString() == "Aluminum Ingot (Recipe: 2)") {
						vanillaItems->Nodes[i]->Text = "Aluminum Ingot (Recipe: 1)";
						break;
					}
				int id = listBox1->SelectedIndex;
				listBox1->SelectedItem = NULL;
				listBox1->Items[id] = "Aluminum Scrap (Recipe: 1)";
				aluminum_scrap_recipe = 1;
				listBox1->SetSelected(id, true);
			}
			else if (str == "Automated Wiring (Recipe: 2)") {
				for (int i = 0; i < vanillaItems->Nodes->Count; i++)
					if (vanillaItems->Nodes[i]->Text->ToString() == "Automated Wiring (Recipe: 2)") {
						vanillaItems->Nodes[i]->Text = "Automated Wiring (Recipe: 1)";
						break;
					}
				int id = listBox1->SelectedIndex;
				listBox1->SelectedItem = NULL;
				listBox1->Items[id] = "Automated Wiring (Recipe: 1)";
				automated_wiring_recipe = 1;
				listBox1->SetSelected(id, true);
			}
			else if (str == "Beacon (Recipe: 2)") {
				for (int i = 0; i < vanillaItems->Nodes->Count; i++)
					if (vanillaItems->Nodes[i]->Text->ToString() == "Beacon (Recipe: 2)") {
						vanillaItems->Nodes[i]->Text = "Beacon (Recipe: 1)";
						break;
					}
				int id = listBox1->SelectedIndex;
				listBox1->SelectedItem = NULL;
				listBox1->Items[id] = "Beacon (Recipe: 1)";
				beacon_recipe = 1;
				listBox1->SetSelected(id, true);
			}
			else if (str == "Black Powder (Recipe: 2)") {
				for (int i = 0; i < vanillaItems->Nodes->Count; i++)
					if (vanillaItems->Nodes[i]->Text->ToString() == "Black Powder (Recipe: 2)") {
						vanillaItems->Nodes[i]->Text = "Black Powder (Recipe: 1)";
						break;
					}
				int id = listBox1->SelectedIndex;
				listBox1->SelectedItem = NULL;
				listBox1->Items[id] = "Black Powder (Recipe: 1)";
				black_powder_recipe = 1;
				listBox1->SetSelected(id, true);
			}
			else if (str == "Cable (Recipe: 2)" || str == "Cable (Recipe: 3)" || str == "Cable (Recipe: 4)") {
				for (int i = 0; i < vanillaItems->Nodes->Count; i++)
					if (vanillaItems->Nodes[i]->Text->ToString() == "Cable (Recipe: 2)" || vanillaItems->Nodes[i]->Text->ToString() == "Cable (Recipe: 3)" || vanillaItems->Nodes[i]->Text->ToString() == "Cable (Recipe: 4)") {
						vanillaItems->Nodes[i]->Text = "Cable (Recipe: 1)";
						break;
					}
				int id = listBox1->SelectedIndex;
				listBox1->SelectedItem = NULL;
				listBox1->Items[id] = "Cable (Recipe: 1)";
				cable_recipe = 1;
				listBox1->SetSelected(id, true);
			}
			else if (str == "Caterium Ingot (Recipe: 2)") {
				for (int i = 0; i < vanillaItems->Nodes->Count; i++)
					if (vanillaItems->Nodes[i]->Text->ToString() == "Caterium Ingot (Recipe: 2)") {
						vanillaItems->Nodes[i]->Text = "Caterium Ingot (Recipe: 1)";
						break;
					}
				int id = listBox1->SelectedIndex;
				listBox1->SelectedItem = NULL;
				listBox1->Items[id] = "Caterium Ingot (Recipe: 1)";
				caterium_ingot_recipe = 1;
				listBox1->SetSelected(id, true);
			}
			else if (str == "Circuit Board (Recipe: 2)" || str == "Circuit Board (Recipe: 3)" || str == "Circuit Board (Recipe: 4)") {
				for (int i = 0; i < vanillaItems->Nodes->Count; i++)
					if (vanillaItems->Nodes[i]->Text->ToString() == "Circuit Board (Recipe: 2)" || vanillaItems->Nodes[i]->Text->ToString() == "Circuit Board (Recipe: 3)" || vanillaItems->Nodes[i]->Text->ToString() == "Circuit Board (Recipe: 4)") {
						vanillaItems->Nodes[i]->Text = "Circuit Board (Recipe: 1)";
						break;
					}
				int id = listBox1->SelectedIndex;
				listBox1->SelectedItem = NULL;
				listBox1->Items[id] = "Circuit Board (Recipe: 1)";
				circuit_board_recipe = 1;
				listBox1->SetSelected(id, true);
			}
			else if (str == "Computer (Recipe: 2)" || str == "Computer (Recipe: 3)") {
				for (int i = 0; i < vanillaItems->Nodes->Count; i++)
					if (vanillaItems->Nodes[i]->Text->ToString() == "Computer (Recipe: 2)" || vanillaItems->Nodes[i]->Text->ToString() == "Computer (Recipe: 3)") {
						vanillaItems->Nodes[i]->Text = "Computer (Recipe: 1)";
						break;
					}
				int id = listBox1->SelectedIndex;
				listBox1->SelectedItem = NULL;
				listBox1->Items[id] = "Computer (Recipe: 1)";
				computer_recipe = 1;
				listBox1->SetSelected(id, true);
			}
			else if (str == "Concrete (Recipe: 2)" || str == "Concrete (Recipe: 3)" || str == "Concrete (Recipe: 4)") {
				for (int i = 0; i < vanillaItems->Nodes->Count; i++)
					if (vanillaItems->Nodes[i]->Text->ToString() == "Concrete (Recipe: 2)" || vanillaItems->Nodes[i]->Text->ToString() == "Concrete (Recipe: 3)" || vanillaItems->Nodes[i]->Text->ToString() == "Concrete (Recipe: 4)") {
						vanillaItems->Nodes[i]->Text = "Concrete (Recipe: 1)";
						break;
					}
				int id = listBox1->SelectedIndex;
				listBox1->SelectedItem = NULL;
				listBox1->Items[id] = "Concrete (Recipe: 1)";
				concrete_recipe = 1;
				listBox1->SetSelected(id, true);
			}
			else if (str == "Copper Ingot (Recipe: 2)" || str == "Copper Ingot (Recipe: 3)") {
				for (int i = 0; i < vanillaItems->Nodes->Count; i++)
					if (vanillaItems->Nodes[i]->Text->ToString() == "Copper Ingot (Recipe: 2)" || vanillaItems->Nodes[i]->Text->ToString() == "Copper Ingot (Recipe: 3)") {
						vanillaItems->Nodes[i]->Text = "Copper Ingot (Recipe: 1)";
						break;
					}
				int id = listBox1->SelectedIndex;
				listBox1->SelectedItem = NULL;
				listBox1->Items[id] = "Copper Ingot (Recipe: 1)";
				copper_ingot_recipe = 1;
				listBox1->SetSelected(id, true);
			}
			else if (str == "Copper Sheet (Recipe: 2)") {
				for (int i = 0; i < vanillaItems->Nodes->Count; i++)
					if (vanillaItems->Nodes[i]->Text->ToString() == "Copper Sheet (Recipe: 2)") {
						vanillaItems->Nodes[i]->Text = "Copper Sheet (Recipe: 1)";
						break;
					}
				int id = listBox1->SelectedIndex;
				listBox1->SelectedItem = NULL;
				listBox1->Items[id] = "Copper Sheet (Recipe: 1)";
				copper_sheet_recipe = 1;
				listBox1->SetSelected(id, true);
			}
			else if (str == "Crystal Oscillator (Recipe: 2)") {
				for (int i = 0; i < vanillaItems->Nodes->Count; i++)
					if (vanillaItems->Nodes[i]->Text->ToString() == "Crystal Oscillator (Recipe: 2)") {
						vanillaItems->Nodes[i]->Text = "Crystal Oscillator (Recipe: 1)";
						break;
					}
				int id = listBox1->SelectedIndex;
				listBox1->SelectedItem = NULL;
				listBox1->Items[id] = "Crystal Oscillator (Recipe: 1)";
				crystal_oscillator_recipe = 1;
				listBox1->SetSelected(id, true);
			}
			else if (str == "Electromagnetic Control Rod (Recipe: 2)") {
				for (int i = 0; i < vanillaItems->Nodes->Count; i++)
					if (vanillaItems->Nodes[i]->Text->ToString() == "Electromagnetic Control Rod (Recipe: 2)") {
						vanillaItems->Nodes[i]->Text = "Electromagnetic Control Rod (Recipe: 1)";
						break;
					}
				int id = listBox1->SelectedIndex;
				listBox1->SelectedItem = NULL;
				listBox1->Items[id] = "Electromagnetic Control Rod (Recipe: 1)";
				electromagnetic_control_rod_recipe = 1;
				listBox1->SetSelected(id, true);
			}
			else if (str == "Encased Industrial Beam (Recipe: 2)") {
				for (int i = 0; i < vanillaItems->Nodes->Count; i++)
					if (vanillaItems->Nodes[i]->Text->ToString() == "Encased Industrial Beam (Recipe: 2)") {
						vanillaItems->Nodes[i]->Text = "Encased Industrial Beam (Recipe: 1)";
						break;
					}
				int id = listBox1->SelectedIndex;
				listBox1->SelectedItem = NULL;
				listBox1->Items[id] = "Encased Industrial Beam (Recipe: 1)";
				encased_industrial_beam_recipe = 1;
				listBox1->SetSelected(id, true);
			}
			else if (str == "Encased Uranium Cell (Recipe: 2)") {
				for (int i = 0; i < vanillaItems->Nodes->Count; i++)
					if (vanillaItems->Nodes[i]->Text->ToString() == "Encased Uranium Cell (Recipe: 2)") {
						vanillaItems->Nodes[i]->Text = "Encased Uranium Cell (Recipe: 1)";
						break;
					}
				int id = listBox1->SelectedIndex;
				listBox1->SelectedItem = NULL;
				listBox1->Items[id] = "Encased Uranium Cell (Recipe: 1)";
				encased_uranium_cell_recipe = 1;
				listBox1->SetSelected(id, true);
			}
			else if (str == "Fabric (Recipe: 2)") {
				for (int i = 0; i < vanillaItems->Nodes->Count; i++)
					if (vanillaItems->Nodes[i]->Text->ToString() == "Fabric (Recipe: 2)") {
						vanillaItems->Nodes[i]->Text = "Fabric (Recipe: 1)";
						break;
					}
				int id = listBox1->SelectedIndex;
				listBox1->SelectedItem = NULL;
				listBox1->Items[id] = "Fabric (Recipe: 1)";
				fabric_recipe = 1;
				listBox1->SetSelected(id, true);
			}
			else if (str == "Heat Sink (Recipe: 2)") {
				for (int i = 0; i < vanillaItems->Nodes->Count; i++)
					if (vanillaItems->Nodes[i]->Text->ToString() == "Heat Sink (Recipe: 2)") {
						vanillaItems->Nodes[i]->Text = "Heat Sink (Recipe: 1)";
						break;
					}
				int id = listBox1->SelectedIndex;
				listBox1->SelectedItem = NULL;
				listBox1->Items[id] = "Heat Sink (Recipe: 1)";
				heat_sink_recipe = 1;
				listBox1->SetSelected(id, true);
			}
			else if (str == "Heavy Modular Frame (Recipe: 2)" || str == "Heavy Modular Frame (Recipe: 3)") {
				for (int i = 0; i < vanillaItems->Nodes->Count; i++)
					if (vanillaItems->Nodes[i]->Text->ToString() == "Heavy Modular Frame (Recipe: 2)" || vanillaItems->Nodes[i]->Text->ToString() == "Heavy Modular Frame (Recipe: 3)") {
						vanillaItems->Nodes[i]->Text = "Heavy Modular Frame (Recipe: 1)";
						break;
					}
				int id = listBox1->SelectedIndex;
				listBox1->SelectedItem = NULL;
				listBox1->Items[id] = "Heavy Modular Frame (Recipe: 1)";
				heavy_modular_frame_recipe = 1;
				listBox1->SetSelected(id, true);
			}
			else if (str == "High-Speed Connector (Recipe: 2)") {
				for (int i = 0; i < vanillaItems->Nodes->Count; i++)
					if (vanillaItems->Nodes[i]->Text->ToString() == "High-Speed Connector (Recipe: 2)") {
						vanillaItems->Nodes[i]->Text = "High-Speed Connector (Recipe: 1)";
						break;
					}
				int id = listBox1->SelectedIndex;
				listBox1->SelectedItem = NULL;
				listBox1->Items[id] = "High-Speed Connector (Recipe: 1)";
				high_speed_connector_recipe = 1;
				listBox1->SetSelected(id, true);
			}
			else if (str == "Iron Ingot (Recipe: 2)" || str == "Iron Ingot (Recipe: 3)") {
				for (int i = 0; i < vanillaItems->Nodes->Count; i++)
					if (vanillaItems->Nodes[i]->Text->ToString() == "Iron Ingot (Recipe: 2)" || vanillaItems->Nodes[i]->Text->ToString() == "Iron Ingot (Recipe: 3)") {
						vanillaItems->Nodes[i]->Text = "Iron Ingot (Recipe: 1)";
						break;
					}
				int id = listBox1->SelectedIndex;
				listBox1->SelectedItem = NULL;
				listBox1->Items[id] = "Iron Ingot (Recipe: 1)";
				iron_ingot_recipe = 1;
				listBox1->SetSelected(id, true);
			}
			else if (str == "Iron Plate (Recipe: 2)" || str == "Iron Plate (Recipe: 3)") {
				for (int i = 0; i < vanillaItems->Nodes->Count; i++)
					if (vanillaItems->Nodes[i]->Text->ToString() == "Iron Plate (Recipe: 2)" || vanillaItems->Nodes[i]->Text->ToString() == "Iron Plate (Recipe: 3)") {
						vanillaItems->Nodes[i]->Text = "Iron Plate (Recipe: 1)";
						break;
					}
				int id = listBox1->SelectedIndex;
				listBox1->SelectedItem = NULL;
				listBox1->Items[id] = "Iron Plate (Recipe: 1)";
				iron_plate_recipe = 1;
				listBox1->SetSelected(id, true);
			}
			else if (str == "Iron Rod (Recipe: 2)") {
				for (int i = 0; i < vanillaItems->Nodes->Count; i++)
					if (vanillaItems->Nodes[i]->Text->ToString() == "Iron Rod (Recipe: 2)") {
						vanillaItems->Nodes[i]->Text = "Iron Rod (Recipe: 1)";
						break;
					}
				int id = listBox1->SelectedIndex;
				listBox1->SelectedItem = NULL;
				listBox1->Items[id] = "Iron Rod (Recipe: 1)";
				iron_rod_recipe = 1;
				listBox1->SetSelected(id, true);
			}
			else if (str == "Modular Frame (Recipe: 2)" || str == "Modular Frame (Recipe: 3)") {
				for (int i = 0; i < vanillaItems->Nodes->Count; i++)
					if (vanillaItems->Nodes[i]->Text->ToString() == "Modular Frame (Recipe: 2)" || vanillaItems->Nodes[i]->Text->ToString() == "Modular Frame (Recipe: 3)") {
						vanillaItems->Nodes[i]->Text = "Modular Frame (Recipe: 1)";
						break;
					}
				int id = listBox1->SelectedIndex;
				listBox1->SelectedItem = NULL;
				listBox1->Items[id] = "Modular Frame (Recipe: 1)";
				modular_frame_recipe = 1;
				listBox1->SetSelected(id, true);
			}
			else if (str == "Motor (Recipe: 2)") {
				for (int i = 0; i < vanillaItems->Nodes->Count; i++)
					if (vanillaItems->Nodes[i]->Text->ToString() == "Motor (Recipe: 2)") {
						vanillaItems->Nodes[i]->Text = "Motor (Recipe: 1)";
						break;
					}
				int id = listBox1->SelectedIndex;
				listBox1->SelectedItem = NULL;
				listBox1->Items[id] = "Motor (Recipe: 1)";
				motor_recipe = 1;
				listBox1->SetSelected(id, true);
			}
			else if (str == "Nuclear Fuel Rod (Recipe: 2)") {
				for (int i = 0; i < vanillaItems->Nodes->Count; i++)
					if (vanillaItems->Nodes[i]->Text->ToString() == "Nuclear Fuel Rod (Recipe: 2)") {
						vanillaItems->Nodes[i]->Text = "Nuclear Fuel Rod (Recipe: 1)";
						break;
					}
				int id = listBox1->SelectedIndex;
				listBox1->SelectedItem = NULL;
				listBox1->Items[id] = "Nuclear Fuel Rod (Recipe: 1)";
				nuclear_fuel_rod_recipe = 1;
				listBox1->SetSelected(id, true);
			}
			else if (str == "Plastic (Recipe: 2)" || str == "Plastic (Recipe: 3)") {
				for (int i = 0; i < vanillaItems->Nodes->Count; i++)
					if (vanillaItems->Nodes[i]->Text->ToString() == "Plastic (Recipe: 2)" || vanillaItems->Nodes[i]->Text->ToString() == "Plastic (Recipe: 3)") {
						vanillaItems->Nodes[i]->Text = "Plastic (Recipe: 1)";
						break;
					}
				int id = listBox1->SelectedIndex;
				listBox1->SelectedItem = NULL;
				listBox1->Items[id] = "Plastic (Recipe: 1)";
				plastic_recipe = 1;
				listBox1->SetSelected(id, true);
			}
			else if (str == "Quartz Crystal (Recipe: 2)") {
				for (int i = 0; i < vanillaItems->Nodes->Count; i++)
					if (vanillaItems->Nodes[i]->Text->ToString() == "Quartz Crystal (Recipe: 2)") {
						vanillaItems->Nodes[i]->Text = "Quartz Crystal (Recipe: 1)";
						break;
					}
				int id = listBox1->SelectedIndex;
				listBox1->SelectedItem = NULL;
				listBox1->Items[id] = "Quartz Crystal (Recipe: 1)";
				quartz_crystal_recipe = 1;
				listBox1->SetSelected(id, true);
			}
			else if (str == "Quickwire (Recipe: 2)") {
				for (int i = 0; i < vanillaItems->Nodes->Count; i++)
					if (vanillaItems->Nodes[i]->Text->ToString() == "Quickwire (Recipe: 2)") {
						vanillaItems->Nodes[i]->Text = "Quickwire (Recipe: 1)";
						break;
					}
				int id = listBox1->SelectedIndex;
				listBox1->SelectedItem = NULL;
				listBox1->Items[id] = "Quickwire (Recipe: 1)";
				quickwire_recipe = 1;
				listBox1->SetSelected(id, true);
			}
			else if (str == "Radio Control Unit (Recipe: 2)") {
				for (int i = 0; i < vanillaItems->Nodes->Count; i++)
					if (vanillaItems->Nodes[i]->Text->ToString() == "Radio Control Unit (Recipe: 2)") {
						vanillaItems->Nodes[i]->Text = "Radio Control Unit (Recipe: 1)";
						break;
					}
				int id = listBox1->SelectedIndex;
				listBox1->SelectedItem = NULL;
				listBox1->Items[id] = "Radio Control Unit (Recipe: 1)";
				radio_control_unit_recipe = 1;
				listBox1->SetSelected(id, true);
			}
			else if (str == "Reinforced Iron Plate (Recipe: 2)" || str == "Reinforced Iron Plate (Recipe: 3)" || str == "Reinforced Iron Plate (Recipe: 4)") {
				for (int i = 0; i < vanillaItems->Nodes->Count; i++)
					if (vanillaItems->Nodes[i]->Text->ToString() == "Reinforced Iron Plate (Recipe: 2)" || vanillaItems->Nodes[i]->Text->ToString() == "Reinforced Iron Plate (Recipe: 3)" || vanillaItems->Nodes[i]->Text->ToString() == "Reinforced Iron Plate (Recipe: 4)") {
						vanillaItems->Nodes[i]->Text = "Reinforced Iron Plate (Recipe: 1)";
						break;
					}
				int id = listBox1->SelectedIndex;
				listBox1->SelectedItem = NULL;
				listBox1->Items[id] = "Reinforced Iron Plate (Recipe: 1)";
				reinforced_iron_plate_recipe = 1;
				listBox1->SetSelected(id, true);
			}
			else if (str == "Rotor (Recipe: 2)" || str == "Rotor (Recipe: 3)") {
				for (int i = 0; i < vanillaItems->Nodes->Count; i++)
					if (vanillaItems->Nodes[i]->Text->ToString() == "Rotor (Recipe: 2)" || vanillaItems->Nodes[i]->Text->ToString() == "Rotor (Recipe: 3)") {
						vanillaItems->Nodes[i]->Text = "Rotor (Recipe: 1)";
						break;
					}
				int id = listBox1->SelectedIndex;
				listBox1->SelectedItem = NULL;
				listBox1->Items[id] = "Rotor (Recipe: 1)";
				rotor_recipe = 1;
				listBox1->SetSelected(id, true);
			}
			else if (str == "Rubber (Recipe: 2)" || str == "Rubber (Recipe: 3)") {
				for (int i = 0; i < vanillaItems->Nodes->Count; i++)
					if (vanillaItems->Nodes[i]->Text->ToString() == "Rubber (Recipe: 2)" || vanillaItems->Nodes[i]->Text->ToString() == "Rubber (Recipe: 3)") {
						vanillaItems->Nodes[i]->Text = "Rubber (Recipe: 1)";
						break;
					}
				int id = listBox1->SelectedIndex;
				listBox1->SelectedItem = NULL;
				listBox1->Items[id] = "Rubber (Recipe: 1)";
				rubber_recipe = 1;
				listBox1->SetSelected(id, true);
			}
			else if (str == "Screw (Recipe: 2)" || str == "Screw (Recipe: 3)") {
				for (int i = 0; i < vanillaItems->Nodes->Count; i++)
					if (vanillaItems->Nodes[i]->Text->ToString() == "Screw (Recipe: 2)" || vanillaItems->Nodes[i]->Text->ToString() == "Screw (Recipe: 3)") {
						vanillaItems->Nodes[i]->Text = "Screw (Recipe: 1)";
						break;
					}
				int id = listBox1->SelectedIndex;
				listBox1->SelectedItem = NULL;
				listBox1->Items[id] = "Screw (Recipe: 1)";
				screw_recipe = 1;
				listBox1->SetSelected(id, true);
			}
			else if (str == "Silica (Recipe: 2)" || str == "Silica (Recipe: 3)") {
				for (int i = 0; i < vanillaItems->Nodes->Count; i++)
					if (vanillaItems->Nodes[i]->Text->ToString() == "Silica (Recipe: 2)" || vanillaItems->Nodes[i]->Text->ToString() == "Silica (Recipe: 3)") {
						vanillaItems->Nodes[i]->Text = "Silica (Recipe: 1)";
						break;
					}
				int id = listBox1->SelectedIndex;
				listBox1->SelectedItem = NULL;
				listBox1->Items[id] = "Silica (Recipe: 1)";
				silica_recipe = 1;
				listBox1->SetSelected(id, true);
			}
			else if (str == "Smart Plating (Recipe: 2)") {
				for (int i = 0; i < vanillaItems->Nodes->Count; i++)
					if (vanillaItems->Nodes[i]->Text->ToString() == "Smart Plating (Recipe: 2)") {
						vanillaItems->Nodes[i]->Text = "Smart Plating (Recipe: 1)";
						break;
					}
				int id = listBox1->SelectedIndex;
				listBox1->SelectedItem = NULL;
				listBox1->Items[id] = "Smart Plating (Recipe: 1)";
				smart_plating_recipe = 1;
				listBox1->SetSelected(id, true);
			}
			else if (str == "Stator (Recipe: 2)") {
				for (int i = 0; i < vanillaItems->Nodes->Count; i++)
					if (vanillaItems->Nodes[i]->Text->ToString() == "Stator (Recipe: 2)") {
						vanillaItems->Nodes[i]->Text = "Stator (Recipe: 1)";
						break;
					}
				int id = listBox1->SelectedIndex;
				listBox1->SelectedItem = NULL;
				listBox1->Items[id] = "Stator (Recipe: 1)";
				stator_recipe = 1;
				listBox1->SetSelected(id, true);
			}
			else if (str == "Steel Ingot (Recipe: 2)" || str == "Steel Ingot (Recipe: 3)" || str == "Steel Ingot (Recipe: 4)") {
				for (int i = 0; i < vanillaItems->Nodes->Count; i++)
					if (vanillaItems->Nodes[i]->Text->ToString() == "Steel Ingot (Recipe: 2)" || vanillaItems->Nodes[i]->Text->ToString() == "Steel Ingot (Recipe: 3)" || vanillaItems->Nodes[i]->Text->ToString() == "Steel Ingot (Recipe: 4)") {
						vanillaItems->Nodes[i]->Text = "Steel Ingot (Recipe: 1)";
						break;
					}
				int id = listBox1->SelectedIndex;
				listBox1->SelectedItem = NULL;
				listBox1->Items[id] = "Steel Ingot (Recipe: 1)";
				steel_ingot_recipe = 1;
				listBox1->SetSelected(id, true);
			}
			else if (str == "Turbo Motor (Recipe: 2)") {
				for (int i = 0; i < vanillaItems->Nodes->Count; i++)
					if (vanillaItems->Nodes[i]->Text->ToString() == "Turbo Motor (Recipe: 2)") {
						vanillaItems->Nodes[i]->Text = "Turbo Motor (Recipe: 1)";
						break;
					}
				int id = listBox1->SelectedIndex;
				listBox1->SelectedItem = NULL;
				listBox1->Items[id] = "Turbo Motor (Recipe: 1)";
				turbo_motor_recipe = 1;
				listBox1->SetSelected(id, true);
			}
			else if (str == "Versatile Framework (Recipe: 2)") {
				for (int i = 0; i < vanillaItems->Nodes->Count; i++)
					if (vanillaItems->Nodes[i]->Text->ToString() == "Versatile Framework (Recipe: 2)") {
						vanillaItems->Nodes[i]->Text = "Versatile Framework (Recipe: 1)";
						break;
					}
				int id = listBox1->SelectedIndex;
				listBox1->SelectedItem = NULL;
				listBox1->Items[id] = "Versatile Framework (Recipe: 1)";
				versatile_framework_recipe = 1;
				listBox1->SetSelected(id, true);
			}
			else if (str == "Wire (Recipe: 2)" || str == "Wire (Recipe: 3)" || str == "Wire (Recipe: 4)") {
				for (int i = 0; i < vanillaItems->Nodes->Count; i++)
					if (vanillaItems->Nodes[i]->Text->ToString() == "Wire (Recipe: 2)" || vanillaItems->Nodes[i]->Text->ToString() == "Wire (Recipe: 3)" || vanillaItems->Nodes[i]->Text->ToString() == "Wire (Recipe: 4)") {
						vanillaItems->Nodes[i]->Text = "Wire (Recipe: 1)";
						break;
					}
				int id = listBox1->SelectedIndex;
				listBox1->SelectedItem = NULL;
				listBox1->Items[id] = "Wire (Recipe: 1)";
				wire_recipe = 1;
				listBox1->SetSelected(id, true);
			}
		}
	}
	private: System::Void radioButton2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (button_changing) {
			System::String^ str = listBox1->SelectedItem->ToString();

			if (str == "Aluminum Ingot (Recipe: 1)") {
				for (int i = 0; i < vanillaItems->Nodes->Count; i++)
					if (vanillaItems->Nodes[i]->Text->ToString() == "Aluminum Ingot (Recipe: 1)") {
						vanillaItems->Nodes[i]->Text = "Aluminum Ingot (Recipe: 2)";
						break;
					}
				int id = listBox1->SelectedIndex;
				listBox1->SelectedItem = NULL;
				listBox1->Items[id] = "Aluminum Ingot (Recipe: 2)";
				aluminum_ingot_recipe = 2;
				listBox1->SetSelected(id, true);
			}
			else if (str == "Aluminum Scrap (Recipe: 1)") {
				for (int i = 0; i < vanillaItems->Nodes->Count; i++)
					if (vanillaItems->Nodes[i]->Text->ToString() == "Aluminum Ingot (Recipe: 1)") {
						vanillaItems->Nodes[i]->Text = "Aluminum Ingot (Recipe: 2)";
						break;
					}
				int id = listBox1->SelectedIndex;
				listBox1->SelectedItem = NULL;
				listBox1->Items[id] = "Aluminum Scrap (Recipe: 2)";
				aluminum_scrap_recipe = 2;
				listBox1->SetSelected(id, true);
			}
			else if (str == "Automated Wiring (Recipe: 1)") {
				for (int i = 0; i < vanillaItems->Nodes->Count; i++)
					if (vanillaItems->Nodes[i]->Text->ToString() == "Automated Wiring (Recipe: 1)") {
						vanillaItems->Nodes[i]->Text = "Automated Wiring (Recipe: 2)";
						break;
					}
				int id = listBox1->SelectedIndex;
				listBox1->SelectedItem = NULL;
				listBox1->Items[id] = "Automated Wiring (Recipe: 2)";
				automated_wiring_recipe = 2;
				listBox1->SetSelected(id, true);
			}
			else if (str == "Beacon (Recipe: 1)") {
				for (int i = 0; i < vanillaItems->Nodes->Count; i++)
					if (vanillaItems->Nodes[i]->Text->ToString() == "Beacon (Recipe: 1)") {
						vanillaItems->Nodes[i]->Text = "Beacon (Recipe: 2)";
						break;
					}
				int id = listBox1->SelectedIndex;
				listBox1->SelectedItem = NULL;
				listBox1->Items[id] = "Beacon (Recipe: 2)";
				beacon_recipe = 2;
				listBox1->SetSelected(id, true);
			}
			else if (str == "Black Powder (Recipe: 1)") {
				for (int i = 0; i < vanillaItems->Nodes->Count; i++)
					if (vanillaItems->Nodes[i]->Text->ToString() == "Black Powder (Recipe: 1)") {
						vanillaItems->Nodes[i]->Text = "Black Powder (Recipe: 2)";
						break;
					}
				int id = listBox1->SelectedIndex;
				listBox1->SelectedItem = NULL;
				listBox1->Items[id] = "Black Powder (Recipe: 2)";
				black_powder_recipe = 2;
				listBox1->SetSelected(id, true);
			}
			else if (str == "Cable (Recipe: 1)" || str == "Cable (Recipe: 3)" || str == "Cable (Recipe: 4)") {
				for (int i = 0; i < vanillaItems->Nodes->Count; i++)
					if (vanillaItems->Nodes[i]->Text->ToString() == "Cable (Recipe: 1)" || vanillaItems->Nodes[i]->Text->ToString() == "Cable (Recipe: 3)" || vanillaItems->Nodes[i]->Text->ToString() == "Cable (Recipe: 4)") {
						vanillaItems->Nodes[i]->Text = "Cable (Recipe: 2)";
						break;
					}
				int id = listBox1->SelectedIndex;
				listBox1->SelectedItem = NULL;
				listBox1->Items[id] = "Cable (Recipe: 2)";
				cable_recipe = 2;
				listBox1->SetSelected(id, true);
			}
			else if (str == "Caterium Ingot (Recipe: 1)") {
				for (int i = 0; i < vanillaItems->Nodes->Count; i++)
					if (vanillaItems->Nodes[i]->Text->ToString() == "Caterium Ingot (Recipe: 1)") {
						vanillaItems->Nodes[i]->Text = "Caterium Ingot (Recipe: 2)";
						break;
					}
				int id = listBox1->SelectedIndex;
				listBox1->SelectedItem = NULL;
				listBox1->Items[id] = "Caterium Ingot (Recipe: 2)";
				caterium_ingot_recipe = 2;
				listBox1->SetSelected(id, true);
			}
			else if (str == "Circuit Board (Recipe: 1)" || str == "Circuit Board (Recipe: 3)" || str == "Circuit Board (Recipe: 4)") {
				for (int i = 0; i < vanillaItems->Nodes->Count; i++)
					if (vanillaItems->Nodes[i]->Text->ToString() == "Circuit Board (Recipe: 1)" || vanillaItems->Nodes[i]->Text->ToString() == "Circuit Board (Recipe: 3)" || vanillaItems->Nodes[i]->Text->ToString() == "Circuit Board (Recipe: 4)") {
						vanillaItems->Nodes[i]->Text = "Circuit Board (Recipe: 2)";
						break;
					}
				int id = listBox1->SelectedIndex;
				listBox1->SelectedItem = NULL;
				listBox1->Items[id] = "Circuit Board (Recipe: 2)";
				circuit_board_recipe = 2;
				listBox1->SetSelected(id, true);
			}
			else if (str == "Computer (Recipe: 1)" || str == "Computer (Recipe: 3)") {
				for (int i = 0; i < vanillaItems->Nodes->Count; i++)
					if (vanillaItems->Nodes[i]->Text->ToString() == "Computer (Recipe: 1)" || vanillaItems->Nodes[i]->Text->ToString() == "Computer (Recipe: 3)") {
						vanillaItems->Nodes[i]->Text = "Computer (Recipe: 2)";
						break;
					}
				int id = listBox1->SelectedIndex;
				listBox1->SelectedItem = NULL;
				listBox1->Items[id] = "Computer (Recipe: 2)";
				computer_recipe = 2;
				listBox1->SetSelected(id, true);
			}
			else if (str == "Concrete (Recipe: 1)" || str == "Concrete (Recipe: 3)" || str == "Concrete (Recipe: 4)") {
			for (int i = 0; i < vanillaItems->Nodes->Count; i++)
				if (vanillaItems->Nodes[i]->Text->ToString() == "Concrete (Recipe: 1)" || vanillaItems->Nodes[i]->Text->ToString() == "Concrete (Recipe: 3)" || vanillaItems->Nodes[i]->Text->ToString() == "Concrete (Recipe: 4)") {
					vanillaItems->Nodes[i]->Text = "Concrete (Recipe: 2)";
					break;
				}
				int id = listBox1->SelectedIndex;
				listBox1->SelectedItem = NULL;
				listBox1->Items[id] = "Concrete (Recipe: 2)";
				concrete_recipe = 2;
				listBox1->SetSelected(id, true);
			}
			else if (str == "Copper Ingot (Recipe: 1)" || str == "Copper Ingot (Recipe: 3)") {
			for (int i = 0; i < vanillaItems->Nodes->Count; i++)
				if (vanillaItems->Nodes[i]->Text->ToString() == "Copper Ingot (Recipe: 1)" || vanillaItems->Nodes[i]->Text->ToString() == "Copper Ingot (Recipe: 3)") {
					vanillaItems->Nodes[i]->Text = "Copper Ingot (Recipe: 2)";
					break;
				}
				int id = listBox1->SelectedIndex;
				listBox1->SelectedItem = NULL;
				listBox1->Items[id] = "Copper Ingot (Recipe: 2)";
				copper_ingot_recipe = 2;
				listBox1->SetSelected(id, true);
			}
			else if (str == "Copper Sheet (Recipe: 1)") {
			for (int i = 0; i < vanillaItems->Nodes->Count; i++)
				if (vanillaItems->Nodes[i]->Text->ToString() == "Copper Sheet (Recipe: 1)") {
					vanillaItems->Nodes[i]->Text = "Copper Sheet (Recipe: 2)";
					break;
				}
				int id = listBox1->SelectedIndex;
				listBox1->SelectedItem = NULL;
				listBox1->Items[id] = "Copper Sheet (Recipe: 2)";
				copper_sheet_recipe = 2;
				listBox1->SetSelected(id, true);
			}
			else if (str == "Crystal Oscillator (Recipe: 1)") {
			for (int i = 0; i < vanillaItems->Nodes->Count; i++)
				if (vanillaItems->Nodes[i]->Text->ToString() == "Crystal Oscillator (Recipe: 1)") {
					vanillaItems->Nodes[i]->Text = "Crystal Oscillator (Recipe: 2)";
					break;
				}
				int id = listBox1->SelectedIndex;
				listBox1->SelectedItem = NULL;
				listBox1->Items[id] = "Crystal Oscillator (Recipe: 2)";
				crystal_oscillator_recipe = 2;
				listBox1->SetSelected(id, true);
			}
			else if (str == "Electromagnetic Control Rod (Recipe: 1)") {
			for (int i = 0; i < vanillaItems->Nodes->Count; i++)
				if (vanillaItems->Nodes[i]->Text->ToString() == "Electromagnetic Control Rod (Recipe: 1)") {
					vanillaItems->Nodes[i]->Text = "Electromagnetic Control Rod (Recipe: 2)";
					break;
				}
				int id = listBox1->SelectedIndex;
				listBox1->SelectedItem = NULL;
				listBox1->Items[id] = "Electromagnetic Control Rod (Recipe: 2)";
				electromagnetic_control_rod_recipe = 2;
				listBox1->SetSelected(id, true);
			}
			else if (str == "Encased Industrial Beam (Recipe: 1)") {
			for (int i = 0; i < vanillaItems->Nodes->Count; i++)
				if (vanillaItems->Nodes[i]->Text->ToString() == "Encased Industrial Beam (Recipe: 1)") {
					vanillaItems->Nodes[i]->Text = "Encased Industrial Beam (Recipe: 2)";
					break;
				}
				int id = listBox1->SelectedIndex;
				listBox1->SelectedItem = NULL;
				listBox1->Items[id] = "Encased Industrial Beam (Recipe: 2)";
				encased_industrial_beam_recipe = 2;
				listBox1->SetSelected(id, true);
			}
			else if (str == "Encased Uranium Cell (Recipe: 1)") {
			for (int i = 0; i < vanillaItems->Nodes->Count; i++)
				if (vanillaItems->Nodes[i]->Text->ToString() == "Encased Uranium Cell (Recipe: 1)") {
					vanillaItems->Nodes[i]->Text = "Encased Uranium Cell (Recipe: 2)";
					break;
				}
				int id = listBox1->SelectedIndex;
				listBox1->SelectedItem = NULL;
				listBox1->Items[id] = "Encased Uranium Cell (Recipe: 2)";
				encased_uranium_cell_recipe = 2;
				listBox1->SetSelected(id, true);
			}
			else if (str == "Fabric (Recipe: 1)") {
				for (int i = 0; i < vanillaItems->Nodes->Count; i++)
					if (vanillaItems->Nodes[i]->Text->ToString() == "Fabric (Recipe: 1)") {
						vanillaItems->Nodes[i]->Text = "Fabric (Recipe: 2)";
						break;
					}
				int id = listBox1->SelectedIndex;
				listBox1->SelectedItem = NULL;
				listBox1->Items[id] = "Fabric (Recipe: 2)";
				fabric_recipe = 2;
				listBox1->SetSelected(id, true);
			}
			else if (str == "Heat Sink (Recipe: 1)") {
				for (int i = 0; i < vanillaItems->Nodes->Count; i++)
					if (vanillaItems->Nodes[i]->Text->ToString() == "Heat Sink (Recipe: 1)") {
						vanillaItems->Nodes[i]->Text = "Heat Sink (Recipe: 2)";
						break;
					}
				int id = listBox1->SelectedIndex;
				listBox1->SelectedItem = NULL;
				listBox1->Items[id] = "Heat Sink (Recipe: 2)";
				heat_sink_recipe = 2;
				listBox1->SetSelected(id, true);
			}
			else if (str == "Heavy Modular Frame (Recipe: 1)" || str == "Heavy Modular Frame (Recipe: 3)") {
				for (int i = 0; i < vanillaItems->Nodes->Count; i++)
					if (vanillaItems->Nodes[i]->Text->ToString() == "Heavy Modular Frame (Recipe: 1)" || vanillaItems->Nodes[i]->Text->ToString() == "Heavy Modular Frame (Recipe: 3)") {
						vanillaItems->Nodes[i]->Text = "Heavy Modular Frame (Recipe: 2)";
						break;
					}
				int id = listBox1->SelectedIndex;
				listBox1->SelectedItem = NULL;
				listBox1->Items[id] = "Heavy Modular Frame (Recipe: 2)";
				heavy_modular_frame_recipe = 2;
				listBox1->SetSelected(id, true);
			}
			else if (str == "High-Speed Connector (Recipe: 1)") {
				for (int i = 0; i < vanillaItems->Nodes->Count; i++)
					if (vanillaItems->Nodes[i]->Text->ToString() == "High-Speed Connector (Recipe: 1)") {
						vanillaItems->Nodes[i]->Text = "High-Speed Connector (Recipe: 2)";
						break;
					}
				int id = listBox1->SelectedIndex;
				listBox1->SelectedItem = NULL;
				listBox1->Items[id] = "High-Speed Connector (Recipe: 2)";
				high_speed_connector_recipe = 2;
				listBox1->SetSelected(id, true);
			}
			else if (str == "Iron Ingot (Recipe: 1)" || str == "Iron Ingot (Recipe: 3)") {
				for (int i = 0; i < vanillaItems->Nodes->Count; i++)
					if (vanillaItems->Nodes[i]->Text->ToString() == "Iron Ingot (Recipe: 1)" || vanillaItems->Nodes[i]->Text->ToString() == "Iron Ingot (Recipe: 3)") {
						vanillaItems->Nodes[i]->Text = "Iron Ingot (Recipe: 2)";
						break;
					}
				int id = listBox1->SelectedIndex;
				listBox1->SelectedItem = NULL;
				listBox1->Items[id] = "Iron Ingot (Recipe: 2)";
				iron_ingot_recipe = 2;
				listBox1->SetSelected(id, true);
			}
			else if (str == "Iron Plate (Recipe: 1)" || str == "Iron Plate (Recipe: 3)") {
				for (int i = 0; i < vanillaItems->Nodes->Count; i++)
					if (vanillaItems->Nodes[i]->Text->ToString() == "Iron Plate (Recipe: 1)" || vanillaItems->Nodes[i]->Text->ToString() == "Iron Plate (Recipe: 3)") {
						vanillaItems->Nodes[i]->Text = "Iron Plate (Recipe: 2)";
						break;
					}
				int id = listBox1->SelectedIndex;
				listBox1->SelectedItem = NULL;
				listBox1->Items[id] = "Iron Plate (Recipe: 2)";
				iron_plate_recipe = 2;
				listBox1->SetSelected(id, true);
			}
			else if (str == "Iron Rod (Recipe: 1)") {
				for (int i = 0; i < vanillaItems->Nodes->Count; i++)
					if (vanillaItems->Nodes[i]->Text->ToString() == "Iron Rod (Recipe: 1)") {
						vanillaItems->Nodes[i]->Text = "Iron Rod (Recipe: 2)";
						break;
					}
				int id = listBox1->SelectedIndex;
				listBox1->SelectedItem = NULL;
				listBox1->Items[id] = "Iron Rod (Recipe: 2)";
				iron_rod_recipe = 2;
				listBox1->SetSelected(id, true);
			}
			else if (str == "Modular Frame (Recipe: 1)" || str == "Modular Frame (Recipe: 3)") {
				for (int i = 0; i < vanillaItems->Nodes->Count; i++)
					if (vanillaItems->Nodes[i]->Text->ToString() == "Modular Frame (Recipe: 1)" || vanillaItems->Nodes[i]->Text->ToString() == "Modular Frame (Recipe: 3)") {
						vanillaItems->Nodes[i]->Text = "Modular Frame (Recipe: 2)";
						break;
					}
				int id = listBox1->SelectedIndex;
				listBox1->SelectedItem = NULL;
				listBox1->Items[id] = "Modular Frame (Recipe: 2)";
				modular_frame_recipe = 2;
				listBox1->SetSelected(id, true);
			}
			else if (str == "Motor (Recipe: 1)") {
				for (int i = 0; i < vanillaItems->Nodes->Count; i++)
					if (vanillaItems->Nodes[i]->Text->ToString() == "Motor (Recipe: 1)") {
						vanillaItems->Nodes[i]->Text = "Motor (Recipe: 2)";
						break;
					}
				int id = listBox1->SelectedIndex;
				listBox1->SelectedItem = NULL;
				listBox1->Items[id] = "Motor (Recipe: 2)";
				motor_recipe = 2;
				listBox1->SetSelected(id, true);
			}
			else if (str == "Nuclear Fuel Rod (Recipe: 1)") {
				for (int i = 0; i < vanillaItems->Nodes->Count; i++)
					if (vanillaItems->Nodes[i]->Text->ToString() == "Nuclear Fuel Rod (Recipe: 1)") {
						vanillaItems->Nodes[i]->Text = "Nuclear Fuel Rod (Recipe: 2)";
						break;
					}
				int id = listBox1->SelectedIndex;
				listBox1->SelectedItem = NULL;
				listBox1->Items[id] = "Nuclear Fuel Rod (Recipe: 2)";
				nuclear_fuel_rod_recipe = 2;
				listBox1->SetSelected(id, true);
			}
			else if (str == "Plastic (Recipe: 1)" || str == "Plastic (Recipe: 3)") {
				for (int i = 0; i < vanillaItems->Nodes->Count; i++)
					if (vanillaItems->Nodes[i]->Text->ToString() == "Plastic (Recipe: 1)" || vanillaItems->Nodes[i]->Text->ToString() == "Plastic (Recipe: 3)") {
						vanillaItems->Nodes[i]->Text = "Plastic (Recipe: 2)";
						break;
					}
				int id = listBox1->SelectedIndex;
				listBox1->SelectedItem = NULL;
				listBox1->Items[id] = "Plastic (Recipe: 2)";
				plastic_recipe = 2;
				listBox1->SetSelected(id, true);
			}
			else if (str == "Quartz Crystal (Recipe: 1)") {
				for (int i = 0; i < vanillaItems->Nodes->Count; i++)
					if (vanillaItems->Nodes[i]->Text->ToString() == "Quartz Crystal (Recipe: 1)") {
						vanillaItems->Nodes[i]->Text = "Quartz Crystal (Recipe: 2)";
						break;
					}
				int id = listBox1->SelectedIndex;
				listBox1->SelectedItem = NULL;
				listBox1->Items[id] = "Quartz Crystal (Recipe: 2)";
				quartz_crystal_recipe = 2;
				listBox1->SetSelected(id, true);
			}
			else if (str == "Quickwire (Recipe: 1)") {
				for (int i = 0; i < vanillaItems->Nodes->Count; i++)
					if (vanillaItems->Nodes[i]->Text->ToString() == "Quickwire (Recipe: 1)") {
						vanillaItems->Nodes[i]->Text = "Quickwire (Recipe: 2)";
						break;
					}
				int id = listBox1->SelectedIndex;
				listBox1->SelectedItem = NULL;
				listBox1->Items[id] = "Quickwire (Recipe: 2)";
				quickwire_recipe = 2;
				listBox1->SetSelected(id, true);
			}
			else if (str == "Radio Control Unit (Recipe: 1)") {
				for (int i = 0; i < vanillaItems->Nodes->Count; i++)
					if (vanillaItems->Nodes[i]->Text->ToString() == "Radio Control Unit (Recipe: 1)") {
						vanillaItems->Nodes[i]->Text = "Radio Control Unit (Recipe: 2)";
						break;
					}
				int id = listBox1->SelectedIndex;
				listBox1->SelectedItem = NULL;
				listBox1->Items[id] = "Radio Control Unit (Recipe: 2)";
				radio_control_unit_recipe = 2;
				listBox1->SetSelected(id, true);
			}
			else if (str == "Reinforced Iron Plate (Recipe: 1)" || str == "Reinforced Iron Plate (Recipe: 3)" || str == "Reinforced Iron Plate (Recipe: 4)") {
				for (int i = 0; i < vanillaItems->Nodes->Count; i++)
					if (vanillaItems->Nodes[i]->Text->ToString() == "Reinforced Iron Plate (Recipe: 1)" || vanillaItems->Nodes[i]->Text->ToString() == "Reinforced Iron Plate (Recipe: 3)" || vanillaItems->Nodes[i]->Text->ToString() == "Reinforced Iron Plate (Recipe: 4)") {
						vanillaItems->Nodes[i]->Text = "Reinforced Iron Plate (Recipe: 2)";
						break;
					}
				int id = listBox1->SelectedIndex;
				listBox1->SelectedItem = NULL;
				listBox1->Items[id] = "Reinforced Iron Plate (Recipe: 2)";
				reinforced_iron_plate_recipe = 2;
				listBox1->SetSelected(id, true);
			}
			else if (str == "Rotor (Recipe: 1)" || str == "Rotor (Recipe: 3)") {
				for (int i = 0; i < vanillaItems->Nodes->Count; i++)
					if (vanillaItems->Nodes[i]->Text->ToString() == "Rotor (Recipe: 1)" || vanillaItems->Nodes[i]->Text->ToString() == "Rotor (Recipe: 3)") {
						vanillaItems->Nodes[i]->Text = "Rotor (Recipe: 2)";
						break;
					}
				int id = listBox1->SelectedIndex;
				listBox1->SelectedItem = NULL;
				listBox1->Items[id] = "Rotor (Recipe: 2)";
				rotor_recipe = 2;
				listBox1->SetSelected(id, true);
			}
			else if (str == "Rubber (Recipe: 1)" || str == "Rubber (Recipe: 3)") {
				for (int i = 0; i < vanillaItems->Nodes->Count; i++)
					if (vanillaItems->Nodes[i]->Text->ToString() == "Rubber (Recipe: 1)" || vanillaItems->Nodes[i]->Text->ToString() == "Rubber (Recipe: 3)") {
						vanillaItems->Nodes[i]->Text = "Rubber (Recipe: 2)";
						break;
					}
				int id = listBox1->SelectedIndex;
				listBox1->SelectedItem = NULL;
				listBox1->Items[id] = "Rubber (Recipe: 2)";
				rubber_recipe = 2;
				listBox1->SetSelected(id, true);
			}
			else if (str == "Screw (Recipe: 1)" || str == "Screw (Recipe: 3)") {
				for (int i = 0; i < vanillaItems->Nodes->Count; i++)
					if (vanillaItems->Nodes[i]->Text->ToString() == "Screw (Recipe: 1)" || vanillaItems->Nodes[i]->Text->ToString() == "Screw (Recipe: 3)") {
						vanillaItems->Nodes[i]->Text = "Screw (Recipe: 2)";
						break;
					}
				int id = listBox1->SelectedIndex;
				listBox1->SelectedItem = NULL;
				listBox1->Items[id] = "Screw (Recipe: 2)";
				screw_recipe = 2;
				listBox1->SetSelected(id, true);
			}
			else if (str == "Silica (Recipe: 1)" || str == "Silica (Recipe: 3)") {
				for (int i = 0; i < vanillaItems->Nodes->Count; i++)
					if (vanillaItems->Nodes[i]->Text->ToString() == "Silica (Recipe: 1)" || vanillaItems->Nodes[i]->Text->ToString() == "Silica (Recipe: 3)") {
						vanillaItems->Nodes[i]->Text = "Silica (Recipe: 2)";
						break;
					}
				int id = listBox1->SelectedIndex;
				listBox1->SelectedItem = NULL;
				listBox1->Items[id] = "Silica (Recipe: 2)";
				silica_recipe = 2;
				listBox1->SetSelected(id, true);
			}
			else if (str == "Smart Plating (Recipe: 1)") {
				for (int i = 0; i < vanillaItems->Nodes->Count; i++)
					if (vanillaItems->Nodes[i]->Text->ToString() == "Smart Plating (Recipe: 1)") {
						vanillaItems->Nodes[i]->Text = "Smart Plating (Recipe: 2)";
						break;
					}
				int id = listBox1->SelectedIndex;
				listBox1->SelectedItem = NULL;
				listBox1->Items[id] = "Smart Plating (Recipe: 2)";
				smart_plating_recipe = 2;
				listBox1->SetSelected(id, true);
			}
			else if (str == "Stator (Recipe: 1)") {
				for (int i = 0; i < vanillaItems->Nodes->Count; i++)
					if (vanillaItems->Nodes[i]->Text->ToString() == "Stator (Recipe: 1)") {
						vanillaItems->Nodes[i]->Text = "Stator (Recipe: 2)";
						break;
					}
				int id = listBox1->SelectedIndex;
				listBox1->SelectedItem = NULL;
				listBox1->Items[id] = "Stator (Recipe: 2)";
				stator_recipe = 2;
				listBox1->SetSelected(id, true);
			}
			else if (str == "Steel Ingot (Recipe: 1)" || str == "Steel Ingot (Recipe: 3)" || str == "Steel Ingot (Recipe: 4)") {
				for (int i = 0; i < vanillaItems->Nodes->Count; i++)
					if (vanillaItems->Nodes[i]->Text->ToString() == "Steel Ingot (Recipe: 1)" || vanillaItems->Nodes[i]->Text->ToString() == "Steel Ingot (Recipe: 3)" || vanillaItems->Nodes[i]->Text->ToString() == "Steel Ingot (Recipe: 4)") {
						vanillaItems->Nodes[i]->Text = "Steel Ingot (Recipe: 2)";
						break;
					}
				int id = listBox1->SelectedIndex;
				listBox1->SelectedItem = NULL;
				listBox1->Items[id] = "Steel Ingot (Recipe: 2)";
				steel_ingot_recipe = 2;
				listBox1->SetSelected(id, true);
			}
			else if (str == "Turbo Motor (Recipe: 1)") {
				for (int i = 0; i < vanillaItems->Nodes->Count; i++)
					if (vanillaItems->Nodes[i]->Text->ToString() == "Turbo Motor (Recipe: 1)" ) {
						vanillaItems->Nodes[i]->Text = "Turbo Motor (Recipe: 2)";
						break;
					}
				int id = listBox1->SelectedIndex;
				listBox1->SelectedItem = NULL;
				listBox1->Items[id] = "Turbo Motor (Recipe: 2)";
				turbo_motor_recipe = 2;
				listBox1->SetSelected(id, true);
			}
			else if (str == "Versatile Framework (Recipe: 1)") {
				for (int i = 0; i < vanillaItems->Nodes->Count; i++)
					if (vanillaItems->Nodes[i]->Text->ToString() == "Versatile Framework (Recipe: 1)") {
						vanillaItems->Nodes[i]->Text = "Versatile Framework (Recipe: 2)";
						break;
					}
				int id = listBox1->SelectedIndex;
				listBox1->SelectedItem = NULL;
				listBox1->Items[id] = "Versatile Framework (Recipe: 2)";
				versatile_framework_recipe = 2;
				listBox1->SetSelected(id, true);
			}
			else if (str == "Wire (Recipe: 1)" || str == "Wire (Recipe: 3)" || str == "Wire (Recipe: 4)") {
				for (int i = 0; i < vanillaItems->Nodes->Count; i++)
					if (vanillaItems->Nodes[i]->Text->ToString() == "Wire (Recipe: 1)" || vanillaItems->Nodes[i]->Text->ToString() == "Wire (Recipe: 3)" || vanillaItems->Nodes[i]->Text->ToString() == "Wire (Recipe: 4)") {
						vanillaItems->Nodes[i]->Text = "Wire (Recipe: 2)";
						break;
					}
				int id = listBox1->SelectedIndex;
				listBox1->SelectedItem = NULL;
				listBox1->Items[id] = "Wire (Recipe: 2)";
				wire_recipe = 2;
				listBox1->SetSelected(id, true);
			}
		}
	}
	private: System::Void radioButton3_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (button_changing) {
			System::String^ str = listBox1->SelectedItem->ToString();

			if (str == "Cable (Recipe: 1)" || str == "Cable (Recipe: 2)" || str == "Cable (Recipe: 4)") {
				for (int i = 0; i < vanillaItems->Nodes->Count; i++)
					if (vanillaItems->Nodes[i]->Text->ToString() == "Cable (Recipe: 1)" || vanillaItems->Nodes[i]->Text->ToString() == "Cable (Recipe: 2)" || vanillaItems->Nodes[i]->Text->ToString() == "Cable (Recipe: 4)") {
						vanillaItems->Nodes[i]->Text = "Cable (Recipe: 3)";
						break;
					}
				int id = listBox1->SelectedIndex;
				listBox1->SelectedItem = NULL;
				listBox1->Items[id] = "Cable (Recipe: 3)";
				cable_recipe = 3;
				listBox1->SetSelected(id, true);
			}
			else if (str == "Circuit Board (Recipe: 1)" || str == "Circuit Board (Recipe: 2)" || str == "Circuit Board (Recipe: 4)") {
				for (int i = 0; i < vanillaItems->Nodes->Count; i++)
					if (vanillaItems->Nodes[i]->Text->ToString() == "Circuit Board (Recipe: 1)" || vanillaItems->Nodes[i]->Text->ToString() == "Circuit Board (Recipe: 2)" || vanillaItems->Nodes[i]->Text->ToString() == "Circuit Board (Recipe: 4)") {
						vanillaItems->Nodes[i]->Text = "Circuit Board (Recipe: 3)";
						break;
					}
				int id = listBox1->SelectedIndex;
				listBox1->SelectedItem = NULL;
				listBox1->Items[id] = "Circuit Board (Recipe: 3)";
				circuit_board_recipe = 3;
				listBox1->SetSelected(id, true);
			}
			else if (str == "Computer (Recipe: 1)" || str == "Computer (Recipe: 2)") {
				for (int i = 0; i < vanillaItems->Nodes->Count; i++)
					if (vanillaItems->Nodes[i]->Text->ToString() == "Computer (Recipe: 1)" || vanillaItems->Nodes[i]->Text->ToString() == "Computer (Recipe: 2)") {
						vanillaItems->Nodes[i]->Text = "Computer (Recipe: 3)";
						break;
					}
				int id = listBox1->SelectedIndex;
				listBox1->SelectedItem = NULL;
				listBox1->Items[id] = "Computer (Recipe: 3)";
				computer_recipe = 3;
				listBox1->SetSelected(id, true);
			}
			else if (str == "Concrete (Recipe: 1)" || str == "Concrete (Recipe: 2)" || str == "Concrete (Recipe: 4)") {
				for (int i = 0; i < vanillaItems->Nodes->Count; i++)
					if (vanillaItems->Nodes[i]->Text->ToString() == "Concrete (Recipe: 1)" || vanillaItems->Nodes[i]->Text->ToString() == "Concrete (Recipe: 2)" || vanillaItems->Nodes[i]->Text->ToString() == "Concrete (Recipe: 4)") {
						vanillaItems->Nodes[i]->Text = "Concrete (Recipe: 3)";
						break;
					}
				int id = listBox1->SelectedIndex;
				listBox1->SelectedItem = NULL;
				listBox1->Items[id] = "Concrete (Recipe: 3)";
				concrete_recipe = 3;
				listBox1->SetSelected(id, true);
			}
			else if (str == "Copper Ingot (Recipe: 1)" || str == "Copper Ingot (Recipe: 2)") {
				for (int i = 0; i < vanillaItems->Nodes->Count; i++)
					if (vanillaItems->Nodes[i]->Text->ToString() == "Copper Ingot (Recipe: 1)" || vanillaItems->Nodes[i]->Text->ToString() == "Copper Ingot (Recipe: 2)") {
						vanillaItems->Nodes[i]->Text = "Copper Ingot (Recipe: 3)";
						break;
					}
				int id = listBox1->SelectedIndex;
				listBox1->SelectedItem = NULL;
				listBox1->Items[id] = "Copper Ingot (Recipe: 3)";
				copper_ingot_recipe = 3;
				listBox1->SetSelected(id, true);
			}
			else if (str == "Heavy Modular Frame (Recipe: 1)" || str == "Heavy Modular Frame (Recipe: 2)") {
				for (int i = 0; i < vanillaItems->Nodes->Count; i++)
					if (vanillaItems->Nodes[i]->Text->ToString() == "Heavy Modular Frame (Recipe: 1)" || vanillaItems->Nodes[i]->Text->ToString() == "Heavy Modular Frame (Recipe: 2)") {
						vanillaItems->Nodes[i]->Text = "Heavy Modular Frame (Recipe: 3)";
						break;
					}
				int id = listBox1->SelectedIndex;
				listBox1->SelectedItem = NULL;
				listBox1->Items[id] = "Heavy Modular Frame (Recipe: 3)";
				heavy_modular_frame_recipe = 3;
				listBox1->SetSelected(id, true);
			}
			else if (str == "Iron Ingot (Recipe: 1)" || str == "Iron Ingot (Recipe: 2)") {
				for (int i = 0; i < vanillaItems->Nodes->Count; i++)
					if (vanillaItems->Nodes[i]->Text->ToString() == "Iron Ingot (Recipe: 1)" || vanillaItems->Nodes[i]->Text->ToString() == "Iron Ingot (Recipe: 2)") {
						vanillaItems->Nodes[i]->Text = "Iron Ingot (Recipe: 3)";
						break;
					}
				int id = listBox1->SelectedIndex;
				listBox1->SelectedItem = NULL;
				listBox1->Items[id] = "Iron Ingot (Recipe: 3)";
				iron_ingot_recipe = 3;
				listBox1->SetSelected(id, true);
			}
			else if (str == "Iron Plate (Recipe: 1)" || str == "Iron Plate (Recipe: 2)") {
				for (int i = 0; i < vanillaItems->Nodes->Count; i++)
					if (vanillaItems->Nodes[i]->Text->ToString() == "Iron Plate (Recipe: 1)" || vanillaItems->Nodes[i]->Text->ToString() == "Iron Plate (Recipe: 2)") {
						vanillaItems->Nodes[i]->Text = "Iron Plate (Recipe: 3)";
						break;
					}
				int id = listBox1->SelectedIndex;
				listBox1->SelectedItem = NULL;
				listBox1->Items[id] = "Iron Plate (Recipe: 3)";
				iron_plate_recipe = 3;
				listBox1->SetSelected(id, true);
			}
			else if (str == "Modular Frame (Recipe: 1)" || str == "Modular Frame (Recipe: 2)") {
				for (int i = 0; i < vanillaItems->Nodes->Count; i++)
					if (vanillaItems->Nodes[i]->Text->ToString() == "Modular Frame (Recipe: 1)" || vanillaItems->Nodes[i]->Text->ToString() == "Modular Frame (Recipe: 2)") {
						vanillaItems->Nodes[i]->Text = "Modular Frame (Recipe: 3)";
						break;
					}
				int id = listBox1->SelectedIndex;
				listBox1->SelectedItem = NULL;
				listBox1->Items[id] = "Modular Frame (Recipe: 3)";
				modular_frame_recipe = 3;
				listBox1->SetSelected(id, true);
			}
			else if (str == "Plastic (Recipe: 1)" || str == "Plastic (Recipe: 2)") {
				for (int i = 0; i < vanillaItems->Nodes->Count; i++)
					if (vanillaItems->Nodes[i]->Text->ToString() == "Plastic (Recipe: 1)" || vanillaItems->Nodes[i]->Text->ToString() == "Plastic (Recipe: 2)") {
						vanillaItems->Nodes[i]->Text = "Plastic (Recipe: 3)";
						break;
					}
				int id = listBox1->SelectedIndex;
				listBox1->SelectedItem = NULL;
				listBox1->Items[id] = "Plastic (Recipe: 3)";
				plastic_recipe = 3;
				listBox1->SetSelected(id, true);
			}
			else if (str == "Reinforced Iron Plate (Recipe: 1)" || str == "Reinforced Iron Plate (Recipe: 2)" || str == "Reinforced Iron Plate (Recipe: 4)") {
				for (int i = 0; i < vanillaItems->Nodes->Count; i++)
					if (vanillaItems->Nodes[i]->Text->ToString() == "Reinforced Iron Plate (Recipe: 1)" || vanillaItems->Nodes[i]->Text->ToString() == "Reinforced Iron Plate (Recipe: 2)" || vanillaItems->Nodes[i]->Text->ToString() == "Reinforced Iron Plate (Recipe: 4)") {
						vanillaItems->Nodes[i]->Text = "Reinforced Iron Plate (Recipe: 3)";
						break;
					}
				int id = listBox1->SelectedIndex;
				listBox1->SelectedItem = NULL;
				listBox1->Items[id] = "Reinforced Iron Plate (Recipe: 3)";
				reinforced_iron_plate_recipe = 3;
				listBox1->SetSelected(id, true);
			}
			else if (str == "Rotor (Recipe: 1)" || str == "Rotor (Recipe: 2)") {
				for (int i = 0; i < vanillaItems->Nodes->Count; i++)
					if (vanillaItems->Nodes[i]->Text->ToString() == "Rotor (Recipe: 1)" || vanillaItems->Nodes[i]->Text->ToString() == "Rotor (Recipe: 2)") {
						vanillaItems->Nodes[i]->Text = "Rotor (Recipe: 3)";
						break;
					}
				int id = listBox1->SelectedIndex;
				listBox1->SelectedItem = NULL;
				listBox1->Items[id] = "Rotor (Recipe: 3)";
				rotor_recipe = 3;
				listBox1->SetSelected(id, true);
			}
			else if (str == "Rubber (Recipe: 1)" || str == "Rubber (Recipe: 2)") {
				for (int i = 0; i < vanillaItems->Nodes->Count; i++)
					if (vanillaItems->Nodes[i]->Text->ToString() == "Rubber (Recipe: 1)" || vanillaItems->Nodes[i]->Text->ToString() == "Rubber (Recipe: 2)") {
						vanillaItems->Nodes[i]->Text = "Rubber (Recipe: 3)";
						break;
					}
				int id = listBox1->SelectedIndex;
				listBox1->SelectedItem = NULL;
				listBox1->Items[id] = "Rubber (Recipe: 3)";
				rubber_recipe = 3;
				listBox1->SetSelected(id, true);
			}
			else if (str == "Screw (Recipe: 1)" || str == "Screw (Recipe: 2)") {
				for (int i = 0; i < vanillaItems->Nodes->Count; i++)
					if (vanillaItems->Nodes[i]->Text->ToString() == "Screw (Recipe: 1)" || vanillaItems->Nodes[i]->Text->ToString() == "Screw (Recipe: 2)") {
						vanillaItems->Nodes[i]->Text = "Screw (Recipe: 3)";
						break;
					}
				int id = listBox1->SelectedIndex;
				listBox1->SelectedItem = NULL;
				listBox1->Items[id] = "Screw (Recipe: 3)";
				screw_recipe = 3;
				listBox1->SetSelected(id, true);
			}
			else if (str == "Silica (Recipe: 1)" || str == "Silica (Recipe: 2)") {
				for (int i = 0; i < vanillaItems->Nodes->Count; i++)
					if (vanillaItems->Nodes[i]->Text->ToString() == "Silica (Recipe: 1)" || vanillaItems->Nodes[i]->Text->ToString() == "Silica (Recipe: 2)") {
						vanillaItems->Nodes[i]->Text = "Silica (Recipe: 3)";
						break;
					}
				int id = listBox1->SelectedIndex;
				listBox1->SelectedItem = NULL;
				listBox1->Items[id] = "Silica (Recipe: 3)";
				silica_recipe = 3;
				listBox1->SetSelected(id, true);
			}
			else if (str == "Steel Ingot (Recipe: 1)" || str == "Steel Ingot (Recipe: 2)" || str == "Steel Ingot (Recipe: 4)") {
				for (int i = 0; i < vanillaItems->Nodes->Count; i++)
					if (vanillaItems->Nodes[i]->Text->ToString() == "Steel Ingot (Recipe: 1)" || vanillaItems->Nodes[i]->Text->ToString() == "Steel Ingot (Recipe: 2)" || vanillaItems->Nodes[i]->Text->ToString() == "Steel Ingot (Recipe: 4)") {
						vanillaItems->Nodes[i]->Text = "Steel Ingot (Recipe: 3)";
						break;
					}
				int id = listBox1->SelectedIndex;
				listBox1->SelectedItem = NULL;
				listBox1->Items[id] = "Steel Ingot (Recipe: 3)";
				steel_ingot_recipe = 3;
				listBox1->SetSelected(id, true);
			}
			else if (str == "Wire (Recipe: 1)" || str == "Wire (Recipe: 2)" || str == "Wire (Recipe: 4)") {
				for (int i = 0; i < vanillaItems->Nodes->Count; i++)
					if (vanillaItems->Nodes[i]->Text->ToString() == "Wire (Recipe: 1)" || vanillaItems->Nodes[i]->Text->ToString() == "Wire (Recipe: 2)" || vanillaItems->Nodes[i]->Text->ToString() == "Wire (Recipe: 4)") {
						vanillaItems->Nodes[i]->Text = "Wire (Recipe: 3)";
						break;
					}
				int id = listBox1->SelectedIndex;
				listBox1->SelectedItem = NULL;
				listBox1->Items[id] = "Wire (Recipe: 3)";
				wire_recipe = 3;
				listBox1->SetSelected(id, true);
			}
		}
	}
	private: System::Void radioButton4_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (button_changing) {
			System::String^ str = listBox1->SelectedItem->ToString();

			if (str == "Cable (Recipe: 1)" || str == "Cable (Recipe: 2)" || str == "Cable (Recipe: 3)") {
				for (int i = 0; i < vanillaItems->Nodes->Count; i++)
					if (vanillaItems->Nodes[i]->Text->ToString() == "Cable (Recipe: 1)" || vanillaItems->Nodes[i]->Text->ToString() == "Cable (Recipe: 2)" || vanillaItems->Nodes[i]->Text->ToString() == "Cable (Recipe: 3)") {
						vanillaItems->Nodes[i]->Text = "Cable (Recipe: 4)";
						break;
					}
				int id = listBox1->SelectedIndex;
				listBox1->SelectedItem = NULL;
				listBox1->Items[id] = "Cable (Recipe: 4)";
				cable_recipe = 4;
				listBox1->SetSelected(id, true);
			}
			else if (str == "Circuit Board (Recipe: 1)" || str == "Circuit Board (Recipe: 2)" || str == "Circuit Board (Recipe: 3)") {
				for (int i = 0; i < vanillaItems->Nodes->Count; i++)
					if (vanillaItems->Nodes[i]->Text->ToString() == "Circuit Board (Recipe: 1)" || vanillaItems->Nodes[i]->Text->ToString() == "Circuit Board (Recipe: 2)" || vanillaItems->Nodes[i]->Text->ToString() == "Circuit Board (Recipe: 3)") {
						vanillaItems->Nodes[i]->Text = "Circuit Board (Recipe: 4)";
						break;
					}
				int id = listBox1->SelectedIndex;
				listBox1->SelectedItem = NULL;
				listBox1->Items[id] = "Circuit Board (Recipe: 4)";
				circuit_board_recipe = 4;
				listBox1->SetSelected(id, true);
			}
			else if (str == "Concrete (Recipe: 1)" || str == "Concrete (Recipe: 2)" || str == "Concrete (Recipe: 3)") {
				for (int i = 0; i < vanillaItems->Nodes->Count; i++)
					if (vanillaItems->Nodes[i]->Text->ToString() == "Concrete (Recipe: 1)" || vanillaItems->Nodes[i]->Text->ToString() == "Concrete (Recipe: 2)" || vanillaItems->Nodes[i]->Text->ToString() == "Concrete (Recipe: 3)") {
						vanillaItems->Nodes[i]->Text = "Concrete (Recipe: 4)";
						break;
					}
				int id = listBox1->SelectedIndex;
				listBox1->SelectedItem = NULL;
				listBox1->Items[id] = "Concrete (Recipe: 4)";
				concrete_recipe = 4;
				listBox1->SetSelected(id, true);
			}
			else if (str == "Reinforced Iron Plate (Recipe: 1)" || str == "Reinforced Iron Plate (Recipe: 2)" || str == "Reinforced Iron Plate (Recipe: 3)") {
				for (int i = 0; i < vanillaItems->Nodes->Count; i++)
					if (vanillaItems->Nodes[i]->Text->ToString() == "Reinforced Iron Plate (Recipe: 1)" || vanillaItems->Nodes[i]->Text->ToString() == "Reinforced Iron Plate (Recipe: 2)" || vanillaItems->Nodes[i]->Text->ToString() == "Reinforced Iron Plate (Recipe: 3)") {
						vanillaItems->Nodes[i]->Text = "Reinforced Iron Plate (Recipe: 4)";
						break;
					}
				int id = listBox1->SelectedIndex;
				listBox1->SelectedItem = NULL;
				listBox1->Items[id] = "Reinforced Iron Plate (Recipe: 4)";
				reinforced_iron_plate_recipe = 4;
				listBox1->SetSelected(id, true);
			}
			else if (str == "Steel Ingot (Recipe: 1)" || str == "Steel Ingot (Recipe: 2)" || str == "Steel Ingot (Recipe: 3)") {
				for (int i = 0; i < vanillaItems->Nodes->Count; i++)
					if (vanillaItems->Nodes[i]->Text->ToString() == "Steel Ingot (Recipe: 1)" || vanillaItems->Nodes[i]->Text->ToString() == "Steel Ingot (Recipe: 2)" || vanillaItems->Nodes[i]->Text->ToString() == "Steel Ingot (Recipe: 3)") {
						vanillaItems->Nodes[i]->Text = "Steel Ingot (Recipe: 4)";
						break;
					}
				int id = listBox1->SelectedIndex;
				listBox1->SelectedItem = NULL;
				listBox1->Items[id] = "Steel Ingot (Recipe: 4)";
				steel_ingot_recipe = 4;
				listBox1->SetSelected(id, true);
			}
			else if (str == "Wire (Recipe: 1)" || str == "Wire (Recipe: 2)" || str == "Wire (Recipe: 3)") {
				for (int i = 0; i < vanillaItems->Nodes->Count; i++)
					if (vanillaItems->Nodes[i]->Text->ToString() == "Wire (Recipe: 1)" || vanillaItems->Nodes[i]->Text->ToString() == "Wire (Recipe: 2)" || vanillaItems->Nodes[i]->Text->ToString() == "Wire (Recipe: 3)") {
						vanillaItems->Nodes[i]->Text = "Wire (Recipe: 4)";
						break;
					}
				int id = listBox1->SelectedIndex;
				listBox1->SelectedItem = NULL;
				listBox1->Items[id] = "Wire (Recipe: 4)";
				wire_recipe = 4;
				listBox1->SetSelected(id, true);
			}
		}
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		listView1->Clear();
		System::String^ str = listBox1->SelectedItem->ToString();
		long double wt = 0;
		long double* Wt = &wt;
		//lol
		pictureBox2->Visible = false;

		if (str == "Silica (Recipe: 1)" || str == "Silica (Recipe: 2)" || str == "Silica (Recipe: 3)")
			treeView1->Nodes->Add(silica(Wt, double(numericUpDown1->Value)));
		else if (str == "Quartz Crystal (Recipe: 1)" || str == "Quartz Crystal (Recipe: 2)")
			treeView1->Nodes->Add(quartzCrystal(Wt, double(numericUpDown1->Value)));
		else if (str == "Iron Ingot (Recipe: 1)" || str == "Iron Ingot (Recipe: 2)" || str == "Iron Ingot (Recipe: 3)")
			treeView1->Nodes->Add(ironIngot(Wt, double(numericUpDown1->Value)));
		else if (str == "Copper Ingot (Recipe: 1)" || str == "Copper Ingot (Recipe: 2)" || str == "Copper Ingot (Recipe: 3)")
			treeView1->Nodes->Add(copperIngot(Wt, double(numericUpDown1->Value)));
		else if (str == "Steel Ingot (Recipe: 1)" || str == "Steel Ingot (Recipe: 2)" || str == "Steel Ingot (Recipe: 3)" || str == "Steel Ingot (Recipe: 4)")
			treeView1->Nodes->Add(steelIngot(Wt, double(numericUpDown1->Value)));
		else if (str == "Caterium Ingot (Recipe: 1)" || str == "Caterium Ingot (Recipe: 2)")
			treeView1->Nodes->Add(cateriumIngot(Wt, double(numericUpDown1->Value)));
		else if (str == "Plastic (Recipe: 1)" || str == "Plastic (Recipe: 2)" || str == "Plastic (Recipe: 3)")
			treeView1->Nodes->Add(plastic(Wt, double(numericUpDown1->Value)));
		else if (str == "Rubber (Recipe: 1)" || str == "Rubber (Recipe: 2)" || str == "Rubber (Recipe: 3)")
			treeView1->Nodes->Add(rubber(Wt, double(numericUpDown1->Value)));
		else if (str == "Concrete (Recipe: 1)" || str == "Concrete (Recipe: 2)" || str == "Concrete (Recipe: 3)" || listBox1->SelectedItem->ToString() == "Concrete (Recipe: 4)")
			treeView1->Nodes->Add(concrete(Wt, double(numericUpDown1->Value)));
		else if (str == "Aluminum Scrap (Recipe: 1)" || str == "Aluminum Scrap (Recipe: 2)")
			treeView1->Nodes->Add(aluminumScrap(Wt, double(numericUpDown1->Value)));
		else if (str == "Aluminum Ingot (Recipe: 1)" || str == "Aluminum Ingot (Recipe: 2)")
			treeView1->Nodes->Add(aluminumIngot(Wt, double(numericUpDown1->Value)));
		//==========================================================================================================================================================================
		else if (str == "Steel Beam")
			treeView1->Nodes->Add(steelBeam(Wt, double(numericUpDown1->Value)));
		else if (str == "Steel Pipe")
			treeView1->Nodes->Add(steelPipe(Wt, double(numericUpDown1->Value)));
		else if (str == "Iron Rod (Recipe: 1)" || str == "Iron Rod (Recipe: 2)")
			treeView1->Nodes->Add(ironRod(Wt, double(numericUpDown1->Value)));
		else if (str == "Iron Plate (Recipe: 1)" || str == "Iron Plate (Recipe: 2)" || str == "Iron Plate (Recipe: 3)")
			treeView1->Nodes->Add(ironPlate(Wt, double(numericUpDown1->Value)));
		else if (str == "Copper Sheet (Recipe: 1)" || str == "Copper Sheet (Recipe: 2)")
			treeView1->Nodes->Add(copperSheet(Wt, double(numericUpDown1->Value)));
		else if (str == "Alclad Aluminum Sheet")
			treeView1->Nodes->Add(alcladAluminumSheet(Wt, double(numericUpDown1->Value)));
		else if (str == "Screw (Recipe: 1)" || str == "Screw (Recipe: 2)" || str == "Screw (Recipe: 3)")
			treeView1->Nodes->Add(screw(Wt, double(numericUpDown1->Value)));
		else if (str == "Wire (Recipe: 1)" || str == "Wire (Recipe: 2)" || str == "Wire (Recipe: 3)" || str == "Wire (Recipe: 4)")
			treeView1->Nodes->Add(wire(Wt, double(numericUpDown1->Value)));
		else if (str == "Quickwire (Recipe: 1)" || str == "Quickwire (Recipe: 2)")
			treeView1->Nodes->Add(quickwire(Wt, double(numericUpDown1->Value)));
		else if (str == "Cable (Recipe: 1)" || str == "Cable (Recipe: 2)" || str == "Cable (Recipe: 3)" || str == "Cable (Recipe: 4)")
			treeView1->Nodes->Add(cable(Wt, double(numericUpDown1->Value)));
		else if (str == "Empty Canister")
			treeView1->Nodes->Add(emptyCanister(Wt, double(numericUpDown1->Value)));
		//==========================================================================================================================================================================
		else if (str == "Reinforced Iron Plate (Recipe: 1)" || str == "Reinforced Iron Plate (Recipe: 2)" || str == "Reinforced Iron Plate (Recipe: 3)" || str == "Reinforced Iron Plate (Recipe: 4)")
			treeView1->Nodes->Add(reinforcedIronPlate(Wt, double(numericUpDown1->Value)));
		else if (str == "Modular Frame (Recipe: 1)" || str == "Modular Frame (Recipe: 2)" || str == "Modular Frame (Recipe: 3)")
			treeView1->Nodes->Add(modularFrame(Wt, double(numericUpDown1->Value)));
		else if (str == "A.I. Limiter")
			treeView1->Nodes->Add(AILimiter(Wt, double(numericUpDown1->Value)));
		else if (str == "Circuit Board (Recipe: 1)" || str == "Circuit Board (Recipe: 2)" || str == "Circuit Board (Recipe: 3)" || str == "Circuit Board (Recipe: 4)")
			treeView1->Nodes->Add(circuitBoard(Wt, double(numericUpDown1->Value)));
		else if (str == "Crystal Oscillator (Recipe: 1)" || str == "Crystal Oscillator (Recipe: 2)")
			treeView1->Nodes->Add(crystalOscillator(Wt, double(numericUpDown1->Value)));
		else if (str == "Rotor (Recipe: 1)" || str == "Rotor (Recipe: 2)" || str == "Rotor (Recipe: 3)")
			treeView1->Nodes->Add(rotor(Wt, double(numericUpDown1->Value)));
		else if (str == "Stator (Recipe: 1)" || str == "Stator (Recipe: 2)")
			treeView1->Nodes->Add(stator(Wt, double(numericUpDown1->Value)));
		else if (str == "Motor (Recipe: 1)" || str == "Motor (Recipe: 2)")
			treeView1->Nodes->Add(motor(Wt, double(numericUpDown1->Value)));
		else if (str == "Encased Industrial Beam (Recipe: 1)" || str == "Encased Industrial Beam (Recipe: 2)")
			treeView1->Nodes->Add(encasedIndustrialBeam(Wt, double(numericUpDown1->Value)));
		else if (str == "Heat Sink (Recipe: 1)" || str == "Heat Sink (Recipe: 2)")
			treeView1->Nodes->Add(heatSink(Wt, double(numericUpDown1->Value)));
		else if (str == "Encased Uranium Cell (Recipe: 1)" || str == "Encased Uranium Cell (Recipe: 2)")
			treeView1->Nodes->Add(encasedUraniumCell(Wt, double(numericUpDown1->Value)));
		else if (str == "Electromagnetic Control Rod (Recipe: 1)" || str == "Electromagnetic Control Rod (Recipe: 2)")
			treeView1->Nodes->Add(electromagneticControlRod(Wt, double(numericUpDown1->Value)));
		//==========================================================================================================================================================================
		else if (str == "Beacon (Recipe: 1)" || str == "Beacon (Recipe: 2)")
			treeView1->Nodes->Add(beacon(Wt, double(numericUpDown1->Value)));
		else if (str == "High-Speed Connector (Recipe: 1)" || str == "High-Speed Connector (Recipe: 2)")
			treeView1->Nodes->Add(highSpeedConnector(Wt, double(numericUpDown1->Value)));
		else if (str == "Computer (Recipe: 1)" || str == "Computer (Recipe: 2)" || str == "Computer (Recipe: 3)")
			treeView1->Nodes->Add(computer(Wt, double(numericUpDown1->Value)));
		else if (str == "Supercomputer")
			treeView1->Nodes->Add(supercomputer(Wt, double(numericUpDown1->Value)));
		else if (str == "Heavy Modular Frame (Recipe: 1)" || str == "Heavy Modular Frame (Recipe: 2)" || str == "Heavy Modular Frame (Recipe: 3)")
			treeView1->Nodes->Add(heavyModularFrame(Wt, double(numericUpDown1->Value)));
		else if (str == "Battery")
			treeView1->Nodes->Add(battery(Wt, double(numericUpDown1->Value)));
		else if (str == "Radio Control Unit (Recipe: 1)" || str == "Radio Control Unit (Recipe: 2)")
			treeView1->Nodes->Add(radioControlUnit(Wt, double(numericUpDown1->Value)));
		else if (str == "Turbo Motor (Recipe: 1)" || str == "Turbo Motor (Recipe: 2)")
			treeView1->Nodes->Add(turboMotor(Wt, double(numericUpDown1->Value)));
		else if (str == "Nuclear Fuel Rod (Recipe: 1)" || str == "Nuclear Fuel Rod (Recipe: 2)")
			treeView1->Nodes->Add(nuclearFuelRod(Wt, double(numericUpDown1->Value)));
		//==========================================================================================================================================================================
		else if (str == "Black Powder (Recipe: 1)" || str == "Black Powder (Recipe: 2)")
			treeView1->Nodes->Add(blackPowder(Wt, double(numericUpDown1->Value)));
		else if (str == "Fabric (Recipe: 1)" || str == "Fabric (Recipe: 2)")
			treeView1->Nodes->Add(fabric(Wt, double(numericUpDown1->Value)));
		else if (str == "Gas Filter")
			treeView1->Nodes->Add(gasFilter(Wt, double(numericUpDown1->Value)));
		else if (str == "Iodine Infused Filter")
			treeView1->Nodes->Add(iodineInfusedFilter(Wt, double(numericUpDown1->Value)));
		else if (str == "Rifle Cartridge")
			treeView1->Nodes->Add(rifleCartridge(Wt, double(numericUpDown1->Value)));
		//==========================================================================================================================================================================
		else if (str == "Smart Plating (Recipe: 1)" || str == "Smart Plating (Recipe: 2)")
			treeView1->Nodes->Add(smartPlating(Wt, double(numericUpDown1->Value)));
		else if (str == "Versatile Framework (Recipe: 1)" || str == "Versatile Framework (Recipe: 2)")
			treeView1->Nodes->Add(versatileFramework(Wt, double(numericUpDown1->Value)));
		else if (str == "Automated Wiring (Recipe: 1)" || str == "Automated Wiring (Recipe: 2)")
			treeView1->Nodes->Add(automatedWiring(Wt, double(numericUpDown1->Value)));
		else if (str == "Modular Engine")
			treeView1->Nodes->Add(modularEngine(Wt, double(numericUpDown1->Value)));
		else if (str == "Adaptive Control Unit")
			treeView1->Nodes->Add(adaptiveControlUnit(Wt, double(numericUpDown1->Value)));
		//==========================================================================================================================================================================
		else
			lvlcount--;
			lvlcount++; 
		{
			long double someThing = 0;
			for (int i = 0; i < lvlcount; i++)
				someThing += Tenergy[i];
			if (someThing != 0) {
				ListViewItem^ item = gcnew ListViewItem();
				item->ImageKey = "Energy";
				item->Text = ("Energy: " + double(int(someThing * 10000) / 10000.0) + " MW");
				listView1->Items->Add(item);
			}
		}
		{
			long double someThing = 0;
			for (int i = 0; i < lvlcount; i++)
				someThing += Tsmelter[i];
			if (someThing != 0) {
				ListViewItem^ item = gcnew ListViewItem();
				if (someThing < 0) {
					Color col; col.Red;
					item->ForeColor = col;
				}
				item->ImageKey = "Smelter";
				item->Text = ("Smelter: " + double(int(someThing * 10000) / 10000.0));
				listView1->Items->Add(item);
			}
		}
		{
			long double someThing = 0;
			for (int i = 0; i < lvlcount; i++)
				someThing += Tfoundry[i];
			if (someThing != 0) {
				ListViewItem^ item = gcnew ListViewItem();
				if (someThing < 0) {
					Color col;
					item->ForeColor = col.FromArgb(255, 255, 0, 0);
				}
				item->ImageKey = "Foundry";
				item->Text = ("Foundry: " + double(int(someThing * 10000) / 10000.0));
				listView1->Items->Add(item);
			}
		}
		{
			long double someThing = 0;
			for (int i = 0; i < lvlcount; i++)
				someThing += Trefinery[i];
			if (someThing != 0) {
				ListViewItem^ item = gcnew ListViewItem();
				if (someThing < 0) {
					Color col;
					item->ForeColor = col.FromArgb(255, 255, 0, 0);
				}
				item->ImageKey = "Refinery";
				item->Text = ("Refinery: " + double(int(someThing * 10000) / 10000.0));
				listView1->Items->Add(item);
			}
		}
		{
			long double someThing = 0;
			for (int i = 0; i < lvlcount; i++)
				someThing += Tconstructor[i];
			if (someThing != 0) {
				ListViewItem^ item = gcnew ListViewItem();
				if (someThing < 0) {
					Color col;
					item->ForeColor = col.FromArgb(255, 255, 0, 0);
				}
				item->ImageKey = "Constructor";
				item->Text = ("Constructor: " + double(int(someThing * 10000) / 10000.0));
				listView1->Items->Add(item);
			}
		}
		{
			long double someThing = 0;
			for (int i = 0; i < lvlcount; i++)
				someThing += Tassembler[i];
			if (someThing != 0) {
				ListViewItem^ item = gcnew ListViewItem();
				if (someThing < 0) {
					Color col;
					item->ForeColor = col.FromArgb(255, 255, 0, 0);
				}
				item->ImageKey = "Assembler";
				item->Text = ("Assembler: " + double(int(someThing * 10000) / 10000.0));
				listView1->Items->Add(item);
			}
		}
		{
			long double someThing = 0;
			for (int i = 0; i < lvlcount; i++)
				someThing += Tmanufacturer[i];
			if (someThing != 0) {
				ListViewItem^ item = gcnew ListViewItem();
				if (someThing < 0) {
					Color col;
					item->ForeColor = col.FromArgb(255, 255, 0, 0);
				}
				item->ImageKey = "Manufacturer";
				item->Text = ("Manufacturer: " + double(int(someThing * 10000) / 10000.0));
				listView1->Items->Add(item);
			}
		}
		{
			long double someThing = 0;
			for (int i = 0; i < lvlcount; i++)
				someThing += TironOre[i];
			if (someThing != 0) {
				ListViewItem^ item = gcnew ListViewItem();
				if (someThing < 0) {
					Color col;
					item->ForeColor = col.FromArgb(255, 255, 0, 0);
				}
				item->ImageKey = "Iron Ore";
				item->Text = ("Iron Ore: " + double(int(someThing * 10000) / 10000.0));
				listView1->Items->Add(item);
			}
		}
		{
			long double someThing = 0;
			for (int i = 0; i < lvlcount; i++)
				someThing += TcopperOre[i];
			if (someThing != 0) {
				ListViewItem^ item = gcnew ListViewItem();
				if (someThing < 0) {
					Color col;
					item->ForeColor = col.FromArgb(255, 255, 0, 0);
				}
				item->ImageKey = "Copper Ore";
				item->Text = ("Copper Ore: " + double(int(someThing * 10000) / 10000.0));
				listView1->Items->Add(item);
			}
		}
		{
			long double someThing = 0;
			for (int i = 0; i < lvlcount; i++)
				someThing += Tcoal[i];
			if (someThing != 0) {
				ListViewItem^ item = gcnew ListViewItem();
				if (someThing < 0) {
					Color col;
					item->ForeColor = col.FromArgb(255, 255, 0, 0);
				}
				item->ImageKey = "Coal";
				item->Text = ("Coal: " + double(int(someThing * 10000) / 10000.0));
				listView1->Items->Add(item);
			}
		}
		{
			long double someThing = 0;
			for (int i = 0; i < lvlcount; i++)
				someThing += Tlimestone[i];
			if (someThing != 0) {
				ListViewItem^ item = gcnew ListViewItem();
				if (someThing < 0) {
					Color col;
					item->ForeColor = col.FromArgb(255, 255, 0, 0);
				}
				item->ImageKey = "Limestone";
				item->Text = ("Limestone: " + double(int(someThing * 10000) / 10000.0));
				listView1->Items->Add(item);
			}
		}
		{
			long double someThing = 0;
			for (int i = 0; i < lvlcount; i++)
				someThing += TcateriumOre[i];
			if (someThing != 0) {
				ListViewItem^ item = gcnew ListViewItem();
				if (someThing < 0) {
					Color col;
					item->ForeColor = col.FromArgb(255, 255, 0, 0);
				}
				item->ImageKey = "Caterium Ore";
				item->Text = ("Caterium Ore: " + double(int(someThing * 10000) / 10000.0));
				listView1->Items->Add(item);
			}
		}
		{
			long double someThing = 0;
			for (int i = 0; i < lvlcount; i++)
				someThing += Tplastic[i];
			if (someThing != 0) {
				ListViewItem^ item = gcnew ListViewItem();
				if (someThing < 0) {
					Color col;
					item->ForeColor = col.FromArgb(255, 255, 0, 0);
				}
				item->ImageKey = "Plastic";
				item->Text = ("Plastic: " + double(int(someThing * 10000) / 10000.0));
				listView1->Items->Add(item);
			}
		}
		{
			long double someThing = 0;
			for (int i = 0; i < lvlcount; i++)
				someThing += Trubber[i];
			if (someThing != 0) {
				ListViewItem^ item = gcnew ListViewItem();
				if (someThing < 0) {
					Color col;
					item->ForeColor = col.FromArgb(255, 255, 0, 0);
				}
				item->ImageKey = "Rubber";
				item->Text = ("Rubber: " + double(int(someThing * 10000) / 10000.0));
				listView1->Items->Add(item);
			}
		}
		{
			long double someThing = 0;
			for (int i = 0; i < lvlcount; i++)
				someThing += TpolymerResin[i];
			if (someThing != 0) {
				ListViewItem^ item = gcnew ListViewItem();
				if (someThing < 0) {
					Color col;
					item->ForeColor = col.FromArgb(255, 255, 0, 0);
				}
				item->ImageKey = "Polymer Resin";
				item->Text = ("Polymer Resin: " + double(int(someThing * 10000) / 10000.0));
				listView1->Items->Add(item);
			}
		}
		{
			long double someThing = 0;
			for (int i = 0; i < lvlcount; i++)
				someThing += TrawQuartz[i];
			if (someThing != 0) {
				ListViewItem^ item = gcnew ListViewItem();
				if (someThing < 0) {
					Color col;
					item->ForeColor = col.FromArgb(255, 255, 0, 0);
				}
				item->ImageKey = "Raw Quartz";
				item->Text = ("Raw Quartz: " + double(int(someThing * 10000) / 10000.0));
				listView1->Items->Add(item);
			}
		}
		{
			long double someThing = 0;
			for (int i = 0; i < lvlcount; i++)
				someThing += Tsulfur[i];
			if (someThing != 0) {
				ListViewItem^ item = gcnew ListViewItem();
				if (someThing < 0) {
					Color col;
					item->ForeColor = col.FromArgb(255, 255, 0, 0);
				}
				item->ImageKey = "Sulfur";
				item->Text = ("Sulfur: " + double(int(someThing * 10000) / 10000.0));
				listView1->Items->Add(item);
			}
		}
		{
			long double someThing = 0;
			for (int i = 0; i < lvlcount; i++)
				someThing += Tbauxite[i];
			if (someThing != 0) {
				ListViewItem^ item = gcnew ListViewItem();
				if (someThing < 0) {
					Color col;
					item->ForeColor = col.FromArgb(255, 255, 0, 0);
				}
				item->ImageKey = "Bauxite";
				item->Text = ("Bauxite: " + double(int(someThing * 10000) / 10000.0));
				listView1->Items->Add(item);
			}
		}
		{
			long double someThing = 0;
			for (int i = 0; i < lvlcount; i++)
				someThing += Turanium[i];
			if (someThing != 0) {
				ListViewItem^ item = gcnew ListViewItem();
				if (someThing < 0) {
					Color col;
					item->ForeColor = col.FromArgb(255, 255, 0, 0);
				}
				item->ImageKey = "Uranium";
				item->Text = ("Uranium: " + double(int(someThing * 10000) / 10000.0));
				listView1->Items->Add(item);
			}
		}
		{
			long double someThing = 0;
			for (int i = 0; i < lvlcount; i++)
				someThing += Tmycelia[i];
			if (someThing != 0) {
				ListViewItem^ item = gcnew ListViewItem();
				if (someThing < 0) {
					Color col;
					item->ForeColor = col.FromArgb(255, 255, 0, 0);
				}
				item->ImageKey = "Mycelia";
				item->Text = ("Mycelia: " + double(int(someThing * 10000) / 10000.0));
				listView1->Items->Add(item);
			}
		}
		{
			long double someThing = 0;
			for (int i = 0; i < lvlcount; i++)
				someThing += Tbiomass[i];
			if (someThing != 0) {
				ListViewItem^ item = gcnew ListViewItem();
				if (someThing < 0) {
					Color col;
					item->ForeColor = col.FromArgb(255, 255, 0, 0);
				}
				item->ImageKey = "Biomass";
				item->Text = ("Biomass: " + double(int(someThing * 10000) / 10000.0));
				listView1->Items->Add(item);
			}
		}
		{
			long double someThing = 0;
			for (int i = 0; i < lvlcount; i++)
				someThing += Twater[i];
			if (someThing != 0) {
				ListViewItem^ item = gcnew ListViewItem();
				if (someThing < 0) {
					Color col;
					item->ForeColor = col.FromArgb(255, 255, 0, 0);
				}
				item->ImageKey = "Water";
				item->Text = ("Water: " + double(int(someThing * 10000) / 10000.0));
				listView1->Items->Add(item);
			}
		}
		{
			long double someThing = 0;
			for (int i = 0; i < lvlcount; i++)
				someThing += TcrudeOil[i];
			if (someThing != 0) {
				ListViewItem^ item = gcnew ListViewItem();
				if (someThing < 0) {
					Color col;
					item->ForeColor = col.FromArgb(255, 255, 0, 0);
				}
				item->ImageKey = "Crude Oil";
				item->Text = ("Crude Oil: " + double(int(someThing * 10000) / 10000.0));
				listView1->Items->Add(item);
			}
		}
		{
			long double someThing = 0;
			for (int i = 0; i < lvlcount; i++)
				someThing += TheavyOilResidue[i];
			if (someThing != 0) {
				ListViewItem^ item = gcnew ListViewItem();
				if (someThing < 0) {
					Color col;
					item->ForeColor = col.FromArgb(255,255,0,0);
				}
				item->ImageKey = "Heavy Oil Residue";
				item->Text = ("Heavy Oil Residue: " + double(int(someThing * 10000) / 10000.0));
				listView1->Items->Add(item);
			}
		}
		{
			long double someThing = 0;
			for (int i = 0; i < lvlcount; i++)
				someThing += Tfuel[i];
			if (someThing != 0) {
				ListViewItem^ item = gcnew ListViewItem();
				if (someThing < 0) {
					Color col;
					item->ForeColor = col.FromArgb(255, 255, 0, 0);
				}
				item->ImageKey = "Fuel";
				item->Text = ("Fuel: " + double(int(someThing * 10000) / 10000.0));
				listView1->Items->Add(item);
			}
		}
		{
			long double someThing = 0;
			for (int i = 0; i < lvlcount; i++)
				someThing += TaluminaSolution[i];
			if (someThing != 0) {
				ListViewItem^ item = gcnew ListViewItem();
				if (someThing < 0) {
					Color col;
					item->ForeColor = col.FromArgb(255, 255, 0, 0);
				}
				item->ImageKey = "Alumina Solution";
				item->Text = ("Alumina Solution: " + double(int(someThing * 10000) / 10000.0));
				listView1->Items->Add(item);
			}
		}
		{
			long double someThing = 0;
			for (int i = 0; i < lvlcount; i++)
				someThing += TsulfurAcid[i];
			if (someThing != 0) {
				ListViewItem^ item = gcnew ListViewItem();
				if (someThing < 0) {
					Color col;
					item->ForeColor = col.FromArgb(255, 255, 0, 0);
				}
				item->ImageKey = "Sulfur Acid";
				item->Text = ("Sulfur Acid: " + double(int(someThing*10000)/10000.0));
				listView1->Items->Add(item);
			}
		}
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		//lol
		pictureBox2->Visible = false;
		if (treeView1->SelectedNode) {
			short id = treeView1->SelectedNode->Index;
			for (int i = id; i < 999; i++)
				TironOre[i] = TironOre[i + 1];
			TironOre[999] = 0;
			for (int i = id; i < 999; i++)
				TcopperOre[i] = TcopperOre[i + 1];
			TcopperOre[999] = 0;
			for (int i = id; i < 999; i++)
				Tcoal[i] = Tcoal[i + 1];
			Tcoal[999] = 0;
			for (int i = id; i < 999; i++)
				Tlimestone[i] = Tlimestone[i + 1];
			Tlimestone[999] = 0;
			for (int i = id; i < 999; i++)
				TcateriumOre[i] = TcateriumOre[i + 1];
			TcateriumOre[999] = 0;
			for (int i = id; i < 999; i++)
				TrawQuartz[i] = TrawQuartz[i + 1];
			TrawQuartz[999] = 0;
			for (int i = id; i < 999; i++)
				Tplastic[i] = Tplastic[i + 1];
			Tplastic[999] = 0;
			for (int i = id; i < 999; i++)
				Trubber[i] = Trubber[i + 1];
			Trubber[999] = 0;
			for (int i = id; i < 999; i++)
				TpolymerResin[i] = TpolymerResin[i + 1];
			TpolymerResin[999] = 0;
			for (int i = id; i < 999; i++)
				Tsulfur[i] = Tsulfur[i + 1];
			Tsulfur[999] = 0;
			for (int i = id; i < 999; i++)
				Tbauxite[i] = Tbauxite[i + 1];
			Tbauxite[999] = 0;
			for (int i = id; i < 999; i++)
				Turanium[i] = Turanium[i + 1];
			Turanium[999] = 0;
			for (int i = id; i < 999; i++)
				Tmycelia[i] = Tmycelia[i + 1];
			Tmycelia[999] = 0;
			for (int i = id; i < 999; i++)
				Tbiomass[i] = Tbiomass[i + 1];
			Tbiomass[999] = 0;
			for (int i = id; i < 999; i++)
				Twater[i] = Twater[i + 1];
			Twater[999] = 0;
			for (int i = id; i < 999; i++)
				TcrudeOil[i] = TcrudeOil[i + 1];
			TcrudeOil[999] = 0;
			for (int i = id; i < 999; i++)
				Tfuel[i] = Tfuel[i + 1];
			Tfuel[999] = 0;
			for (int i = id; i < 999; i++)
				TaluminaSolution[i] = TaluminaSolution[i + 1];
			TaluminaSolution[999] = 0;
			for (int i = id; i < 999; i++)
				TheavyOilResidue[i] = TheavyOilResidue[i + 1];
			TheavyOilResidue[999] = 0;
			for (int i = id; i < 999; i++)
				Tenergy[i] = Tenergy[i + 1];
			Tenergy[999] = 0;
			for (int i = id; i < 999; i++)
				Tsmelter[i] = Tsmelter[i + 1];
			Tsmelter[999] = 0;
			for (int i = id; i < 999; i++)
				Tfoundry[i] = Tfoundry[i + 1];
			Tfoundry[999] = 0;
			for (int i = id; i < 999; i++)
				Trefinery[i] = Trefinery[i + 1];
			Trefinery[999] = 0;
			for (int i = id; i < 999; i++)
				Tconstructor[i] = Tconstructor[i + 1];
			Tconstructor[999] = 0;
			for (int i = id; i < 999; i++)
				Tassembler[i] = Tassembler[i + 1];
			Tassembler[999] = 0;
			for (int i = id; i < 999; i++)
				Tmanufacturer[i] = Tmanufacturer[i + 1];
			Tmanufacturer[999] = 0;

			lvlcount--;
			treeView1->SelectedNode->Remove();

			listView1->Clear();
			{
				long double someThing = 0;
				for (int i = 0; i < lvlcount; i++)
					someThing += Tenergy[i];
				if (someThing != 0) {
					ListViewItem^ item = gcnew ListViewItem();
					item->ImageKey = "Energy";
					item->Text = ("Energy: " + double(int(someThing * 10000) / 10000.0) + " MW");
					listView1->Items->Add(item);
				}
			}
			{
				long double someThing = 0;
				for (int i = 0; i < lvlcount; i++)
					someThing += Tsmelter[i];
				if (someThing != 0) {
					ListViewItem^ item = gcnew ListViewItem();
					if (someThing < 0) {
						Color col; col.Red;
						item->ForeColor = col;
					}
					item->ImageKey = "Smelter";
					item->Text = ("Smelter: " + double(int(someThing * 10000) / 10000.0));
					listView1->Items->Add(item);
				}
			}
			{
				long double someThing = 0;
				for (int i = 0; i < lvlcount; i++)
					someThing += Tfoundry[i];
				if (someThing != 0) {
					ListViewItem^ item = gcnew ListViewItem();
					if (someThing < 0) {
						Color col;
						item->ForeColor = col.FromArgb(255, 255, 0, 0);
					}
					item->ImageKey = "Foundry";
					item->Text = ("Foundry: " + double(int(someThing * 10000) / 10000.0));
					listView1->Items->Add(item);
				}
			}
			{
				long double someThing = 0;
				for (int i = 0; i < lvlcount; i++)
					someThing += Trefinery[i];
				if (someThing != 0) {
					ListViewItem^ item = gcnew ListViewItem();
					if (someThing < 0) {
						Color col;
						item->ForeColor = col.FromArgb(255, 255, 0, 0);
					}
					item->ImageKey = "Refinery";
					item->Text = ("Refinery: " + double(int(someThing * 10000) / 10000.0));
					listView1->Items->Add(item);
				}
			}
			{
				long double someThing = 0;
				for (int i = 0; i < lvlcount; i++)
					someThing += Tconstructor[i];
				if (someThing != 0) {
					ListViewItem^ item = gcnew ListViewItem();
					if (someThing < 0) {
						Color col;
						item->ForeColor = col.FromArgb(255, 255, 0, 0);
					}
					item->ImageKey = "Constructor";
					item->Text = ("Constructor: " + double(int(someThing * 10000) / 10000.0));
					listView1->Items->Add(item);
				}
			}
			{
				long double someThing = 0;
				for (int i = 0; i < lvlcount; i++)
					someThing += Tassembler[i];
				if (someThing != 0) {
					ListViewItem^ item = gcnew ListViewItem();
					if (someThing < 0) {
						Color col;
						item->ForeColor = col.FromArgb(255, 255, 0, 0);
					}
					item->ImageKey = "Assembler";
					item->Text = ("Assembler: " + double(int(someThing * 10000) / 10000.0));
					listView1->Items->Add(item);
				}
			}
			{
				long double someThing = 0;
				for (int i = 0; i < lvlcount; i++)
					someThing += Tmanufacturer[i];
				if (someThing != 0) {
					ListViewItem^ item = gcnew ListViewItem();
					if (someThing < 0) {
						Color col;
						item->ForeColor = col.FromArgb(255, 255, 0, 0);
					}
					item->ImageKey = "Manufacturer";
					item->Text = ("Manufacturer: " + double(int(someThing * 10000) / 10000.0));
					listView1->Items->Add(item);
				}
			}
			{
				long double someThing = 0;
				for (int i = 0; i < lvlcount; i++)
					someThing += TironOre[i];
				if (someThing != 0) {
					ListViewItem^ item = gcnew ListViewItem();
					if (someThing < 0) {
						Color col;
						item->ForeColor = col.FromArgb(255, 255, 0, 0);
					}
					item->ImageKey = "Iron Ore";
					item->Text = ("Iron Ore: " + double(int(someThing * 10000) / 10000.0));
					listView1->Items->Add(item);
				}
			}
			{
				long double someThing = 0;
				for (int i = 0; i < lvlcount; i++)
					someThing += TcopperOre[i];
				if (someThing != 0) {
					ListViewItem^ item = gcnew ListViewItem();
					if (someThing < 0) {
						Color col;
						item->ForeColor = col.FromArgb(255, 255, 0, 0);
					}
					item->ImageKey = "Copper Ore";
					item->Text = ("Copper Ore: " + double(int(someThing * 10000) / 10000.0));
					listView1->Items->Add(item);
				}
			}
			{
				long double someThing = 0;
				for (int i = 0; i < lvlcount; i++)
					someThing += Tcoal[i];
				if (someThing != 0) {
					ListViewItem^ item = gcnew ListViewItem();
					if (someThing < 0) {
						Color col;
						item->ForeColor = col.FromArgb(255, 255, 0, 0);
					}
					item->ImageKey = "Coal";
					item->Text = ("Coal: " + double(int(someThing * 10000) / 10000.0));
					listView1->Items->Add(item);
				}
			}
			{
				long double someThing = 0;
				for (int i = 0; i < lvlcount; i++)
					someThing += Tlimestone[i];
				if (someThing != 0) {
					ListViewItem^ item = gcnew ListViewItem();
					if (someThing < 0) {
						Color col;
						item->ForeColor = col.FromArgb(255, 255, 0, 0);
					}
					item->ImageKey = "Limestone";
					item->Text = ("Limestone: " + double(int(someThing * 10000) / 10000.0));
					listView1->Items->Add(item);
				}
			}
			{
				long double someThing = 0;
				for (int i = 0; i < lvlcount; i++)
					someThing += TcateriumOre[i];
				if (someThing != 0) {
					ListViewItem^ item = gcnew ListViewItem();
					if (someThing < 0) {
						Color col;
						item->ForeColor = col.FromArgb(255, 255, 0, 0);
					}
					item->ImageKey = "Caterium Ore";
					item->Text = ("Caterium Ore: " + double(int(someThing * 10000) / 10000.0));
					listView1->Items->Add(item);
				}
			}
			{
				long double someThing = 0;
				for (int i = 0; i < lvlcount; i++)
					someThing += Tplastic[i];
				if (someThing != 0) {
					ListViewItem^ item = gcnew ListViewItem();
					if (someThing < 0) {
						Color col;
						item->ForeColor = col.FromArgb(255, 255, 0, 0);
					}
					item->ImageKey = "Plastic";
					item->Text = ("Plastic: " + double(int(someThing * 10000) / 10000.0));
					listView1->Items->Add(item);
				}
			}
			{
				long double someThing = 0;
				for (int i = 0; i < lvlcount; i++)
					someThing += Trubber[i];
				if (someThing != 0) {
					ListViewItem^ item = gcnew ListViewItem();
					if (someThing < 0) {
						Color col;
						item->ForeColor = col.FromArgb(255, 255, 0, 0);
					}
					item->ImageKey = "Rubber";
					item->Text = ("Rubber: " + double(int(someThing * 10000) / 10000.0));
					listView1->Items->Add(item);
				}
			}
			{
				long double someThing = 0;
				for (int i = 0; i < lvlcount; i++)
					someThing += TpolymerResin[i];
				if (someThing != 0) {
					ListViewItem^ item = gcnew ListViewItem();
					if (someThing < 0) {
						Color col;
						item->ForeColor = col.FromArgb(255, 255, 0, 0);
					}
					item->ImageKey = "Polymer Resin";
					item->Text = ("Polymer Resin: " + double(int(someThing * 10000) / 10000.0));
					listView1->Items->Add(item);
				}
			}
			{
				long double someThing = 0;
				for (int i = 0; i < lvlcount; i++)
					someThing += TrawQuartz[i];
				if (someThing != 0) {
					ListViewItem^ item = gcnew ListViewItem();
					if (someThing < 0) {
						Color col;
						item->ForeColor = col.FromArgb(255, 255, 0, 0);
					}
					item->ImageKey = "Raw Quartz";
					item->Text = ("Raw Quartz: " + double(int(someThing * 10000) / 10000.0));
					listView1->Items->Add(item);
				}
			}
			{
				long double someThing = 0;
				for (int i = 0; i < lvlcount; i++)
					someThing += Tsulfur[i];
				if (someThing != 0) {
					ListViewItem^ item = gcnew ListViewItem();
					if (someThing < 0) {
						Color col;
						item->ForeColor = col.FromArgb(255, 255, 0, 0);
					}
					item->ImageKey = "Sulfur";
					item->Text = ("Sulfur: " + double(int(someThing * 10000) / 10000.0));
					listView1->Items->Add(item);
				}
			}
			{
				long double someThing = 0;
				for (int i = 0; i < lvlcount; i++)
					someThing += Tbauxite[i];
				if (someThing != 0) {
					ListViewItem^ item = gcnew ListViewItem();
					if (someThing < 0) {
						Color col;
						item->ForeColor = col.FromArgb(255, 255, 0, 0);
					}
					item->ImageKey = "Bauxite";
					item->Text = ("Bauxite: " + double(int(someThing * 10000) / 10000.0));
					listView1->Items->Add(item);
				}
			}
			{
				long double someThing = 0;
				for (int i = 0; i < lvlcount; i++)
					someThing += Turanium[i];
				if (someThing != 0) {
					ListViewItem^ item = gcnew ListViewItem();
					if (someThing < 0) {
						Color col;
						item->ForeColor = col.FromArgb(255, 255, 0, 0);
					}
					item->ImageKey = "Uranium";
					item->Text = ("Uranium: " + double(int(someThing * 10000) / 10000.0));
					listView1->Items->Add(item);
				}
			}
			{
				long double someThing = 0;
				for (int i = 0; i < lvlcount; i++)
					someThing += Tmycelia[i];
				if (someThing != 0) {
					ListViewItem^ item = gcnew ListViewItem();
					if (someThing < 0) {
						Color col;
						item->ForeColor = col.FromArgb(255, 255, 0, 0);
					}
					item->ImageKey = "Mycelia";
					item->Text = ("Mycelia: " + double(int(someThing * 10000) / 10000.0));
					listView1->Items->Add(item);
				}
			}
			{
				long double someThing = 0;
				for (int i = 0; i < lvlcount; i++)
					someThing += Tbiomass[i];
				if (someThing != 0) {
					ListViewItem^ item = gcnew ListViewItem();
					if (someThing < 0) {
						Color col;
						item->ForeColor = col.FromArgb(255, 255, 0, 0);
					}
					item->ImageKey = "Biomass";
					item->Text = ("Biomass: " + double(int(someThing * 10000) / 10000.0));
					listView1->Items->Add(item);
				}
			}
			{
				long double someThing = 0;
				for (int i = 0; i < lvlcount; i++)
					someThing += Twater[i];
				if (someThing != 0) {
					ListViewItem^ item = gcnew ListViewItem();
					if (someThing < 0) {
						Color col;
						item->ForeColor = col.FromArgb(255, 255, 0, 0);
					}
					item->ImageKey = "Water";
					item->Text = ("Water: " + double(int(someThing * 10000) / 10000.0));
					listView1->Items->Add(item);
				}
			}
			{
				long double someThing = 0;
				for (int i = 0; i < lvlcount; i++)
					someThing += TcrudeOil[i];
				if (someThing != 0) {
					ListViewItem^ item = gcnew ListViewItem();
					if (someThing < 0) {
						Color col;
						item->ForeColor = col.FromArgb(255, 255, 0, 0);
					}
					item->ImageKey = "Crude Oil";
					item->Text = ("Crude Oil: " + double(int(someThing * 10000) / 10000.0));
					listView1->Items->Add(item);
				}
			}
			{
				long double someThing = 0;
				for (int i = 0; i < lvlcount; i++)
					someThing += TheavyOilResidue[i];
				if (someThing != 0) {
					ListViewItem^ item = gcnew ListViewItem();
					if (someThing < 0) {
						Color col;
						item->ForeColor = col.FromArgb(255, 255, 0, 0);
					}
					item->ImageKey = "Heavy Oil Residue";
					item->Text = ("Heavy Oil Residue: " + double(int(someThing * 10000) / 10000.0));
					listView1->Items->Add(item);
				}
			}
			{
				long double someThing = 0;
				for (int i = 0; i < lvlcount; i++)
					someThing += Tfuel[i];
				if (someThing != 0) {
					ListViewItem^ item = gcnew ListViewItem();
					if (someThing < 0) {
						Color col;
						item->ForeColor = col.FromArgb(255, 255, 0, 0);
					}
					item->ImageKey = "Fuel";
					item->Text = ("Fuel: " + double(int(someThing * 10000) / 10000.0));
					listView1->Items->Add(item);
				}
			}
			{
				long double someThing = 0;
				for (int i = 0; i < lvlcount; i++)
					someThing += TaluminaSolution[i];
				if (someThing != 0) {
					ListViewItem^ item = gcnew ListViewItem();
					if (someThing < 0) {
						Color col;
						item->ForeColor = col.FromArgb(255, 255, 0, 0);
					}
					item->ImageKey = "Alumina Solution";
					item->Text = ("Alumina Solution: " + double(int(someThing * 10000) / 10000.0));
					listView1->Items->Add(item);
				}
			}
			{
				long double someThing = 0;
				for (int i = 0; i < lvlcount; i++)
					someThing += TsulfurAcid[i];
				if (someThing != 0) {
					ListViewItem^ item = gcnew ListViewItem();
					if (someThing < 0) {
						Color col;
						item->ForeColor = col.FromArgb(255, 255, 0, 0);
					}
					item->ImageKey = "Sulfur Acid";
					item->Text = ("Sulfur Acid: " + double(int(someThing * 10000) / 10000.0));
					listView1->Items->Add(item);
				}
			}
		}
		if (treeView1->GetNodeCount(true) == 0)
			button2->Enabled = false;
	}
	private: System::Void treeView1_AfterSelect(System::Object^ sender, System::Windows::Forms::TreeViewEventArgs^ e) {
		for (int i = 0; i < treeView1->SelectedNode->Level; i++)
			treeView1->SelectedNode = treeView1->SelectedNode->Parent;
		button2->Enabled = true;
		pictureBox2->Visible = false;
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		if (!listBox1->SelectedItem) {
			button1->Enabled = false;
			button3->Enabled = false;
		}
		System::String^ str = textBox1->Text->ToString();
		listBox1->Items->Clear();
		if (!listBox1->SelectedItem) {
			radioButton1->Visible = false; label5->Text = "";
			radioButton2->Visible = false; label6->Text = "";
			radioButton3->Visible = false; label7->Text = "";
			radioButton4->Visible = false; label8->Text = "";
		}
		if (str != "") {
			for (int i = 0; i < vanillaItems->Nodes->Count; i++) {
				int len = vanillaItems->Nodes[i]->Text->Length;
				int anLen = textBox1->Text->Length;
				bool right = false;
				for (int k = 0; k < len - anLen+1; k++) {
					bool anRight = true;
					for (int j = 0; j < anLen; j++)
						if (str[j] != (vanillaItems->Nodes[i]->Text->ToString())[j+k] && str[j] != ((vanillaItems->Nodes[i]->Text->ToString())[j + k]+32) && str[j] != ((vanillaItems->Nodes[i]->Text->ToString())[j + k] - 32)) {
							anRight = false;
							break;
						}
					if (anRight) {
						right = true;
						break;
					}
				}
				if (right)
					listBox1->Items->Add(vanillaItems->Nodes[i]->Text->ToString());
			}
			if (checkedListBox1->CheckedIndices->Contains(0)) // Refined Power
				for (int i = 0; i < modItems->Nodes[0]->Nodes->Count; i++) {
					int len = modItems->Nodes[0]->Nodes[i]->Text->Length;
					int anLen = textBox1->Text->Length;
					bool right = false;
					for (int k = 0; k < len - anLen + 1; k++) {
						bool anRight = true;
						for (int j = 0; j < anLen; j++)
							if (str[j] != (modItems->Nodes[0]->Nodes[i]->Text->ToString())[j + k] && str[j] != ((modItems->Nodes[0]->Nodes[i]->Text->ToString())[j + k] + 32) && str[j] != ((modItems->Nodes[0]->Nodes[i]->Text->ToString())[j + k] - 32)) {
								anRight = false;
								break;
							}
						if (anRight) {
							right = true;
							break;
						}
					}
					if (right)
						listBox1->Items->Add(modItems->Nodes[0]->Nodes[i]->Text->ToString());
				}
		}
		else {
			for (int i = 0; i < vanillaItems->Nodes->Count; i++)
				listBox1->Items->Add(vanillaItems->Nodes[i]->Text->ToString());
			if (checkedListBox1->CheckedIndices->Contains(0)) // Refined Power
				for (int i = 0; i < modItems->Nodes[0]->Nodes->Count; i++)
					listBox1->Items->Add(modItems->Nodes[0]->Nodes[i]->Text->ToString());

		}
	}
	private: System::Void label10_Click(System::Object^ sender, System::EventArgs^ e) {
		if (modList) {
			modList = false;
			radioButton1->Enabled = true;
			radioButton2->Enabled = true;
			radioButton3->Enabled = true;
			radioButton4->Enabled = true;
		}
		else {
			modList = true;
			radioButton1->Enabled = false;
			radioButton2->Enabled = false;
			radioButton3->Enabled = false;
			radioButton4->Enabled = false;
		}
		checkedListBox1->Visible = modList;
	}
	private: System::Void checkedListBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (checkBox1->Checked) {
			reverseItemList->Visible = true;
			button3->Visible = true;
			button4->Visible = true;
			button1->Width = 157;
			button2->Width = 157;
		}
		else {
			reverseItemList->Visible = false;
			button3->Visible = false;
			button4->Visible = false;
			revItemView = false;
			reverseItemView->Visible = revItemView;
			button1->Width = 251;
			button2->Width = 251;
		}
	}
	private: System::Void reverseItemList_Click(System::Object^ sender, System::EventArgs^ e) {
		if (revItemView) {
			revItemView = false;
		}
		else {
			revItemView = true;
		}
		reverseItemView->Visible = revItemView;
	}
	private: System::Void label11_Click(System::Object^ sender, System::EventArgs^ e) {
		if (pictureBox2->Visible)
			pictureBox2->Visible = false;
		else
			pictureBox2->Visible = true;
	}
	private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {
		pictureBox2->Visible = false;
	}
	private: System::Void vScrollBar1_Scroll(System::Object^ sender, System::Windows::Forms::ScrollEventArgs^ e) {
		label12->Text = vScrollBar1->Value.ToString();
	}
	private: System::Void checkedListBox1_SelectedIndexChanged_1(System::Object^ sender, System::EventArgs^ e) {
		if (button_changing) {
			button_changing = false;
			if (checkedListBox1->GetItemCheckState(checkedListBox1->SelectedIndex) == System::Windows::Forms::CheckState::Unchecked)
				checkedListBox1->SetItemCheckState(checkedListBox1->SelectedIndex, System::Windows::Forms::CheckState::Checked);
			else
				checkedListBox1->SetItemCheckState(checkedListBox1->SelectedIndex, System::Windows::Forms::CheckState::Unchecked);
			label10->Text = ("Mods Installed: " + checkedListBox1->CheckedItems->Count.ToString());
			int count = checkedListBox1->Items->Count;
			if (count <= 15)
				checkedListBox1->Height = (15 * count);
			checkedListBox1->Items->Insert((checkedListBox1->SelectedIndex), "lol");
			checkedListBox1->SelectedItem = "lol";
			checkedListBox1->Items->Remove("lol");
			button_changing = true;
			textBox1->Text = "";
		}
	}
private: System::Void refinedPower_AfterSelect(System::Object^ sender, System::Windows::Forms::TreeViewEventArgs^ e) {
}
};
}
