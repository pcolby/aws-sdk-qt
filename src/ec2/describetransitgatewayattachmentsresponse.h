// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETRANSITGATEWAYATTACHMENTSRESPONSE_H
#define QTAWS_DESCRIBETRANSITGATEWAYATTACHMENTSRESPONSE_H

#include "ec2response.h"
#include "describetransitgatewayattachmentsrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeTransitGatewayAttachmentsResponsePrivate;

class QTAWSEC2_EXPORT DescribeTransitGatewayAttachmentsResponse : public Ec2Response {
    Q_OBJECT

public:
    DescribeTransitGatewayAttachmentsResponse(const DescribeTransitGatewayAttachmentsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeTransitGatewayAttachmentsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeTransitGatewayAttachmentsResponse)
    Q_DISABLE_COPY(DescribeTransitGatewayAttachmentsResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
