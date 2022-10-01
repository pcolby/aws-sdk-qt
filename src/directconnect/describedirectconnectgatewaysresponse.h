// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDIRECTCONNECTGATEWAYSRESPONSE_H
#define QTAWS_DESCRIBEDIRECTCONNECTGATEWAYSRESPONSE_H

#include "directconnectresponse.h"
#include "describedirectconnectgatewaysrequest.h"

namespace QtAws {
namespace DirectConnect {

class DescribeDirectConnectGatewaysResponsePrivate;

class QTAWSDIRECTCONNECT_EXPORT DescribeDirectConnectGatewaysResponse : public DirectConnectResponse {
    Q_OBJECT

public:
    DescribeDirectConnectGatewaysResponse(const DescribeDirectConnectGatewaysRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeDirectConnectGatewaysRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeDirectConnectGatewaysResponse)
    Q_DISABLE_COPY(DescribeDirectConnectGatewaysResponse)

};

} // namespace DirectConnect
} // namespace QtAws

#endif
