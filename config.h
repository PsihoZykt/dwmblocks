//Modify this file to change what commands output to your statusbar, and recompile using the make command.


static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
{"", "kbselect", 0, 30},
{""  , "internet"     , 5     , 20}  ,
{"",	"battery",	10,	28},  
{"",	"pacpackages",	18000,	8},
{"",	"volume",	0,	10},
{"",	"bluetooth-manager",	5,	29}, 
{"",	"memory",	10,	14}, 
{"",	"forecast",	18000,	5},
{"",	"clock",	60,	1},
{"",	"systray",	0,	15},

};


 // static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
  //	        { ""  , "battery"                                , 5     , 11}  ,
/*  	        { ""  , "cpu"                                    , 10    , 18} , */
	  //        { ""  , "pacpackages"                            , 0     , 0}  ,
	/*          { ""  , "cat /tmp/recordingicon 2>/dev/null"     , 0     , 9}  , */
	/*        { ""  , "music"                                  , 0     , 11} , */
      //      { ""  , "bluetooth-manager"                      , 10    , 8}  ,
        //    { "", "kbselect"                               , 0     , 15} ,
	/*        { ""  , "news"                                   , 0     , 6}  , */
	/*        { ""  , "crypto"                                 , 0     , 13} , */
	/*        { ""  , "price lbc \"LBRY Token\" 📚"            , 9000  , 22} , */
	/*        { ""  , "price bat \"Basic Attention Token\" 🦁" , 9000  , 20} , */
	/*        { ""  , "price link \"Chainlink\" 🔗"            , 300   , 25} , */
	/*        { ""  , "price xmr \"Monero\" 🔒"                , 9000  , 24} , */
	/*        { ""  , "price eth Ethereum 🍸"                  , 9000  , 23} , */
	/*        { ""  , "price btc Bitcoin 💰"                   , 9000  , 21} , */
	/*        { ""  , "torrent"                                , 20    , 7}  , */
          //  { ""  , "memory"                                 , 10    , 14} ,
	/*        { ""  , "moonphase"                              , 18000 , 17} , */
	          //{ ""  , "forecast"                               , 18000     , 5}  ,
  /*          { ""  , "mailbox"                                , 180   , 12}, */
	/*        //{ ""  , "nettraf"                                , 1     , 16} , */
	          //{ ""  , "volume"                                 , 0     , 10} ,
	          //{ ""  , "internet"                               , 5     , 4}  ,

		        //{ ""  , "clock"                                  , 60    , 1}  ,
		        //{ ""  , "systray"                                  , 60    , 2}  ,
/*	{"",	"help-icon",	0,	15}, */
//};
//Sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char *delim = " ";
// Have dwmblocks automatically recompile and run when you edit this file in
// vim with the following line in your vimrc/init.vim:

// autocmd BufWritePost ~/.local/src/dwmblocks/config.h !cd ~/.local/src/dwmblocks/; sudo make install && { killall -q dwmblocks;setsid dwmblocks & }
