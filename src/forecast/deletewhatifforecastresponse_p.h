// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEWHATIFFORECASTRESPONSE_P_H
#define QTAWS_DELETEWHATIFFORECASTRESPONSE_P_H

#include "forecastresponse_p.h"

namespace QtAws {
namespace Forecast {

class DeleteWhatIfForecastResponse;

class DeleteWhatIfForecastResponsePrivate : public ForecastResponsePrivate {

public:

    explicit DeleteWhatIfForecastResponsePrivate(DeleteWhatIfForecastResponse * const q);

    void parseDeleteWhatIfForecastResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteWhatIfForecastResponse)
    Q_DISABLE_COPY(DeleteWhatIfForecastResponsePrivate)

};

} // namespace Forecast
} // namespace QtAws

#endif
