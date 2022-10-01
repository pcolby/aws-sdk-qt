// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTMONITOREVALUATIONSRESPONSE_H
#define QTAWS_LISTMONITOREVALUATIONSRESPONSE_H

#include "forecastresponse.h"
#include "listmonitorevaluationsrequest.h"

namespace QtAws {
namespace Forecast {

class ListMonitorEvaluationsResponsePrivate;

class QTAWSFORECAST_EXPORT ListMonitorEvaluationsResponse : public ForecastResponse {
    Q_OBJECT

public:
    ListMonitorEvaluationsResponse(const ListMonitorEvaluationsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListMonitorEvaluationsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListMonitorEvaluationsResponse)
    Q_DISABLE_COPY(ListMonitorEvaluationsResponse)

};

} // namespace Forecast
} // namespace QtAws

#endif
