// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPRESOURCERESPONSE_P_H
#define QTAWS_STOPRESOURCERESPONSE_P_H

#include "forecastresponse_p.h"

namespace QtAws {
namespace Forecast {

class StopResourceResponse;

class StopResourceResponsePrivate : public ForecastResponsePrivate {

public:

    explicit StopResourceResponsePrivate(StopResourceResponse * const q);

    void parseStopResourceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StopResourceResponse)
    Q_DISABLE_COPY(StopResourceResponsePrivate)

};

} // namespace Forecast
} // namespace QtAws

#endif
