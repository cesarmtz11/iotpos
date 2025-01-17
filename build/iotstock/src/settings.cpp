// This file is generated by kconfig_compiler from iotstock.kcfg.
// All changes you do to this file will be lost.

#include "settings.h"

#include <kglobal.h>
#include <QtCore/QFile>

class SettingsHelper
{
  public:
    SettingsHelper() : q(0) {}
    ~SettingsHelper() { delete q; }
    Settings *q;
};
K_GLOBAL_STATIC(SettingsHelper, s_globalSettings)
Settings *Settings::self()
{
  if (!s_globalSettings->q) {
    new Settings;
    s_globalSettings->q->readConfig();
  }

  return s_globalSettings->q;
}

Settings::Settings(  )
  : KConfigSkeleton( QLatin1String( "squeezerc" ) )
{
  Q_ASSERT(!s_globalSettings->q);
  s_globalSettings->q = this;
  setCurrentGroup( QLatin1String( "squeezeView" ) );

  QList<int> defaultSplitterSizes;

  KConfigSkeleton::ItemIntList  *itemSplitterSizes;
  itemSplitterSizes = new KConfigSkeleton::ItemIntList( currentGroup(), QLatin1String( "SplitterSizes" ), mSplitterSizes, defaultSplitterSizes );
  addItem( itemSplitterSizes, QLatin1String( "SplitterSizes" ) );
  KConfigSkeleton::ItemBool  *itemIsProductsGridDefault;
  itemIsProductsGridDefault = new KConfigSkeleton::ItemBool( currentGroup(), QLatin1String( "isProductsGridDefault" ), mIsProductsGridDefault, true );
  addItem( itemIsProductsGridDefault, QLatin1String( "isProductsGridDefault" ) );

  setCurrentGroup( QLatin1String( "QuickView" ) );

  KConfigSkeleton::ItemInt  *itemMostSoldMaxValue;
  itemMostSoldMaxValue = new KConfigSkeleton::ItemInt( currentGroup(), QLatin1String( "mostSoldMaxValue" ), mMostSoldMaxValue, 15 );
  addItem( itemMostSoldMaxValue, QLatin1String( "mostSoldMaxValue" ) );
  KConfigSkeleton::ItemInt  *itemMostSoldMinValue;
  itemMostSoldMinValue = new KConfigSkeleton::ItemInt( currentGroup(), QLatin1String( "mostSoldMinValue" ), mMostSoldMinValue, 0 );
  addItem( itemMostSoldMinValue, QLatin1String( "mostSoldMinValue" ) );

  setCurrentGroup( QLatin1String( "Styles" ) );

  KConfigSkeleton::ItemString  *itemStyleName;
  itemStyleName = new KConfigSkeleton::ItemString( currentGroup(), QLatin1String( "styleName" ), mStyleName, QLatin1String( "simple" ) );
  addItem( itemStyleName, QLatin1String( "styleName" ) );

  setCurrentGroup( QLatin1String( "Security" ) );

  KConfigSkeleton::ItemBool  *itemLowSecurityMode;
  itemLowSecurityMode = new KConfigSkeleton::ItemBool( currentGroup(), QLatin1String( "lowSecurityMode" ), mLowSecurityMode, true );
  addItem( itemLowSecurityMode, QLatin1String( "lowSecurityMode" ) );

  setCurrentGroup( QLatin1String( "Database" ) );

  KConfigSkeleton::ItemString  *itemEditDBServer;
  itemEditDBServer = new KConfigSkeleton::ItemString( currentGroup(), QLatin1String( "editDBServer" ), mEditDBServer, QLatin1String( "localhost" ) );
  addItem( itemEditDBServer, QLatin1String( "editDBServer" ) );
  KConfigSkeleton::ItemString  *itemEditDBUsername;
  itemEditDBUsername = new KConfigSkeleton::ItemString( currentGroup(), QLatin1String( "editDBUsername" ), mEditDBUsername, QLatin1String( "iotposclient" ) );
  addItem( itemEditDBUsername, QLatin1String( "editDBUsername" ) );
  KConfigSkeleton::ItemString  *itemEditDBPassword;
  itemEditDBPassword = new KConfigSkeleton::ItemString( currentGroup(), QLatin1String( "editDBPassword" ), mEditDBPassword, QLatin1String( "xarwit0721" ) );
  addItem( itemEditDBPassword, QLatin1String( "editDBPassword" ) );
  KConfigSkeleton::ItemString  *itemEditDBName;
  itemEditDBName = new KConfigSkeleton::ItemString( currentGroup(), QLatin1String( "editDBName" ), mEditDBName, QLatin1String( "iotposdb" ) );
  addItem( itemEditDBName, QLatin1String( "editDBName" ) );

  setCurrentGroup( QLatin1String( "Printer" ) );

  KConfigSkeleton::ItemBool  *itemShowDialogOnPrinting;
  itemShowDialogOnPrinting = new KConfigSkeleton::ItemBool( currentGroup(), QLatin1String( "showDialogOnPrinting" ), mShowDialogOnPrinting, true );
  addItem( itemShowDialogOnPrinting, QLatin1String( "showDialogOnPrinting" ) );
  KConfigSkeleton::ItemInt  *itemTicketTime;
  itemTicketTime = new KConfigSkeleton::ItemInt( currentGroup(), QLatin1String( "ticketTime" ), mTicketTime, 3 );
  addItem( itemTicketTime, QLatin1String( "ticketTime" ) );
  KConfigSkeleton::ItemBool  *itemSmallTicketDotMatrix;
  itemSmallTicketDotMatrix = new KConfigSkeleton::ItemBool( currentGroup(), QLatin1String( "smallTicketDotMatrix" ), mSmallTicketDotMatrix, true );
  addItem( itemSmallTicketDotMatrix, QLatin1String( "smallTicketDotMatrix" ) );
  KConfigSkeleton::ItemBool  *itemSmallTicketCUPS;
  itemSmallTicketCUPS = new KConfigSkeleton::ItemBool( currentGroup(), QLatin1String( "smallTicketCUPS" ), mSmallTicketCUPS, false );
  addItem( itemSmallTicketCUPS, QLatin1String( "smallTicketCUPS" ) );
  KConfigSkeleton::ItemBool  *itemBigReceipt;
  itemBigReceipt = new KConfigSkeleton::ItemBool( currentGroup(), QLatin1String( "bigReceipt" ), mBigReceipt, false );
  addItem( itemBigReceipt, QLatin1String( "bigReceipt" ) );
  KConfigSkeleton::ItemBool  *itemPrintBalances;
  itemPrintBalances = new KConfigSkeleton::ItemBool( currentGroup(), QLatin1String( "printBalances" ), mPrintBalances, false );
  addItem( itemPrintBalances, QLatin1String( "printBalances" ) );
  KConfigSkeleton::ItemBool  *itemPrintTicket;
  itemPrintTicket = new KConfigSkeleton::ItemBool( currentGroup(), QLatin1String( "printTicket" ), mPrintTicket, true );
  addItem( itemPrintTicket, QLatin1String( "printTicket" ) );
  KConfigSkeleton::ItemBool  *itemPrintChangedDateTicket;
  itemPrintChangedDateTicket = new KConfigSkeleton::ItemBool( currentGroup(), QLatin1String( "printChangedDateTicket" ), mPrintChangedDateTicket, false );
  addItem( itemPrintChangedDateTicket, QLatin1String( "printChangedDateTicket" ) );
  KConfigSkeleton::ItemString  *itemPrinterDevice;
  itemPrinterDevice = new KConfigSkeleton::ItemString( currentGroup(), QLatin1String( "printerDevice" ), mPrinterDevice, QLatin1String( "/dev/ttyAMA0" ) );
  addItem( itemPrinterDevice, QLatin1String( "printerDevice" ) );
  KConfigSkeleton::ItemString  *itemPrinterCodec;
  itemPrinterCodec = new KConfigSkeleton::ItemString( currentGroup(), QLatin1String( "printerCodec" ), mPrinterCodec, QLatin1String( "UTF-8" ) );
  addItem( itemPrinterCodec, QLatin1String( "printerCodec" ) );
}

Settings::~Settings()
{
  if (!s_globalSettings.isDestroyed()) {
    s_globalSettings->q = 0;
  }
}

