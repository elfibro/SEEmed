////////////////////////////////////////////////////////////////////////
//
// MappingMapToproduct.cs
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

using System;
using System.Collections;
using System.Collections.Generic;
using System.Data;
using System.Data.Common;
using System.Xml;
using Altova.Types;
using Altova.Xml;
using Altova.Functions;
using Altova.Db;
using Altova.TextParser;


using Fichier_texte; // application.libraries
using propal; // application.libraries

namespace Mapping
{

	public class MappingMapToproduct : Altova.TraceProvider
	{
		private bool runDoesCloseAll = true;
		public bool CloseObjectsAfterRun { get { return runDoesCloseAll; } set { runDoesCloseAll = value; }	}


		#region Members		
		// instances
		protected System.Data.IDbConnection	m_dolibarr23Instance;
		// members
		#endregion //Members


		public void Run(string dolibarr23SourceConnectionString, string productTargetFilename)
		{
			// open source streams
			// open target stream
			using (Altova.IO.Output productTarget = new Altova.IO.FileOutput(productTargetFilename))
			{
				// run
				Run(dolibarr23SourceConnectionString, productTarget);
			}
		}

		public void Run(string dolibarr23SourceConnectionString, Altova.IO.Output productTarget)
		{
			try
			{
				// Open the source(s)
			WriteTrace("Connecting to dolibarr23 database...\n");
			try
			{
				DbProviderFactory factory = DbProviderFactories.GetFactory("System.Data.Odbc");
				m_dolibarr23Instance = factory.CreateConnection();
				m_dolibarr23Instance.ConnectionString = dolibarr23SourceConnectionString;
				m_dolibarr23Instance.Open();
			}
			catch (Exception e)
			{
				throw new DataSourceUnavailableException("Error connecting to database.", e);
			}
				// Create the target
				Fichier_texte.Fichier_texteDocument productTargetDoc = new Fichier_texte.Fichier_texteDocument(Fichier_texte.Fichier_texte_TypeInfo.binder.Types[Fichier_texte.Fichier_texte_TypeInfo._altova_ti_altova_LignesType],0);
				Altova.TextParser.TableLike.Table productTargetObject = productTargetDoc;
			productTargetDoc.Format.AssumeFirstRowAsHeaders = false;
			productTargetDoc.Format.FieldDelimiter = ',';
			productTargetDoc.Format.RemoveEmpty = true;
			productTargetDoc.Format.QuoteCharacter = '\"';

				// Execute mapping

			main mapping = new main( 
				new Altova.Db.Catalog(m_dolibarr23Instance, 60));

			Altova.Mapforce.MFTextWriter.Write(mapping, productTargetObject);

				// Close the target

			productTargetDoc.SetEncoding( "UTF-8", false, false );
			productTargetDoc.Save( productTarget );


			}
			finally
			{
				// Close the Source Library
			m_dolibarr23Instance.Close();
				if (runDoesCloseAll)
				{
					productTarget.Close();
				}

			}
		}
		class main : IEnumerable
		{
			private readonly Altova.Db.Catalog var1_dolibarr2_Instance;

			public main(
				Altova.Db.Catalog var1_dolibarr2_Instance
			)
			{
				this.var1_dolibarr2_Instance = var1_dolibarr2_Instance;
			}

			public IEnumerator GetEnumerator() { return new Enumerator(this); }

			class Enumerator : Altova.Mapforce.IMFEnumerator
			{
				private int state = 1;
				private object current = null;
				private int pos = 0;
				private readonly main closure;
				private Altova.Db.Statement var3_NewStatement;
				private IEnumerator var2_ReadRecordSet;
				public Enumerator(main closure) 
				{
					this.closure = closure;
				}

				public void Reset() { state = 0; pos = 0;}
				public int Position { get { return pos; } }
				public object Current { get { return current; } }

