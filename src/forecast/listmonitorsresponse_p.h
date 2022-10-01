// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTMONITORSRESPONSE_P_H
#define QTAWS_LISTMONITORSRESPONSE_P_H

#include "forecastresponse_p.h"

namespace QtAws {
namespace Forecast {

class ListMonitorsResponse;

class ListMonitorsResponsePrivate : public ForecastResponsePrivate {

public:

    explicit ListMonitorsResponsePrivate(ListMonitorsResponse * const q);

    void parseListMonitorsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListMonitorsResponse)
    Q_DISABLE_COPY(ListMonitorsResponsePrivate)

};

} // namespace Forecast
} // namespace QtAws

#endif
