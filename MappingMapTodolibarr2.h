////////////////////////////////////////////////////////////////////////
//
// MappingMapTodolibarr2.h
//
// This file was generated by MapForce 2023r2.
//
// YOU SHOULD NOT MODIFY THIS FILE, BECAUSE IT WILL BE
// OVERWRITTEN WHEN YOU RE-RUN CODE GENERATION.
//
// Refer to the MapForce Documentation for further details.
// http://www.altova.com/mapforce
//
////////////////////////////////////////////////////////////////////////

#ifndef MappingMapTodolibarr2_H_INCLUDED
#define MappingMapTodolibarr2_H_INCLUDED

#pragma once

#include "../Altova/AltovaMapforce.h"

#include "../AltovaXML/Node.h"
#include "../AltovaXML/MFNodeAdapters_DOM.h"
#include "../AltovaXML/InternalXML.h"
#include "../AltovaDB/AltovaDB.h"


class MappingMapTodolibarr2 //: public altova::CTraceProvider
{
	class main : public altova::mapforce::Enumerable
	{
	public:
		altova::db::Catalog* var1_SEEmed_0895452f_b7c1_4c00_a316_c6a6d0ea4bf4_Instance;
		altova::db::Catalog* var2_dolibarr2_Instance;
		altova::db::Catalog* var3_dolibarr2_Instance;
	
		main(altova::db::Catalog* a_var1_SEEmed_0895452f_b7c1_4c00_a316_c6a6d0ea4bf4_Instance, altova::db::Catalog* a_var2_dolibarr2_Instance, altova::db::Catalog* a_var3_dolibarr2_Instance) : altova::mapforce::Enumerable(), var1_SEEmed_0895452f_b7c1_4c00_a316_c6a6d0ea4bf4_Instance(a_var1_SEEmed_0895452f_b7c1_4c00_a316_c6a6d0ea4bf4_Instance), var2_dolibarr2_Instance(a_var2_dolibarr2_Instance), var3_dolibarr2_Instance(a_var3_dolibarr2_Instance) {}

		~main()	
		{
		}

		altova::mapforce::Enumerator* GetEnumerator() {return new Enum(this);}
		
		class Enum : public altova::mapforce::Enumerator
		{
		public:
			int state;
			altova::mapforce::IMFNode current;
			main* closure;
			altova::db::Statement var4_NewStatement;
			altova::db::Statement var5_NewStatement;
			altova::db::Statement var6_NewStatement;

			Enum(main* cls) : Enumerator(cls), state(1), closure(cls) 
			{
			}

			~Enum() 
			{

			}
			
			altova::mapforce::IMFNode GetCurrent() {return current;}
			
			bool MoveNext();
		};
	};
	class seq1_NewRecord : public altova::mapforce::Enumerable
	{
	public:
		altova::db::Catalog* var1_dolibarr2_Instance;
		altova::db::Catalog* var2_SEEmed_0895452f_b7c1_4c00_a316_c6a6d0ea4bf4_Instance;
		altova::db::Catalog* var3_dolibarr2_Instance;
	
		seq1_NewRecord(altova::db::Catalog* a_var1_dolibarr2_Instance, altova::db::Catalog* a_var2_SEEmed_0895452f_b7c1_4c00_a316_c6a6d0ea4bf4_Instance, altova::db::Catalog* a_var3_dolibarr2_Instance) : altova::mapforce::Enumerable(), var1_dolibarr2_Instance(a_var1_dolibarr2_Instance), var2_SEEmed_0895452f_b7c1_4c00_a316_c6a6d0ea4bf4_Instance(a_var2_SEEmed_0895452f_b7c1_4c00_a316_c6a6d0ea4bf4_Instance), var3_dolibarr2_Instance(a_var3_dolibarr2_Instance) {}

		~seq1_NewRecord()	
		{
		}

		altova::mapforce::Enumerator* GetEnumerator() {return new Enum(this);}
		
		class Enum : public altova::mapforce::Enumerator
		{
		public:
			int state;
			altova::mapforce::IMFNode current;
			seq1_NewRecord* closure;
			altova::db::record_type var4_NewRecord;

			Enum(seq1_NewRecord* cls) : Enumerator(cls), state(1), closure(cls) 
			{
			}

			~Enum() 
			{

			}
			
			altova::mapforce::IMFNode GetCurrent() {return current;}
			