				public bool MoveNext()
				{
					while (state != 0)
					{
						switch (state) 
						{
						case 1:
							state = 3;
							var3_NewStatement = (Altova.Db.Dbs.NewStatement(closure.var1_dolibarr2_Instance, 1, "SELECT \r  llx_product.rowid,\r  llx_product.ref\rFROM \r  llx_product\r\r"));
							Altova.Db.Dbs.PrepareStatement(var3_NewStatement);
							var2_ReadRecordSet = (Altova.Db.Dbs.ReadRecordSet((Altova.Db.Recordset)Altova.Functions.Core.First((new seq1_NewQuery(closure.var1_dolibarr2_Instance))), new Altova.Mapforce.MFInvoke(seq2_NewRecord.Invoke))).GetEnumerator();
							goto case 3;
						case 3:
							state = 3;
							if (!var2_ReadRecordSet.MoveNext()) { state = 4; goto case 4; }
							current = Altova.Functions.Core.CreateElement("Lignes", (new seq3_join((Altova.Db.Record)(var2_ReadRecordSet.Current))));
							pos++;
							return true;
						case 4:
							state = 0;
							Altova.Mapforce.MFEnumerator.Dispose(var2_ReadRecordSet); var2_ReadRecordSet = null;
							return false;
						}
					}
					return false;
				}

				public void Dispose() 
				{
					Altova.Mapforce.MFEnumerator.Dispose(var2_ReadRecordSet); var2_ReadRecordSet = null;
				}
			}
		}
		class seq1_NewQuery : IEnumerable
		{
			private readonly Altova.Db.Catalog var1_dolibarr2_Instance;

			public seq1_NewQuery(
				Altova.Db.Catalog var1_dolibarr2_Instance
			)
			{
				this.var1_dolibarr2_Instance = var1_dolibarr2_Instance;
			}

			public IEnumerator GetEnumerator() { return new Enumerator(this); }

			class Enumerator : Altova.Mapforce.IMFEnumerator
			{
				private int state = 1;
				private object current = null;
				private int pos = 0;
				private readonly seq1_NewQuery closure;
				private Altova.Db.Statement var2_NewQuery;
				public Enumerator(seq1_NewQuery closure) 
				{
					this.closure = closure;
				}

				public void Reset() { state = 0; pos = 0;}
				public int Position { get { return pos; } }
				public object Current { get { return current; } }

				public bool MoveNext()
				{
					while (state != 0)
					{
						switch (state) 
						{
						case 1:
							state = 0;
							var2_NewQuery = (Altova.Db.Dbs.NewQuery(closure.var1_dolibarr2_Instance, 1));
							current = Altova.Db.Dbs.ExecuteQuery(var2_NewQuery);
							pos++;
							return true;
						}
					}
					return false;
				}

				public void Dispose() 
				{
					Altova.Db.Dbs.DisposeQuery(var2_NewQuery);
				}
			}
		}
		class seq2_NewRecord : IEnumerable
		{
			private readonly Altova.Db.Recordset var1_RecordSet;

			public seq2_NewRecord(
				Altova.Db.Recordset var1_RecordSet
			)
			{
				this.var1_RecordSet = var1_RecordSet;
			}

			public static IEnumerable Invoke(object o)
			{
				return new seq2_NewRecord((Altova.Db.Recordset)o);
			}

			public IEnumerator GetEnumerator() { return new Enumerator(this); }

			class Enumerator : Altova.Mapforce.IMFEnumerator
			{
				private int state = 1;
				private object current = null;
				private int pos = 0;
				private readonly seq2_NewRecord closure;
				private Altova.Db.Record var2_NewRecord;
				public Enumerator(seq2_NewRecord closure) 
				{
					this.closure = closure;
				}

				public void Reset() { state = 0; pos = 0;}
				public int Position { get { return pos; } }
				public object Current { get { return current; } }

				public bool MoveNext()
				{
					while (state != 0)
					{
						switch (state) 
						{
						case 1:
							state = 0;
							var2_NewRecord = (Altova.Db.Dbs.NewRecord());
							Altova.Db.Dbs.Read_int(var2_NewRecord, closure.var1_RecordSet, "rowid", 0);
							Altova.Db.Dbs.MySQL.Read_string(var2_NewRecord, closure.var1_RecordSet, "ref", 1);
							current = var2_NewRecord;
							pos++;
							return true;
						}
					}
					return false;
				}

