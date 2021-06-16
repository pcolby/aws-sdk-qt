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

#ifndef QTAWS_DESCRIBEEVENTSFORORGANIZATIONREQUEST_P_H
#define QTAWS_DESCRIBEEVENTSFORORGANIZATIONREQUEST_P_H

#include "healthrequest_p.h"
#include "describeeventsfororganizationrequest.h"

namespace QtAws {
namespace Health {

class DescribeEventsForOrganizationRequest;

class QTAWS_EXPORT DescribeEventsForOrganizationRequestPrivate : public HealthRequestPrivate {

public:
    DescribeEventsForOrganizationRequestPrivate(const HealthRequest::Action action,
                                   DescribeEventsForOrganizationRequest * const q);
    DescribeEventsForOrganizationRequestPrivate(const DescribeEventsForOrganizationRequestPrivate &other,
                                   DescribeEventsForOrganizationRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeEventsForOrganizationRequest)

};

} // namespace Health
} // namespace QtAws

#endif
