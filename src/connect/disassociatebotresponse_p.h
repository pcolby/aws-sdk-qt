// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEBOTRESPONSE_P_H
#define QTAWS_DISASSOCIATEBOTRESPONSE_P_H

#include "connectresponse_p.h"

namespace QtAws {
namespace Connect {

class DisassociateBotResponse;

class DisassociateBotResponsePrivate : public ConnectResponsePrivate {

public:

    explicit DisassociateBotResponsePrivate(DisassociateBotResponse * const q);

    void parseDisassociateBotResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DisassociateBotResponse)
    Q_DISABLE_COPY(DisassociateBotResponsePrivate)

};

} // namespace Connect
} // namespace QtAws

#endif
