// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTCHATCONTACTRESPONSE_P_H
#define QTAWS_STARTCHATCONTACTRESPONSE_P_H

#include "connectresponse_p.h"

namespace QtAws {
namespace Connect {

class StartChatContactResponse;

class StartChatContactResponsePrivate : public ConnectResponsePrivate {

public:

    explicit StartChatContactResponsePrivate(StartChatContactResponse * const q);

    void parseStartChatContactResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StartChatContactResponse)
    Q_DISABLE_COPY(StartChatContactResponsePrivate)

};

} // namespace Connect
} // namespace QtAws

#endif
