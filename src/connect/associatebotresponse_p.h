// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEBOTRESPONSE_P_H
#define QTAWS_ASSOCIATEBOTRESPONSE_P_H

#include "connectresponse_p.h"

namespace QtAws {
namespace Connect {

class AssociateBotResponse;

class AssociateBotResponsePrivate : public ConnectResponsePrivate {

public:

    explicit AssociateBotResponsePrivate(AssociateBotResponse * const q);

    void parseAssociateBotResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AssociateBotResponse)
    Q_DISABLE_COPY(AssociateBotResponsePrivate)

};

} // namespace Connect
} // namespace QtAws

#endif
