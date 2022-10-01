/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

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
