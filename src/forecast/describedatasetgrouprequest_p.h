// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDATASETGROUPREQUEST_P_H
#define QTAWS_DESCRIBEDATASETGROUPREQUEST_P_H

#include "forecastrequest_p.h"
#include "describedatasetgrouprequest.h"

namespace QtAws {
namespace Forecast {

class DescribeDatasetGroupRequest;

class DescribeDatasetGroupRequestPrivate : public ForecastRequestPrivate {

public:
    DescribeDatasetGroupRequestPrivate(const ForecastRequest::Action action,
                                   DescribeDatasetGroupRequest * const q);
    DescribeDatasetGroupRequestPrivate(const DescribeDatasetGroupRequestPrivate &other,
                                   DescribeDatasetGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeDatasetGroupRequest)

};

} // namespace Forecast
} // namespace QtAws

#endif
