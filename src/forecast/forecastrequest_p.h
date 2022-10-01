// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_FORECASTREQUEST_P_H
#define QTAWS_FORECASTREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "forecastrequest.h"

namespace QtAws {
namespace Forecast {

class ForecastRequest;

class ForecastRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    ForecastRequest::Action action; ///< Forecast action to be performed.
    QString apiVersion;        ///< Forecast API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< Forecast request (query string) parameters. @todo?

    ForecastRequestPrivate(const ForecastRequest::Action action, ForecastRequest * const q);
    ForecastRequestPrivate(const ForecastRequestPrivate &other, ForecastRequest * const q);

    static QString toString(const ForecastRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(ForecastRequest)

};

} // namespace Forecast
} // namespace QtAws

#endif
