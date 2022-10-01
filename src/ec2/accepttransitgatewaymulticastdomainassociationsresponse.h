// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ACCEPTTRANSITGATEWAYMULTICASTDOMAINASSOCIATIONSRESPONSE_H
#define QTAWS_ACCEPTTRANSITGATEWAYMULTICASTDOMAINASSOCIATIONSRESPONSE_H

#include "ec2response.h"
#include "accepttransitgatewaymulticastdomainassociationsrequest.h"

namespace QtAws {
namespace Ec2 {

class AcceptTransitGatewayMulticastDomainAssociationsResponsePrivate;

class QTAWSEC2_EXPORT AcceptTransitGatewayMulticastDomainAssociationsResponse : public Ec2Response {
    Q_OBJECT

public:
    AcceptTransitGatewayMulticastDomainAssociationsResponse(const AcceptTransitGatewayMulticastDomainAssociationsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AcceptTransitGatewayMulticastDomainAssociationsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AcceptTransitGatewayMulticastDomainAssociationsResponse)
    Q_DISABLE_COPY(AcceptTransitGatewayMulticastDomainAssociationsResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
