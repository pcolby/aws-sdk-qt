/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_DESCRIBEEC2INSTANCELIMITSREQUEST_P_H
#define QTAWS_DESCRIBEEC2INSTANCELIMITSREQUEST_P_H

#include "gamelift_p.h"
#include "describeec2instancelimitsrequest.h"

namespace AWS {

namespace GameLift {

class DescribeEC2InstanceLimitsRequest;

class QTAWS_EXPORT DescribeEC2InstanceLimitsRequestPrivate : public GameLiftPrivate {

public:
    DescribeEC2InstanceLimitsRequestPrivate(const GameLift::Action action,
                                   DescribeEC2InstanceLimitsRequest * const q);
    DescribeEC2InstanceLimitsRequestPrivate(const DescribeEC2InstanceLimitsRequestPrivate &other,
                                   DescribeEC2InstanceLimitsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeEC2InstanceLimitsRequest)

};

} // namespace GameLift
} // namespace AWS

#endif
