// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEROBOTAPPLICATIONREQUEST_P_H
#define QTAWS_DESCRIBEROBOTAPPLICATIONREQUEST_P_H

#include "robomakerrequest_p.h"
#include "describerobotapplicationrequest.h"

namespace QtAws {
namespace RoboMaker {

class DescribeRobotApplicationRequest;

class DescribeRobotApplicationRequestPrivate : public RoboMakerRequestPrivate {

public:
    DescribeRobotApplicationRequestPrivate(const RoboMakerRequest::Action action,
                                   DescribeRobotApplicationRequest * const q);
    DescribeRobotApplicationRequestPrivate(const DescribeRobotApplicationRequestPrivate &other,
                                   DescribeRobotApplicationRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeRobotApplicationRequest)

};

} // namespace RoboMaker
} // namespace QtAws

#endif
