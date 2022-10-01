// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTANOMALYGROUPTIMESERIESRESPONSE_P_H
#define QTAWS_LISTANOMALYGROUPTIMESERIESRESPONSE_P_H

#include "lookoutmetricsresponse_p.h"

namespace QtAws {
namespace LookoutMetrics {

class ListAnomalyGroupTimeSeriesResponse;

class ListAnomalyGroupTimeSeriesResponsePrivate : public LookoutMetricsResponsePrivate {

public:

    explicit ListAnomalyGroupTimeSeriesResponsePrivate(ListAnomalyGroupTimeSeriesResponse * const q);

    void parseListAnomalyGroupTimeSeriesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListAnomalyGroupTimeSeriesResponse)
    Q_DISABLE_COPY(ListAnomalyGroupTimeSeriesResponsePrivate)

};

} // namespace LookoutMetrics
} // namespace QtAws

#endif
