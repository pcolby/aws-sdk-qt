// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTIMESERIESSERVICESTATISTICSRESPONSE_P_H
#define QTAWS_GETTIMESERIESSERVICESTATISTICSRESPONSE_P_H

#include "xrayresponse_p.h"

namespace QtAws {
namespace XRay {

class GetTimeSeriesServiceStatisticsResponse;

class GetTimeSeriesServiceStatisticsResponsePrivate : public XRayResponsePrivate {

public:

    explicit GetTimeSeriesServiceStatisticsResponsePrivate(GetTimeSeriesServiceStatisticsResponse * const q);

    void parseGetTimeSeriesServiceStatisticsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetTimeSeriesServiceStatisticsResponse)
    Q_DISABLE_COPY(GetTimeSeriesServiceStatisticsResponsePrivate)

};

} // namespace XRay
} // namespace QtAws

#endif
