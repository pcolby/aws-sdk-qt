// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDATASETREQUEST_P_H
#define QTAWS_DESCRIBEDATASETREQUEST_P_H

#include "forecastrequest_p.h"
#include "describedatasetrequest.h"

namespace QtAws {
namespace Forecast {

class DescribeDatasetRequest;

class DescribeDatasetRequestPrivate : public ForecastRequestPrivate {

public:
    DescribeDatasetRequestPrivate(const ForecastRequest::Action action,
                                   DescribeDatasetRequest * const q);
    DescribeDatasetRequestPrivate(const DescribeDatasetRequestPrivate &other,
                                   DescribeDatasetRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeDatasetRequest)

};

} // namespace Forecast
} // namespace QtAws

#endif
