// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEEVENTSFORORGANIZATIONREQUEST_P_H
#define QTAWS_DESCRIBEEVENTSFORORGANIZATIONREQUEST_P_H

#include "healthrequest_p.h"
#include "describeeventsfororganizationrequest.h"

namespace QtAws {
namespace Health {

class DescribeEventsForOrganizationRequest;

class DescribeEventsForOrganizationRequestPrivate : public HealthRequestPrivate {

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
