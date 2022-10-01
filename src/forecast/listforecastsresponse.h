// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTFORECASTSRESPONSE_H
#define QTAWS_LISTFORECASTSRESPONSE_H

#include "forecastresponse.h"
#include "listforecastsrequest.h"

namespace QtAws {
namespace Forecast {

class ListForecastsResponsePrivate;

class QTAWSFORECAST_EXPORT ListForecastsResponse : public ForecastResponse {
    Q_OBJECT

public:
    ListForecastsResponse(const ListForecastsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListForecastsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListForecastsResponse)
    Q_DISABLE_COPY(ListForecastsResponse)

};

} // namespace Forecast
} // namespace QtAws

#endif
