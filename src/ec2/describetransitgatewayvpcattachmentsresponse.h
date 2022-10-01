// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETRANSITGATEWAYVPCATTACHMENTSRESPONSE_H
#define QTAWS_DESCRIBETRANSITGATEWAYVPCATTACHMENTSRESPONSE_H

#include "ec2response.h"
#include "describetransitgatewayvpcattachmentsrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeTransitGatewayVpcAttachmentsResponsePrivate;

class QTAWSEC2_EXPORT DescribeTransitGatewayVpcAttachmentsResponse : public Ec2Response {
    Q_OBJECT

public:
    DescribeTransitGatewayVpcAttachmentsResponse(const DescribeTransitGatewayVpcAttachmentsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeTransitGatewayVpcAttachmentsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeTransitGatewayVpcAttachmentsResponse)
    Q_DISABLE_COPY(DescribeTransitGatewayVpcAttachmentsResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
