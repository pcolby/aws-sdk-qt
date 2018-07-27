/*
    Copyright 2013-2018 Paul Colby

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

#ifndef QTAWS_DESCRIBELIFECYCLEHOOKTYPESREQUEST_P_H
#define QTAWS_DESCRIBELIFECYCLEHOOKTYPESREQUEST_P_H

#include "autoscalingrequest_p.h"
#include "describelifecyclehooktypesrequest.h"

namespace QtAws {
namespace AutoScaling {

class DescribeLifecycleHookTypesRequest;

class QTAWS_EXPORT DescribeLifecycleHookTypesRequestPrivate : public AutoScalingRequestPrivate {

public:
    DescribeLifecycleHookTypesRequestPrivate(const AutoScalingRequest::Action action,
                                   DescribeLifecycleHookTypesRequest * const q);
    DescribeLifecycleHookTypesRequestPrivate(const DescribeLifecycleHookTypesRequestPrivate &other,
                                   DescribeLifecycleHookTypesRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeLifecycleHookTypesRequest)

};

} // namespace AutoScaling
} // namespace QtAws

#endif
