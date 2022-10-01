// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATETRANSITGATEWAYMULTICASTDOMAINRESPONSE_H
#define QTAWS_DISASSOCIATETRANSITGATEWAYMULTICASTDOMAINRESPONSE_H

#include "ec2response.h"
#include "disassociatetransitgatewaymulticastdomainrequest.h"

namespace QtAws {
namespace Ec2 {

class DisassociateTransitGatewayMulticastDomainResponsePrivate;

class QTAWSEC2_EXPORT DisassociateTransitGatewayMulticastDomainResponse : public Ec2Response {
    Q_OBJECT

public:
    DisassociateTransitGatewayMulticastDomainResponse(const DisassociateTransitGatewayMulticastDomainRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DisassociateTransitGatewayMulticastDomainRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisassociateTransitGatewayMulticastDomainResponse)
    Q_DISABLE_COPY(DisassociateTransitGatewayMulticastDomainResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
