// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETRANSITGATEWAYVPCATTACHMENTSREQUEST_H
#define QTAWS_DESCRIBETRANSITGATEWAYVPCATTACHMENTSREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class DescribeTransitGatewayVpcAttachmentsRequestPrivate;

class QTAWSEC2_EXPORT DescribeTransitGatewayVpcAttachmentsRequest : public Ec2Request {

public:
    DescribeTransitGatewayVpcAttachmentsRequest(const DescribeTransitGatewayVpcAttachmentsRequest &other);
    DescribeTransitGatewayVpcAttachmentsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeTransitGatewayVpcAttachmentsRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