			bool MoveNext();
		};
	};
	class seq2_map : public altova::mapforce::Enumerable
	{
	public:
		altova::db::Catalog* var1_dolibarr2_Instance;
		altova::db::Catalog* var2_SEEmed_0895452f_b7c1_4c00_a316_c6a6d0ea4bf4_Instance;
		altova::db::Catalog* var3_dolibarr2_Instance;
	
		seq2_map(altova::db::Catalog* a_var1_dolibarr2_Instance, altova::db::Catalog* a_var2_SEEmed_0895452f_b7c1_4c00_a316_c6a6d0ea4bf4_Instance, altova::db::Catalog* a_var3_dolibarr2_Instance) : altova::mapforce::Enumerable(), var1_dolibarr2_Instance(a_var1_dolibarr2_Instance), var2_SEEmed_0895452f_b7c1_4c00_a316_c6a6d0ea4bf4_Instance(a_var2_SEEmed_0895452f_b7c1_4c00_a316_c6a6d0ea4bf4_Instance), var3_dolibarr2_Instance(a_var3_dolibarr2_Instance) {}

		~seq2_map()	
		{
		}

		altova::mapforce::Enumerator* GetEnumerator() {return new Enum(this);}
		
		class Enum : public altova::mapforce::Enumerator
		{
		public:
			int state;
			altova::mapforce::IMFNode current;
			seq2_map* closure;
			altova::mapforce::Enumerator* var4_ReadRecordSet;
			altova::db::record_type var5_NewRecord;
			altova::mapforce::IEnumerable var6_read_field;
			altova::mapforce::IEnumerable var7_map;
			altova::mapforce::IEnumerable var8_map;
			altova::mapforce::IEnumerable var9_map;
			altova::mapforce::IEnumerable var10_map;

			Enum(seq2_map* cls) : Enumerator(cls), state(1), closure(cls) 
			{
				var4_ReadRecordSet = 0;
			}

			~Enum() 
			{
						delete var4_ReadRecordSet; 
					    var4_ReadRecordSet = 0;

			}
			
			altova::mapforce::IMFNode GetCurrent() {return current;}
			
			bool MoveNext();
		};
	};
	class seq3_NewQuery : public altova::mapforce::Enumerable
	{
	public:
		altova::db::Catalog* var1_SEEmed_0895452f_b7c1_4c00_a316_c6a6d0ea4bf4_Instance;
	
		seq3_NewQuery(altova::db::Catalog* a_var1_SEEmed_0895452f_b7c1_4c00_a316_c6a6d0ea4bf4_Instance) : altova::mapforce::Enumerable(), var1_SEEmed_0895452f_b7c1_4c00_a316_c6a6d0ea4bf4_Instance(a_var1_SEEmed_0895452f_b7c1_4c00_a316_c6a6d0ea4bf4_Instance) {}

		~seq3_NewQuery()	
		{
		}

		altova::mapforce::Enumerator* GetEnumerator() {return new Enum(this);}
		
		class Enum : public altova::mapforce::Enumerator
		{
		public:
			int state;
			altova::mapforce::IMFNode current;
			seq3_NewQuery* closure;
			altova::db::Query var2_NewQuery;

			Enum(seq3_NewQuery* cls) : Enumerator(cls), state(1), closure(cls) 
			{
			}

			~Enum() 
			{
						altova::db::Dbs::DisposeQuery(var2_NewQuery);

			}
			
			altova::mapforce::IMFNode GetCurrent() {return current;}
			
			bool MoveNext();
		};
	};
	class seq4_NewRecord : public altova::mapforce::Enumerable
	{
	public:
		altova::db::recordset_type var1_RecordSet;
	
		seq4_NewRecord(const altova::db::recordset_type& a_var1_RecordSet) : altova::mapforce::Enumerable(), var1_RecordSet(a_var1_RecordSet) {}

		~seq4_NewRecord()	
		{
		}

		altova::mapforce::Enumerator* GetEnumerator() {return new Enum(this);}
		
		class Enum : public altova::mapforce::Enumerator
		{
		public:
			int state;
			altova::mapforce::IMFNode current;
			seq4_NewRecord* closure;
			altova::db::record_type var2_NewRecord;

			Enum(seq4_NewRecord* cls) : Enumerator(cls), state(1), closure(cls) 
			{
			}

			~Enum() 
			{

			}
			
			altova::mapforce::IMFNode GetCurrent() {return current;}
			
			bool MoveNext();
		};
	};

	class seq4_NewRecord_lambda : public altova::mapforce::Invokable<altova::mapforce::Enumerable*>
	{ 

