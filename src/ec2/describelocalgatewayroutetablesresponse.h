// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBELOCALGATEWAYROUTETABLESRESPONSE_H
#define QTAWS_DESCRIBELOCALGATEWAYROUTETABLESRESPONSE_H

#include "ec2response.h"
#include "describelocalgatewayroutetablesrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeLocalGatewayRouteTablesResponsePrivate;

class QTAWSEC2_EXPORT DescribeLocalGatewayRouteTablesResponse : public Ec2Response {
    Q_OBJECT

public:
    DescribeLocalGatewayRouteTablesResponse(const DescribeLocalGatewayRouteTablesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeLocalGatewayRouteTablesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeLocalGatewayRouteTablesResponse)
    Q_DISABLE_COPY(DescribeLocalGatewayRouteTablesResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
