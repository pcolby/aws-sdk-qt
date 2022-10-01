// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEWHATIFFORECASTRESPONSE_H
#define QTAWS_DESCRIBEWHATIFFORECASTRESPONSE_H

#include "forecastresponse.h"
#include "describewhatifforecastrequest.h"

namespace QtAws {
namespace Forecast {

class DescribeWhatIfForecastResponsePrivate;

class QTAWSFORECAST_EXPORT DescribeWhatIfForecastResponse : public ForecastResponse {
    Q_OBJECT

public:
    DescribeWhatIfForecastResponse(const DescribeWhatIfForecastRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeWhatIfForecastRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeWhatIfForecastResponse)
    Q_DISABLE_COPY(DescribeWhatIfForecastResponse)

};

} // namespace Forecast
} // namespace QtAws

#endif
