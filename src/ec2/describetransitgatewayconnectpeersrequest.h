// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETRANSITGATEWAYCONNECTPEERSREQUEST_H
#define QTAWS_DESCRIBETRANSITGATEWAYCONNECTPEERSREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class DescribeTransitGatewayConnectPeersRequestPrivate;

class QTAWSEC2_EXPORT DescribeTransitGatewayConnectPeersRequest : public Ec2Request {

public:
    DescribeTransitGatewayConnectPeersRequest(const DescribeTransitGatewayConnectPeersRequest &other);
    DescribeTransitGatewayConnectPeersRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeTransitGatewayConnectPeersRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
