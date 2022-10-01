// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEMACSECKEYRESPONSE_P_H
#define QTAWS_DISASSOCIATEMACSECKEYRESPONSE_P_H

#include "directconnectresponse_p.h"

namespace QtAws {
namespace DirectConnect {

class DisassociateMacSecKeyResponse;

class DisassociateMacSecKeyResponsePrivate : public DirectConnectResponsePrivate {

public:

    explicit DisassociateMacSecKeyResponsePrivate(DisassociateMacSecKeyResponse * const q);

    void parseDisassociateMacSecKeyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DisassociateMacSecKeyResponse)
    Q_DISABLE_COPY(DisassociateMacSecKeyResponsePrivate)

};

} // namespace DirectConnect
} // namespace QtAws

#endif
