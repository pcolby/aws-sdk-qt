// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETRANSITGATEWAYCONNECTSREQUEST_H
#define QTAWS_DESCRIBETRANSITGATEWAYCONNECTSREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class DescribeTransitGatewayConnectsRequestPrivate;

class QTAWSEC2_EXPORT DescribeTransitGatewayConnectsRequest : public Ec2Request {

public:
    DescribeTransitGatewayConnectsRequest(const DescribeTransitGatewayConnectsRequest &other);
    DescribeTransitGatewayConnectsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeTransitGatewayConnectsRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
