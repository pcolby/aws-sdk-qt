// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPREDICTORBACKTESTEXPORTJOBSRESPONSE_P_H
#define QTAWS_LISTPREDICTORBACKTESTEXPORTJOBSRESPONSE_P_H

#include "forecastresponse_p.h"

namespace QtAws {
namespace Forecast {

class ListPredictorBacktestExportJobsResponse;

class ListPredictorBacktestExportJobsResponsePrivate : public ForecastResponsePrivate {

public:

    explicit ListPredictorBacktestExportJobsResponsePrivate(ListPredictorBacktestExportJobsResponse * const q);

    void parseListPredictorBacktestExportJobsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListPredictorBacktestExportJobsResponse)
    Q_DISABLE_COPY(ListPredictorBacktestExportJobsResponsePrivate)

};

} // namespace Forecast
} // namespace QtAws

#endif
