// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTWHATIFFORECASTSRESPONSE_H
#define QTAWS_LISTWHATIFFORECASTSRESPONSE_H

#include "forecastresponse.h"
#include "listwhatifforecastsrequest.h"

namespace QtAws {
namespace Forecast {

class ListWhatIfForecastsResponsePrivate;

class QTAWSFORECAST_EXPORT ListWhatIfForecastsResponse : public ForecastResponse {
    Q_OBJECT

public:
    ListWhatIfForecastsResponse(const ListWhatIfForecastsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListWhatIfForecastsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListWhatIfForecastsResponse)
    Q_DISABLE_COPY(ListWhatIfForecastsResponse)

};

} // namespace Forecast
} // namespace QtAws

#endif
