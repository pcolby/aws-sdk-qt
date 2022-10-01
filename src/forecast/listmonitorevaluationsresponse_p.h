// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTMONITOREVALUATIONSRESPONSE_P_H
#define QTAWS_LISTMONITOREVALUATIONSRESPONSE_P_H

#include "forecastresponse_p.h"

namespace QtAws {
namespace Forecast {

class ListMonitorEvaluationsResponse;

class ListMonitorEvaluationsResponsePrivate : public ForecastResponsePrivate {

public:

    explicit ListMonitorEvaluationsResponsePrivate(ListMonitorEvaluationsResponse * const q);

    void parseListMonitorEvaluationsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListMonitorEvaluationsResponse)
    Q_DISABLE_COPY(ListMonitorEvaluationsResponsePrivate)

};

} // namespace Forecast
} // namespace QtAws

#endif
