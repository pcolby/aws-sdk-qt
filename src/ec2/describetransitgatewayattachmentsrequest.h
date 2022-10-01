// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETRANSITGATEWAYATTACHMENTSREQUEST_H
#define QTAWS_DESCRIBETRANSITGATEWAYATTACHMENTSREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class DescribeTransitGatewayAttachmentsRequestPrivate;

class QTAWSEC2_EXPORT DescribeTransitGatewayAttachmentsRequest : public Ec2Request {

public:
    DescribeTransitGatewayAttachmentsRequest(const DescribeTransitGatewayAttachmentsRequest &other);
    DescribeTransitGatewayAttachmentsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeTransitGatewayAttachmentsRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
