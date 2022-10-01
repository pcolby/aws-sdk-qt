// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEGAMESERVERREQUEST_P_H
#define QTAWS_DESCRIBEGAMESERVERREQUEST_P_H

#include "gameliftrequest_p.h"
#include "describegameserverrequest.h"

namespace QtAws {
namespace GameLift {

class DescribeGameServerRequest;

class DescribeGameServerRequestPrivate : public GameLiftRequestPrivate {

public:
    DescribeGameServerRequestPrivate(const GameLiftRequest::Action action,
                                   DescribeGameServerRequest * const q);
    DescribeGameServerRequestPrivate(const DescribeGameServerRequestPrivate &other,
                                   DescribeGameServerRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeGameServerRequest)

};

} // namespace GameLift
} // namespace QtAws

#endif
