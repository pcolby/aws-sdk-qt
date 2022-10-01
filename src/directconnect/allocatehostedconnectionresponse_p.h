// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ALLOCATEHOSTEDCONNECTIONRESPONSE_P_H
#define QTAWS_ALLOCATEHOSTEDCONNECTIONRESPONSE_P_H

#include "directconnectresponse_p.h"

namespace QtAws {
namespace DirectConnect {

class AllocateHostedConnectionResponse;

class AllocateHostedConnectionResponsePrivate : public DirectConnectResponsePrivate {

public:

    explicit AllocateHostedConnectionResponsePrivate(AllocateHostedConnectionResponse * const q);

    void parseAllocateHostedConnectionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AllocateHostedConnectionResponse)
    Q_DISABLE_COPY(AllocateHostedConnectionResponsePrivate)

};

} // namespace DirectConnect
} // namespace QtAws

#endif