	public:
		seq4_NewRecord_lambda() : altova::mapforce::Invokable<altova::mapforce::Enumerable*>()
		{
		}
		
		~seq4_NewRecord_lambda()
		{
		}
			
		altova::mapforce::Enumerable* Invoke(altova::mapforce::IMFNode& param) {return new seq4_NewRecord((altova::db::recordset_type)param);}
	};
	class seq5_map : public altova::mapforce::Enumerable
	{
	public:
		altova::db::record_type var1_cur;
	
		seq5_map(const altova::db::record_type& a_var1_cur) : altova::mapforce::Enumerable(), var1_cur(a_var1_cur) {}

		~seq5_map()	
		{
		}

		altova::mapforce::Enumerator* GetEnumerator() {return new Enum(this);}
		
		class Enum : public altova::mapforce::Enumerator
		{
		public:
			int state;
			altova::mapforce::IMFNode current;
			seq5_map* closure;
			altova::mapforce::Enumerator* var2_read_field;

			Enum(seq5_map* cls) : Enumerator(cls), state(1), closure(cls) 
			{
				var2_read_field = 0;
			}

			~Enum() 
			{
						delete var2_read_field; 
					    var2_read_field = 0;

			}
			
			altova::mapforce::IMFNode GetCurrent() {return current;}
			
			bool MoveNext();
		};
	};
	class seq6_map : public altova::mapforce::Enumerable
	{
	public:
		altova::db::record_type var1_cur;
	
		seq6_map(const altova::db::record_type& a_var1_cur) : altova::mapforce::Enumerable(), var1_cur(a_var1_cur) {}

		~seq6_map()	
		{
		}

		altova::mapforce::Enumerator* GetEnumerator() {return new Enum(this);}
		
		class Enum : public altova::mapforce::Enumerator
		{
		public:
			int state;
			altova::mapforce::IMFNode current;
			seq6_map* closure;
			altova::mapforce::Enumerator* var2_read_field;

			Enum(seq6_map* cls) : Enumerator(cls), state(1), closure(cls) 
			{
				var2_read_field = 0;
			}

			~Enum() 
			{
						delete var2_read_field; 
					    var2_read_field = 0;

			}
			
			altova::mapforce::IMFNode GetCurrent() {return current;}
			
			bool MoveNext();
		};
	};
	class seq7_map : public altova::mapforce::Enumerable
	{
	public:
		altova::db::record_type var1_cur;
	
		seq7_map(const altova::db::record_type& a_var1_cur) : altova::mapforce::Enumerable(), var1_cur(a_var1_cur) {}

		~seq7_map()	
		{
		}

		altova::mapforce::Enumerator* GetEnumerator() {return new Enum(this);}
		
		class Enum : public altova::mapforce::Enumerator
		{
		public:
			int state;
			altova::mapforce::IMFNode current;
			seq7_map* closure;
			altova::mapforce::Enumerator* var2_read_field;

			Enum(seq7_map* cls) : Enumerator(cls), state(1), closure(cls) 
			{
				var2_read_field = 0;
			}

			~Enum() 
			{
						delete var2_read_field; 
					    var2_read_field = 0;

			}
			
			altova::mapforce::IMFNode GetCurrent() {return current;}
			
			bool MoveNext();
		};
	};
	class seq8_map : public altova::mapforce::Enumerable
	{
	public:
		altova::db::record_type var1_cur;
	
		seq8_map(const altova::db::record_type& a_var1_cur) : altova::mapforce::Enumerable(), var1_cur(a_var1_cur) {}

		~seq8_map()	
		{
		}

		altova::mapforce::Enumerator* GetEnumerator() {return new Enum(this);}
		
		class Enum : public altova::mapforce::Enumerator
		{
		public:
			int state;
			altova::mapforce::IMFNode current;
			seq8_map* closure;
			altova::mapforce::Enumerator* var2_read_field;

			Enum(seq8_map* cls) : Enumerator(cls), state(1), closure(cls) 
			{
				var2_read_field = 0;
			}

			~Enum() 
			{
						delete var2_read_field; 
					    var2_read_field = 0;

			}
			
			altova::mapforce::IMFNode GetCurrent() {return current;}
			
			bool MoveNext();
		};
	};
	class seq9_map : public altova::mapforce::Enumerable
	{
	public:
		altova::db::Catalog* var1_dolibarr2_Instance;
		altova::db::record_type var2_cur;
	
