/*
    Copyright 2013-2018 Paul Colby

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

#include "pricingclient.h"
#include "pricingclient_p.h"

#include "core/awssignaturev4.h"
#include "describeservicesrequest.h"
#include "describeservicesresponse.h"
#include "getattributevaluesrequest.h"
#include "getattributevaluesresponse.h"
#include "getproductsrequest.h"
#include "getproductsresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::Pricing
 * \brief The QtAws::Pricing contains stuff...
 *
 * \inmodule QtAwsPricing
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace Pricing {

/*!
 * \class QtAws::Pricing::PricingClient
 * \brief The PricingClient class provides access to the AWS Price List Service ( Pricing) service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsPricing
 *
 *  AWS Price List Service API (AWS Price List Service) is a centralized and convenient way to programmatically query Amazon
 *  Web Services for services, products, and pricing information. The AWS Price List Service uses standardized product
 *  attributes such as <code>Location</code>, <code>Storage Class</code>, and <code>Operating System</code>, and provides
 *  prices at the SKU level. You can use the AWS Price List Service to build cost control and scenario planning tools,
 *  reconcile billing data, forecast future spend for budgeting purposes, and provide cost benefit analysis that compare
 *  your internal workloads with
 * 
 *  AWS>
 * 
 *  Use <code>GetServices</code> without a service code to retrieve the service codes for all AWS services, then
 *  <code>GetServices</code> with a service code to retreive the attribute names for that service. After you have the
 *  service code and attribute names, you can use <code>GetAttributeValues</code> to see what values are available for an
 *  attribute. With the service code and an attribute name and value, you can use <code>GetProducts</code> to find specific
 *  products that you're interested in, such as an <code>AmazonEC2</code> instance, with a <code>Provisioned IOPS</code>
 * 
 *  <code>volumeType</code>>
 * 
 *  Service
 * 
 *  Endpoin>
 * 
 *  AWS Price List Service API provides the following two
 * 
 *  endpoints> <ul> <li>
 * 
 *  https://api.pricing.us-east-1.amazonaws.co> </li> <li>
 */

/*!
 * \brief Constructs a PricingClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
PricingClient::PricingClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new PricingClientPrivate(this), parent)
{
    Q_D(PricingClient);
    d->apiVersion = QStringLiteral("2017-10-15");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("api.pricing");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("AWS Price List Service");
    d->serviceName = QStringLiteral("pricing");
}

/*!
 * \overload PricingClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
PricingClient::PricingClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new PricingClientPrivate(this), parent)
{
    Q_D(PricingClient);
    d->apiVersion = QStringLiteral("2017-10-15");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("api.pricing");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("AWS Price List Service");
    d->serviceName = QStringLiteral("pricing");
}

/*!
 * Sends \a request to the PricingClient service, and returns a pointer to an
 * DescribeServicesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the metadata for one service or a list of the metadata for all services. Use this without a service code to get
 * the service codes for all services. Use it with a service code, such as <code>AmazonEC2</code>, to get information
 * specific to that service, such as the attribute names available for that service. For example, some of the attribute
 * names available for EC2 are <code>volumeType</code>, <code>maxIopsVolume</code>, <code>operation</code>,
 * <code>locationType</code>, and
 */
DescribeServicesResponse * PricingClient::describeServices(const DescribeServicesRequest &request)
{
    return qobject_cast<DescribeServicesResponse *>(send(request));
}

/*!
 * Sends \a request to the PricingClient service, and returns a pointer to an
 * GetAttributeValuesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of attribute values. Attibutes are similar to the details in a Price List API offer file. For a list of
 * available attributes, see <a
 * href="http://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/reading-an-offer.html#pps-defs">Offer File
 * Definitions</a> in the <a href="http://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/billing-what-is.html">AWS
 * Billing and Cost Management User
 */
GetAttributeValuesResponse * PricingClient::getAttributeValues(const GetAttributeValuesRequest &request)
{
    return qobject_cast<GetAttributeValuesResponse *>(send(request));
}

/*!
 * Sends \a request to the PricingClient service, and returns a pointer to an
 * GetProductsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of all products that match the filter
 */
GetProductsResponse * PricingClient::getProducts(const GetProductsRequest &request)
{
    return qobject_cast<GetProductsResponse *>(send(request));
}

/*!
 * \class QtAws::Pricing::PricingClientPrivate
 * \brief The PricingClientPrivate class provides private implementation for PricingClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsPricing
 */

/*!
 * Constructs a PricingClientPrivate object with public implementation \a q.
 */
PricingClientPrivate::PricingClientPrivate(PricingClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace Pricing
} // namespace QtAws
