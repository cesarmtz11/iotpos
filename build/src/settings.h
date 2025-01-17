// This file is generated by kconfig_compiler from iotpos.kcfg.
// All changes you do to this file will be lost.
#ifndef SETTINGS_H
#define SETTINGS_H

#include <kconfigskeleton.h>
#include <kdebug.h>

class Settings : public KConfigSkeleton
{
  public:

    static Settings *self();
    ~Settings();

    /**
      Set How the main window is divided.
    */
    static
    void setSplitterSizes( const QList<int> & v )
    {
      if (!self()->isImmutable( QString::fromLatin1( "SplitterSizes" ) ))
        self()->mSplitterSizes = v;
    }

    /**
      Get How the main window is divided.
    */
    static
    QList<int> splitterSizes()
    {
      return self()->mSplitterSizes;
    }

    /**
      Set How the grid/purchase-list is divided.
    */
    static
    void setGridSplitterSizes( const QList<int> & v )
    {
      if (!self()->isImmutable( QString::fromLatin1( "GridSplitterSizes" ) ))
        self()->mGridSplitterSizes = v;
    }

    /**
      Get How the grid/purchase-list is divided.
    */
    static
    QList<int> gridSplitterSizes()
    {
      return self()->mGridSplitterSizes;
    }

    /**
      Set Store Name
    */
    static
    void setEditStoreName( const QString & v )
    {
      if (!self()->isImmutable( QString::fromLatin1( "editStoreName" ) ))
        self()->mEditStoreName = v;
    }

    /**
      Get Store Name
    */
    static
    QString editStoreName()
    {
      return self()->mEditStoreName;
    }

    /**
      Set Store Phone Number
    */
    static
    void setStorePhone( const QString & v )
    {
      if (!self()->isImmutable( QString::fromLatin1( "storePhone" ) ))
        self()->mStorePhone = v;
    }

    /**
      Get Store Phone Number
    */
    static
    QString storePhone()
    {
      return self()->mStorePhone;
    }

    /**
      Set Store Address
    */
    static
    void setStoreAddress( const QString & v )
    {
      if (!self()->isImmutable( QString::fromLatin1( "storeAddress" ) ))
        self()->mStoreAddress = v;
    }

    /**
      Get Store Address
    */
    static
    QString storeAddress()
    {
      return self()->mStoreAddress;
    }

    /**
      Set Ticket Message
    */
    static
    void setEditTicketMessage( const QString & v )
    {
      if (!self()->isImmutable( QString::fromLatin1( "editTicketMessage" ) ))
        self()->mEditTicketMessage = v;
    }

    /**
      Get Ticket Message
    */
    static
    QString editTicketMessage()
    {
      return self()->mEditTicketMessage;
    }

    /**
      Set Store Logo file
    */
    static
    void setStoreLogo( const QString & v )
    {
      if (!self()->isImmutable( QString::fromLatin1( "storeLogo" ) ))
        self()->mStoreLogo = v;
    }

    /**
      Get Store Logo file
    */
    static
    QString storeLogo()
    {
      return self()->mStoreLogo;
    }

    /**
      Set Print Logo on ticket Top
    */
    static
    void setChLogoOnTop( bool v )
    {
      if (!self()->isImmutable( QString::fromLatin1( "chLogoOnTop" ) ))
        self()->mChLogoOnTop = v;
    }

    /**
      Get Print Logo on ticket Top
    */
    static
    bool chLogoOnTop()
    {
      return self()->mChLogoOnTop;
    }

    /**
      Set Use Code Input for Customer Identification.
    */
    static
    void setGroupUserIdAsCode( bool v )
    {
      if (!self()->isImmutable( QString::fromLatin1( "groupUserIdAsCode" ) ))
        self()->mGroupUserIdAsCode = v;
    }

    /**
      Get Use Code Input for Customer Identification.
    */
    static
    bool groupUserIdAsCode()
    {
      return self()->mGroupUserIdAsCode;
    }

    /**
      Set Use 6 digits for customer id.
    */
    static
    void setRb6Digits( bool v )
    {
      if (!self()->isImmutable( QString::fromLatin1( "rb6Digits" ) ))
        self()->mRb6Digits = v;
    }

    /**
      Get Use 6 digits for customer id.
    */
    static
    bool rb6Digits()
    {
      return self()->mRb6Digits;
    }