		seq9_map(altova::db::Catalog* a_var1_dolibarr2_Instance, const altova::db::record_type& a_var2_cur) : altova::mapforce::Enumerable(), var1_dolibarr2_Instance(a_var1_dolibarr2_Instance), var2_cur(a_var2_cur) {}

		~seq9_map()	
		{
		}

		altova::mapforce::Enumerator* GetEnumerator() {return new Enum(this);}
		
		class Enum : public altova::mapforce::Enumerator
		{
		public:
			int state;
			altova::mapforce::IMFNode current;
			seq9_map* closure;
			altova::mapforce::Enumerator* var3_join;

			Enum(seq9_map* cls) : Enumerator(cls), state(1), closure(cls) 
			{
				var3_join = 0;
			}

			~Enum() 
			{
						delete var3_join; 
					    var3_join = 0;

			}
			
			altova::mapforce::IMFNode GetCurrent() {return current;}
			
			bool MoveNext();
		};
	};
	class seq10_join : public altova::mapforce::Enumerable
	{
	public:
		altova::db::Catalog* var1_dolibarr2_Instance;
		altova::db::record_type var2_cur;
	
		seq10_join(altova::db::Catalog* a_var1_dolibarr2_Instance, const altova::db::record_type& a_var2_cur) : altova::mapforce::Enumerable(), var1_dolibarr2_Instance(a_var1_dolibarr2_Instance), var2_cur(a_var2_cur) {}

		~seq10_join()	
		{
		}

		altova::mapforce::Enumerator* GetEnumerator() {return new Enum(this);}
		
		class Enum : public altova::mapforce::Enumerator
		{
		public:
			int state;
			altova::mapforce::IMFNode current;
			seq10_join* closure;
			altova::mapforce::Enumerator* var3_ReadRecordSet;
			altova::mapforce::Enumerator* var4_map;

			Enum(seq10_join* cls) : Enumerator(cls), state(1), closure(cls) 
			{
				var3_ReadRecordSet = 0;
				var4_map = 0;
			}

			~Enum() 
			{
						delete var4_map; 
					    var4_map = 0;
						delete var3_ReadRecordSet; 
					    var3_ReadRecordSet = 0;

			}
			
			altova::mapforce::IMFNode GetCurrent() {return current;}
			
			bool MoveNext();
		};
	};
	class seq11_NewQuery : public altova::mapforce::Enumerable
	{
	public:
		altova::db::Catalog* var1_dolibarr2_Instance;
	
		seq11_NewQuery(altova::db::Catalog* a_var1_dolibarr2_Instance) : altova::mapforce::Enumerable(), var1_dolibarr2_Instance(a_var1_dolibarr2_Instance) {}

		~seq11_NewQuery()	
		{
		}

		altova::mapforce::Enumerator* GetEnumerator() {return new Enum(this);}
		
		class Enum : public altova::mapforce::Enumerator
		{
		public:
			int state;
			altova::mapforce::IMFNode current;
			seq11_NewQuery* closure;
			altova::db::Query var2_NewQuery;

			Enum(seq11_NewQuery* cls) : Enumerator(cls), state(1), closure(cls) 
			{
			}

			~Enum() 
			{
						altova::db::Dbs::DisposeQuery(var2_NewQuery);

			}
			
			altova::mapforce::IMFNode GetCurrent() {return current;}
			
			bool MoveNext();
		};
	};
	class seq12_NewRecord : public altova::mapforce::Enumerable
	{
	public:
		altova::db::recordset_type var1_RecordSet;
	
		seq12_NewRecord(const altova::db::recordset_type& a_var1_RecordSet) : altova::mapforce::Enumerable(), var1_RecordSet(a_var1_RecordSet) {}

		~seq12_NewRecord()	
		{
		}

		altova::mapforce::Enumerator* GetEnumerator() {return new Enum(this);}
		
		class Enum : public altova::mapforce::Enumerator
		{
		public:
			int state;
			altova::mapforce::IMFNode current;
			seq12_NewRecord* closure;
			altova::db::record_type var2_NewRecord;

			Enum(seq12_NewRecord* cls) : Enumerator(cls), state(1), closure(cls) 
			{
			}

			~Enum() 
			{

			}
			
			altova::mapforce::IMFNode GetCurrent() {return current;}
			
			bool MoveNext();
		};
	};

	class seq12_NewRecord_lambda : public altova::mapforce::Invokable<altova::mapforce::Enumerable*>
	{ 

