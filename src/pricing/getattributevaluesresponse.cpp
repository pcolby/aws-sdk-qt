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

#include "getattributevaluesresponse.h"
#include "getattributevaluesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pricing {

/*!
 * \class QtAws::Pricing::GetAttributeValuesResponse
 * \brief The GetAttributeValuesResponse class provides an interace for Pricing GetAttributeValues responses.
 *
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
 *
 * \sa PricingClient::getAttributeValues
 */

/*!
 * Constructs a GetAttributeValuesResponse object for \a reply to \a request, with parent \a parent.
 */
GetAttributeValuesResponse::GetAttributeValuesResponse(
        const GetAttributeValuesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PricingResponse(new GetAttributeValuesResponsePrivate(this), parent)
{
    setRequest(new GetAttributeValuesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetAttributeValuesRequest * GetAttributeValuesResponse::request() const
{
    Q_D(const GetAttributeValuesResponse);
    return static_cast<const GetAttributeValuesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Pricing GetAttributeValues \a response.
 */
void GetAttributeValuesResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetAttributeValuesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Pricing::GetAttributeValuesResponsePrivate
 * \brief The GetAttributeValuesResponsePrivate class provides private implementation for GetAttributeValuesResponse.
 * \internal
 *
 * \inmodule QtAwsPricing
 */

/*!
 * Constructs a GetAttributeValuesResponsePrivate object with public implementation \a q.
 */
GetAttributeValuesResponsePrivate::GetAttributeValuesResponsePrivate(
    GetAttributeValuesResponse * const q) : PricingResponsePrivate(q)
{

}

/*!
 * Parses a Pricing GetAttributeValues response element from \a xml.
 */
void GetAttributeValuesResponsePrivate::parseGetAttributeValuesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetAttributeValuesResponse"));
    /// @todo
}

} // namespace Pricing
} // namespace QtAws
