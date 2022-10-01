// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEFLEETREQUEST_P_H
#define QTAWS_DESCRIBEFLEETREQUEST_P_H

#include "robomakerrequest_p.h"
#include "describefleetrequest.h"

namespace QtAws {
namespace RoboMaker {

class DescribeFleetRequest;

class DescribeFleetRequestPrivate : public RoboMakerRequestPrivate {

public:
    DescribeFleetRequestPrivate(const RoboMakerRequest::Action action,
                                   DescribeFleetRequest * const q);
    DescribeFleetRequestPrivate(const DescribeFleetRequestPrivate &other,
                                   DescribeFleetRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeFleetRequest)

};

} // namespace RoboMaker
} // namespace QtAws

#endif
