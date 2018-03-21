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

#ifndef QTAWS_GETDASHBOARDREQUEST_P_H
#define QTAWS_GETDASHBOARDREQUEST_P_H

#include "cloudwatch_p.h"
#include "getdashboardrequest.h"

namespace AWS {

namespace CloudWatch {

class GetDashboardRequest;

class QTAWS_EXPORT GetDashboardRequestPrivate : public CloudWatchPrivate {

public:
    GetDashboardRequestPrivate(const CloudWatch::Action action,
                                   GetDashboardRequest * const q);
    GetDashboardRequestPrivate(const GetDashboardRequestPrivate &other,
                                   GetDashboardRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetDashboardRequest)

};

} // namespace CloudWatch
} // namespace AWS

#endif
