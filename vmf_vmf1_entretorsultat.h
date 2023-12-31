////////////////////////////////////////////////////////////////////////
//
// vmf_vmf1_entretorsultat.h
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

#ifndef vmf_vmf1_entretorsultat_H_INCLUDED
#define vmf_vmf1_entretorsultat_H_INCLUDED

#pragma once

#include "../Altova/AltovaMapforce.h"

#include "../AltovaXML/Node.h"
#include "../AltovaXML/MFNodeAdapters_DOM.h"
#include "../AltovaXML/InternalXML.h"
#include "../AltovaDB/AltovaDB.h"
namespace vmf 
{
class vmf1_entretorsultat
{
	class Main : public altova::mapforce::Enumerable
	{
	public:
		string_type var1_entr_e;
	
		Main(const string_type& a_var1_entr_e) : altova::mapforce::Enumerable(), var1_entr_e(a_var1_entr_e) {}

		~Main()	
		{
		}

		altova::mapforce::Enumerator* GetEnumerator() {return new altova::mapforce::MFEmptySequence::Enum(this);}
	};

public:
	vmf1_entretorsultat();
	typedef std::map< string_type, string_type > hash_type;
	hash_type hash;


	// global function in library namespace

	static altova::mapforce::IEnumerable Create(string_type var1_entr_e)
	{
		vmf1_entretorsultat vmf;
		vmf1_entretorsultat::hash_type::iterator it = vmf.hash.find(var1_entr_e);
		if (it != vmf.hash.end())
			return altova::Core::Box((*it).second);
		else
			return altova::Core::Box((hash_type::value_type::second_type)string_type(_T("0")));
	}

	static string_type Eval(string_type var1_entr_e)
	{

		altova::mapforce::IEnumerator e( Create(var1_entr_e)->GetEnumerator() );
		if (e.MoveNext())
		{
			string_type result = (string_type)e.GetCurrent();
			return result;
		}
		throw altova::CAltovaException(CAltovaException::eError1, _T("Expected a function result."));		
	
	}

};
}	// namespace vmf


#endif // vmf_vmf1_entretorsultat_H_INCLUDED
