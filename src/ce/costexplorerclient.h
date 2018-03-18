/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_COSTEXPLORERCLIENT_H
#define QTAWS_COSTEXPLORERCLIENT_H

#include <QObject>

class QNetworkReply;

namespace AWS {

class AwsAbstractClient;
class AwsAbstractCredentials;

namespace CostExplorer {

class CostExplorerClientPrivate;

class QTAWS_EXPORT CostExplorerClient : public AwsAbstractClient {
    Q_OBJECT

public:
    CostExplorerClient(
        const AwsRegion::Region region = AwsRegion::InvalidRegion,
        AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    CostExplorerClient(
        const QUrl &endpoint, AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    GetCostAndUsageResponse * getCostAndUsage(const GetCostAndUsageRequest &request);
    GetDimensionValuesResponse * getDimensionValues(const GetDimensionValuesRequest &request);
    GetReservationCoverageResponse * getReservationCoverage(const GetReservationCoverageRequest &request);
    GetReservationUtilizationResponse * getReservationUtilization(const GetReservationUtilizationRequest &request);
    GetTagsResponse * getTags(const GetTagsRequest &request);

private:
    Q_DECLARE_PRIVATE(CostExplorerClient)
    Q_DISABLE_COPY(CostExplorerClient)

};

} // namespace CostExplorer
} // namespace AWS

#endif
