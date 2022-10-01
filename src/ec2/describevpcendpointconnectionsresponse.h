// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEVPCENDPOINTCONNECTIONSRESPONSE_H
#define QTAWS_DESCRIBEVPCENDPOINTCONNECTIONSRESPONSE_H

#include "ec2response.h"
#include "describevpcendpointconnectionsrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeVpcEndpointConnectionsResponsePrivate;

class QTAWSEC2_EXPORT DescribeVpcEndpointConnectionsResponse : public Ec2Response {
    Q_OBJECT

public:
    DescribeVpcEndpointConnectionsResponse(const DescribeVpcEndpointConnectionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeVpcEndpointConnectionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeVpcEndpointConnectionsResponse)
    Q_DISABLE_COPY(DescribeVpcEndpointConnectionsResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
