// A Bison parser, made by GNU Bison 3.0.4.

// Skeleton implementation for Bison LALR(1) parsers in C++

// Copyright (C) 2002-2015 Free Software Foundation, Inc.

// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.

// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.

// As a special exception, you may create a larger work that contains
// part or all of the Bison parser skeleton and distribute that work
// under terms of your choice, so long as that work isn't itself a
// parser generator using the skeleton or a modified version thereof
// as a parser skeleton.  Alternatively, if you modify or redistribute
// the parser skeleton itself, you may (at your option) remove this
// special exception, which will cause the skeleton and the resulting
// Bison output files to be licensed under the GNU General Public
// License without this special exception.

// This special exception was added by the Free Software Foundation in
// version 2.2 of Bison.


// First part of user declarations.

#line 37 "cppcalc.tab.cc" // lalr1.cc:404

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

#include "cppcalc.tab.hh"

// User implementation prologue.
#line 72 "cppcalc.yy" // lalr1.cc:412

    extern int yylex(yy::cppcalc::semantic_type *yylval, yy::cppcalc::location_type* yylloc);

#line 54 "cppcalc.tab.cc" // lalr1.cc:412


#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> // FIXME: INFRINGES ON USER NAME SPACE.
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K].location)
/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

# ifndef YYLLOC_DEFAULT
#  define YYLLOC_DEFAULT(Current, Rhs, N)                               \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).begin  = YYRHSLOC (Rhs, 1).begin;                   \
          (Current).end    = YYRHSLOC (Rhs, N).end;                     \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).begin = (Current).end = YYRHSLOC (Rhs, 0).end;      \
        }                                                               \
    while (/*CONSTCOND*/ false)
# endif


// Suppress unused-variable warnings by "using" E.
#define YYUSE(E) ((void) (E))

// Enable debugging if requested.
#if YYDEBUG

// A pseudo ostream that takes yydebug_ into account.
# define YYCDEBUG if (yydebug_) (*yycdebug_)

# define YY_SYMBOL_PRINT(Title, Symbol)         \
  do {                                          \
    if (yydebug_)                               \
    {                                           \
      *yycdebug_ << Title << ' ';               \
      yy_print_ (*yycdebug_, Symbol);           \
      *yycdebug_ << std::endl;                  \
    }                                           \
  } while (false)

# define YY_REDUCE_PRINT(Rule)          \
  do {                                  \
    if (yydebug_)                       \
      yy_reduce_print_ (Rule);          \
  } while (false)

# define YY_STACK_PRINT()               \
  do {                                  \
    if (yydebug_)                       \
      yystack_print_ ();                \
  } while (false)

#else // !YYDEBUG

# define YYCDEBUG if (false) std::cerr
# define YY_SYMBOL_PRINT(Title, Symbol)  YYUSE(Symbol)
# define YY_REDUCE_PRINT(Rule)           static_cast<void>(0)
# define YY_STACK_PRINT()                static_cast<void>(0)

#endif // !YYDEBUG

#define yyerrok         (yyerrstatus_ = 0)
#define yyclearin       (yyla.clear ())

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYRECOVERING()  (!!yyerrstatus_)


namespace yy {
#line 140 "cppcalc.tab.cc" // lalr1.cc:479

  /// Build a parser object.
  cppcalc::cppcalc ()
#if YYDEBUG
     :yydebug_ (false),
      yycdebug_ (&std::cerr)
#endif
  {}

  cppcalc::~cppcalc ()
  {}


  /*---------------.
  | Symbol types.  |
  `---------------*/

  inline
  cppcalc::syntax_error::syntax_error (const location_type& l, const std::string& m)
    : std::runtime_error (m)
    , location (l)
  {}

  // basic_symbol.
  template <typename Base>
  inline
  cppcalc::basic_symbol<Base>::basic_symbol ()
    : value ()
  {}

  template <typename Base>
  inline
  cppcalc::basic_symbol<Base>::basic_symbol (const basic_symbol& other)
    : Base (other)
    , value ()
    , location (other.location)
  {
    value = other.value;
  }


