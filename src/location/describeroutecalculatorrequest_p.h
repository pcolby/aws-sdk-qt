// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEROUTECALCULATORREQUEST_P_H
#define QTAWS_DESCRIBEROUTECALCULATORREQUEST_P_H

#include "locationrequest_p.h"
#include "describeroutecalculatorrequest.h"

namespace QtAws {
namespace Location {

class DescribeRouteCalculatorRequest;

class DescribeRouteCalculatorRequestPrivate : public LocationRequestPrivate {

public:
    DescribeRouteCalculatorRequestPrivate(const LocationRequest::Action action,
                                   DescribeRouteCalculatorRequest * const q);
    DescribeRouteCalculatorRequestPrivate(const DescribeRouteCalculatorRequestPrivate &other,
                                   DescribeRouteCalculatorRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeRouteCalculatorRequest)

};

} // namespace Location
} // namespace QtAws

#endif
