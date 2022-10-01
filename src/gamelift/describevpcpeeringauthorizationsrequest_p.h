// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEVPCPEERINGAUTHORIZATIONSREQUEST_P_H
#define QTAWS_DESCRIBEVPCPEERINGAUTHORIZATIONSREQUEST_P_H

#include "gameliftrequest_p.h"
#include "describevpcpeeringauthorizationsrequest.h"

namespace QtAws {
namespace GameLift {

class DescribeVpcPeeringAuthorizationsRequest;

class DescribeVpcPeeringAuthorizationsRequestPrivate : public GameLiftRequestPrivate {

public:
    DescribeVpcPeeringAuthorizationsRequestPrivate(const GameLiftRequest::Action action,
                                   DescribeVpcPeeringAuthorizationsRequest * const q);
    DescribeVpcPeeringAuthorizationsRequestPrivate(const DescribeVpcPeeringAuthorizationsRequestPrivate &other,
                                   DescribeVpcPeeringAuthorizationsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeVpcPeeringAuthorizationsRequest)

};

} // namespace GameLift
} // namespace QtAws

#endif