  template <typename Base>
  inline
  cppcalc::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const semantic_type& v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}


  /// Constructor for valueless symbols.
  template <typename Base>
  inline
  cppcalc::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const location_type& l)
    : Base (t)
    , value ()
    , location (l)
  {}

  template <typename Base>
  inline
  cppcalc::basic_symbol<Base>::~basic_symbol ()
  {
    clear ();
  }

  template <typename Base>
  inline
  void
  cppcalc::basic_symbol<Base>::clear ()
  {
    Base::clear ();
  }

  template <typename Base>
  inline
  bool
  cppcalc::basic_symbol<Base>::empty () const
  {
    return Base::type_get () == empty_symbol;
  }

  template <typename Base>
  inline
  void
  cppcalc::basic_symbol<Base>::move (basic_symbol& s)
  {
    super_type::move(s);
    value = s.value;
    location = s.location;
  }

  // by_type.
  inline
  cppcalc::by_type::by_type ()
    : type (empty_symbol)
  {}

  inline
  cppcalc::by_type::by_type (const by_type& other)
    : type (other.type)
  {}

  inline
  cppcalc::by_type::by_type (token_type t)
    : type (yytranslate_ (t))
  {}

  inline
  void
  cppcalc::by_type::clear ()
  {
    type = empty_symbol;
  }

  inline
  void
  cppcalc::by_type::move (by_type& that)
  {
    type = that.type;
    that.clear ();
  }

  inline
  int
  cppcalc::by_type::type_get () const
  {
    return type;
  }


  // by_state.
  inline
  cppcalc::by_state::by_state ()
    : state (empty_state)
  {}

  inline
  cppcalc::by_state::by_state (const by_state& other)
    : state (other.state)
  {}

  inline
  void
  cppcalc::by_state::clear ()
  {
    state = empty_state;
  }

  inline
  void
  cppcalc::by_state::move (by_state& that)
  {
    state = that.state;
    that.clear ();
  }

  inline
  cppcalc::by_state::by_state (state_type s)
    : state (s)
  {}

  inline
  cppcalc::symbol_number_type
  cppcalc::by_state::type_get () const
  {
    if (state == empty_state)
      return empty_symbol;
    else
      return yystos_[state];
  }

  inline
  cppcalc::stack_symbol_type::stack_symbol_type ()
  {}


  inline
  cppcalc::stack_symbol_type::stack_symbol_type (state_type s, symbol_type& that)
    : super_type (s, that.location)
  {
    value = that.value;
    // that is emptied.
    that.type = empty_symbol;
  }

  inline
  cppcalc::stack_symbol_type&
  cppcalc::stack_symbol_type::operator= (const stack_symbol_type& that)
  {
    state = that.state;
    value = that.value;
    location = that.location;
    return *this;
  }


  template <typename Base>
  inline
  void
  cppcalc::yy_destroy_ (const char* yymsg, basic_symbol<Base>& yysym) const
  {
    if (yymsg)
      YY_SYMBOL_PRINT (yymsg, yysym);

    // User destructor.
    YYUSE (yysym.type_get ());
  }

#if YYDEBUG
  template <typename Base>
  void
  cppcalc::yy_print_ (std::ostream& yyo,
                                     const basic_symbol<Base>& yysym) const
  {
    std::ostream& yyoutput = yyo;
    YYUSE (yyoutput);
    symbol_number_type yytype = yysym.type_get ();
    // Avoid a (spurious) G++ 4.8 warning about "array subscript is
    // below array bounds".
    if (yysym.empty ())
      std::abort ();
    yyo << (yytype < yyntokens_ ? "token" : "nterm")
        << ' ' << yytname_[yytype] << " ("
        << yysym.location << ": ";
    YYUSE (yytype);
    yyo << ')';
  }
#endif

  inline
  void
  cppcalc::yypush_ (const char* m, state_type s, symbol_type& sym)
  {
    stack_symbol_type t (s, sym);
    yypush_ (m, t);
  }

  inline
  void
  cppcalc::yypush_ (const char* m, stack_symbol_type& s)
  {
    if (m)
      YY_SYMBOL_PRINT (m, s);
    yystack_.push (s);
  }

  inline
  void
  cppcalc::yypop_ (unsigned int n)
  {
    yystack_.pop (n);
  }

#if YYDEBUG
  std::ostream&
  cppcalc::debug_stream () const
  {
    return *yycdebug_;
  }

  void
  cppcalc::set_debug_stream (std::ostream& o)
  {
    yycdebug_ = &o;
  }


  cppcalc::debug_level_type
  cppcalc::debug_level () const
  {
    return yydebug_;
  }

  void
  cppcalc::set_debug_level (debug_level_type l)
  {
    yydebug_ = l;
  }
