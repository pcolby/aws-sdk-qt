// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEVPCENDPOINTSERVICECONFIGURATIONSRESPONSE_H
#define QTAWS_DESCRIBEVPCENDPOINTSERVICECONFIGURATIONSRESPONSE_H

#include "ec2response.h"
#include "describevpcendpointserviceconfigurationsrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeVpcEndpointServiceConfigurationsResponsePrivate;

class QTAWSEC2_EXPORT DescribeVpcEndpointServiceConfigurationsResponse : public Ec2Response {
    Q_OBJECT

public:
    DescribeVpcEndpointServiceConfigurationsResponse(const DescribeVpcEndpointServiceConfigurationsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeVpcEndpointServiceConfigurationsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeVpcEndpointServiceConfigurationsResponse)
    Q_DISABLE_COPY(DescribeVpcEndpointServiceConfigurationsResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
