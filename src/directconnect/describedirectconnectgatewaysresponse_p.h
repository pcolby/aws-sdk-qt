// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDIRECTCONNECTGATEWAYSRESPONSE_P_H
#define QTAWS_DESCRIBEDIRECTCONNECTGATEWAYSRESPONSE_P_H

#include "directconnectresponse_p.h"

namespace QtAws {
namespace DirectConnect {

class DescribeDirectConnectGatewaysResponse;

class DescribeDirectConnectGatewaysResponsePrivate : public DirectConnectResponsePrivate {

public:

    explicit DescribeDirectConnectGatewaysResponsePrivate(DescribeDirectConnectGatewaysResponse * const q);

    void parseDescribeDirectConnectGatewaysResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeDirectConnectGatewaysResponse)
    Q_DISABLE_COPY(DescribeDirectConnectGatewaysResponsePrivate)

};

} // namespace DirectConnect
} // namespace QtAws

#endif
