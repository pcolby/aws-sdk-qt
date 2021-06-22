/*
    Copyright 2013-2021 Paul Colby

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

#ifndef QTAWS_DESCRIBEAFFECTEDENTITIESREQUEST_P_H
#define QTAWS_DESCRIBEAFFECTEDENTITIESREQUEST_P_H

#include "healthrequest_p.h"
#include "describeaffectedentitiesrequest.h"

namespace QtAws {
namespace Health {

class DescribeAffectedEntitiesRequest;

class DescribeAffectedEntitiesRequestPrivate : public HealthRequestPrivate {

public:
    DescribeAffectedEntitiesRequestPrivate(const HealthRequest::Action action,
                                   DescribeAffectedEntitiesRequest * const q);
    DescribeAffectedEntitiesRequestPrivate(const DescribeAffectedEntitiesRequestPrivate &other,
                                   DescribeAffectedEntitiesRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeAffectedEntitiesRequest)

};

} // namespace Health
} // namespace QtAws

#endif
