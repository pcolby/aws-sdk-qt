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

#include "getattributevaluesrequest.h"
#include "getattributevaluesrequest_p.h"
#include "getattributevaluesresponse.h"
#include "pricingrequest_p.h"

namespace QtAws {
namespace Pricing {

/*!
 * \class QtAws::Pricing::GetAttributeValuesRequest
 *
 * \brief The GetAttributeValuesRequest class provides an interface for Pricing GetAttributeValues requests.
 *
 * \ingroup Pricing
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
 * @brief  Constructs a new GetAttributeValuesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetAttributeValuesRequest::GetAttributeValuesRequest(const GetAttributeValuesRequest &other)
    : PricingRequest(new GetAttributeValuesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new GetAttributeValuesRequest object.
 */
GetAttributeValuesRequest::GetAttributeValuesRequest()
    : PricingRequest(new GetAttributeValuesRequestPrivate(PricingRequest::GetAttributeValuesAction, this))
{

}

/*!
 * \reimp
 */
bool GetAttributeValuesRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an GetAttributeValuesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetAttributeValuesResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  PricingClient::send
 */
QtAws::Core::AwsAbstractResponse * GetAttributeValuesRequest::response(QNetworkReply * const reply) const
{
    return new GetAttributeValuesResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  GetAttributeValuesRequestPrivate
 *
 * @brief  Private implementation for GetAttributeValuesRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new GetAttributeValuesRequestPrivate object.
 *
 * @param  action  Pricing action being performed.
 * @param  q       Pointer to this object's public GetAttributeValuesRequest instance.
 */
GetAttributeValuesRequestPrivate::GetAttributeValuesRequestPrivate(
    const PricingRequest::Action action, GetAttributeValuesRequest * const q)
    : PricingRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new GetAttributeValuesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetAttributeValuesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetAttributeValuesRequest instance.
 */
GetAttributeValuesRequestPrivate::GetAttributeValuesRequestPrivate(
    const GetAttributeValuesRequestPrivate &other, GetAttributeValuesRequest * const q)
    : PricingRequestPrivate(other, q)
{

}

} // namespace Pricing
} // namespace QtAws
