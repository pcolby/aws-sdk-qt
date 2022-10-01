// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEFORECASTEXPORTJOBRESPONSE_P_H
#define QTAWS_CREATEFORECASTEXPORTJOBRESPONSE_P_H

#include "forecastresponse_p.h"

namespace QtAws {
namespace Forecast {

class CreateForecastExportJobResponse;

class CreateForecastExportJobResponsePrivate : public ForecastResponsePrivate {

public:

    explicit CreateForecastExportJobResponsePrivate(CreateForecastExportJobResponse * const q);

    void parseCreateForecastExportJobResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateForecastExportJobResponse)
    Q_DISABLE_COPY(CreateForecastExportJobResponsePrivate)

};

} // namespace Forecast
} // namespace QtAws

#endif
