// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeservicesrequest.h"
#include "describeservicesrequest_p.h"
#include "describeservicesresponse.h"
#include "pricingrequest_p.h"

namespace QtAws {
namespace Pricing {

/*!
 * \class QtAws::Pricing::DescribeServicesRequest
 * \brief The DescribeServicesRequest class provides an interface for Pricing DescribeServices requests.
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
 * \sa PricingClient::describeServices
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeServicesRequest::DescribeServicesRequest(const DescribeServicesRequest &other)
    : PricingRequest(new DescribeServicesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeServicesRequest object.
 */
DescribeServicesRequest::DescribeServicesRequest()
    : PricingRequest(new DescribeServicesRequestPrivate(PricingRequest::DescribeServicesAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeServicesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeServicesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeServicesRequest::response(QNetworkReply * const reply) const
{
    return new DescribeServicesResponse(*this, reply);
}

/*!
 * \class QtAws::Pricing::DescribeServicesRequestPrivate
 * \brief The DescribeServicesRequestPrivate class provides private implementation for DescribeServicesRequest.
 * \internal
 *
 * \inmodule QtAwsPricing
 */

/*!
 * Constructs a DescribeServicesRequestPrivate object for Pricing \a action,
 * with public implementation \a q.
 */
DescribeServicesRequestPrivate::DescribeServicesRequestPrivate(
    const PricingRequest::Action action, DescribeServicesRequest * const q)
    : PricingRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeServicesRequest
 * class' copy constructor.
 */
DescribeServicesRequestPrivate::DescribeServicesRequestPrivate(
    const DescribeServicesRequestPrivate &other, DescribeServicesRequest * const q)
    : PricingRequestPrivate(other, q)
{

}

} // namespace Pricing
} // namespace QtAws
