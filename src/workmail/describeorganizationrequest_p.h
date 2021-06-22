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

#ifndef QTAWS_DESCRIBEORGANIZATIONREQUEST_P_H
#define QTAWS_DESCRIBEORGANIZATIONREQUEST_P_H

#include "workmailrequest_p.h"
#include "describeorganizationrequest.h"

namespace QtAws {
namespace WorkMail {

class DescribeOrganizationRequest;

class DescribeOrganizationRequestPrivate : public WorkMailRequestPrivate {

public:
    DescribeOrganizationRequestPrivate(const WorkMailRequest::Action action,
                                   DescribeOrganizationRequest * const q);
    DescribeOrganizationRequestPrivate(const DescribeOrganizationRequestPrivate &other,
                                   DescribeOrganizationRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeOrganizationRequest)

};

} // namespace WorkMail
} // namespace QtAws

#endif
