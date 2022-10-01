// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEVPCENDPOINTCONNECTIONNOTIFICATIONSREQUEST_H
#define QTAWS_DESCRIBEVPCENDPOINTCONNECTIONNOTIFICATIONSREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class DescribeVpcEndpointConnectionNotificationsRequestPrivate;

class QTAWSEC2_EXPORT DescribeVpcEndpointConnectionNotificationsRequest : public Ec2Request {

public:
    DescribeVpcEndpointConnectionNotificationsRequest(const DescribeVpcEndpointConnectionNotificationsRequest &other);
    DescribeVpcEndpointConnectionNotificationsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeVpcEndpointConnectionNotificationsRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
