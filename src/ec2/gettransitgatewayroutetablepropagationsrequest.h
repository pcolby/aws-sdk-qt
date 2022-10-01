// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTRANSITGATEWAYROUTETABLEPROPAGATIONSREQUEST_H
#define QTAWS_GETTRANSITGATEWAYROUTETABLEPROPAGATIONSREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class GetTransitGatewayRouteTablePropagationsRequestPrivate;

class QTAWSEC2_EXPORT GetTransitGatewayRouteTablePropagationsRequest : public Ec2Request {

public:
    GetTransitGatewayRouteTablePropagationsRequest(const GetTransitGatewayRouteTablePropagationsRequest &other);
    GetTransitGatewayRouteTablePropagationsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetTransitGatewayRouteTablePropagationsRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
