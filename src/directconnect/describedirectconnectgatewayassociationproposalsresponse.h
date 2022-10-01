// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDIRECTCONNECTGATEWAYASSOCIATIONPROPOSALSRESPONSE_H
#define QTAWS_DESCRIBEDIRECTCONNECTGATEWAYASSOCIATIONPROPOSALSRESPONSE_H

#include "directconnectresponse.h"
#include "describedirectconnectgatewayassociationproposalsrequest.h"

namespace QtAws {
namespace DirectConnect {

class DescribeDirectConnectGatewayAssociationProposalsResponsePrivate;

class QTAWSDIRECTCONNECT_EXPORT DescribeDirectConnectGatewayAssociationProposalsResponse : public DirectConnectResponse {
    Q_OBJECT

public:
    DescribeDirectConnectGatewayAssociationProposalsResponse(const DescribeDirectConnectGatewayAssociationProposalsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeDirectConnectGatewayAssociationProposalsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeDirectConnectGatewayAssociationProposalsResponse)
    Q_DISABLE_COPY(DescribeDirectConnectGatewayAssociationProposalsResponse)

};

} // namespace DirectConnect
} // namespace QtAws

#endif
