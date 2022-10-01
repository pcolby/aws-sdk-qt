// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPREDICTORBACKTESTEXPORTJOBRESPONSE_P_H
#define QTAWS_DELETEPREDICTORBACKTESTEXPORTJOBRESPONSE_P_H

#include "forecastresponse_p.h"

namespace QtAws {
namespace Forecast {

class DeletePredictorBacktestExportJobResponse;

class DeletePredictorBacktestExportJobResponsePrivate : public ForecastResponsePrivate {

public:

    explicit DeletePredictorBacktestExportJobResponsePrivate(DeletePredictorBacktestExportJobResponse * const q);

    void parseDeletePredictorBacktestExportJobResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeletePredictorBacktestExportJobResponse)
    Q_DISABLE_COPY(DeletePredictorBacktestExportJobResponsePrivate)

};

} // namespace Forecast
} // namespace QtAws

#endif
