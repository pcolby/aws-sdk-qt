// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPREDICTORBACKTESTEXPORTJOBRESPONSE_P_H
#define QTAWS_DESCRIBEPREDICTORBACKTESTEXPORTJOBRESPONSE_P_H

#include "forecastresponse_p.h"

namespace QtAws {
namespace Forecast {

class DescribePredictorBacktestExportJobResponse;

class DescribePredictorBacktestExportJobResponsePrivate : public ForecastResponsePrivate {

public:

    explicit DescribePredictorBacktestExportJobResponsePrivate(DescribePredictorBacktestExportJobResponse * const q);

    void parseDescribePredictorBacktestExportJobResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribePredictorBacktestExportJobResponse)
    Q_DISABLE_COPY(DescribePredictorBacktestExportJobResponsePrivate)

};

} // namespace Forecast
} // namespace QtAws

#endif
