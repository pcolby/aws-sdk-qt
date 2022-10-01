// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEFORECASTRESPONSE_P_H
#define QTAWS_CREATEFORECASTRESPONSE_P_H

#include "forecastresponse_p.h"

namespace QtAws {
namespace Forecast {

class CreateForecastResponse;

class CreateForecastResponsePrivate : public ForecastResponsePrivate {

public:

    explicit CreateForecastResponsePrivate(CreateForecastResponse * const q);

    void parseCreateForecastResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateForecastResponse)
    Q_DISABLE_COPY(CreateForecastResponsePrivate)

};

} // namespace Forecast
} // namespace QtAws

#endif
