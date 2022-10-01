// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PRICINGCLIENT_H
#define QTAWS_PRICINGCLIENT_H

#include "core/awsabstractclient.h"

#include "qtawspricingglobal.h"

class QNetworkReply;

namespace QtAws {
namespace Pricing {

class PricingClientPrivate;
class DescribeServicesRequest;
class DescribeServicesResponse;
class GetAttributeValuesRequest;
class GetAttributeValuesResponse;
class GetProductsRequest;
class GetProductsResponse;

class QTAWSPRICING_EXPORT PricingClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    PricingClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit PricingClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
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
} // namespace QtAws

#endif
