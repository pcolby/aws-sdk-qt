// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECONNECTIONSONINTERCONNECTRESPONSE_P_H
#define QTAWS_DESCRIBECONNECTIONSONINTERCONNECTRESPONSE_P_H

#include "directconnectresponse_p.h"

namespace QtAws {
namespace DirectConnect {

class DescribeConnectionsOnInterconnectResponse;

class DescribeConnectionsOnInterconnectResponsePrivate : public DirectConnectResponsePrivate {

public:

    explicit DescribeConnectionsOnInterconnectResponsePrivate(DescribeConnectionsOnInterconnectResponse * const q);

    void parseDescribeConnectionsOnInterconnectResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeConnectionsOnInterconnectResponse)
    Q_DISABLE_COPY(DescribeConnectionsOnInterconnectResponsePrivate)

};

} // namespace DirectConnect
} // namespace QtAws

#endif
