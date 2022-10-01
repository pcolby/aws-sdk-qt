// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATETRANSITGATEWAYMULTICASTDOMAINREQUEST_H
#define QTAWS_ASSOCIATETRANSITGATEWAYMULTICASTDOMAINREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class AssociateTransitGatewayMulticastDomainRequestPrivate;

class QTAWSEC2_EXPORT AssociateTransitGatewayMulticastDomainRequest : public Ec2Request {

public:
    AssociateTransitGatewayMulticastDomainRequest(const AssociateTransitGatewayMulticastDomainRequest &other);
    AssociateTransitGatewayMulticastDomainRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateTransitGatewayMulticastDomainRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
