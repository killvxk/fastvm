﻿#include "vm.h"
#include "slghsymbol.h"

PatternExpression*  SleighSymbol_getPatternExpression(SleighSymbol *s)
{
    switch (s->type) { 
        case value_symbol:
            return s->value.patval;

        case operand_symbol:
            return s->operand.localexp;

        case start_symbol:
            return s->start.patexp;

        case end_symbol:
            return s->end.patexp;

        default:
            vm_error("Cannot use symbol in pattern");
            return NULL;
    }
}

PatternValue*       SleighSymbol_getPatternValue(SleighSymbol *s)
{
    switch (s->type) { 
        case value_symbol:
            return s->value.patval;

        case operand_symbol:
            return s->operand.localexp;

        case start_symbol:
            return s->start.patexp;

        case end_symbol:
            return s->end.patexp;

        default:
            vm_error("Cannot get value in symbol:%d", s->type);
            return NULL;
    }
}

Constructor*    Constructor_new()
{
    return NULL;
}

void            Constructor_delete(Constructor *c)
{
}

void            Constructor_addSyntax(Constructor *c, const char *syn)
{
}