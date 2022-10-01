// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEHOSTEDCONNECTIONRESPONSE_P_H
#define QTAWS_ASSOCIATEHOSTEDCONNECTIONRESPONSE_P_H

#include "directconnectresponse_p.h"

namespace QtAws {
namespace DirectConnect {

class AssociateHostedConnectionResponse;

class AssociateHostedConnectionResponsePrivate : public DirectConnectResponsePrivate {

public:

    explicit AssociateHostedConnectionResponsePrivate(AssociateHostedConnectionResponse * const q);

    void parseAssociateHostedConnectionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AssociateHostedConnectionResponse)
    Q_DISABLE_COPY(AssociateHostedConnectionResponsePrivate)

};

} // namespace DirectConnect
} // namespace QtAws

#endif
