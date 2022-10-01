// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETRANSITGATEWAYPEERINGATTACHMENTSREQUEST_H
#define QTAWS_DESCRIBETRANSITGATEWAYPEERINGATTACHMENTSREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class DescribeTransitGatewayPeeringAttachmentsRequestPrivate;

class QTAWSEC2_EXPORT DescribeTransitGatewayPeeringAttachmentsRequest : public Ec2Request {

public:
    DescribeTransitGatewayPeeringAttachmentsRequest(const DescribeTransitGatewayPeeringAttachmentsRequest &other);
    DescribeTransitGatewayPeeringAttachmentsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeTransitGatewayPeeringAttachmentsRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
