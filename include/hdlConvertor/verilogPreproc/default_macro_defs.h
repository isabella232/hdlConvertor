#include <hdlConvertor/verilogPreproc/a_macro_def.h>
#include <hdlConvertor/verilogPreproc/macroDB.h>

namespace hdlConvertor {
namespace verilog_pp {

class MacroDef__LINE__: public aMacroDef {
public:
	MacroDef__LINE__();
	virtual std::string replace(std::vector<std::string> args,
			bool args_specified, vPreprocessor * pp,
			antlr4::ParserRuleContext * ctx) override;
};

class MacroDef__FILE__: public aMacroDef {
public:
	MacroDef__FILE__();
	virtual std::string replace(std::vector<std::string> args,
			bool args_specified, vPreprocessor * pp,
			antlr4::ParserRuleContext * ctx) override;
};

void macroDB_add_default_defs(MacroDB & db);

}
}
