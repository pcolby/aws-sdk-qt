/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_RUNSCHEDULEDINSTANCESREQUEST_P_H
#define QTAWS_RUNSCHEDULEDINSTANCESREQUEST_P_H

#include "ec2request_p.h"
#include "runscheduledinstancesrequest.h"

namespace QtAws {
namespace EC2 {

class RunScheduledInstancesRequest;

class QTAWS_EXPORT RunScheduledInstancesRequestPrivate : public EC2RequestPrivate {

public:
    RunScheduledInstancesRequestPrivate(const EC2::Action action,
                                   RunScheduledInstancesRequest * const q);
    RunScheduledInstancesRequestPrivate(const RunScheduledInstancesRequestPrivate &other,
                                   RunScheduledInstancesRequest * const q);

private:
    Q_DECLARE_PUBLIC(RunScheduledInstancesRequest)

};

} // namespace EC2
} // namespace QtAws

#endif
