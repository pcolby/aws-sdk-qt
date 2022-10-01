// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATETRANSITGATEWAYROUTETABLEREQUEST_H
#define QTAWS_ASSOCIATETRANSITGATEWAYROUTETABLEREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class AssociateTransitGatewayRouteTableRequestPrivate;

class QTAWSEC2_EXPORT AssociateTransitGatewayRouteTableRequest : public Ec2Request {

public:
    AssociateTransitGatewayRouteTableRequest(const AssociateTransitGatewayRouteTableRequest &other);
    AssociateTransitGatewayRouteTableRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateTransitGatewayRouteTableRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
