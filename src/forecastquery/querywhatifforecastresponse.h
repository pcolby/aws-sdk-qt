// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_QUERYWHATIFFORECASTRESPONSE_H
#define QTAWS_QUERYWHATIFFORECASTRESPONSE_H

#include "forecastqueryresponse.h"
#include "querywhatifforecastrequest.h"

namespace QtAws {
namespace ForecastQuery {

class QueryWhatIfForecastResponsePrivate;

class QTAWSFORECASTQUERY_EXPORT QueryWhatIfForecastResponse : public ForecastQueryResponse {
    Q_OBJECT

public:
    QueryWhatIfForecastResponse(const QueryWhatIfForecastRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const QueryWhatIfForecastRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(QueryWhatIfForecastResponse)
    Q_DISABLE_COPY(QueryWhatIfForecastResponse)

};

} // namespace ForecastQuery
} // namespace QtAws

#endif
