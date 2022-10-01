// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATETRANSITGATEWAYMULTICASTDOMAINRESPONSE_H
#define QTAWS_ASSOCIATETRANSITGATEWAYMULTICASTDOMAINRESPONSE_H

#include "ec2response.h"
#include "associatetransitgatewaymulticastdomainrequest.h"

namespace QtAws {
namespace Ec2 {

class AssociateTransitGatewayMulticastDomainResponsePrivate;

class QTAWSEC2_EXPORT AssociateTransitGatewayMulticastDomainResponse : public Ec2Response {
    Q_OBJECT

public:
    AssociateTransitGatewayMulticastDomainResponse(const AssociateTransitGatewayMulticastDomainRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AssociateTransitGatewayMulticastDomainRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateTransitGatewayMulticastDomainResponse)
    Q_DISABLE_COPY(AssociateTransitGatewayMulticastDomainResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
