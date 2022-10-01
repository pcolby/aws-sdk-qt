// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REJECTTRANSITGATEWAYMULTICASTDOMAINASSOCIATIONSREQUEST_H
#define QTAWS_REJECTTRANSITGATEWAYMULTICASTDOMAINASSOCIATIONSREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class RejectTransitGatewayMulticastDomainAssociationsRequestPrivate;

class QTAWSEC2_EXPORT RejectTransitGatewayMulticastDomainAssociationsRequest : public Ec2Request {

public:
    RejectTransitGatewayMulticastDomainAssociationsRequest(const RejectTransitGatewayMulticastDomainAssociationsRequest &other);
    RejectTransitGatewayMulticastDomainAssociationsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RejectTransitGatewayMulticastDomainAssociationsRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
