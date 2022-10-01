// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETRANSITGATEWAYMULTICASTDOMAINSREQUEST_H
#define QTAWS_DESCRIBETRANSITGATEWAYMULTICASTDOMAINSREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class DescribeTransitGatewayMulticastDomainsRequestPrivate;

class QTAWSEC2_EXPORT DescribeTransitGatewayMulticastDomainsRequest : public Ec2Request {

public:
    DescribeTransitGatewayMulticastDomainsRequest(const DescribeTransitGatewayMulticastDomainsRequest &other);
    DescribeTransitGatewayMulticastDomainsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeTransitGatewayMulticastDomainsRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
