// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REJECTTRANSITGATEWAYMULTICASTDOMAINASSOCIATIONSRESPONSE_H
#define QTAWS_REJECTTRANSITGATEWAYMULTICASTDOMAINASSOCIATIONSRESPONSE_H

#include "ec2response.h"
#include "rejecttransitgatewaymulticastdomainassociationsrequest.h"

namespace QtAws {
namespace Ec2 {

class RejectTransitGatewayMulticastDomainAssociationsResponsePrivate;

class QTAWSEC2_EXPORT RejectTransitGatewayMulticastDomainAssociationsResponse : public Ec2Response {
    Q_OBJECT

public:
    RejectTransitGatewayMulticastDomainAssociationsResponse(const RejectTransitGatewayMulticastDomainAssociationsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RejectTransitGatewayMulticastDomainAssociationsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RejectTransitGatewayMulticastDomainAssociationsResponse)
    Q_DISABLE_COPY(RejectTransitGatewayMulticastDomainAssociationsResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
