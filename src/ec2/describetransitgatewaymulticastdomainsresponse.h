// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETRANSITGATEWAYMULTICASTDOMAINSRESPONSE_H
#define QTAWS_DESCRIBETRANSITGATEWAYMULTICASTDOMAINSRESPONSE_H

#include "ec2response.h"
#include "describetransitgatewaymulticastdomainsrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeTransitGatewayMulticastDomainsResponsePrivate;

class QTAWSEC2_EXPORT DescribeTransitGatewayMulticastDomainsResponse : public Ec2Response {
    Q_OBJECT

public:
    DescribeTransitGatewayMulticastDomainsResponse(const DescribeTransitGatewayMulticastDomainsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeTransitGatewayMulticastDomainsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeTransitGatewayMulticastDomainsResponse)
    Q_DISABLE_COPY(DescribeTransitGatewayMulticastDomainsResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