				public void Dispose() 
				{
				}
			}
		}
		class seq3_join : IEnumerable
		{
			private readonly Altova.Db.Record var1_cur;

			public seq3_join(
				Altova.Db.Record var1_cur
			)
			{
				this.var1_cur = var1_cur;
			}

			public IEnumerator GetEnumerator() { return new Enumerator(this); }

			class Enumerator : Altova.Mapforce.IMFEnumerator
			{
				private int state = 1;
				private object current = null;
				private int pos = 0;
				private readonly seq3_join closure;
				private IEnumerator var2_read_field;
				private IEnumerator var3_read_field;
				public Enumerator(seq3_join closure) 
				{
					this.closure = closure;
				}

				public void Reset() { state = 0; pos = 0;}
				public int Position { get { return pos; } }
				public object Current { get { return current; } }

				public bool MoveNext()
				{
					while (state != 0)
					{
						switch (state) 
						{
						case 1:
							state = 2;
							var2_read_field = (Altova.Db.Dbs.ReadField(closure.var1_cur, "rowid")).GetEnumerator();
							goto case 2;
						case 2:
							state = 2;
							if (!var2_read_field.MoveNext()) { state = 3; goto case 3; }
							current = Altova.Functions.Core.CreateElement("rowid", Altova.Functions.Core.Box(Altova.CoreTypes.DecimalToString(Altova.CoreTypes.LongToDecimal(Altova.CoreTypes.IntToLong((int)(var2_read_field.Current))))));
							pos++;
							return true;
						case 3:
							state = 5;
							Altova.Mapforce.MFEnumerator.Dispose(var2_read_field); var2_read_field = null;
							var3_read_field = (Altova.Db.Dbs.ReadField(closure.var1_cur, "ref")).GetEnumerator();
							goto case 5;
						case 5:
							state = 5;
							if (!var3_read_field.MoveNext()) { state = 6; goto case 6; }
							current = Altova.Functions.Core.CreateElement("ref", Altova.Functions.Core.Box((string)(var3_read_field.Current)));
							pos++;
							return true;
						case 6:
							state = 0;
							Altova.Mapforce.MFEnumerator.Dispose(var3_read_field); var3_read_field = null;
							return false;
						}
					}
					return false;
				}

				public void Dispose() 
				{
					Altova.Mapforce.MFEnumerator.Dispose(var2_read_field); var2_read_field = null;
					Altova.Mapforce.MFEnumerator.Dispose(var3_read_field); var3_read_field = null;
				}
			}
		}
		class Outer : IEnumerable
		{
			private readonly Altova.Db.Catalog var1_dolibarr2_Instance;

			public Outer(
				Altova.Db.Catalog var1_dolibarr2_Instance
			)
			{
				this.var1_dolibarr2_Instance = var1_dolibarr2_Instance;
			}

			public IEnumerator GetEnumerator() { return new Enumerator(this); }

			class Enumerator : Altova.Mapforce.IMFEnumerator
			{
				private int state = 1;
				private object current = null;
				private int pos = 0;
				private readonly Outer closure;
				private IEnumerator var2_map;
				public Enumerator(Outer closure) 
				{
					this.closure = closure;
				}

				public void Reset() { state = 0; pos = 0;}
				public int Position { get { return pos; } }
				public object Current { get { return current; } }

				public bool MoveNext()
				{
					while (state != 0)
					{
						switch (state) 
						{
						case 1:
							state = 2;
							var2_map = ((new main(closure.var1_dolibarr2_Instance))).GetEnumerator();
							goto case 2;
						case 2:
							state = 2;
							if (!var2_map.MoveNext()) { state = 3; goto case 3; }
							current = var2_map.Current;
							pos++;
							return true;
						case 3:
							state = 0;
							Altova.Mapforce.MFEnumerator.Dispose(var2_map); var2_map = null;
							return false;
						}
					}
					return false;
				}

				public void Dispose() 
				{
					Altova.Mapforce.MFEnumerator.Dispose(var2_map); var2_map = null;
				}
			}
		}

	}
}