// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEVPCENDPOINTSERVICESRESPONSE_H
#define QTAWS_DESCRIBEVPCENDPOINTSERVICESRESPONSE_H

#include "ec2response.h"
#include "describevpcendpointservicesrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeVpcEndpointServicesResponsePrivate;

class QTAWSEC2_EXPORT DescribeVpcEndpointServicesResponse : public Ec2Response {
    Q_OBJECT

public:
    DescribeVpcEndpointServicesResponse(const DescribeVpcEndpointServicesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeVpcEndpointServicesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeVpcEndpointServicesResponse)
    Q_DISABLE_COPY(DescribeVpcEndpointServicesResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
