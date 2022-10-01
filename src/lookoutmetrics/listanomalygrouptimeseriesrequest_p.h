// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTANOMALYGROUPTIMESERIESREQUEST_P_H
#define QTAWS_LISTANOMALYGROUPTIMESERIESREQUEST_P_H

#include "lookoutmetricsrequest_p.h"
#include "listanomalygrouptimeseriesrequest.h"

namespace QtAws {
namespace LookoutMetrics {

class ListAnomalyGroupTimeSeriesRequest;

class ListAnomalyGroupTimeSeriesRequestPrivate : public LookoutMetricsRequestPrivate {

public:
    ListAnomalyGroupTimeSeriesRequestPrivate(const LookoutMetricsRequest::Action action,
                                   ListAnomalyGroupTimeSeriesRequest * const q);
    ListAnomalyGroupTimeSeriesRequestPrivate(const ListAnomalyGroupTimeSeriesRequestPrivate &other,
                                   ListAnomalyGroupTimeSeriesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListAnomalyGroupTimeSeriesRequest)

};

} // namespace LookoutMetrics
} // namespace QtAws

#endif