	public:
		seq12_NewRecord_lambda() : altova::mapforce::Invokable<altova::mapforce::Enumerable*>()
		{
		}
		
		~seq12_NewRecord_lambda()
		{
		}
			
		altova::mapforce::Enumerable* Invoke(altova::mapforce::IMFNode& param) {return new seq12_NewRecord((altova::db::recordset_type)param);}
	};
	class seq13_map : public altova::mapforce::Enumerable
	{
	public:
		altova::db::record_type var1_cur;
	
		seq13_map(const altova::db::record_type& a_var1_cur) : altova::mapforce::Enumerable(), var1_cur(a_var1_cur) {}

		~seq13_map()	
		{
		}

		altova::mapforce::Enumerator* GetEnumerator() {return new Enum(this);}
		
		class Enum : public altova::mapforce::Enumerator
		{
		public:
			int state;
			altova::mapforce::IMFNode current;
			seq13_map* closure;
			altova::mapforce::Enumerator* var2_read_field;

			Enum(seq13_map* cls) : Enumerator(cls), state(1), closure(cls) 
			{
				var2_read_field = 0;
			}

			~Enum() 
			{
						delete var2_read_field; 
					    var2_read_field = 0;

			}
			
			altova::mapforce::IMFNode GetCurrent() {return current;}
			
			bool MoveNext();
		};
	};
	class seq14_join : public altova::mapforce::Enumerable
	{
	public:
		altova::db::record_type var1_cur;
		altova::db::record_type var2_cur;
	
		seq14_join(const altova::db::record_type& a_var1_cur, const altova::db::record_type& a_var2_cur) : altova::mapforce::Enumerable(), var1_cur(a_var1_cur), var2_cur(a_var2_cur) {}

		~seq14_join()	
		{
		}

		altova::mapforce::Enumerator* GetEnumerator() {return new Enum(this);}
		
		class Enum : public altova::mapforce::Enumerator
		{
		public:
			int state;
			altova::mapforce::IMFNode current;
			seq14_join* closure;
			altova::mapforce::Enumerator* var3_read_field;
			altova::mapforce::Enumerator* var4_read_field;

			Enum(seq14_join* cls) : Enumerator(cls), state(1), closure(cls) 
			{
				var3_read_field = 0;
				var4_read_field = 0;
			}

			~Enum() 
			{
						delete var4_read_field; 
					    var4_read_field = 0;
						delete var3_read_field; 
					    var3_read_field = 0;

			}
			
			altova::mapforce::IMFNode GetCurrent() {return current;}
			
			bool MoveNext();
		};
	};
	class seq15_CoreAny : public altova::mapforce::Enumerable
	{
	public:
		altova::mapforce::IEnumerable var1_sequence;
	
		seq15_CoreAny(altova::mapforce::Enumerable* a_var1_sequence) : altova::mapforce::Enumerable(), var1_sequence(a_var1_sequence) {}

		~seq15_CoreAny()	
		{
		}

		altova::mapforce::Enumerator* GetEnumerator() {return new Enum(this);}
		
		class Enum : public altova::mapforce::Enumerator
		{
		public:
			int state;
			altova::mapforce::IMFNode current;
			seq15_CoreAny* closure;
			altova::mapforce::Enumerator* var2_enum;

			Enum(seq15_CoreAny* cls) : Enumerator(cls), state(1), closure(cls) 
			{
				var2_enum = 0;
			}

			~Enum() 
			{
						delete var2_enum; 
					    var2_enum = 0;

			}
			
			altova::mapforce::IMFNode GetCurrent() {return current;}
			
			bool MoveNext();
		};
	};
	class seq16_map : public altova::mapforce::Enumerable
	{
	public:
		altova::db::Catalog* var1_dolibarr2_Instance;
		altova::db::record_type var2_cur;
	
		seq16_map(altova::db::Catalog* a_var1_dolibarr2_Instance, const altova::db::record_type& a_var2_cur) : altova::mapforce::Enumerable(), var1_dolibarr2_Instance(a_var1_dolibarr2_Instance), var2_cur(a_var2_cur) {}

		~seq16_map()	
		{
		}

		altova::mapforce::Enumerator* GetEnumerator() {return new Enum(this);}
		
		class Enum : public altova::mapforce::Enumerator
		{
		public:
			int state;
			altova::mapforce::IMFNode current;
			seq16_map* closure;
			altova::mapforce::Enumerator* var3_join;

