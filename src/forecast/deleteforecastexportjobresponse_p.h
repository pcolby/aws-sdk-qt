// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEFORECASTEXPORTJOBRESPONSE_P_H
#define QTAWS_DELETEFORECASTEXPORTJOBRESPONSE_P_H

#include "forecastresponse_p.h"

namespace QtAws {
namespace Forecast {

class DeleteForecastExportJobResponse;

class DeleteForecastExportJobResponsePrivate : public ForecastResponsePrivate {

public:

    explicit DeleteForecastExportJobResponsePrivate(DeleteForecastExportJobResponse * const q);

    void parseDeleteForecastExportJobResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteForecastExportJobResponse)
    Q_DISABLE_COPY(DeleteForecastExportJobResponsePrivate)

};

} // namespace Forecast
} // namespace QtAws

#endif
