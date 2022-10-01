// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETIMESERIESREQUEST_P_H
#define QTAWS_DESCRIBETIMESERIESREQUEST_P_H

#include "iotsitewiserequest_p.h"
#include "describetimeseriesrequest.h"

namespace QtAws {
namespace IoTSiteWise {

class DescribeTimeSeriesRequest;

class DescribeTimeSeriesRequestPrivate : public IoTSiteWiseRequestPrivate {

public:
    DescribeTimeSeriesRequestPrivate(const IoTSiteWiseRequest::Action action,
                                   DescribeTimeSeriesRequest * const q);
    DescribeTimeSeriesRequestPrivate(const DescribeTimeSeriesRequestPrivate &other,
                                   DescribeTimeSeriesRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeTimeSeriesRequest)

};

} // namespace IoTSiteWise
} // namespace QtAws

#endif
