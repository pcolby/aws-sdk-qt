// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEEVENTDETAILSFORORGANIZATIONREQUEST_P_H
#define QTAWS_DESCRIBEEVENTDETAILSFORORGANIZATIONREQUEST_P_H

#include "healthrequest_p.h"
#include "describeeventdetailsfororganizationrequest.h"

namespace QtAws {
namespace Health {

class DescribeEventDetailsForOrganizationRequest;

class DescribeEventDetailsForOrganizationRequestPrivate : public HealthRequestPrivate {

public:
    DescribeEventDetailsForOrganizationRequestPrivate(const HealthRequest::Action action,
                                   DescribeEventDetailsForOrganizationRequest * const q);
    DescribeEventDetailsForOrganizationRequestPrivate(const DescribeEventDetailsForOrganizationRequestPrivate &other,
                                   DescribeEventDetailsForOrganizationRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeEventDetailsForOrganizationRequest)

};

} // namespace Health
} // namespace QtAws

#endif
