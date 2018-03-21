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

#ifndef QTAWS_DESCRIBECOMMANDSREQUEST_P_H
#define QTAWS_DESCRIBECOMMANDSREQUEST_P_H

#include "opsworks_p.h"
#include "describecommandsrequest.h"

namespace AWS {

namespace OpsWorks {

class DescribeCommandsRequest;

class QTAWS_EXPORT DescribeCommandsRequestPrivate : public OpsWorksPrivate {

public:
    DescribeCommandsRequestPrivate(const OpsWorks::Action action,
                                   DescribeCommandsRequest * const q);
    DescribeCommandsRequestPrivate(const DescribeCommandsRequestPrivate &other,
                                   DescribeCommandsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeCommandsRequest)

};

} // namespace OpsWorks
} // namespace AWS

#endif
