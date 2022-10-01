// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ALLOCATECONNECTIONONINTERCONNECTRESPONSE_P_H
#define QTAWS_ALLOCATECONNECTIONONINTERCONNECTRESPONSE_P_H

#include "directconnectresponse_p.h"

namespace QtAws {
namespace DirectConnect {

class AllocateConnectionOnInterconnectResponse;

class AllocateConnectionOnInterconnectResponsePrivate : public DirectConnectResponsePrivate {

public:

    explicit AllocateConnectionOnInterconnectResponsePrivate(AllocateConnectionOnInterconnectResponse * const q);

    void parseAllocateConnectionOnInterconnectResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AllocateConnectionOnInterconnectResponse)
    Q_DISABLE_COPY(AllocateConnectionOnInterconnectResponsePrivate)

};

} // namespace DirectConnect
} // namespace QtAws

#endif