			Enum(seq16_map* cls) : Enumerator(cls), state(1), closure(cls) 
			{
				var3_join = 0;
			}

			~Enum() 
			{
						delete var3_join; 
					    var3_join = 0;

			}
			
			altova::mapforce::IMFNode GetCurrent() {return current;}
			
			bool MoveNext();
		};
	};
	class seq17_join : public altova::mapforce::Enumerable
	{
	public:
		altova::db::Catalog* var1_dolibarr2_Instance;
		altova::db::record_type var2_cur;
	
		seq17_join(altova::db::Catalog* a_var1_dolibarr2_Instance, const altova::db::record_type& a_var2_cur) : altova::mapforce::Enumerable(), var1_dolibarr2_Instance(a_var1_dolibarr2_Instance), var2_cur(a_var2_cur) {}

		~seq17_join()	
		{
		}

		altova::mapforce::Enumerator* GetEnumerator() {return new Enum(this);}
		
		class Enum : public altova::mapforce::Enumerator
		{
		public:
			int state;
			altova::mapforce::IMFNode current;
			seq17_join* closure;
			altova::mapforce::Enumerator* var3_ReadRecordSet;
			altova::mapforce::Enumerator* var4_map;

			Enum(seq17_join* cls) : Enumerator(cls), state(1), closure(cls) 
			{
				var3_ReadRecordSet = 0;
				var4_map = 0;
			}

			~Enum() 
			{
						delete var4_map; 
					    var4_map = 0;
						delete var3_ReadRecordSet; 
					    var3_ReadRecordSet = 0;

			}
			
			altova::mapforce::IMFNode GetCurrent() {return current;}
			
			bool MoveNext();
		};
	};
	class seq18_NewQuery : public altova::mapforce::Enumerable
	{
	public:
		altova::db::Catalog* var1_dolibarr2_Instance;
	
		seq18_NewQuery(altova::db::Catalog* a_var1_dolibarr2_Instance) : altova::mapforce::Enumerable(), var1_dolibarr2_Instance(a_var1_dolibarr2_Instance) {}

		~seq18_NewQuery()	
		{
		}

		altova::mapforce::Enumerator* GetEnumerator() {return new Enum(this);}
		
		class Enum : public altova::mapforce::Enumerator
		{
		public:
			int state;
			altova::mapforce::IMFNode current;
			seq18_NewQuery* closure;
			altova::db::Query var2_NewQuery;

			Enum(seq18_NewQuery* cls) : Enumerator(cls), state(1), closure(cls) 
			{
			}

			~Enum() 
			{
						altova::db::Dbs::DisposeQuery(var2_NewQuery);

			}
			
			altova::mapforce::IMFNode GetCurrent() {return current;}
			
			bool MoveNext();
		};
	};
	class seq19_join : public altova::mapforce::Enumerable
	{
	public:
		altova::db::record_type var1_cur;
		altova::db::record_type var2_cur;
	
		seq19_join(const altova::db::record_type& a_var1_cur, const altova::db::record_type& a_var2_cur) : altova::mapforce::Enumerable(), var1_cur(a_var1_cur), var2_cur(a_var2_cur) {}

		~seq19_join()	
		{
		}

		altova::mapforce::Enumerator* GetEnumerator() {return new Enum(this);}
		
		class Enum : public altova::mapforce::Enumerator
		{
		public:
			int state;
			altova::mapforce::IMFNode current;
			seq19_join* closure;
			altova::mapforce::Enumerator* var3_read_field;
			altova::mapforce::Enumerator* var4_read_field;

			Enum(seq19_join* cls) : Enumerator(cls), state(1), closure(cls) 
			{
				var3_read_field = 0;
				var4_read_field = 0;
			}

			~Enum() 
			{
						delete var4_read_field; 
					    var4_read_field = 0;
						delete var3_read_field; 
					    var3_read_field = 0;

			}
			
			altova::mapforce::IMFNode GetCurrent() {return current;}
			
			bool MoveNext();
		};
	};
	class seq20_map : public altova::mapforce::Enumerable
	{
	public:
		altova::db::record_type var1_cur;
	
		seq20_map(const altova::db::record_type& a_var1_cur) : altova::mapforce::Enumerable(), var1_cur(a_var1_cur) {}

		~seq20_map()	
		{
		}

		altova::mapforce::Enumerator* GetEnumerator() {return new Enum(this);}
		
