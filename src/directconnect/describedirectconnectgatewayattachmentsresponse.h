// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDIRECTCONNECTGATEWAYATTACHMENTSRESPONSE_H
#define QTAWS_DESCRIBEDIRECTCONNECTGATEWAYATTACHMENTSRESPONSE_H

#include "directconnectresponse.h"
#include "describedirectconnectgatewayattachmentsrequest.h"

namespace QtAws {
namespace DirectConnect {

class DescribeDirectConnectGatewayAttachmentsResponsePrivate;

class QTAWSDIRECTCONNECT_EXPORT DescribeDirectConnectGatewayAttachmentsResponse : public DirectConnectResponse {
    Q_OBJECT

public:
    DescribeDirectConnectGatewayAttachmentsResponse(const DescribeDirectConnectGatewayAttachmentsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeDirectConnectGatewayAttachmentsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeDirectConnectGatewayAttachmentsResponse)
    Q_DISABLE_COPY(DescribeDirectConnectGatewayAttachmentsResponse)

};

} // namespace DirectConnect
} // namespace QtAws

#endif