#endif // YYDEBUG

  inline cppcalc::state_type
  cppcalc::yy_lr_goto_state_ (state_type yystate, int yysym)
  {
    int yyr = yypgoto_[yysym - yyntokens_] + yystate;
    if (0 <= yyr && yyr <= yylast_ && yycheck_[yyr] == yystate)
      return yytable_[yyr];
    else
      return yydefgoto_[yysym - yyntokens_];
  }

  inline bool
  cppcalc::yy_pact_value_is_default_ (int yyvalue)
  {
    return yyvalue == yypact_ninf_;
  }

  inline bool
  cppcalc::yy_table_value_is_error_ (int yyvalue)
  {
    return yyvalue == yytable_ninf_;
  }

  int
  cppcalc::parse ()
  {
    // State.
    int yyn;
    /// Length of the RHS of the rule being reduced.
    int yylen = 0;

    // Error handling.
    int yynerrs_ = 0;
    int yyerrstatus_ = 0;

    /// The lookahead symbol.
    symbol_type yyla;

    /// The locations where the error started and ended.
    stack_symbol_type yyerror_range[3];

    /// The return value of parse ().
    int yyresult;

    // FIXME: This shoud be completely indented.  It is not yet to
    // avoid gratuitous conflicts when merging into the master branch.
    try
      {
    YYCDEBUG << "Starting parse" << std::endl;


    // User initialization code.
    #line 75 "cppcalc.yy" // lalr1.cc:741
{
    // Filename for locations here
    //@$.begin.filename = @$.end.filename = new std::string("stdin");
}

#line 479 "cppcalc.tab.cc" // lalr1.cc:741

    /* Initialize the stack.  The initial state will be set in
       yynewstate, since the latter expects the semantical and the
       location values to have been already stored, initialize these
       stacks with a primary value.  */
    yystack_.clear ();
    yypush_ (YY_NULLPTR, 0, yyla);

    // A new symbol was pushed on the stack.
  yynewstate:
    YYCDEBUG << "Entering state " << yystack_[0].state << std::endl;

    // Accept?
    if (yystack_[0].state == yyfinal_)
      goto yyacceptlab;

    goto yybackup;

    // Backup.
  yybackup:

    // Try to take a decision without lookahead.
    yyn = yypact_[yystack_[0].state];
    if (yy_pact_value_is_default_ (yyn))
      goto yydefault;

    // Read a lookahead token.
    if (yyla.empty ())
      {
        YYCDEBUG << "Reading a token: ";
        try
          {
            yyla.type = yytranslate_ (yylex (&yyla.value, &yyla.location));
          }
        catch (const syntax_error& yyexc)
          {
            error (yyexc);
            goto yyerrlab1;
          }
      }
    YY_SYMBOL_PRINT ("Next token is", yyla);

    /* If the proper action on seeing token YYLA.TYPE is to reduce or
       to detect an error, take that action.  */
    yyn += yyla.type_get ();
    if (yyn < 0 || yylast_ < yyn || yycheck_[yyn] != yyla.type_get ())
      goto yydefault;

    // Reduce or error.
    yyn = yytable_[yyn];
    if (yyn <= 0)
      {
        if (yy_table_value_is_error_ (yyn))
          goto yyerrlab;
        yyn = -yyn;
        goto yyreduce;
      }

    // Count tokens shifted since error; after three, turn off error status.
    if (yyerrstatus_)
      --yyerrstatus_;

    // Shift the lookahead token.
    yypush_ ("Shifting", yyn, yyla);
    goto yynewstate;

  /*-----------------------------------------------------------.
  | yydefault -- do the default action for the current state.  |
  `-----------------------------------------------------------*/
  yydefault:
    yyn = yydefact_[yystack_[0].state];
    if (yyn == 0)
      goto yyerrlab;
    goto yyreduce;

  /*-----------------------------.
  | yyreduce -- Do a reduction.  |
  `-----------------------------*/
  yyreduce:
    yylen = yyr2_[yyn];
    {
      stack_symbol_type yylhs;
      yylhs.state = yy_lr_goto_state_(yystack_[yylen].state, yyr1_[yyn]);
      /* If YYLEN is nonzero, implement the default value of the
         action: '$$ = $1'.  Otherwise, use the top of the stack.

         Otherwise, the following line sets YYLHS.VALUE to garbage.
         This behavior is undocumented and Bison users should not rely
         upon it.  */
      if (yylen)
        yylhs.value = yystack_[yylen - 1].value;
      else
        yylhs.value = yystack_[0].value;

      // Compute the default @$.
      {
        slice<stack_symbol_type, stack_type> slice (yystack_, yylen);
        YYLLOC_DEFAULT (yylhs.location, slice, yylen);
      }

      // Perform the reduction.
      YY_REDUCE_PRINT (yyn);
      try
        {
          switch (yyn)
            {
  case 2:
#line 83 "cppcalc.yy" // lalr1.cc:859
    {if(DBG) cout << "program" << endl; endThisShit((yystack_[1].value.ival));}
#line 589 "cppcalc.tab.cc" // lalr1.cc:859
    break;

  case 3:
#line 87 "cppcalc.yy" // lalr1.cc:859
    {if(DBG) cout << "declare variable" << endl; declareVariable((yystack_[0].value.sval));}
#line 595 "cppcalc.tab.cc" // lalr1.cc:859
    break;

  case 4:
#line 88 "cppcalc.yy" // lalr1.cc:859
    {if(DBG) cout << "delcare array" << endl; declareArray((yystack_[3].value.sval), (yystack_[1].value.ival));}
#line 601 "cppcalc.tab.cc" // lalr1.cc:859
    break;

  case 6:
#line 93 "cppcalc.yy" // lalr1.cc:859
    {(yylhs.value.ival) = concatenate_codes((yystack_[1].value.ival), (yystack_[0].value.ival));}
#line 607 "cppcalc.tab.cc" // lalr1.cc:859
    break;

  case 7:
#line 94 "cppcalc.yy" // lalr1.cc:859
    {}
#line 613 "cppcalc.tab.cc" // lalr1.cc:859
    break;

  case 8:
#line 98 "cppcalc.yy" // lalr1.cc:859
    {if(DBG) cout << "assign" << endl; (yylhs.value.ival) = gen_commnad_assign((yystack_[3].value.ival), (yystack_[1].value.ival));}
#line 619 "cppcalc.tab.cc" // lalr1.cc:859
    break;

  case 9:
#line 99 "cppcalc.yy" // lalr1.cc:859
    {if(DBG) cout << "if" << endl;}
#line 625 "cppcalc.tab.cc" // lalr1.cc:859
    break;

  case 10:
#line 100 "cppcalc.yy" // lalr1.cc:859
    {if(DBG) cout << "while" << endl;}
#line 631 "cppcalc.tab.cc" // lalr1.cc:859
    break;

  case 11:
#line 101 "cppcalc.yy" // lalr1.cc:859
    {if(DBG) cout << "for to" << endl;}
#line 637 "cppcalc.tab.cc" // lalr1.cc:859
    break;

  case 12:
#line 102 "cppcalc.yy" // lalr1.cc:859
    {if(DBG) cout << "for downto" << endl;}
#line 643 "cppcalc.tab.cc" // lalr1.cc:859
    break;

  case 13:
#line 103 "cppcalc.yy" // lalr1.cc:859
    {if(DBG) cout << "read" << endl;}
#line 649 "cppcalc.tab.cc" // lalr1.cc:859
    break;

  case 14:
#line 104 "cppcalc.yy" // lalr1.cc:859
    {if(DBG) cout << "write" << endl; (yylhs.value.ival) = gen_command_write((yystack_[1].value.ival));}
#line 655 "cppcalc.tab.cc" // lalr1.cc:859
    break;

  case 15:
#line 105 "cppcalc.yy" // lalr1.cc:859
    {if(DBG) cout << "skip" << endl;}
#line 661 "cppcalc.tab.cc" // lalr1.cc:859
    break;

  case 16:
#line 109 "cppcalc.yy" // lalr1.cc:859
    {if(DBG) cout << "value" << endl; (yylhs.value.ival) = gen_expr_value((yystack_[0].value.ival));}
#line 667 "cppcalc.tab.cc" // lalr1.cc:859
    break;

  case 17:
#line 110 "cppcalc.yy" // lalr1.cc:859
    {if(DBG) cout << "add" << endl; (yylhs.value.ival) = gen_expr_add((yystack_[2].value.ival), (yystack_[0].value.ival));}
#line 673 "cppcalc.tab.cc" // lalr1.cc:859
    break;

  case 18:
#line 111 "cppcalc.yy" // lalr1.cc:859
    {if(DBG) cout << "sub" << endl; (yylhs.value.ival) = gen_expr_sub((yystack_[2].value.ival), (yystack_[0].value.ival));}
#line 679 "cppcalc.tab.cc" // lalr1.cc:859
    break;

  case 19:
#line 112 "cppcalc.yy" // lalr1.cc:859
    {if(DBG) cout << "mult" << endl; (yylhs.value.ival) = gen_expr_mult((yystack_[2].value.ival), (yystack_[0].value.ival));}
#line 685 "cppcalc.tab.cc" // lalr1.cc:859
    break;

  case 20:
#line 113 "cppcalc.yy" // lalr1.cc:859
    {if(DBG) cout << "div" << endl;}
#line 691 "cppcalc.tab.cc" // lalr1.cc:859
    break;

  case 21:
#line 114 "cppcalc.yy" // lalr1.cc:859
    {if(DBG) cout << "mod" << endl;}
#line 697 "cppcalc.tab.cc" // lalr1.cc:859
    break;

  case 22:
#line 118 "cppcalc.yy" // lalr1.cc:859
    {if(DBG) cout << "eq" << endl;}
#line 703 "cppcalc.tab.cc" // lalr1.cc:859
    break;

  case 23:
#line 119 "cppcalc.yy" // lalr1.cc:859
    {if(DBG) cout << "neq" << endl;}
#line 709 "cppcalc.tab.cc" // lalr1.cc:859
    break;

  case 24:
#line 120 "cppcalc.yy" // lalr1.cc:859
    {if(DBG) cout << "st" << endl;}
#line 715 "cppcalc.tab.cc" // lalr1.cc:859
    break;

  case 25:
#line 121 "cppcalc.yy" // lalr1.cc:859
    {if(DBG) cout << "bt" << endl;}
#line 721 "cppcalc.tab.cc" // lalr1.cc:859
    break;

  case 26:
#line 122 "cppcalc.yy" // lalr1.cc:859
    {if(DBG) cout << "set" << endl;}
#line 727 "cppcalc.tab.cc" // lalr1.cc:859
    break;

  case 27:
#line 123 "cppcalc.yy" // lalr1.cc:859
    {if(DBG) cout << "bet" << endl;}
#line 733 "cppcalc.tab.cc" // lalr1.cc:859
    break;

  case 28:
#line 127 "cppcalc.yy" // lalr1.cc:859
    {if(DBG) cout << "num " << (yystack_[0].value.ival) << " "; (yylhs.value.ival) = gen_ConstNumber((yystack_[0].value.ival));}
#line 739 "cppcalc.tab.cc" // lalr1.cc:859
    break;

  case 29:
#line 128 "cppcalc.yy" // lalr1.cc:859
    {if(DBG) cout << "id" << endl;}
#line 745 "cppcalc.tab.cc" // lalr1.cc:859
    break;

  case 30:
#line 132 "cppcalc.yy" // lalr1.cc:859
    {if(DBG) cout << "pid " << endl; (yylhs.value.ival) = gen_Pidentifier((yystack_[0].value.sval));}
#line 751 "cppcalc.tab.cc" // lalr1.cc:859
    break;

  case 31:
#line 133 "cppcalc.yy" // lalr1.cc:859
    {if(DBG) cout << "array pid " << endl; (yylhs.value.ival) = gen_ArrayPid((yystack_[3].value.sval), (yystack_[1].value.sval));}
#line 757 "cppcalc.tab.cc" // lalr1.cc:859
    break;

  case 32:
#line 134 "cppcalc.yy" // lalr1.cc:859
    {if(DBG) cout << "array num " << endl; (yylhs.value.ival) = gen_ArrayConst((yystack_[3].value.sval), (yystack_[1].value.ival));}
#line 763 "cppcalc.tab.cc" // lalr1.cc:859
    break;


#line 767 "cppcalc.tab.cc" // lalr1.cc:859
            default:
              break;
            }
        }
      catch (const syntax_error& yyexc)
        {
          error (yyexc);
          YYERROR;
        }
      YY_SYMBOL_PRINT ("-> $$ =", yylhs);
      yypop_ (yylen);
      yylen = 0;
      YY_STACK_PRINT ();

      // Shift the result of the reduction.
      yypush_ (YY_NULLPTR, yylhs);
    }
    goto yynewstate;

  /*--------------------------------------.
  | yyerrlab -- here on detecting error.  |
  `--------------------------------------*/
  yyerrlab:
    // If not already recovering from an error, report this error.
    if (!yyerrstatus_)
      {
        ++yynerrs_;
        error (yyla.location, yysyntax_error_ (yystack_[0].state, yyla));
      }


    yyerror_range[1].location = yyla.location;
    if (yyerrstatus_ == 3)
      {
        /* If just tried and failed to reuse lookahead token after an
           error, discard it.  */

        // Return failure if at end of input.
        if (yyla.type_get () == yyeof_)
          YYABORT;
        else if (!yyla.empty ())
          {
            yy_destroy_ ("Error: discarding", yyla);
            yyla.clear ();
          }
      }

    // Else will try to reuse lookahead token after shifting the error token.
    goto yyerrlab1;


  /*---------------------------------------------------.
  | yyerrorlab -- error raised explicitly by YYERROR.  |
  `---------------------------------------------------*/
  yyerrorlab:

    /* Pacify compilers like GCC when the user code never invokes
       YYERROR and the label yyerrorlab therefore never appears in user
       code.  */
    if (false)
      goto yyerrorlab;
    yyerror_range[1].location = yystack_[yylen - 1].location;
    /* Do not reclaim the symbols of the rule whose action triggered
       this YYERROR.  */
    yypop_ (yylen);
    yylen = 0;
    goto yyerrlab1;

  /*-------------------------------------------------------------.
  | yyerrlab1 -- common code for both syntax error and YYERROR.  |
  `-------------------------------------------------------------*/
  yyerrlab1:
    yyerrstatus_ = 3;   // Each real token shifted decrements this.
    {
      stack_symbol_type error_token;
      for (;;)
        {
          yyn = yypact_[yystack_[0].state];
          if (!yy_pact_value_is_default_ (yyn))
            {
              yyn += yyterror_;
              if (0 <= yyn && yyn <= yylast_ && yycheck_[yyn] == yyterror_)
                {
                  yyn = yytable_[yyn];
                  if (0 < yyn)
                    break;
                }
            }

          // Pop the current state because it cannot handle the error token.
          if (yystack_.size () == 1)
            YYABORT;

          yyerror_range[1].location = yystack_[0].location;
          yy_destroy_ ("Error: popping", yystack_[0]);
          yypop_ ();
          YY_STACK_PRINT ();
        }

      yyerror_range[2].location = yyla.location;
      YYLLOC_DEFAULT (error_token.location, yyerror_range, 2);

      // Shift the error token.
      error_token.state = yyn;
      yypush_ ("Shifting", error_token);
    }
    goto yynewstate;

    // Accept.
  yyacceptlab:
    yyresult = 0;
    goto yyreturn;

    // Abort.
  yyabortlab:
    yyresult = 1;
    goto yyreturn;

  yyreturn:
    if (!yyla.empty ())
      yy_destroy_ ("Cleanup: discarding lookahead", yyla);

    /* Do not reclaim the symbols of the rule whose action triggered
       this YYABORT or YYACCEPT.  */
    yypop_ (yylen);
    while (1 < yystack_.size ())
      {
        yy_destroy_ ("Cleanup: popping", yystack_[0]);
        yypop_ ();
      }

    return yyresult;
  }
    catch (...)
      {
        YYCDEBUG << "Exception caught: cleaning lookahead and stack"
                 << std::endl;
        // Do not try to display the values of the reclaimed symbols,
        // as their printer might throw an exception.
        if (!yyla.empty ())
          yy_destroy_ (YY_NULLPTR, yyla);

        while (1 < yystack_.size ())
          {
            yy_destroy_ (YY_NULLPTR, yystack_[0]);
            yypop_ ();
          }
        throw;
      }
  }

  void
  cppcalc::error (const syntax_error& yyexc)
  {
    error (yyexc.location, yyexc.what());
  }

  // Generate an error message.
  std::string
  cppcalc::yysyntax_error_ (state_type, const symbol_type&) const
  {
    return YY_("syntax error");
  }


  const signed char cppcalc::yypact_ninf_ = -36;

  const signed char cppcalc::yytable_ninf_ = -1;

  const short int
  cppcalc::yypact_[] =
  {
       5,   -36,     2,    -1,   -36,   156,   -35,   -17,   -17,   -19,
     -14,   -17,    10,    -7,     1,   -36,     0,    -4,   -36,    26,
      13,   -36,    33,    31,    25,    36,   -36,   -12,   -36,   -36,
     -17,    21,   156,   -17,   -17,   -17,   -17,   -17,   -17,   156,
     -17,   -36,   -36,    27,    28,    43,   146,   -36,    81,   -36,
     -36,   -36,   -36,   -36,   -36,    96,     9,   -36,   -36,   -36,
     -17,   -17,   -17,   -17,   -17,   156,   -36,   -17,   -17,   -36,
     -36,   -36,   -36,   -36,   111,    59,    60,   -36,   156,   156,
     126,   141,   -36,   -36
  };

  const unsigned char
  cppcalc::yydefact_[] =
  {
       0,     5,     0,     0,     1,     0,     3,     0,     0,     0,
       0,     0,     0,    30,     0,     7,     0,     0,    28,     0,
       0,    29,     0,     0,     0,     0,    15,     0,     2,     6,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    13,    14,     0,     0,     0,    16,     4,     0,    22,
      23,    24,    25,    26,    27,     0,     0,    31,    32,     8,
       0,     0,     0,     0,     0,     0,    10,     0,     0,    18,
      17,    19,    20,    21,     0,     0,     0,     9,     0,     0,
       0,     0,    11,    12
  };

  const signed char
  cppcalc::yypgoto_[] =
  {
     -36,   -36,   -36,   -16,   -13,   -36,    39,    18,    -5
  };

  const signed char
  cppcalc::yydefgoto_[] =
  {
      -1,     2,     3,    14,    15,    45,    19,    20,    21
  };

  const unsigned char
  cppcalc::yytable_[] =
  {
      16,    29,     4,     5,    17,    24,    28,     7,     1,    16,
      23,     8,    13,    18,     9,    13,    48,    43,    44,    10,
      11,    12,    30,    55,    67,    68,    31,    16,     6,    25,
      13,    26,    27,    32,    16,    29,    33,    34,    35,    36,
      37,    38,    29,    16,    39,    40,    41,    22,    46,    74,
      16,    49,    50,    51,    52,    53,    54,    42,    56,    47,
      16,    29,    80,    81,    59,    57,    58,    29,    29,    16,
      78,    79,     0,    16,    16,    16,    16,     0,    69,    70,
      71,    72,    73,     0,     0,    75,    76,     7,     0,    65,
       0,     8,     0,     0,     9,     0,     0,     0,     0,    10,
      11,    12,     7,     0,     0,     0,     8,     0,    66,     9,
      13,     0,     0,     0,    10,    11,    12,     7,     0,     0,
      77,     8,     0,     0,     9,    13,     0,     0,     0,    10,
      11,    12,     7,     0,     0,     0,     8,     0,     0,     9,
      13,     0,     0,    82,    10,    11,    12,     7,     0,     0,
       0,     8,     0,     0,     9,    13,     0,     0,    83,    10,
      11,    12,     7,     0,     0,     0,     8,     0,     0,     9,
      13,     0,     0,     0,    10,    11,    12,    60,    61,    62,
      63,    64,     0,     0,     0,    13
  };

  const signed char
  cppcalc::yycheck_[] =
  {
       5,    14,     0,     4,    39,    10,     5,     6,     3,    14,
      29,    10,    29,    30,    13,    29,    32,    29,    30,    18,
      19,    20,    22,    39,    15,    16,    30,    32,    29,    11,
      29,    21,    39,     7,    39,    48,    23,    24,    25,    26,
      27,    28,    55,    48,    11,    14,    21,     8,    30,    65,
      55,    33,    34,    35,    36,    37,    38,    21,    40,    38,
      65,    74,    78,    79,    21,    38,    38,    80,    81,    74,
      11,    11,    -1,    78,    79,    80,    81,    -1,    60,    61,
      62,    63,    64,    -1,    -1,    67,    68,     6,    -1,     8,
      -1,    10,    -1,    -1,    13,    -1,    -1,    -1,    -1,    18,
      19,    20,     6,    -1,    -1,    -1,    10,    -1,    12,    13,
      29,    -1,    -1,    -1,    18,    19,    20,     6,    -1,    -1,
       9,    10,    -1,    -1,    13,    29,    -1,    -1,    -1,    18,
      19,    20,     6,    -1,    -1,    -1,    10,    -1,    -1,    13,
      29,    -1,    -1,    17,    18,    19,    20,     6,    -1,    -1,
      -1,    10,    -1,    -1,    13,    29,    -1,    -1,    17,    18,
      19,    20,     6,    -1,    -1,    -1,    10,    -1,    -1,    13,
      29,    -1,    -1,    -1,    18,    19,    20,    31,    32,    33,
      34,    35,    -1,    -1,    -1,    29
  };

  const unsigned char
  cppcalc::yystos_[] =
  {
       0,     3,    41,    42,     0,     4,    29,     6,    10,    13,
      18,    19,    20,    29,    43,    44,    48,    39,    30,    46,
      47,    48,    46,    29,    48,    47,    21,    39,     5,    44,
      22,    30,     7,    23,    24,    25,    26,    27,    28,    11,
      14,    21,    21,    29,    30,    45,    47,    38,    43,    47,
      47,    47,    47,    47,    47,    43,    47,    38,    38,    21,
      31,    32,    33,    34,    35,     8,    12,    15,    16,    47,
      47,    47,    47,    47,    43,    47,    47,     9,    11,    11,
      43,    43,    17,    17
  };

  const unsigned char
  cppcalc::yyr1_[] =
  {
       0,    40,    41,    42,    42,    42,    43,    43,    44,    44,
      44,    44,    44,    44,    44,    44,    45,    45,    45,    45,
      45,    45,    46,    46,    46,    46,    46,    46,    47,    47,
      48,    48,    48
  };

  const unsigned char
  cppcalc::yyr2_[] =
  {
       0,     2,     5,     2,     5,     0,     2,     1,     4,     7,
       5,     9,     9,     3,     3,     2,     1,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     1,     1,
       1,     4,     4
  };


