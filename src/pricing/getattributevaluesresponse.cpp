// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  Amazon Web Services Price List API is a centralized and convenient way to programmatically query Amazon Web Services for
 *  services, products, and pricing information. The Amazon Web Services Price List uses standardized product attributes
 *  such as <code>Location</code>, <code>Storage Class</code>, and <code>Operating System</code>, and provides prices at the
 *  SKU level. You can use the Amazon Web Services Price List to build cost control and scenario planning tools, reconcile
 *  billing data, forecast future spend for budgeting purposes, and provide cost benefit analysis that compare your internal
 *  workloads with Amazon Web
 * 
 *  Services>
 * 
 *  Use <code>GetServices</code> without a service code to retrieve the service codes for all AWS services, then
 *  <code>GetServices</code> with a service code to retrieve the attribute names for that service. After you have the
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
 *  Amazon Web Services Price List service API provides the following two
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
    //Q_D(GetAttributeValuesResponse);
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
    Q_UNUSED(xml) ///< @todo
}

} // namespace Pricing
} // namespace QtAws
