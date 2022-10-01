// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATESECURITYKEYRESPONSE_P_H
#define QTAWS_ASSOCIATESECURITYKEYRESPONSE_P_H

#include "connectresponse_p.h"

namespace QtAws {
namespace Connect {

class AssociateSecurityKeyResponse;

class AssociateSecurityKeyResponsePrivate : public ConnectResponsePrivate {

public:

    explicit AssociateSecurityKeyResponsePrivate(AssociateSecurityKeyResponse * const q);

    void parseAssociateSecurityKeyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AssociateSecurityKeyResponse)
    Q_DISABLE_COPY(AssociateSecurityKeyResponsePrivate)

};

} // namespace Connect
} // namespace QtAws

#endif
