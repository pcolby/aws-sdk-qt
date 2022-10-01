// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_FORECASTQUERYCLIENT_H
#define QTAWS_FORECASTQUERYCLIENT_H

#include "core/awsabstractclient.h"

#include "qtawsforecastqueryglobal.h"

class QNetworkReply;

namespace QtAws {
namespace ForecastQuery {

class ForecastQueryClientPrivate;
class QueryForecastRequest;
class QueryForecastResponse;
class QueryWhatIfForecastRequest;
class QueryWhatIfForecastResponse;

class QTAWSFORECASTQUERY_EXPORT ForecastQueryClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    ForecastQueryClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit ForecastQueryClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    QueryForecastResponse * queryForecast(const QueryForecastRequest &request);
    QueryWhatIfForecastResponse * queryWhatIfForecast(const QueryWhatIfForecastRequest &request);

private:
    Q_DECLARE_PRIVATE(ForecastQueryClient)
    Q_DISABLE_COPY(ForecastQueryClient)

};

} // namespace ForecastQuery
} // namespace QtAws

#endif