#if YYDEBUG
  // YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
  // First, the terminals, then, starting at \a yyntokens_, nonterminals.
  const char*
  const cppcalc::yytname_[] =
  {
  "$end", "error", "$undefined", "VAR", "START", "END", "IF", "THEN",
  "ELSE", "ENDIF", "WHILE", "DO", "ENDWHILE", "FOR", "FROM", "TO",
  "DOWNTO", "ENDFOR", "READ", "WRITE", "SKIP", "SC", "ASSIGN", "EQUAL",
  "DIFFERENT", "SMALLER_THAN", "BIGGER_THAN", "SMALLER_THAN_OR_EQUAL",
  "BIGGER_THAN_OR_EQUAL", "pidentifier", "num", "SUB", "ADD", "MULT",
  "DIV", "MOD", "NEG", "POW", "RIGHT_BRACKET", "LEFT_BRACKET", "$accept",
  "program", "vdeclarations", "commands", "command", "expression",
  "condition", "value", "identifier", YY_NULLPTR
  };


  const unsigned char
  cppcalc::yyrline_[] =
  {
       0,    83,    83,    87,    88,    89,    93,    94,    98,    99,
     100,   101,   102,   103,   104,   105,   109,   110,   111,   112,
     113,   114,   118,   119,   120,   121,   122,   123,   127,   128,
     132,   133,   134
  };

  // Print the state stack on the debug stream.
  void
  cppcalc::yystack_print_ ()
  {
    *yycdebug_ << "Stack now";
    for (stack_type::const_iterator
           i = yystack_.begin (),
           i_end = yystack_.end ();
         i != i_end; ++i)
      *yycdebug_ << ' ' << i->state;
    *yycdebug_ << std::endl;
  }

  // Report on the debug stream that the rule \a yyrule is going to be reduced.
  void
  cppcalc::yy_reduce_print_ (int yyrule)
  {
    unsigned int yylno = yyrline_[yyrule];
    int yynrhs = yyr2_[yyrule];
    // Print the symbols being reduced, and their result.
    *yycdebug_ << "Reducing stack by rule " << yyrule - 1
               << " (line " << yylno << "):" << std::endl;
    // The symbols being reduced.
    for (int yyi = 0; yyi < yynrhs; yyi++)
      YY_SYMBOL_PRINT ("   $" << yyi + 1 << " =",
                       yystack_[(yynrhs) - (yyi + 1)]);
  }
