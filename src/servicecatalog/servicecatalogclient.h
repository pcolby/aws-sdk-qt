/*
    Copyright 2013-2016 Paul Colby

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

#ifndef QTAWS_SERVICECATALOGCLIENT_H
#define QTAWS_SERVICECATALOGCLIENT_H

#include <QObject>

class QNetworkReply;

namespace AWS {

class AwsAbstractClient;
class AwsAbstractCredentials;

namespace ServiceCatalog {

class ServiceCatalogClientPrivate;

class QTAWS_EXPORT ServiceCatalogClient : public AwsAbstractClient {
    Q_OBJECT

public:
    ServiceCatalogClient(
        const AwsRegion::Region region = AwsRegion::InvalidRegion,
        AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    ServiceCatalogClient(
        const QUrl &endpoint, AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    DescribeProductResponse * describeProduct(const DescribeProductRequest &request);
    DescribeProductViewResponse * describeProductView(const DescribeProductViewRequest &request);
    DescribeProvisioningParametersResponse * describeProvisioningParameters(const DescribeProvisioningParametersRequest &request);
    DescribeRecordResponse * describeRecord(const DescribeRecordRequest &request);
    ListLaunchPathsResponse * listLaunchPaths(const ListLaunchPathsRequest &request);
    ListRecordHistoryResponse * listRecordHistory(const ListRecordHistoryRequest &request);
    ProvisionProductResponse * provisionProduct(const ProvisionProductRequest &request);
    ScanProvisionedProductsResponse * scanProvisionedProducts(const ScanProvisionedProductsRequest &request);
    SearchProductsResponse * searchProducts(const SearchProductsRequest &request);
    TerminateProvisionedProductResponse * terminateProvisionedProduct(const TerminateProvisionedProductRequest &request);
    UpdateProvisionedProductResponse * updateProvisionedProduct(const UpdateProvisionedProductRequest &request);

private:
    Q_DECLARE_PRIVATE(ServiceCatalogClient)
    Q_DISABLE_COPY(ServiceCatalogClient)

};

} // namespace ServiceCatalog
} // namespace AWS

#endif
