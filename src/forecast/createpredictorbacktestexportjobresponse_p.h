// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPREDICTORBACKTESTEXPORTJOBRESPONSE_P_H
#define QTAWS_CREATEPREDICTORBACKTESTEXPORTJOBRESPONSE_P_H

#include "forecastresponse_p.h"

namespace QtAws {
namespace Forecast {

class CreatePredictorBacktestExportJobResponse;

class CreatePredictorBacktestExportJobResponsePrivate : public ForecastResponsePrivate {

public:

    explicit CreatePredictorBacktestExportJobResponsePrivate(CreatePredictorBacktestExportJobResponse * const q);

    void parseCreatePredictorBacktestExportJobResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreatePredictorBacktestExportJobResponse)
    Q_DISABLE_COPY(CreatePredictorBacktestExportJobResponsePrivate)

};

} // namespace Forecast
} // namespace QtAws

#endif
