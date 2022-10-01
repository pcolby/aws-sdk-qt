// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletepricingplanrequest.h"
#include "deletepricingplanrequest_p.h"
#include "deletepricingplanresponse.h"
#include "billingconductorrequest_p.h"

namespace QtAws {
namespace BillingConductor {

/*!
 * \class QtAws::BillingConductor::DeletePricingPlanRequest
 * \brief The DeletePricingPlanRequest class provides an interface for BillingConductor DeletePricingPlan requests.
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
 * \sa BillingConductorClient::deletePricingPlan
 */

/*!
 * Constructs a copy of \a other.
 */
DeletePricingPlanRequest::DeletePricingPlanRequest(const DeletePricingPlanRequest &other)
    : BillingConductorRequest(new DeletePricingPlanRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeletePricingPlanRequest object.
 */
DeletePricingPlanRequest::DeletePricingPlanRequest()
    : BillingConductorRequest(new DeletePricingPlanRequestPrivate(BillingConductorRequest::DeletePricingPlanAction, this))
{

}

/*!
 * \reimp
 */
bool DeletePricingPlanRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeletePricingPlanResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeletePricingPlanRequest::response(QNetworkReply * const reply) const
{
    return new DeletePricingPlanResponse(*this, reply);
}

/*!
 * \class QtAws::BillingConductor::DeletePricingPlanRequestPrivate
 * \brief The DeletePricingPlanRequestPrivate class provides private implementation for DeletePricingPlanRequest.
 * \internal
 *
 * \inmodule QtAwsBillingConductor
 */

/*!
 * Constructs a DeletePricingPlanRequestPrivate object for BillingConductor \a action,
 * with public implementation \a q.
 */
DeletePricingPlanRequestPrivate::DeletePricingPlanRequestPrivate(
    const BillingConductorRequest::Action action, DeletePricingPlanRequest * const q)
    : BillingConductorRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeletePricingPlanRequest
 * class' copy constructor.
 */
DeletePricingPlanRequestPrivate::DeletePricingPlanRequestPrivate(
    const DeletePricingPlanRequestPrivate &other, DeletePricingPlanRequest * const q)
    : BillingConductorRequestPrivate(other, q)
{

}

} // namespace BillingConductor
} // namespace QtAws
