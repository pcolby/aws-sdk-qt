// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTIMESERIESSERVICESTATISTICSRESPONSE_H
#define QTAWS_GETTIMESERIESSERVICESTATISTICSRESPONSE_H

#include "xrayresponse.h"
#include "gettimeseriesservicestatisticsrequest.h"

namespace QtAws {
namespace XRay {

class GetTimeSeriesServiceStatisticsResponsePrivate;

class QTAWSXRAY_EXPORT GetTimeSeriesServiceStatisticsResponse : public XRayResponse {
    Q_OBJECT

public:
    GetTimeSeriesServiceStatisticsResponse(const GetTimeSeriesServiceStatisticsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetTimeSeriesServiceStatisticsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetTimeSeriesServiceStatisticsResponse)
    Q_DISABLE_COPY(GetTimeSeriesServiceStatisticsResponse)

};

} // namespace XRay
} // namespace QtAws

#endif
