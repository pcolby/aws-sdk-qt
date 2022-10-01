// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDIRECTCONNECTGATEWAYATTACHMENTSRESPONSE_P_H
#define QTAWS_DESCRIBEDIRECTCONNECTGATEWAYATTACHMENTSRESPONSE_P_H

#include "directconnectresponse_p.h"

namespace QtAws {
namespace DirectConnect {

class DescribeDirectConnectGatewayAttachmentsResponse;

class DescribeDirectConnectGatewayAttachmentsResponsePrivate : public DirectConnectResponsePrivate {

public:

    explicit DescribeDirectConnectGatewayAttachmentsResponsePrivate(DescribeDirectConnectGatewayAttachmentsResponse * const q);

    void parseDescribeDirectConnectGatewayAttachmentsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeDirectConnectGatewayAttachmentsResponse)
    Q_DISABLE_COPY(DescribeDirectConnectGatewayAttachmentsResponsePrivate)

};

} // namespace DirectConnect
} // namespace QtAws

#endif
