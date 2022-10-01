// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEVPCENDPOINTCONNECTIONNOTIFICATIONSRESPONSE_H
#define QTAWS_DESCRIBEVPCENDPOINTCONNECTIONNOTIFICATIONSRESPONSE_H

#include "ec2response.h"
#include "describevpcendpointconnectionnotificationsrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeVpcEndpointConnectionNotificationsResponsePrivate;

class QTAWSEC2_EXPORT DescribeVpcEndpointConnectionNotificationsResponse : public Ec2Response {
    Q_OBJECT

public:
    DescribeVpcEndpointConnectionNotificationsResponse(const DescribeVpcEndpointConnectionNotificationsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeVpcEndpointConnectionNotificationsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeVpcEndpointConnectionNotificationsResponse)
    Q_DISABLE_COPY(DescribeVpcEndpointConnectionNotificationsResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
