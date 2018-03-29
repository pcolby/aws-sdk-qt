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

#ifndef QTAWS_RUNINSTANCESREQUEST_P_H
#define QTAWS_RUNINSTANCESREQUEST_P_H

#include "ec2request_p.h"
#include "runinstancesrequest.h"

namespace QtAws {
namespace EC2 {

class RunInstancesRequest;

class QTAWS_EXPORT RunInstancesRequestPrivate : public EC2RequestPrivate {

public:
    RunInstancesRequestPrivate(const EC2::Action action,
                                   RunInstancesRequest * const q);
    RunInstancesRequestPrivate(const RunInstancesRequestPrivate &other,
                                   RunInstancesRequest * const q);

private:
    Q_DECLARE_PUBLIC(RunInstancesRequest)

};

} // namespace EC2
} // namespace QtAws

#endif
