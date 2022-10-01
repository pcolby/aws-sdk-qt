// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEFORECASTEXPORTJOBRESPONSE_H
#define QTAWS_DESCRIBEFORECASTEXPORTJOBRESPONSE_H

#include "forecastresponse.h"
#include "describeforecastexportjobrequest.h"

namespace QtAws {
namespace Forecast {

class DescribeForecastExportJobResponsePrivate;

class QTAWSFORECAST_EXPORT DescribeForecastExportJobResponse : public ForecastResponse {
    Q_OBJECT

public:
    DescribeForecastExportJobResponse(const DescribeForecastExportJobRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeForecastExportJobRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeForecastExportJobResponse)
    Q_DISABLE_COPY(DescribeForecastExportJobResponse)

};

} // namespace Forecast
} // namespace QtAws

#endif
