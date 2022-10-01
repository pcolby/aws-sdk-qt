// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_QUERYWHATIFFORECASTREQUEST_H
#define QTAWS_QUERYWHATIFFORECASTREQUEST_H

#include "forecastqueryrequest.h"

namespace QtAws {
namespace ForecastQuery {

class QueryWhatIfForecastRequestPrivate;

class QTAWSFORECASTQUERY_EXPORT QueryWhatIfForecastRequest : public ForecastQueryRequest {

public:
    QueryWhatIfForecastRequest(const QueryWhatIfForecastRequest &other);
    QueryWhatIfForecastRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(QueryWhatIfForecastRequest)

};

} // namespace ForecastQuery
} // namespace QtAws

#endif
