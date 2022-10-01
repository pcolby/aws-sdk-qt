// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PICLIENT_H
#define QTAWS_PICLIENT_H

#include "core/awsabstractclient.h"

#include "qtawspiglobal.h"

class QNetworkReply;

namespace QtAws {
namespace Pi {

class PiClientPrivate;
class DescribeDimensionKeysRequest;
class DescribeDimensionKeysResponse;
class GetDimensionKeyDetailsRequest;
class GetDimensionKeyDetailsResponse;
class GetResourceMetadataRequest;
class GetResourceMetadataResponse;
class GetResourceMetricsRequest;
class GetResourceMetricsResponse;
class ListAvailableResourceDimensionsRequest;
class ListAvailableResourceDimensionsResponse;
class ListAvailableResourceMetricsRequest;
class ListAvailableResourceMetricsResponse;

class QTAWSPI_EXPORT PiClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    PiClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit PiClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    DescribeDimensionKeysResponse * describeDimensionKeys(const DescribeDimensionKeysRequest &request);
    GetDimensionKeyDetailsResponse * getDimensionKeyDetails(const GetDimensionKeyDetailsRequest &request);
    GetResourceMetadataResponse * getResourceMetadata(const GetResourceMetadataRequest &request);
    GetResourceMetricsResponse * getResourceMetrics(const GetResourceMetricsRequest &request);
    ListAvailableResourceDimensionsResponse * listAvailableResourceDimensions(const ListAvailableResourceDimensionsRequest &request);
    ListAvailableResourceMetricsResponse * listAvailableResourceMetrics(const ListAvailableResourceMetricsRequest &request);

private:
    Q_DECLARE_PRIVATE(PiClient)
    Q_DISABLE_COPY(PiClient)

};

} // namespace Pi
} // namespace QtAws

#endif