#endif // YYDEBUG

  // Symbol number corresponding to token number t.
  inline
  cppcalc::token_number_type
  cppcalc::yytranslate_ (int t)
  {
    static
    const token_number_type
    translate_table[] =
    {
     0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39
    };
    const unsigned int user_token_number_max_ = 294;
    const token_number_type undef_token_ = 2;

    if (static_cast<int>(t) <= yyeof_)
      return yyeof_;
    else if (static_cast<unsigned int> (t) <= user_token_number_max_)
      return translate_table[t];
    else
      return undef_token_;
  }


} // yy
#line 1166 "cppcalc.tab.cc" // lalr1.cc:1167
#line 137 "cppcalc.yy" // lalr1.cc:1168


#include <fstream>
#include <iostream>
#include <map>
#include <memory>
#include <vector>

#include "types.h"
#include "functions.h"

#define CODE_DBG 1
using namespace std;

int memory_used = 10;
vector<vector<string>> codeFragments;
std::map<string, std::shared_ptr<value_t>> variables;

void endThisShit(int codePtr)
{
    ofstream myfile;
    myfile.open ("output.txt");

    // for(vector<string> code : codeFragments)
    // {
    //     for(string s : code)
    //     {
    //         myfile << s << endl;
    //     }
    //     myfile << endl;
    // }

    for(string code : codeFragments[codePtr])
    {
        myfile << code << endl;
    }

    myfile << "HALT" << endl;
        
    myfile.close();
    
}

