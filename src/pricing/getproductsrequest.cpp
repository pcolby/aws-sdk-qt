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

#include "getproductsrequest.h"
#include "getproductsrequest_p.h"
#include "getproductsresponse.h"
#include "pricingrequest_p.h"

namespace QtAws {
namespace Pricing {

/*!
 * \class QtAws::Pricing::GetProductsRequest
 * \brief The GetProductsRequest class provides an interface for Pricing GetProducts requests.
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
 * \sa PricingClient::getProducts
 */

/*!
 * Constructs a copy of \a other.
 */
GetProductsRequest::GetProductsRequest(const GetProductsRequest &other)
    : PricingRequest(new GetProductsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetProductsRequest object.
 */
GetProductsRequest::GetProductsRequest()
    : PricingRequest(new GetProductsRequestPrivate(PricingRequest::GetProductsAction, this))
{

}

/*!
 * \reimp
 */
bool GetProductsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetProductsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetProductsRequest::response(QNetworkReply * const reply) const
{
    return new GetProductsResponse(*this, reply);
}

/*!
 * \class QtAws::Pricing::GetProductsRequestPrivate
 * \brief The GetProductsRequestPrivate class provides private implementation for GetProductsRequest.
 * \internal
 *
 * \inmodule QtAwsPricing
 */

/*!
 * Constructs a GetProductsRequestPrivate object for Pricing \a action,
 * with public implementation \a q.
 */
GetProductsRequestPrivate::GetProductsRequestPrivate(
    const PricingRequest::Action action, GetProductsRequest * const q)
    : PricingRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetProductsRequest
 * class' copy constructor.
 */
GetProductsRequestPrivate::GetProductsRequestPrivate(
    const GetProductsRequestPrivate &other, GetProductsRequest * const q)
    : PricingRequestPrivate(other, q)
{

}

} // namespace Pricing
} // namespace QtAws
