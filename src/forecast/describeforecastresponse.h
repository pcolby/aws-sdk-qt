// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEFORECASTRESPONSE_H
#define QTAWS_DESCRIBEFORECASTRESPONSE_H

#include "forecastresponse.h"
#include "describeforecastrequest.h"

namespace QtAws {
namespace Forecast {

class DescribeForecastResponsePrivate;

class QTAWSFORECAST_EXPORT DescribeForecastResponse : public ForecastResponse {
    Q_OBJECT

public:
    DescribeForecastResponse(const DescribeForecastRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeForecastRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeForecastResponse)
    Q_DISABLE_COPY(DescribeForecastResponse)

};

} // namespace Forecast
} // namespace QtAws

#endif