int concatenate_codes(int c1, int c2)
{
    cout << __FUNCTION__ << endl;
    vector<string> code = codeFragments[c1];
    code.insert(code.end(), codeFragments[c2].begin(), codeFragments[c2].end());
    
    codeFragments.push_back(code);
    return codeFragments.size() - 1;
}

int gen_commnad_assign(int idt, int expr)
{
	cout << __FUNCTION__ << endl;
    vector<string> code = codeFragments[idt];     // code emplaces adress of identifier in register a
    code.push_back("STORE 7");
    code.insert(code.end(), codeFragments[expr].begin(), codeFragments[expr].end());     // code emplaces adress of variable_2 in register a
    code.push_back("STOREI 7");

    codeFragments.push_back(code);
    return codeFragments.size() - 1;

}

int gen_command_write(int v)
{
    cout << __FUNCTION__ << endl;
    vector<string> code = codeFragments[v];
    code.push_back("STORE 8");
    code.push_back("LOADI 8");
    code.push_back("PUT");

    codeFragments.push_back(code);
    return codeFragments.size() - 1;
}

int gen_expr_value(int v)
{
    cout << __FUNCTION__ << endl;
    vector<string> code = codeFragments[v];     // code emplaces adress of variable in register a
    code.push_back("STORE 1");                  // register 8 has memory address of variable
    code.push_back("LOADI 1");                  // register a has actual value od variable
    
    codeFragments.push_back(code);
    return codeFragments.size() - 1;
}

