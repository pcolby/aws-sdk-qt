// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ENABLETRANSITGATEWAYROUTETABLEPROPAGATIONREQUEST_H
#define QTAWS_ENABLETRANSITGATEWAYROUTETABLEPROPAGATIONREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class EnableTransitGatewayRouteTablePropagationRequestPrivate;

class QTAWSEC2_EXPORT EnableTransitGatewayRouteTablePropagationRequest : public Ec2Request {

public:
    EnableTransitGatewayRouteTablePropagationRequest(const EnableTransitGatewayRouteTablePropagationRequest &other);
    EnableTransitGatewayRouteTablePropagationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(EnableTransitGatewayRouteTablePropagationRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
