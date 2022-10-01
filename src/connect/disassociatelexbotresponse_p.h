// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATELEXBOTRESPONSE_P_H
#define QTAWS_DISASSOCIATELEXBOTRESPONSE_P_H

#include "connectresponse_p.h"

namespace QtAws {
namespace Connect {

class DisassociateLexBotResponse;

class DisassociateLexBotResponsePrivate : public ConnectResponsePrivate {

public:

    explicit DisassociateLexBotResponsePrivate(DisassociateLexBotResponse * const q);

    void parseDisassociateLexBotResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DisassociateLexBotResponse)
    Q_DISABLE_COPY(DisassociateLexBotResponsePrivate)

};

} // namespace Connect
} // namespace QtAws

#endif
