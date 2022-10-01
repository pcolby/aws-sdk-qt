// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTLEXBOTSRESPONSE_P_H
#define QTAWS_LISTLEXBOTSRESPONSE_P_H

#include "connectresponse_p.h"

namespace QtAws {
namespace Connect {

class ListLexBotsResponse;

class ListLexBotsResponsePrivate : public ConnectResponsePrivate {

public:

    explicit ListLexBotsResponsePrivate(ListLexBotsResponse * const q);

    void parseListLexBotsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListLexBotsResponse)
    Q_DISABLE_COPY(ListLexBotsResponsePrivate)

};

} // namespace Connect
} // namespace QtAws

#endif
