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

#ifndef QTAWS_PRICINGCLIENT_H
#define QTAWS_PRICINGCLIENT_H

#include "core/awsabstractclient.h"

class QNetworkReply;

class AwsAbstractClient;
class AwsAbstractCredentials;

namespace AWS {

namespace Pricing {

class PricingClientPrivate;
class DescribeServicesRequest;
class DescribeServicesResponse;
class GetAttributeValuesRequest;
class GetAttributeValuesResponse;
class GetProductsRequest;
class GetProductsResponse;

class QTAWS_EXPORT PricingClient : public AwsAbstractClient {
    Q_OBJECT

public:
    PricingClient(
        const AwsRegion::Region region = AwsRegion::InvalidRegion,
        AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    PricingClient(
        const QUrl &endpoint, AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    DescribeServicesResponse * describeServices(const DescribeServicesRequest &request);
    GetAttributeValuesResponse * getAttributeValues(const GetAttributeValuesRequest &request);
    GetProductsResponse * getProducts(const GetProductsRequest &request);

private:
    Q_DECLARE_PRIVATE(PricingClient)
    Q_DISABLE_COPY(PricingClient)

};

} // namespace Pricing
} // namespace AWS

#endif
