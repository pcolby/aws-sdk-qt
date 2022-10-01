// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_FORECASTQUERYREQUEST_P_H
#define QTAWS_FORECASTQUERYREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "forecastqueryrequest.h"

namespace QtAws {
namespace ForecastQuery {

class ForecastQueryRequest;

class ForecastQueryRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    ForecastQueryRequest::Action action; ///< ForecastQuery action to be performed.
    QString apiVersion;        ///< ForecastQuery API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< ForecastQuery request (query string) parameters. @todo?

    ForecastQueryRequestPrivate(const ForecastQueryRequest::Action action, ForecastQueryRequest * const q);
    ForecastQueryRequestPrivate(const ForecastQueryRequestPrivate &other, ForecastQueryRequest * const q);

    static QString toString(const ForecastQueryRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(ForecastQueryRequest)

};

} // namespace ForecastQuery
} // namespace QtAws

#endif
