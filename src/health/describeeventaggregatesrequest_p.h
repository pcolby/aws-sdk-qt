// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEEVENTAGGREGATESREQUEST_P_H
#define QTAWS_DESCRIBEEVENTAGGREGATESREQUEST_P_H

#include "healthrequest_p.h"
#include "describeeventaggregatesrequest.h"

namespace QtAws {
namespace Health {

class DescribeEventAggregatesRequest;

class DescribeEventAggregatesRequestPrivate : public HealthRequestPrivate {

public:
    DescribeEventAggregatesRequestPrivate(const HealthRequest::Action action,
                                   DescribeEventAggregatesRequest * const q);
    DescribeEventAggregatesRequestPrivate(const DescribeEventAggregatesRequestPrivate &other,
                                   DescribeEventAggregatesRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeEventAggregatesRequest)

};

} // namespace Health
} // namespace QtAws

#endif