    /**
      Set Use 12/13 Digits for customer id.
    */
    static
    void setRb12DigitsCustom( bool v )
    {
      if (!self()->isImmutable( QString::fromLatin1( "rb12DigitsCustom" ) ))
        self()->mRb12DigitsCustom = v;
    }

    /**
      Get Use 12/13 Digits for customer id.
    */
    static
    bool rb12DigitsCustom()
    {
      return self()->mRb12DigitsCustom;
    }

    /**
      Set POS Number
    */
    static
    void setEditTerminalNumber( int v )
    {
      if (!self()->isImmutable( QString::fromLatin1( "editTerminalNumber" ) ))
        self()->mEditTerminalNumber = v;
    }

    /**
      Get POS Number
    */
    static
    int editTerminalNumber()
    {
      return self()->mEditTerminalNumber;
    }

    /**
      Set Requiere delete authorisation
    */
    static
    void setRequiereDelAuth( bool v )
    {
      if (!self()->isImmutable( QString::fromLatin1( "requiereDelAuth" ) ))
        self()->mRequiereDelAuth = v;
    }

    /**
      Get Requiere delete authorisation
    */
    static
    bool requiereDelAuth()
    {
      return self()->mRequiereDelAuth;
    }

    /**
      Set Low Security Mode
    */
    static
    void setLowSecurityMode( bool v )
    {
      if (!self()->isImmutable( QString::fromLatin1( "lowSecurityMode" ) ))
        self()->mLowSecurityMode = v;
    }

    /**
      Get Low Security Mode
    */
    static
    bool lowSecurityMode()
    {
      return self()->mLowSecurityMode;
    }

    /**
      Set Show Currency
    */
    static
    void setShowCurrencyOnTotal( bool v )
    {
      if (!self()->isImmutable( QString::fromLatin1( "showCurrencyOnTotal" ) ))
        self()->mShowCurrencyOnTotal = v;
    }

    /**
      Get Show Currency
    */
    static
    bool showCurrencyOnTotal()
    {
      return self()->mShowCurrencyOnTotal;
    }

    /**
      Set Full Currency String
    */
    static
    void setEditCurrencyFull( const QString & v )
    {
      if (!self()->isImmutable( QString::fromLatin1( "editCurrencyFull" ) ))
        self()->mEditCurrencyFull = v;
    }

    /**
      Get Full Currency String
    */
    static
    QString editCurrencyFull()
    {
      return self()->mEditCurrencyFull;
    }

    /**
      Set Short Currency String
    */
    static
    void setEditCurrencyShort( const QString & v )
    {
      if (!self()->isImmutable( QString::fromLatin1( "editCurrencyShort" ) ))
        self()->mEditCurrencyShort = v;
    }

    /**
      Get Short Currency String
    */
    static
    QString editCurrencyShort()
    {
      return self()->mEditCurrencyShort;
    }

    /**
      Set Show Products Grid
    */
    static
    void setShowGrid( bool v )
    {
      if (!self()->isImmutable( QString::fromLatin1( "showGrid" ) ))
        self()->mShowGrid = v;
    }

    /**
      Get Show Products Grid
    */
    static
    bool showGrid()
    {
      return self()->mShowGrid;
    }

    /**
      Set Low Stock Alert
    */
    static
    void setStockAlertValue( int v )
    {
      if (!self()->isImmutable( QString::fromLatin1( "stockAlertValue" ) ))
        self()->mStockAlertValue = v;
    }

    /**
      Get Low Stock Alert
    */
    static
    int stockAlertValue()
    {
      return self()->mStockAlertValue;
    }

    /**
      Set Low Cash Level
    */
    static
    void setCashMinLevel( double v )
    {
      if (!self()->isImmutable( QString::fromLatin1( "cashMinLevel" ) ))
        self()->mCashMinLevel = v;
    }

    /**
      Get Low Cash Level
    */
    static
    double cashMinLevel()
    {
      return self()->mCashMinLevel;
    }

    /**
      Set Display Low Cash Warning
    */
    static
    void setDisplayWarningOnLowCash( bool v )
    {
      if (!self()->isImmutable( QString::fromLatin1( "displayWarningOnLowCash" ) ))
        self()->mDisplayWarningOnLowCash = v;
    }

    /**
      Get Display Low Cash Warning
    */
    static
    bool displayWarningOnLowCash()
    {
      return self()->mDisplayWarningOnLowCash;
    }

