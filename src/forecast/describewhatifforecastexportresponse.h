// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEWHATIFFORECASTEXPORTRESPONSE_H
#define QTAWS_DESCRIBEWHATIFFORECASTEXPORTRESPONSE_H

#include "forecastresponse.h"
#include "describewhatifforecastexportrequest.h"

namespace QtAws {
namespace Forecast {

class DescribeWhatIfForecastExportResponsePrivate;

class QTAWSFORECAST_EXPORT DescribeWhatIfForecastExportResponse : public ForecastResponse {
    Q_OBJECT

public:
    DescribeWhatIfForecastExportResponse(const DescribeWhatIfForecastExportRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeWhatIfForecastExportRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeWhatIfForecastExportResponse)
    Q_DISABLE_COPY(DescribeWhatIfForecastExportResponse)

};

} // namespace Forecast
} // namespace QtAws

#endif
