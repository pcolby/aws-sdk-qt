// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_FORECASTQUERYCLIENT_P_H
#define QTAWS_FORECASTQUERYCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace ForecastQuery {

class ForecastQueryClient;

class ForecastQueryClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit ForecastQueryClientPrivate(ForecastQueryClient * const q);

private:
    Q_DECLARE_PUBLIC(ForecastQueryClient)
    Q_DISABLE_COPY(ForecastQueryClientPrivate)

};

} // namespace ForecastQuery
} // namespace QtAws

#endif
