// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEVPCPEERINGCONNECTIONSREQUEST_H
#define QTAWS_DESCRIBEVPCPEERINGCONNECTIONSREQUEST_H

#include "gameliftrequest.h"

namespace QtAws {
namespace GameLift {

class DescribeVpcPeeringConnectionsRequestPrivate;

class QTAWSGAMELIFT_EXPORT DescribeVpcPeeringConnectionsRequest : public GameLiftRequest {

public:
    DescribeVpcPeeringConnectionsRequest(const DescribeVpcPeeringConnectionsRequest &other);
    DescribeVpcPeeringConnectionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeVpcPeeringConnectionsRequest)

};

} // namespace GameLift
} // namespace QtAws

#endif
