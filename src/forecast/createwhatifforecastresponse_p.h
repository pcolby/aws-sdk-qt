// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEWHATIFFORECASTRESPONSE_P_H
#define QTAWS_CREATEWHATIFFORECASTRESPONSE_P_H

#include "forecastresponse_p.h"

namespace QtAws {
namespace Forecast {

class CreateWhatIfForecastResponse;

class CreateWhatIfForecastResponsePrivate : public ForecastResponsePrivate {

public:

    explicit CreateWhatIfForecastResponsePrivate(CreateWhatIfForecastResponse * const q);

    void parseCreateWhatIfForecastResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateWhatIfForecastResponse)
    Q_DISABLE_COPY(CreateWhatIfForecastResponsePrivate)

};

} // namespace Forecast
} // namespace QtAws

#endif
