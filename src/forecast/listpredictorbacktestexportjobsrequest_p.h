// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPREDICTORBACKTESTEXPORTJOBSREQUEST_P_H
#define QTAWS_LISTPREDICTORBACKTESTEXPORTJOBSREQUEST_P_H

#include "forecastrequest_p.h"
#include "listpredictorbacktestexportjobsrequest.h"

namespace QtAws {
namespace Forecast {

class ListPredictorBacktestExportJobsRequest;

class ListPredictorBacktestExportJobsRequestPrivate : public ForecastRequestPrivate {

public:
    ListPredictorBacktestExportJobsRequestPrivate(const ForecastRequest::Action action,
                                   ListPredictorBacktestExportJobsRequest * const q);
    ListPredictorBacktestExportJobsRequestPrivate(const ListPredictorBacktestExportJobsRequestPrivate &other,
                                   ListPredictorBacktestExportJobsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListPredictorBacktestExportJobsRequest)

};

} // namespace Forecast
} // namespace QtAws

#endif
