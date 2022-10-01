// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTFORECASTEXPORTJOBSREQUEST_P_H
#define QTAWS_LISTFORECASTEXPORTJOBSREQUEST_P_H

#include "forecastrequest_p.h"
#include "listforecastexportjobsrequest.h"

namespace QtAws {
namespace Forecast {

class ListForecastExportJobsRequest;

class ListForecastExportJobsRequestPrivate : public ForecastRequestPrivate {

public:
    ListForecastExportJobsRequestPrivate(const ForecastRequest::Action action,
                                   ListForecastExportJobsRequest * const q);
    ListForecastExportJobsRequestPrivate(const ListForecastExportJobsRequestPrivate &other,
                                   ListForecastExportJobsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListForecastExportJobsRequest)

};

} // namespace Forecast
} // namespace QtAws

#endif
