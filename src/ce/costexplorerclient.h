/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_COSTEXPLORERCLIENT_H
#define QTAWS_COSTEXPLORERCLIENT_H

#include "core/awsabstractclient.h"

class QNetworkReply;

namespace QtAws {
namespace CostExplorer {

class CostExplorerClientPrivate;
class GetCostAndUsageRequest;
class GetCostAndUsageResponse;
class GetDimensionValuesRequest;
class GetDimensionValuesResponse;
class GetReservationCoverageRequest;
class GetReservationCoverageResponse;
class GetReservationPurchaseRecommendationRequest;
class GetReservationPurchaseRecommendationResponse;
class GetReservationUtilizationRequest;
class GetReservationUtilizationResponse;
class GetTagsRequest;
class GetTagsResponse;

class QTAWS_EXPORT CostExplorerClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    CostExplorerClient(
        const AwsRegion::Region region = AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    CostExplorerClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    GetCostAndUsageResponse * getCostAndUsage(const GetCostAndUsageRequest &request);
    GetDimensionValuesResponse * getDimensionValues(const GetDimensionValuesRequest &request);
    GetReservationCoverageResponse * getReservationCoverage(const GetReservationCoverageRequest &request);
    GetReservationPurchaseRecommendationResponse * getReservationPurchaseRecommendation(const GetReservationPurchaseRecommendationRequest &request);
    GetReservationUtilizationResponse * getReservationUtilization(const GetReservationUtilizationRequest &request);
    GetTagsResponse * getTags(const GetTagsRequest &request);

private:
    Q_DECLARE_PRIVATE(CostExplorerClient)
    Q_DISABLE_COPY(CostExplorerClient)

};

} // namespace CostExplorer
} // namespace QtAws

#endif
