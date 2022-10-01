// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listpricingrulesassociatedtopricingplanrequest.h"
#include "listpricingrulesassociatedtopricingplanrequest_p.h"
#include "listpricingrulesassociatedtopricingplanresponse.h"
#include "billingconductorrequest_p.h"

namespace QtAws {
namespace BillingConductor {

/*!
 * \class QtAws::BillingConductor::ListPricingRulesAssociatedToPricingPlanRequest
 * \brief The ListPricingRulesAssociatedToPricingPlanRequest class provides an interface for BillingConductor ListPricingRulesAssociatedToPricingPlan requests.
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
 * \sa BillingConductorClient::listPricingRulesAssociatedToPricingPlan
 */

/*!
 * Constructs a copy of \a other.
 */
ListPricingRulesAssociatedToPricingPlanRequest::ListPricingRulesAssociatedToPricingPlanRequest(const ListPricingRulesAssociatedToPricingPlanRequest &other)
    : BillingConductorRequest(new ListPricingRulesAssociatedToPricingPlanRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListPricingRulesAssociatedToPricingPlanRequest object.
 */
ListPricingRulesAssociatedToPricingPlanRequest::ListPricingRulesAssociatedToPricingPlanRequest()
    : BillingConductorRequest(new ListPricingRulesAssociatedToPricingPlanRequestPrivate(BillingConductorRequest::ListPricingRulesAssociatedToPricingPlanAction, this))
{

}

/*!
 * \reimp
 */
bool ListPricingRulesAssociatedToPricingPlanRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListPricingRulesAssociatedToPricingPlanResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListPricingRulesAssociatedToPricingPlanRequest::response(QNetworkReply * const reply) const
{
    return new ListPricingRulesAssociatedToPricingPlanResponse(*this, reply);
}

/*!
 * \class QtAws::BillingConductor::ListPricingRulesAssociatedToPricingPlanRequestPrivate
 * \brief The ListPricingRulesAssociatedToPricingPlanRequestPrivate class provides private implementation for ListPricingRulesAssociatedToPricingPlanRequest.
 * \internal
 *
 * \inmodule QtAwsBillingConductor
 */

/*!
 * Constructs a ListPricingRulesAssociatedToPricingPlanRequestPrivate object for BillingConductor \a action,
 * with public implementation \a q.
 */
ListPricingRulesAssociatedToPricingPlanRequestPrivate::ListPricingRulesAssociatedToPricingPlanRequestPrivate(
    const BillingConductorRequest::Action action, ListPricingRulesAssociatedToPricingPlanRequest * const q)
    : BillingConductorRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListPricingRulesAssociatedToPricingPlanRequest
 * class' copy constructor.
 */
ListPricingRulesAssociatedToPricingPlanRequestPrivate::ListPricingRulesAssociatedToPricingPlanRequestPrivate(
    const ListPricingRulesAssociatedToPricingPlanRequestPrivate &other, ListPricingRulesAssociatedToPricingPlanRequest * const q)
    : BillingConductorRequestPrivate(other, q)
{

}

} // namespace BillingConductor
} // namespace QtAws
