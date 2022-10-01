// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEROBOTREQUEST_P_H
#define QTAWS_DESCRIBEROBOTREQUEST_P_H

#include "robomakerrequest_p.h"
#include "describerobotrequest.h"

namespace QtAws {
namespace RoboMaker {

class DescribeRobotRequest;

class DescribeRobotRequestPrivate : public RoboMakerRequestPrivate {

public:
    DescribeRobotRequestPrivate(const RoboMakerRequest::Action action,
                                   DescribeRobotRequest * const q);
    DescribeRobotRequestPrivate(const DescribeRobotRequestPrivate &other,
                                   DescribeRobotRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeRobotRequest)

};

} // namespace RoboMaker
} // namespace QtAws

#endif
