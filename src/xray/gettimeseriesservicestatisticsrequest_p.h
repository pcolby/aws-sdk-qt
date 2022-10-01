// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTIMESERIESSERVICESTATISTICSREQUEST_P_H
#define QTAWS_GETTIMESERIESSERVICESTATISTICSREQUEST_P_H

#include "xrayrequest_p.h"
#include "gettimeseriesservicestatisticsrequest.h"

namespace QtAws {
namespace XRay {

class GetTimeSeriesServiceStatisticsRequest;

class GetTimeSeriesServiceStatisticsRequestPrivate : public XRayRequestPrivate {

public:
    GetTimeSeriesServiceStatisticsRequestPrivate(const XRayRequest::Action action,
                                   GetTimeSeriesServiceStatisticsRequest * const q);
    GetTimeSeriesServiceStatisticsRequestPrivate(const GetTimeSeriesServiceStatisticsRequestPrivate &other,
                                   GetTimeSeriesServiceStatisticsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetTimeSeriesServiceStatisticsRequest)

};

} // namespace XRay
} // namespace QtAws

#endif
