/*
    Copyright 2013-2020 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_DESCRIBEIPGROUPSREQUEST_P_H
#define QTAWS_DESCRIBEIPGROUPSREQUEST_P_H

#include "workspacesrequest_p.h"
#include "describeipgroupsrequest.h"

namespace QtAws {
namespace WorkSpaces {

class DescribeIpGroupsRequest;

class QTAWS_EXPORT DescribeIpGroupsRequestPrivate : public WorkSpacesRequestPrivate {

public:
    DescribeIpGroupsRequestPrivate(const WorkSpacesRequest::Action action,
                                   DescribeIpGroupsRequest * const q);
    DescribeIpGroupsRequestPrivate(const DescribeIpGroupsRequestPrivate &other,
                                   DescribeIpGroupsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeIpGroupsRequest)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif
