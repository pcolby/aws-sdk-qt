// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTRANSITGATEWAYMULTICASTDOMAINASSOCIATIONSREQUEST_H
#define QTAWS_GETTRANSITGATEWAYMULTICASTDOMAINASSOCIATIONSREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class GetTransitGatewayMulticastDomainAssociationsRequestPrivate;

class QTAWSEC2_EXPORT GetTransitGatewayMulticastDomainAssociationsRequest : public Ec2Request {

public:
    GetTransitGatewayMulticastDomainAssociationsRequest(const GetTransitGatewayMulticastDomainAssociationsRequest &other);
    GetTransitGatewayMulticastDomainAssociationsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetTransitGatewayMulticastDomainAssociationsRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