    /**
      Set Apply only first discount
    */
    static
    void setFirstDiscountOnly( bool v )
    {
      if (!self()->isImmutable( QString::fromLatin1( "firstDiscountOnly" ) ))
        self()->mFirstDiscountOnly = v;
    }

    /**
      Get Apply only first discount
    */
    static
    bool firstDiscountOnly()
    {
      return self()->mFirstDiscountOnly;
    }

    /**
      Set Add tax to prices. Tax is not included in price
    */
    static
    void setAddTax( bool v )
    {
      if (!self()->isImmutable( QString::fromLatin1( "addTax" ) ))
        self()->mAddTax = v;
    }

    /**
      Get Add tax to prices. Tax is not included in price
    */
    static
    bool addTax()
    {
      return self()->mAddTax;
    }

    /**
      Set Round to US Standard 5/4
    */
    static
    void setRoundToUSStandard( bool v )
    {
      if (!self()->isImmutable( QString::fromLatin1( "roundToUSStandard" ) ))
        self()->mRoundToUSStandard = v;
    }

    /**
      Get Round to US Standard 5/4
    */
    static
    bool roundToUSStandard()
    {
      return self()->mRoundToUSStandard;
    }

    /**
      Set Ask for Invoice generation
    */
    static
    void setAskForInvoice( bool v )
    {
      if (!self()->isImmutable( QString::fromLatin1( "askForInvoice" ) ))
        self()->mAskForInvoice = v;
    }

    /**
      Get Ask for Invoice generation
    */
    static
    bool askForInvoice()
    {
      return self()->mAskForInvoice;
    }

    /**
      Set Allow negative stock.
    */
    static
    void setAllowNegativeStock( bool v )
    {
      if (!self()->isImmutable( QString::fromLatin1( "allowNegativeStock" ) ))
        self()->mAllowNegativeStock = v;
    }

    /**
      Get Allow negative stock.
    */
    static
    bool allowNegativeStock()
    {
      return self()->mAllowNegativeStock;
    }

    /**
      Set DB Server Name
    */
    static
    void setEditDBServer( const QString & v )
    {
      if (!self()->isImmutable( QString::fromLatin1( "editDBServer" ) ))
        self()->mEditDBServer = v;
    }

    /**
      Get DB Server Name
    */
    static
    QString editDBServer()
    {
      return self()->mEditDBServer;
    }

    /**
      Set DB Username
    */
    static
    void setEditDBUsername( const QString & v )
    {
      if (!self()->isImmutable( QString::fromLatin1( "editDBUsername" ) ))
        self()->mEditDBUsername = v;
    }

    /**
      Get DB Username
    */
    static
    QString editDBUsername()
    {
      return self()->mEditDBUsername;
    }

    /**
      Set DB Password
    */
    static
    void setEditDBPassword( const QString & v )
    {
      if (!self()->isImmutable( QString::fromLatin1( "editDBPassword" ) ))
        self()->mEditDBPassword = v;
    }

    /**
      Get DB Password
    */
    static
    QString editDBPassword()
    {
      return self()->mEditDBPassword;
    }

    /**
      Set DB Name
    */
    static
    void setEditDBName( const QString & v )
    {
      if (!self()->isImmutable( QString::fromLatin1( "editDBName" ) ))
        self()->mEditDBName = v;
    }

    /**
      Get DB Name
    */
    static
    QString editDBName()
    {
      return self()->mEditDBName;
    }

    /**
      Set Delete empty cancelled transactions
    */
    static
    void setDeleteEmptyCancelledTransactions( bool v )
    {
      if (!self()->isImmutable( QString::fromLatin1( "deleteEmptyCancelledTransactions" ) ))
        self()->mDeleteEmptyCancelledTransactions = v;
    }

    /**
      Get Delete empty cancelled transactions
    */
    static
    bool deleteEmptyCancelledTransactions()
    {
      return self()->mDeleteEmptyCancelledTransactions;
    }

    /**
      Set Use style
    */
    static
    void setUseStyle( bool v )
    {
      if (!self()->isImmutable( QString::fromLatin1( "useStyle" ) ))
        self()->mUseStyle = v;
    }

    /**
      Get Use style
    */
    static
    bool useStyle()
    {
      return self()->mUseStyle;
    }

    /**
      Set Get Stylesheet Name
    */
    static
    void setStyleName( const QString & v )
    {
      if (!self()->isImmutable( QString::fromLatin1( "styleName" ) ))
        self()->mStyleName = v;
    }

