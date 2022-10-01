// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEWHATIFANALYSISRESPONSE_P_H
#define QTAWS_CREATEWHATIFANALYSISRESPONSE_P_H

#include "forecastresponse_p.h"

namespace QtAws {
namespace Forecast {

class CreateWhatIfAnalysisResponse;

class CreateWhatIfAnalysisResponsePrivate : public ForecastResponsePrivate {

public:

    explicit CreateWhatIfAnalysisResponsePrivate(CreateWhatIfAnalysisResponse * const q);

    void parseCreateWhatIfAnalysisResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateWhatIfAnalysisResponse)
    Q_DISABLE_COPY(CreateWhatIfAnalysisResponsePrivate)

};

} // namespace Forecast
} // namespace QtAws

#endif
