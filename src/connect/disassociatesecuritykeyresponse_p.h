// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATESECURITYKEYRESPONSE_P_H
#define QTAWS_DISASSOCIATESECURITYKEYRESPONSE_P_H

#include "connectresponse_p.h"

namespace QtAws {
namespace Connect {

class DisassociateSecurityKeyResponse;

class DisassociateSecurityKeyResponsePrivate : public ConnectResponsePrivate {

public:

    explicit DisassociateSecurityKeyResponsePrivate(DisassociateSecurityKeyResponse * const q);

    void parseDisassociateSecurityKeyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DisassociateSecurityKeyResponse)
    Q_DISABLE_COPY(DisassociateSecurityKeyResponsePrivate)

};

} // namespace Connect
} // namespace QtAws

#endif
