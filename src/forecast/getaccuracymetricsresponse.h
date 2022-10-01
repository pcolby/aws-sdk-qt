// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETACCURACYMETRICSRESPONSE_H
#define QTAWS_GETACCURACYMETRICSRESPONSE_H

#include "forecastresponse.h"
#include "getaccuracymetricsrequest.h"

namespace QtAws {
namespace Forecast {

class GetAccuracyMetricsResponsePrivate;

class QTAWSFORECAST_EXPORT GetAccuracyMetricsResponse : public ForecastResponse {
    Q_OBJECT

public:
    GetAccuracyMetricsResponse(const GetAccuracyMetricsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetAccuracyMetricsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetAccuracyMetricsResponse)
    Q_DISABLE_COPY(GetAccuracyMetricsResponse)

};

} // namespace Forecast
} // namespace QtAws

#endif
