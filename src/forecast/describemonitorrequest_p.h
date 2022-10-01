// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEMONITORREQUEST_P_H
#define QTAWS_DESCRIBEMONITORREQUEST_P_H

#include "forecastrequest_p.h"
#include "describemonitorrequest.h"

namespace QtAws {
namespace Forecast {

class DescribeMonitorRequest;

class DescribeMonitorRequestPrivate : public ForecastRequestPrivate {

public:
    DescribeMonitorRequestPrivate(const ForecastRequest::Action action,
                                   DescribeMonitorRequest * const q);
    DescribeMonitorRequestPrivate(const DescribeMonitorRequestPrivate &other,
                                   DescribeMonitorRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeMonitorRequest)

};

} // namespace Forecast
} // namespace QtAws

#endif
