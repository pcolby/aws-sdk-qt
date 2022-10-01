// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REPLACETRANSITGATEWAYROUTEREQUEST_H
#define QTAWS_REPLACETRANSITGATEWAYROUTEREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class ReplaceTransitGatewayRouteRequestPrivate;

class QTAWSEC2_EXPORT ReplaceTransitGatewayRouteRequest : public Ec2Request {

public:
    ReplaceTransitGatewayRouteRequest(const ReplaceTransitGatewayRouteRequest &other);
    ReplaceTransitGatewayRouteRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ReplaceTransitGatewayRouteRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
