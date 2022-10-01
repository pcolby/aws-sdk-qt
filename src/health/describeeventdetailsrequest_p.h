// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEEVENTDETAILSREQUEST_P_H
#define QTAWS_DESCRIBEEVENTDETAILSREQUEST_P_H

#include "healthrequest_p.h"
#include "describeeventdetailsrequest.h"

namespace QtAws {
namespace Health {

class DescribeEventDetailsRequest;

class DescribeEventDetailsRequestPrivate : public HealthRequestPrivate {

public:
    DescribeEventDetailsRequestPrivate(const HealthRequest::Action action,
                                   DescribeEventDetailsRequest * const q);
    DescribeEventDetailsRequestPrivate(const DescribeEventDetailsRequestPrivate &other,
                                   DescribeEventDetailsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeEventDetailsRequest)

};

} // namespace Health
} // namespace QtAws

#endif
