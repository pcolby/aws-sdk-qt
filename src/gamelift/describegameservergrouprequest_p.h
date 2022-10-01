// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEGAMESERVERGROUPREQUEST_P_H
#define QTAWS_DESCRIBEGAMESERVERGROUPREQUEST_P_H

#include "gameliftrequest_p.h"
#include "describegameservergrouprequest.h"

namespace QtAws {
namespace GameLift {

class DescribeGameServerGroupRequest;

class DescribeGameServerGroupRequestPrivate : public GameLiftRequestPrivate {

public:
    DescribeGameServerGroupRequestPrivate(const GameLiftRequest::Action action,
                                   DescribeGameServerGroupRequest * const q);
    DescribeGameServerGroupRequestPrivate(const DescribeGameServerGroupRequestPrivate &other,
                                   DescribeGameServerGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeGameServerGroupRequest)

};

} // namespace GameLift
} // namespace QtAws

#endif
