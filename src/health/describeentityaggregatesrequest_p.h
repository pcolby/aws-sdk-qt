// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEENTITYAGGREGATESREQUEST_P_H
#define QTAWS_DESCRIBEENTITYAGGREGATESREQUEST_P_H

#include "healthrequest_p.h"
#include "describeentityaggregatesrequest.h"

namespace QtAws {
namespace Health {

class DescribeEntityAggregatesRequest;

class DescribeEntityAggregatesRequestPrivate : public HealthRequestPrivate {

public:
    DescribeEntityAggregatesRequestPrivate(const HealthRequest::Action action,
                                   DescribeEntityAggregatesRequest * const q);
    DescribeEntityAggregatesRequestPrivate(const DescribeEntityAggregatesRequestPrivate &other,
                                   DescribeEntityAggregatesRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeEntityAggregatesRequest)

};

} // namespace Health
} // namespace QtAws

#endif
