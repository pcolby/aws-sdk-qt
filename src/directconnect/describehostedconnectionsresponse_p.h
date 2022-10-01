// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEHOSTEDCONNECTIONSRESPONSE_P_H
#define QTAWS_DESCRIBEHOSTEDCONNECTIONSRESPONSE_P_H

#include "directconnectresponse_p.h"

namespace QtAws {
namespace DirectConnect {

class DescribeHostedConnectionsResponse;

class DescribeHostedConnectionsResponsePrivate : public DirectConnectResponsePrivate {

public:

    explicit DescribeHostedConnectionsResponsePrivate(DescribeHostedConnectionsResponse * const q);

    void parseDescribeHostedConnectionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeHostedConnectionsResponse)
    Q_DISABLE_COPY(DescribeHostedConnectionsResponsePrivate)

};

} // namespace DirectConnect
} // namespace QtAws

#endif
