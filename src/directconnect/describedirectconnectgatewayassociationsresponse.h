// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDIRECTCONNECTGATEWAYASSOCIATIONSRESPONSE_H
#define QTAWS_DESCRIBEDIRECTCONNECTGATEWAYASSOCIATIONSRESPONSE_H

#include "directconnectresponse.h"
#include "describedirectconnectgatewayassociationsrequest.h"

namespace QtAws {
namespace DirectConnect {

class DescribeDirectConnectGatewayAssociationsResponsePrivate;

class QTAWSDIRECTCONNECT_EXPORT DescribeDirectConnectGatewayAssociationsResponse : public DirectConnectResponse {
    Q_OBJECT

public:
    DescribeDirectConnectGatewayAssociationsResponse(const DescribeDirectConnectGatewayAssociationsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeDirectConnectGatewayAssociationsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeDirectConnectGatewayAssociationsResponse)
    Q_DISABLE_COPY(DescribeDirectConnectGatewayAssociationsResponse)

};

} // namespace DirectConnect
} // namespace QtAws

#endif
