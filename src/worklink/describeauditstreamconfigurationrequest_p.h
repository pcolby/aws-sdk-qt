/*
    Copyright 2013-2019 Paul Colby

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

#ifndef QTAWS_DESCRIBEAUDITSTREAMCONFIGURATIONREQUEST_P_H
#define QTAWS_DESCRIBEAUDITSTREAMCONFIGURATIONREQUEST_P_H

#include "worklinkrequest_p.h"
#include "describeauditstreamconfigurationrequest.h"

namespace QtAws {
namespace WorkLink {

class DescribeAuditStreamConfigurationRequest;

class QTAWS_EXPORT DescribeAuditStreamConfigurationRequestPrivate : public WorkLinkRequestPrivate {

public:
    DescribeAuditStreamConfigurationRequestPrivate(const WorkLinkRequest::Action action,
                                   DescribeAuditStreamConfigurationRequest * const q);
    DescribeAuditStreamConfigurationRequestPrivate(const DescribeAuditStreamConfigurationRequestPrivate &other,
                                   DescribeAuditStreamConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeAuditStreamConfigurationRequest)

};

} // namespace WorkLink
} // namespace QtAws

#endif
