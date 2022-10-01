// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETRANSITGATEWAYROUTETABLESREQUEST_H
#define QTAWS_DESCRIBETRANSITGATEWAYROUTETABLESREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class DescribeTransitGatewayRouteTablesRequestPrivate;

class QTAWSEC2_EXPORT DescribeTransitGatewayRouteTablesRequest : public Ec2Request {

public:
    DescribeTransitGatewayRouteTablesRequest(const DescribeTransitGatewayRouteTablesRequest &other);
    DescribeTransitGatewayRouteTablesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeTransitGatewayRouteTablesRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
