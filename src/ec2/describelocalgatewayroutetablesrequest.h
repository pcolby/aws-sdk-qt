// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBELOCALGATEWAYROUTETABLESREQUEST_H
#define QTAWS_DESCRIBELOCALGATEWAYROUTETABLESREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class DescribeLocalGatewayRouteTablesRequestPrivate;

class QTAWSEC2_EXPORT DescribeLocalGatewayRouteTablesRequest : public Ec2Request {

public:
    DescribeLocalGatewayRouteTablesRequest(const DescribeLocalGatewayRouteTablesRequest &other);
    DescribeLocalGatewayRouteTablesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeLocalGatewayRouteTablesRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
