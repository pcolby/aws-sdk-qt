/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

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
