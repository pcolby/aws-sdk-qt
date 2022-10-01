// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEGAMESESSIONDETAILSREQUEST_P_H
#define QTAWS_DESCRIBEGAMESESSIONDETAILSREQUEST_P_H

#include "gameliftrequest_p.h"
#include "describegamesessiondetailsrequest.h"

namespace QtAws {
namespace GameLift {

class DescribeGameSessionDetailsRequest;

class DescribeGameSessionDetailsRequestPrivate : public GameLiftRequestPrivate {

public:
    DescribeGameSessionDetailsRequestPrivate(const GameLiftRequest::Action action,
                                   DescribeGameSessionDetailsRequest * const q);
    DescribeGameSessionDetailsRequestPrivate(const DescribeGameSessionDetailsRequestPrivate &other,
                                   DescribeGameSessionDetailsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeGameSessionDetailsRequest)

};

} // namespace GameLift
} // namespace QtAws

#endif
