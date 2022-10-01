// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATETRANSITGATEWAYMULTICASTDOMAINREQUEST_H
#define QTAWS_DISASSOCIATETRANSITGATEWAYMULTICASTDOMAINREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class DisassociateTransitGatewayMulticastDomainRequestPrivate;

class QTAWSEC2_EXPORT DisassociateTransitGatewayMulticastDomainRequest : public Ec2Request {

public:
    DisassociateTransitGatewayMulticastDomainRequest(const DisassociateTransitGatewayMulticastDomainRequest &other);
    DisassociateTransitGatewayMulticastDomainRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisassociateTransitGatewayMulticastDomainRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
