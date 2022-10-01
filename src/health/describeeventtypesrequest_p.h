// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEEVENTTYPESREQUEST_P_H
#define QTAWS_DESCRIBEEVENTTYPESREQUEST_P_H

#include "healthrequest_p.h"
#include "describeeventtypesrequest.h"

namespace QtAws {
namespace Health {

class DescribeEventTypesRequest;

class DescribeEventTypesRequestPrivate : public HealthRequestPrivate {

public:
    DescribeEventTypesRequestPrivate(const HealthRequest::Action action,
                                   DescribeEventTypesRequest * const q);
    DescribeEventTypesRequestPrivate(const DescribeEventTypesRequestPrivate &other,
                                   DescribeEventTypesRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeEventTypesRequest)

};

} // namespace Health
} // namespace QtAws

#endif