int gen_expr_add(int v1, int v2)
{
	cout << __FUNCTION__ << endl;	
    vector<string> code = codeFragments[v1];                                         // code emplaces adress of variable_1 in register a
    code.push_back("STORE 1");                                                       // register 8 has memory address of variable_1
    code.insert(code.end(), codeFragments[v2].begin(), codeFragments[v2].end());     // code emplaces adress of variable_2 in register a
    code.push_back("STORE 2");                                                       // register 9 has memory address of variable_2
    code.push_back("LOADI 1");                                                       // register a has actual value od variable_1
    code.push_back("ADDI 2");                                                        // register a has sum of variable_1 and variable_2
    
    codeFragments.push_back(code);

    return codeFragments.size() - 1;
}

int gen_expr_sub(int v1, int v2)
{
    cout << __FUNCTION__ << endl;   
    vector<string> code = codeFragments[v1];                                         // code emplaces adress of variable_1 in register a
    code.push_back("STORE 1");                                                       // register 8 has memory address of variable_1
    code.insert(code.end(), codeFragments[v2].begin(), codeFragments[v2].end());     // code emplaces adress of variable_2 in register a
    code.push_back("STORE 2");                                                       // register 9 has memory address of variable_2
    code.push_back("LOADI 1");                                                       // register a has actual value od variable_1
    code.push_back("SUBI 2");                                                        // register a has sum of variable_1 and variable_2
    
    codeFragments.push_back(code);

    return codeFragments.size() - 1;
}

