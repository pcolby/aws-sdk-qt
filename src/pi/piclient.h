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

#ifndef QTAWS_PICLIENT_H
#define QTAWS_PICLIENT_H

#include "core/awsabstractclient.h"

class QNetworkReply;

namespace QtAws {
namespace PI {

class PiClientPrivate;
class DescribeDimensionKeysRequest;
class DescribeDimensionKeysResponse;
class GetDimensionKeyDetailsRequest;
class GetDimensionKeyDetailsResponse;
class GetResourceMetricsRequest;
class GetResourceMetricsResponse;

class QTAWS_EXPORT PiClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    PiClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    PiClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    DescribeDimensionKeysResponse * describeDimensionKeys(const DescribeDimensionKeysRequest &request);
    GetDimensionKeyDetailsResponse * getDimensionKeyDetails(const GetDimensionKeyDetailsRequest &request);
    GetResourceMetricsResponse * getResourceMetrics(const GetResourceMetricsRequest &request);

protected:
    /// @cond internal
    PiClientPrivate * const d_ptr; ///< Internal d-pointer.
    PiClient(PiClientPrivate * const d);
    /// @endcond

private:
    Q_DECLARE_PRIVATE(PiClient)
    Q_DISABLE_COPY(PiClient)

};

} // namespace PI
} // namespace QtAws

#endif
