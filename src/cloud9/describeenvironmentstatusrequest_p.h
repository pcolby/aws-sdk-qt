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

#ifndef QTAWS_DESCRIBEENVIRONMENTSTATUSREQUEST_P_H
#define QTAWS_DESCRIBEENVIRONMENTSTATUSREQUEST_P_H

#include "cloud9_p.h"
#include "describeenvironmentstatusrequest.h"

namespace AWS {

namespace Cloud9 {

class DescribeEnvironmentStatusRequest;

class QTAWS_EXPORT DescribeEnvironmentStatusRequestPrivate : public Cloud9Private {

public:
    DescribeEnvironmentStatusRequestPrivate(const Cloud9::Action action,
                                   DescribeEnvironmentStatusRequest * const q);
    DescribeEnvironmentStatusRequestPrivate(const DescribeEnvironmentStatusRequestPrivate &other,
                                   DescribeEnvironmentStatusRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeEnvironmentStatusRequest)

};

} // namespace Cloud9
} // namespace AWS

#endif
