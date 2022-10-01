// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEFLEETATTRIBUTESREQUEST_P_H
#define QTAWS_DESCRIBEFLEETATTRIBUTESREQUEST_P_H

#include "gameliftrequest_p.h"
#include "describefleetattributesrequest.h"

namespace QtAws {
namespace GameLift {

class DescribeFleetAttributesRequest;

class DescribeFleetAttributesRequestPrivate : public GameLiftRequestPrivate {

public:
    DescribeFleetAttributesRequestPrivate(const GameLiftRequest::Action action,
                                   DescribeFleetAttributesRequest * const q);
    DescribeFleetAttributesRequestPrivate(const DescribeFleetAttributesRequestPrivate &other,
                                   DescribeFleetAttributesRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeFleetAttributesRequest)

};

} // namespace GameLift
} // namespace QtAws

#endif
