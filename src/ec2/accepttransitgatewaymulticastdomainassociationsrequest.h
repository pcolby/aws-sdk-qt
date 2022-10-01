// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ACCEPTTRANSITGATEWAYMULTICASTDOMAINASSOCIATIONSREQUEST_H
#define QTAWS_ACCEPTTRANSITGATEWAYMULTICASTDOMAINASSOCIATIONSREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class AcceptTransitGatewayMulticastDomainAssociationsRequestPrivate;

class QTAWSEC2_EXPORT AcceptTransitGatewayMulticastDomainAssociationsRequest : public Ec2Request {

public:
    AcceptTransitGatewayMulticastDomainAssociationsRequest(const AcceptTransitGatewayMulticastDomainAssociationsRequest &other);
    AcceptTransitGatewayMulticastDomainAssociationsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AcceptTransitGatewayMulticastDomainAssociationsRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
