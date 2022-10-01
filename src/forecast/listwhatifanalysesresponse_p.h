// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTWHATIFANALYSESRESPONSE_P_H
#define QTAWS_LISTWHATIFANALYSESRESPONSE_P_H

#include "forecastresponse_p.h"

namespace QtAws {
namespace Forecast {

class ListWhatIfAnalysesResponse;

class ListWhatIfAnalysesResponsePrivate : public ForecastResponsePrivate {

public:

    explicit ListWhatIfAnalysesResponsePrivate(ListWhatIfAnalysesResponse * const q);

    void parseListWhatIfAnalysesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListWhatIfAnalysesResponse)
    Q_DISABLE_COPY(ListWhatIfAnalysesResponsePrivate)

};

} // namespace Forecast
} // namespace QtAws

#endif