    /**
      Get Get Stylesheet Name
    */
    static
    QString styleName()
    {
      return self()->mStyleName;
    }

    /**
      Set Allow any user to quit application
    */
    static
    void setAllowAnyUserToQuit( bool v )
    {
      if (!self()->isImmutable( QString::fromLatin1( "allowAnyUserToQuit" ) ))
        self()->mAllowAnyUserToQuit = v;
    }

    /**
      Get Allow any user to quit application
    */
    static
    bool allowAnyUserToQuit()
    {
      return self()->mAllowAnyUserToQuit;
    }

    /**
      Set Show a dialog when printing the ticket
    */
    static
    void setShowDialogOnPrinting( bool v )
    {
      if (!self()->isImmutable( QString::fromLatin1( "showDialogOnPrinting" ) ))
        self()->mShowDialogOnPrinting = v;
    }

    /**
      Get Show a dialog when printing the ticket
    */
    static
    bool showDialogOnPrinting()
    {
      return self()->mShowDialogOnPrinting;
    }

    /**
      Set Time showing the ticket dialog
    */
    static
    void setTicketTime( int v )
    {
      if (!self()->isImmutable( QString::fromLatin1( "ticketTime" ) ))
        self()->mTicketTime = v;
    }

    /**
      Get Time showing the ticket dialog
    */
    static
    int ticketTime()
    {
      return self()->mTicketTime;
    }

    /**
      Set There is a drawer and use it
    */
    static
    void setOpenDrawer( bool v )
    {
      if (!self()->isImmutable( QString::fromLatin1( "openDrawer" ) ))
        self()->mOpenDrawer = v;
    }

    /**
      Get There is a drawer and use it
    */
    static
    bool openDrawer()
    {
      return self()->mOpenDrawer;
    }

    /**
      Set Print a small receipt using a ticket printer -dot matrix-.
    */
    static
    void setSmallTicketDotMatrix( bool v )
    {
      if (!self()->isImmutable( QString::fromLatin1( "smallTicketDotMatrix" ) ))
        self()->mSmallTicketDotMatrix = v;
    }

    /**
      Get Print a small receipt using a ticket printer -dot matrix-.
    */
    static
    bool smallTicketDotMatrix()
    {
      return self()->mSmallTicketDotMatrix;
    }

    /**
      Set Print a small receipt using a thermal ticket printer -CUPS-
    */
    static
    void setSmallTicketCUPS( bool v )
    {
      if (!self()->isImmutable( QString::fromLatin1( "smallTicketCUPS" ) ))
        self()->mSmallTicketCUPS = v;
    }

    /**
      Get Print a small receipt using a thermal ticket printer -CUPS-
    */
    static
    bool smallTicketCUPS()
    {
      return self()->mSmallTicketCUPS;
    }

    /**
      Set Print a big receipt using a normal printer
    */
    static
    void setBigReceipt( bool v )
    {
      if (!self()->isImmutable( QString::fromLatin1( "bigReceipt" ) ))
        self()->mBigReceipt = v;
    }

    /**
      Get Print a big receipt using a normal printer
    */
    static
    bool bigReceipt()
    {
      return self()->mBigReceipt;
    }

    /**
      Set Print balances using ticket printer
    */
    static
    void setPrintBalances( bool v )
    {
      if (!self()->isImmutable( QString::fromLatin1( "printBalances" ) ))
        self()->mPrintBalances = v;
    }

    /**
      Get Print balances using ticket printer
    */
    static
    bool printBalances()
    {
      return self()->mPrintBalances;
    }

    /**
      Set Print tickets with ZERO in the TOTAL
    */
    static
    void setPrintZeroTicket( bool v )
    {
      if (!self()->isImmutable( QString::fromLatin1( "printZeroTicket" ) ))
        self()->mPrintZeroTicket = v;
    }

    /**
      Get Print tickets with ZERO in the TOTAL
    */
    static
    bool printZeroTicket()
    {
      return self()->mPrintZeroTicket;
    }

    /**
      Set Print Group/Pack Contents on tickets
    */
    static
    void setPrintPackContents( bool v )
    {
      if (!self()->isImmutable( QString::fromLatin1( "printPackContents" ) ))
        self()->mPrintPackContents = v;
    }

    /**
      Get Print Group/Pack Contents on tickets
    */
    static
    bool printPackContents()
    {
      return self()->mPrintPackContents;
    }

