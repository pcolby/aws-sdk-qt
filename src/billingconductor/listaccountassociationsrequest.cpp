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

#include "listaccountassociationsrequest.h"
#include "listaccountassociationsrequest_p.h"
#include "listaccountassociationsresponse.h"
#include "billingconductorrequest_p.h"

namespace QtAws {
namespace BillingConductor {

/*!
 * \class QtAws::BillingConductor::ListAccountAssociationsRequest
 * \brief The ListAccountAssociationsRequest class provides an interface for BillingConductor ListAccountAssociations requests.
 *
 * \inmodule QtAwsBillingConductor
 *
 *  Amazon Web Services Billing Conductor is a fully managed service that you can use to customize a <a
 *  href="https://docs.aws.amazon.com/enterprisebilling/6b7c01c5-b592-467e-9769-90052eaf359c/userguide/understanding-eb.html#eb-other-definitions">pro
 *  forma</a> version of your billing data each month, to accurately show or chargeback your end customers. Amazon Web
 *  Services Billing Conductor doesn't change the way you're billed by Amazon Web Services each month by design. Instead, it
 *  provides you with a mechanism to configure, generate, and display rates to certain customers over a given billing
 *  period. You can also analyze the difference between the rates you apply to your accounting groupings relative to your
 *  actual rates from Amazon Web Services. As a result of your Amazon Web Services Billing Conductor configuration, the
 *  payer account can also see the custom rate applied on the billing details page of the <a
 *  href="https://console.aws.amazon.com/billing">Amazon Web Services Billing console</a>, or configure a cost and usage
 *  report per billing
 * 
 *  group>
 * 
 *  This documentation shows how you can configure Amazon Web Services Billing Conductor using its API. For more information
 *  about using the <a href="https://console.aws.amazon.com/enterprisebilling/">Amazon Web Services Billing Conductor</a>
 *  user interface, see the <a
 *  href="https://docs.aws.amazon.com/enterprisebilling/6b7c01c5-b592-467e-9769-90052eaf359c/userguide/what-is-enterprisebilling.html">
 *  Amazon Web Services Enterprise Billing Console User
 *
 * \sa BillingConductorClient::listAccountAssociations
 */

/*!
 * Constructs a copy of \a other.
 */
ListAccountAssociationsRequest::ListAccountAssociationsRequest(const ListAccountAssociationsRequest &other)
    : BillingConductorRequest(new ListAccountAssociationsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListAccountAssociationsRequest object.
 */
ListAccountAssociationsRequest::ListAccountAssociationsRequest()
    : BillingConductorRequest(new ListAccountAssociationsRequestPrivate(BillingConductorRequest::ListAccountAssociationsAction, this))
{

}

/*!
 * \reimp
 */
bool ListAccountAssociationsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListAccountAssociationsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListAccountAssociationsRequest::response(QNetworkReply * const reply) const
{
    return new ListAccountAssociationsResponse(*this, reply);
}

/*!
 * \class QtAws::BillingConductor::ListAccountAssociationsRequestPrivate
 * \brief The ListAccountAssociationsRequestPrivate class provides private implementation for ListAccountAssociationsRequest.
 * \internal
 *
 * \inmodule QtAwsBillingConductor
 */

/*!
 * Constructs a ListAccountAssociationsRequestPrivate object for BillingConductor \a action,
 * with public implementation \a q.
 */
ListAccountAssociationsRequestPrivate::ListAccountAssociationsRequestPrivate(
    const BillingConductorRequest::Action action, ListAccountAssociationsRequest * const q)
    : BillingConductorRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListAccountAssociationsRequest
 * class' copy constructor.
 */
ListAccountAssociationsRequestPrivate::ListAccountAssociationsRequestPrivate(
    const ListAccountAssociationsRequestPrivate &other, ListAccountAssociationsRequest * const q)
    : BillingConductorRequestPrivate(other, q)
{

}

} // namespace BillingConductor
} // namespace QtAws
