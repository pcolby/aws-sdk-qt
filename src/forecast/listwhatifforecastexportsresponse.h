// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTWHATIFFORECASTEXPORTSRESPONSE_H
#define QTAWS_LISTWHATIFFORECASTEXPORTSRESPONSE_H

#include "forecastresponse.h"
#include "listwhatifforecastexportsrequest.h"

namespace QtAws {
namespace Forecast {

class ListWhatIfForecastExportsResponsePrivate;

class QTAWSFORECAST_EXPORT ListWhatIfForecastExportsResponse : public ForecastResponse {
    Q_OBJECT

public:
    ListWhatIfForecastExportsResponse(const ListWhatIfForecastExportsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListWhatIfForecastExportsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListWhatIfForecastExportsResponse)
    Q_DISABLE_COPY(ListWhatIfForecastExportsResponse)

};

} // namespace Forecast
} // namespace QtAws

#endif