		class Enum : public altova::mapforce::Enumerator
		{
		public:
			int state;
			altova::mapforce::IMFNode current;
			seq20_map* closure;
			altova::mapforce::Enumerator* var2_read_field;

			Enum(seq20_map* cls) : Enumerator(cls), state(1), closure(cls) 
			{
				var2_read_field = 0;
			}

			~Enum() 
			{
						delete var2_read_field; 
					    var2_read_field = 0;

			}
			
			altova::mapforce::IMFNode GetCurrent() {return current;}
			
			bool MoveNext();
		};
	};
	class seq21_join : public altova::mapforce::Enumerable
	{
	public:
		altova::mapforce::IEnumerable var1_read_field;
		altova::db::record_type var2_cur;
	
		seq21_join(altova::mapforce::Enumerable* a_var1_read_field, const altova::db::record_type& a_var2_cur) : altova::mapforce::Enumerable(), var1_read_field(a_var1_read_field), var2_cur(a_var2_cur) {}

		~seq21_join()	
		{
		}

		altova::mapforce::Enumerator* GetEnumerator() {return new Enum(this);}
		
		class Enum : public altova::mapforce::Enumerator
		{
		public:
			int state;
			altova::mapforce::IMFNode current;
			seq21_join* closure;
			altova::mapforce::Enumerator* var3_read_field;
			altova::mapforce::Enumerator* var4_read_field;

			Enum(seq21_join* cls) : Enumerator(cls), state(1), closure(cls) 
			{
				var3_read_field = 0;
				var4_read_field = 0;
			}

			~Enum() 
			{
						delete var4_read_field; 
					    var4_read_field = 0;
						delete var3_read_field; 
					    var3_read_field = 0;

			}
			
			altova::mapforce::IMFNode GetCurrent() {return current;}
			
			bool MoveNext();
		};
	};
	class seq22_map : public altova::mapforce::Enumerable
	{
	public:
		altova::db::record_type var1_cur;
	
		seq22_map(const altova::db::record_type& a_var1_cur) : altova::mapforce::Enumerable(), var1_cur(a_var1_cur) {}

		~seq22_map()	
		{
		}

		altova::mapforce::Enumerator* GetEnumerator() {return new Enum(this);}
		
		class Enum : public altova::mapforce::Enumerator
		{
		public:
			int state;
			altova::mapforce::IMFNode current;
			seq22_map* closure;
			altova::mapforce::Enumerator* var2_read_field;

			Enum(seq22_map* cls) : Enumerator(cls), state(1), closure(cls) 
			{
				var2_read_field = 0;
			}

			~Enum() 
			{
						delete var2_read_field; 
					    var2_read_field = 0;

			}
			
			altova::mapforce::IMFNode GetCurrent() {return current;}
			
			bool MoveNext();
		};
	};
	class seq23_join : public altova::mapforce::Enumerable
	{
	public:
		altova::mapforce::IEnumerable var1_read_field;
	
		seq23_join(altova::mapforce::Enumerable* a_var1_read_field) : altova::mapforce::Enumerable(), var1_read_field(a_var1_read_field) {}

		~seq23_join()	
		{
		}

		altova::mapforce::Enumerator* GetEnumerator() {return new Enum(this);}
		
		class Enum : public altova::mapforce::Enumerator
		{
		public:
			int state;
			altova::mapforce::IMFNode current;
			seq23_join* closure;
			altova::mapforce::Enumerator* var2_read_field;
			altova::mapforce::Enumerator* var3_vmf2_entretorsultat;

			Enum(seq23_join* cls) : Enumerator(cls), state(1), closure(cls) 
			{
				var2_read_field = 0;
				var3_vmf2_entretorsultat = 0;
			}

			~Enum() 
			{
						delete var3_vmf2_entretorsultat; 
					    var3_vmf2_entretorsultat = 0;
						delete var2_read_field; 
					    var2_read_field = 0;

			}
			
			altova::mapforce::IMFNode GetCurrent() {return current;}
			
			bool MoveNext();
		};
	};
	class seq24_map : public altova::mapforce::Enumerable
	{
	public:
		altova::db::record_type var1_cur;
	
		seq24_map(const altova::db::record_type& a_var1_cur) : altova::mapforce::Enumerable(), var1_cur(a_var1_cur) {}

		~seq24_map()	
		{
		}

		altova::mapforce::Enumerator* GetEnumerator() {return new Enum(this);}
		
