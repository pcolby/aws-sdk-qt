// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEFORECASTRESPONSE_P_H
#define QTAWS_DELETEFORECASTRESPONSE_P_H

#include "forecastresponse_p.h"

namespace QtAws {
namespace Forecast {

class DeleteForecastResponse;

class DeleteForecastResponsePrivate : public ForecastResponsePrivate {

public:

    explicit DeleteForecastResponsePrivate(DeleteForecastResponse * const q);

    void parseDeleteForecastResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteForecastResponse)
    Q_DISABLE_COPY(DeleteForecastResponsePrivate)

};

} // namespace Forecast
} // namespace QtAws

#endif
