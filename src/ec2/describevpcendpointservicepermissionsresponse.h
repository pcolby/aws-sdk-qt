// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEVPCENDPOINTSERVICEPERMISSIONSRESPONSE_H
#define QTAWS_DESCRIBEVPCENDPOINTSERVICEPERMISSIONSRESPONSE_H

#include "ec2response.h"
#include "describevpcendpointservicepermissionsrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeVpcEndpointServicePermissionsResponsePrivate;

class QTAWSEC2_EXPORT DescribeVpcEndpointServicePermissionsResponse : public Ec2Response {
    Q_OBJECT

public:
    DescribeVpcEndpointServicePermissionsResponse(const DescribeVpcEndpointServicePermissionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeVpcEndpointServicePermissionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeVpcEndpointServicePermissionsResponse)
    Q_DISABLE_COPY(DescribeVpcEndpointServicePermissionsResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
