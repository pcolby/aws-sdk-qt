// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_FORECASTCLIENT_P_H
#define QTAWS_FORECASTCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace Forecast {

class ForecastClient;

class ForecastClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit ForecastClientPrivate(ForecastClient * const q);

private:
    Q_DECLARE_PUBLIC(ForecastClient)
    Q_DISABLE_COPY(ForecastClientPrivate)

};

} // namespace Forecast
} // namespace QtAws

#endif
