// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEWHATIFANALYSISRESPONSE_P_H
#define QTAWS_DELETEWHATIFANALYSISRESPONSE_P_H

#include "forecastresponse_p.h"

namespace QtAws {
namespace Forecast {

class DeleteWhatIfAnalysisResponse;

class DeleteWhatIfAnalysisResponsePrivate : public ForecastResponsePrivate {

public:

    explicit DeleteWhatIfAnalysisResponsePrivate(DeleteWhatIfAnalysisResponse * const q);

    void parseDeleteWhatIfAnalysisResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteWhatIfAnalysisResponse)
    Q_DISABLE_COPY(DeleteWhatIfAnalysisResponsePrivate)

};

} // namespace Forecast
} // namespace QtAws

#endif
