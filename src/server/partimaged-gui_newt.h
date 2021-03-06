/***************************************************************************
                          partimaged-gui_newt.h  -  description
                             -------------------
    begin                : Wed Feb 21 2001
    copyright            : (C) 2000 by Franck Ladurelle
    email                : ladurelf@partimage.org
 ***************************************************************************/

/***************************************************************************
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 ***************************************************************************/

#ifndef PARTIMAGED_GUI_NEWT_H
#define PARTIMAGED_GUI_NEWT_H

#include <newt.h>
#include <time.h>

#include "partimage.h"
#include "partimaged.h"
#include "partimaged-gui.h"


// =======================================================
class CPartimagedInterfaceNewt : public CPartimagedInterface
{
public:
  CPartimagedInterfaceNewt();
  virtual ~CPartimagedInterfaceNewt();
  virtual void Status(char * msg);
  virtual void show();
  virtual void SetState(int client, const char * state);
  virtual void SetHostname(int client, const char * state);
  virtual void SetLocation(int client, const char * locate);
  virtual void SetSize(int client, QWORD size);
  virtual void SetSize(int client, const char * size);
private:
  newtComponent m_formMain, m_Scroll;
  newtComponent *m_labelClient;
  newtComponent *m_labelClientState;
  newtComponent *m_labelClientHostname;
  newtComponent *m_labelClientLocation;
  newtComponent *m_labelClientSize;
  newtComponent m_labelClientTitle;
  newtComponent m_labelClientStateTitle;
  newtComponent m_labelClientHostnameTitle;
  newtComponent m_labelClientLocationTitle;
  newtComponent m_labelClientSizeTitle;
};

#endif // PARTIMAGED_GUI_NEWT_H

