// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTFORECASTEXPORTJOBSRESPONSE_P_H
#define QTAWS_LISTFORECASTEXPORTJOBSRESPONSE_P_H

#include "forecastresponse_p.h"

namespace QtAws {
namespace Forecast {

class ListForecastExportJobsResponse;

class ListForecastExportJobsResponsePrivate : public ForecastResponsePrivate {

public:

    explicit ListForecastExportJobsResponsePrivate(ListForecastExportJobsResponse * const q);

    void parseListForecastExportJobsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListForecastExportJobsResponse)
    Q_DISABLE_COPY(ListForecastExportJobsResponsePrivate)

};

} // namespace Forecast
} // namespace QtAws

#endif
