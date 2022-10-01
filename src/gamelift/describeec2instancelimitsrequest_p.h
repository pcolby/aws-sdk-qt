// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEEC2INSTANCELIMITSREQUEST_P_H
#define QTAWS_DESCRIBEEC2INSTANCELIMITSREQUEST_P_H

#include "gameliftrequest_p.h"
#include "describeec2instancelimitsrequest.h"

namespace QtAws {
namespace GameLift {

class DescribeEC2InstanceLimitsRequest;

class DescribeEC2InstanceLimitsRequestPrivate : public GameLiftRequestPrivate {

public:
    DescribeEC2InstanceLimitsRequestPrivate(const GameLiftRequest::Action action,
                                   DescribeEC2InstanceLimitsRequest * const q);
    DescribeEC2InstanceLimitsRequestPrivate(const DescribeEC2InstanceLimitsRequestPrivate &other,
                                   DescribeEC2InstanceLimitsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeEC2InstanceLimitsRequest)

};

} // namespace GameLift
} // namespace QtAws

#endif