    /**
      Set Print SpecialOrders Instructions
    */
    static
    void setPrintSO( bool v )
    {
      if (!self()->isImmutable( QString::fromLatin1( "printSO" ) ))
        self()->mPrintSO = v;
    }

    /**
      Get Print SpecialOrders Instructions
    */
    static
    bool printSO()
    {
      return self()->mPrintSO;
    }

    /**
      Set Print Random Messages on tickets
    */
    static
    void setPrintRandomMsg( bool v )
    {
      if (!self()->isImmutable( QString::fromLatin1( "printRandomMsg" ) ))
        self()->mPrintRandomMsg = v;
    }

    /**
      Get Print Random Messages on tickets
    */
    static
    bool printRandomMsg()
    {
      return self()->mPrintRandomMsg;
    }

    /**
      Set Print Ticket (dou you have a ticket printer?)
    */
    static
    void setPrintTicket( bool v )
    {
      if (!self()->isImmutable( QString::fromLatin1( "printTicket" ) ))
        self()->mPrintTicket = v;
    }

    /**
      Get Print Ticket (dou you have a ticket printer?)
    */
    static
    bool printTicket()
    {
      return self()->mPrintTicket;
    }

    /**
      Set Print Date Changed Ticket
    */
    static
    void setPrintChangedDateTicket( bool v )
    {
      if (!self()->isImmutable( QString::fromLatin1( "printChangedDateTicket" ) ))
        self()->mPrintChangedDateTicket = v;
    }

    /**
      Get Print Date Changed Ticket
    */
    static
    bool printChangedDateTicket()
    {
      return self()->mPrintChangedDateTicket;
    }

    /**
      Set Get printer device to use for printing
    */
    static
    void setPrinterDevice( const QString & v )
    {
      if (!self()->isImmutable( QString::fromLatin1( "printerDevice" ) ))
        self()->mPrinterDevice = v;
    }

    /**
      Get Get printer device to use for printing
    */
    static
    QString printerDevice()
    {
      return self()->mPrinterDevice;
    }

    /**
      Set Get Printer Codec to use
    */
    static
    void setPrinterCodec( const QString & v )
    {
      if (!self()->isImmutable( QString::fromLatin1( "printerCodec" ) ))
        self()->mPrinterCodec = v;
    }

    /**
      Get Get Printer Codec to use
    */
    static
    QString printerCodec()
    {
      return self()->mPrinterCodec;
    }

  protected:
    Settings();
    friend class SettingsHelper;


    // iotpos
    QList<int> mSplitterSizes;
    QList<int> mGridSplitterSizes;

    // Store Preferences
    QString mEditStoreName;
    QString mStorePhone;
    QString mStoreAddress;
    QString mEditTicketMessage;
    QString mStoreLogo;
    bool mChLogoOnTop;

    // General Preferences
    bool mGroupUserIdAsCode;
    bool mRb6Digits;
    bool mRb12DigitsCustom;
    int mEditTerminalNumber;
    bool mRequiereDelAuth;
    bool mLowSecurityMode;
    bool mShowCurrencyOnTotal;
    QString mEditCurrencyFull;
    QString mEditCurrencyShort;
    bool mShowGrid;
    int mStockAlertValue;
    double mCashMinLevel;
    bool mDisplayWarningOnLowCash;
    bool mFirstDiscountOnly;
    bool mAddTax;
    bool mRoundToUSStandard;
    bool mAskForInvoice;
    bool mAllowNegativeStock;

    // Database
    QString mEditDBServer;
    QString mEditDBUsername;
    QString mEditDBPassword;
    QString mEditDBName;
    bool mDeleteEmptyCancelledTransactions;

    // Styles
    bool mUseStyle;
    QString mStyleName;

    // security
    bool mAllowAnyUserToQuit;

    // printer
    bool mShowDialogOnPrinting;
    int mTicketTime;
    bool mOpenDrawer;
    bool mSmallTicketDotMatrix;
    bool mSmallTicketCUPS;
    bool mBigReceipt;
    bool mPrintBalances;
    bool mPrintZeroTicket;
    bool mPrintPackContents;
    bool mPrintSO;
    bool mPrintRandomMsg;
    bool mPrintTicket;
    bool mPrintChangedDateTicket;
    QString mPrinterDevice;
    QString mPrinterCodec;

  private:
};

#endif

