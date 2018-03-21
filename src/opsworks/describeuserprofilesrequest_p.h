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

#ifndef QTAWS_DESCRIBEUSERPROFILESREQUEST_P_H
#define QTAWS_DESCRIBEUSERPROFILESREQUEST_P_H

#include "opsworks_p.h"
#include "describeuserprofilesrequest.h"

namespace AWS {

namespace OpsWorks {

class DescribeUserProfilesRequest;

class QTAWS_EXPORT DescribeUserProfilesRequestPrivate : public OpsWorksPrivate {

public:
    DescribeUserProfilesRequestPrivate(const OpsWorks::Action action,
                                   DescribeUserProfilesRequest * const q);
    DescribeUserProfilesRequestPrivate(const DescribeUserProfilesRequestPrivate &other,
                                   DescribeUserProfilesRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeUserProfilesRequest)

};

} // namespace OpsWorks
} // namespace AWS

#endif
