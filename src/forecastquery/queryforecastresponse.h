// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_QUERYFORECASTRESPONSE_H
#define QTAWS_QUERYFORECASTRESPONSE_H

#include "forecastqueryresponse.h"
#include "queryforecastrequest.h"

namespace QtAws {
namespace ForecastQuery {

class QueryForecastResponsePrivate;

class QTAWSFORECASTQUERY_EXPORT QueryForecastResponse : public ForecastQueryResponse {
    Q_OBJECT

public:
    QueryForecastResponse(const QueryForecastRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const QueryForecastRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(QueryForecastResponse)
    Q_DISABLE_COPY(QueryForecastResponse)

};

} // namespace ForecastQuery
} // namespace QtAws

#endif
