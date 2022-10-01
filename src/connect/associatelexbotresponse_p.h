// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATELEXBOTRESPONSE_P_H
#define QTAWS_ASSOCIATELEXBOTRESPONSE_P_H

#include "connectresponse_p.h"

namespace QtAws {
namespace Connect {

class AssociateLexBotResponse;

class AssociateLexBotResponsePrivate : public ConnectResponsePrivate {

public:

    explicit AssociateLexBotResponsePrivate(AssociateLexBotResponse * const q);

    void parseAssociateLexBotResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AssociateLexBotResponse)
    Q_DISABLE_COPY(AssociateLexBotResponsePrivate)

};

} // namespace Connect
} // namespace QtAws

#endif
