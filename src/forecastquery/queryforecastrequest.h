// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_QUERYFORECASTREQUEST_H
#define QTAWS_QUERYFORECASTREQUEST_H

#include "forecastqueryrequest.h"

namespace QtAws {
namespace ForecastQuery {

class QueryForecastRequestPrivate;

class QTAWSFORECASTQUERY_EXPORT QueryForecastRequest : public ForecastQueryRequest {

public:
    QueryForecastRequest(const QueryForecastRequest &other);
    QueryForecastRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(QueryForecastRequest)

};

} // namespace ForecastQuery
} // namespace QtAws

#endif
