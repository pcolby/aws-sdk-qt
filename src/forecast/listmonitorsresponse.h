// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTMONITORSRESPONSE_H
#define QTAWS_LISTMONITORSRESPONSE_H

#include "forecastresponse.h"
#include "listmonitorsrequest.h"

namespace QtAws {
namespace Forecast {

class ListMonitorsResponsePrivate;

class QTAWSFORECAST_EXPORT ListMonitorsResponse : public ForecastResponse {
    Q_OBJECT

public:
    ListMonitorsResponse(const ListMonitorsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListMonitorsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListMonitorsResponse)
    Q_DISABLE_COPY(ListMonitorsResponse)

};

} // namespace Forecast
} // namespace QtAws

#endif