int gen_expr_mult(int v1, int v2)
{
    return 0;   
}

int gen_ConstNumber(int num)
{
    cout << __FUNCTION__ << endl;
    vector<string> code;

    setRegister(code, memory_used++);
    code.push_back("STORE 0");
    setRegister(code, num);
    code.push_back("STOREI 0");
    code.push_back("LOAD 0");
    
    codeFragments.push_back(code);
    return codeFragments.size() - 1;
}

int gen_Pidentifier(std::string* name)
{
    cout << __FUNCTION__ << *name << endl;
	vector<string> code;

	if(variables.find(*name) == variables.end())
    {
      	cerr << "ERROR: variable \'" << *name << "\' doesn't exist" << endl;
      	exit(0);
    }
    else
    {
    	if(variables[*name]->isArray){
    		cerr << "ERROR: variable \'" << *name << "\' is array type" << endl;
    		exit(0);
    	}	

    	setRegister(code, variables[*name]->memory_position);
    }

    codeFragments.push_back(code);
    return codeFragments.size() - 1;

}

int gen_ArrayConst(std::string* name, int position)
{
    cout << __FUNCTION__ << endl;
	vector<string> code;

	if(variables.find(*name) == variables.end())
    {
      	cerr << "ERROR: variable \'" << *name << "\' doesn't exist" << endl;
      	exit(0);
    }
    else
    {
    	if(!variables[*name]->isArray) 
    	{
    		cerr << "ERROR: variable \'" << *name << "\' is not array type" << endl;
    		exit(0);
    	}
    	if(variables[*name]->capacity <= position) 
    	{
			cerr << "ERROR: variable \'" << *name << "\' array out of bounds pseudo-exception" << endl;
    		exit(0);
    	}	

    	setRegister(code, variables[*name]->memory_position + position);
    }

    codeFragments.push_back(code);
    return codeFragments.size() - 1;

}

int gen_ArrayPid(std::string* arrayName, std::string* positionPid)
{
    cout << __FUNCTION__ << endl;
	vector<string> code;

	if(variables.find(*arrayName) == variables.end())
    {
      	cerr << "ERROR: variable \'" << *arrayName << "\' doesn't exist" << endl;
      	exit(0);
    }
    if(variables.find(*positionPid) == variables.end())
    {
      	cerr << "ERROR: variable \'" << *positionPid << "\' doesn't exist" << endl;
      	exit(0);
    }
    else
    {
    	if(!variables[*arrayName]->isArray) 
    	{
    		cerr << "ERROR: variable \'" << *arrayName << "\' is not array type" << endl;
    		exit(0);
    	}
    	if(variables[*positionPid]->isArray) 
    	{
    		cerr << "ERROR: variable \'" << *positionPid << "\' is array type" << endl;
    		exit(0);
    	}
    	setRegister(code, variables[*arrayName]->memory_position);
    	code.push_back("ADD " + to_string(variables[*positionPid]->memory_position));
    }
    
    codeFragments.push_back(code);
	return codeFragments.size() - 1;
}

void declareVariable(string* name)
{
    cout << __FUNCTION__ << endl;
    if(variables.find(*name) == variables.end())
    {
        variables[*name] = make_shared<value_t>(0, 0, memory_used, *name);
        memory_used++;

        if(CODE_DBG) cout << "memory usage: " << to_string(memory_used) << endl;

    }
    else
    {
      cerr << "ERROR: variable already exists" << endl;
    }
}

void declareArray(std::string* name, int capacity)
{
    cout << __FUNCTION__ << endl;
	if(variables.find(*name) == variables.end())
	{
        variables[*name] = make_shared<value_t>(1, 0, memory_used, *name);
        variables[*name]->capacity = capacity;
        memory_used += capacity;

        if(CODE_DBG) cout << "memory usage: " << to_string(memory_used) << endl;
    }
    else
    {
      cerr << "ERROR: variable already exists" << endl;
    }
}

void setRegister(vector<string>& code, int value)
{
	cout << __FUNCTION__ << endl;

    code.push_back("ZERO");

    bool firstShift = true;

    int i;
    int bits[32];
    for (i = 0; i < 32; ++i) {
		bits[31-i] = value & (1 << i) ? 1 : 0;
    }
    i = 0;
    
    while(!bits[i]) ++i;

    for (i; i < 32; ++i) 
    {
		if(bits[i])
		{
		    if(!firstShift)
		    {
				code.push_back("SHL");
		    }
		    code.push_back("INC");
		    firstShift = false;
		}
		else
		{
		    code.push_back("SHL");
		}
    }
}

void printVector(std::vector<string>& v)
{
	for(string s : v){
    	cout << s << endl;
    }
}

int main() 
{
  	cout << "\n>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n\n";
  	yy::cppcalc parser;
  	int v = parser.parse();
    cout << "\n>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n";

  	return v;
}

namespace yy {
    void cppcalc::error(location const &loc, const std::string& s) {
        std::cerr << "error at " << loc << ": " << s << std::endl;
    }
}
