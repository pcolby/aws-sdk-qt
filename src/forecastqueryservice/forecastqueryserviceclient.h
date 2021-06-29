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

#ifndef QTAWS_FORECASTQUERYSERVICECLIENT_H
#define QTAWS_FORECASTQUERYSERVICECLIENT_H

#include "core/awsabstractclient.h"

#include "qtawsforecastqueryserviceglobal.h"

class QNetworkReply;

namespace QtAws {
namespace ForecastQueryService {

class ForecastQueryServiceClientPrivate;
class QueryForecastRequest;
class QueryForecastResponse;

class QTAWSFORECASTQUERYSERVICE_EXPORT ForecastQueryServiceClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    ForecastQueryServiceClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    ForecastQueryServiceClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    QueryForecastResponse * queryForecast(const QueryForecastRequest &request);

protected:
    /// @cond internal
    ForecastQueryServiceClientPrivate * const d_ptr; ///< Internal d-pointer.
    ForecastQueryServiceClient(ForecastQueryServiceClientPrivate * const d);
    /// @endcond

private:
    Q_DECLARE_PRIVATE(ForecastQueryServiceClient)
    Q_DISABLE_COPY(ForecastQueryServiceClient)

};

} // namespace ForecastQueryService
} // namespace QtAws

#endif