		class Enum : public altova::mapforce::Enumerator
		{
		public:
			int state;
			altova::mapforce::IMFNode current;
			seq24_map* closure;
			altova::mapforce::Enumerator* var2_read_field;

			Enum(seq24_map* cls) : Enumerator(cls), state(1), closure(cls) 
			{
				var2_read_field = 0;
			}

			~Enum() 
			{
						delete var2_read_field; 
					    var2_read_field = 0;

			}
			
			altova::mapforce::IMFNode GetCurrent() {return current;}
			
			bool MoveNext();
		};
	};
	class seq25_join : public altova::mapforce::Enumerable
	{
	public:
		altova::mapforce::IEnumerable var1_read_field;
	
		seq25_join(altova::mapforce::Enumerable* a_var1_read_field) : altova::mapforce::Enumerable(), var1_read_field(a_var1_read_field) {}

		~seq25_join()	
		{
		}

		altova::mapforce::Enumerator* GetEnumerator() {return new Enum(this);}
		
		class Enum : public altova::mapforce::Enumerator
		{
		public:
			int state;
			altova::mapforce::IMFNode current;
			seq25_join* closure;
			altova::mapforce::Enumerator* var2_read_field;
			altova::mapforce::Enumerator* var3_vmf2_entretorsultat;

			Enum(seq25_join* cls) : Enumerator(cls), state(1), closure(cls) 
			{
				var2_read_field = 0;
				var3_vmf2_entretorsultat = 0;
			}

			~Enum() 
			{
						delete var3_vmf2_entretorsultat; 
					    var3_vmf2_entretorsultat = 0;
						delete var2_read_field; 
					    var2_read_field = 0;

			}
			
			altova::mapforce::IMFNode GetCurrent() {return current;}
			
			bool MoveNext();
		};
	};
	class Outer : public altova::mapforce::Enumerable
	{
	public:
		altova::db::Catalog* var1_SEEmed_0895452f_b7c1_4c00_a316_c6a6d0ea4bf4_Instance;
		altova::db::Catalog* var2_dolibarr2_Instance;
		altova::db::Catalog* var3_dolibarr2_Instance;
	
		Outer(altova::db::Catalog* a_var1_SEEmed_0895452f_b7c1_4c00_a316_c6a6d0ea4bf4_Instance, altova::db::Catalog* a_var2_dolibarr2_Instance, altova::db::Catalog* a_var3_dolibarr2_Instance) : altova::mapforce::Enumerable(), var1_SEEmed_0895452f_b7c1_4c00_a316_c6a6d0ea4bf4_Instance(a_var1_SEEmed_0895452f_b7c1_4c00_a316_c6a6d0ea4bf4_Instance), var2_dolibarr2_Instance(a_var2_dolibarr2_Instance), var3_dolibarr2_Instance(a_var3_dolibarr2_Instance) {}

		~Outer()	
		{
		}

		altova::mapforce::Enumerator* GetEnumerator() {return new Enum(this);}
		
		class Enum : public altova::mapforce::Enumerator
		{
		public:
			int state;
			altova::mapforce::IMFNode current;
			Outer* closure;
			altova::mapforce::Enumerator* var4_box;

			Enum(Outer* cls) : Enumerator(cls), state(1), closure(cls) 
			{
				var4_box = 0;
			}

			~Enum() 
			{
						delete var4_box; 
					    var4_box = 0;

			}
			
			altova::mapforce::IMFNode GetCurrent() {return current;}
			
			bool MoveNext();
		};
	};

public:
	MappingMapTodolibarr2();
	

	void Run(tstring SEEmed_0895452f_b7c1_4c00_a316_c6a6d0ea4bf4SourceConnectionString, tstring dolibarr22SourceConnectionString, tstring dolibarr23SourceConnectionString, tstring dolibarr2TargetConnectionString);
	
	void WriteDB(altova::mapforce::Enumerable* mapping, altova::db::Catalog* target);
	void MappingMapTodolibarr2::WriteDB_llx_propaldet(altova::db::record_type& parent, altova::db::record_type& record, altova::db::Catalog* target, altova::db::TransactionHelper& transactionHelper);


protected:
	// source instances
	ADODB::_ConnectionPtr m_SEEmed_0895452f_b7c1_4c00_a316_c6a6d0ea4bf4Instance;
	ADODB::_ConnectionPtr m_dolibarr22Instance;
	ADODB::_ConnectionPtr m_dolibarr23Instance;

	// members
};


#endif // MappingMapTodolibarr2_H_INCLUDED
