// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createbudgetrequest.h"
#include "createbudgetrequest_p.h"
#include "createbudgetresponse.h"
#include "budgetsrequest_p.h"

namespace QtAws {
namespace Budgets {

/*!
 * \class QtAws::Budgets::CreateBudgetRequest
 * \brief The CreateBudgetRequest class provides an interface for Budgets CreateBudget requests.
 *
 * \inmodule QtAwsBudgets
 *
 *  Use the Amazon Web Services Budgets API to plan your service usage, service costs, and instance reservations. This API
 *  reference provides descriptions, syntax, and usage examples for each of the actions and data types for the Amazon Web
 *  Services Budgets feature.
 * 
 *  </p
 * 
 *  Budgets provide you with a way to see the following
 * 
 *  information> <ul> <li>
 * 
 *  How close your plan is to your budgeted amount or to the free tier
 * 
 *  limit> </li> <li>
 * 
 *  Your usage-to-date, including how much you've used of your Reserved Instances
 * 
 *  (RIs> </li> <li>
 * 
 *  Your current estimated charges from Amazon Web Services, and how much your predicted usage will accrue in charges by the
 *  end of the
 * 
 *  mont> </li> <li>
 * 
 *  How much of your budget has been
 * 
 *  use> </li> </ul>
 * 
 *  Amazon Web Services updates your budget status several times a day. Budgets track your unblended costs, subscriptions,
 *  refunds, and RIs. You can create the following types of
 * 
 *  budgets> <ul> <li>
 * 
 *  <b>Cost budgets</b> - Plan how much you want to spend on a
 * 
 *  service> </li> <li>
 * 
 *  <b>Usage budgets</b> - Plan how much you want to use one or more
 * 
 *  services> </li> <li>
 * 
 *  <b>RI utilization budgets</b> - Define a utilization threshold, and receive alerts when your RI usage falls below that
 *  threshold. This lets you see if your RIs are unused or
 * 
 *  under-utilized> </li> <li>
 * 
 *  <b>RI coverage budgets</b> - Define a coverage threshold, and receive alerts when the number of your instance hours that
 *  are covered by RIs fall below that threshold. This lets you see how much of your instance usage is covered by a
 * 
 *  reservation> </li> </ul>
 * 
 *  Service
 * 
 *  Endpoin>
 * 
 *  The Amazon Web Services Budgets API provides the following
 * 
 *  endpoint> <ul> <li>
 * 
 *  https://budgets.amazonaws.co> </li> </ul>
 * 
 *  For information about costs that are associated with the Amazon Web Services Budgets API, see <a
 *  href="https://aws.amazon.com/aws-cost-management/pricing/">Amazon Web Services Cost Management
 *
 * \sa BudgetsClient::createBudget
 */

/*!
 * Constructs a copy of \a other.
 */
CreateBudgetRequest::CreateBudgetRequest(const CreateBudgetRequest &other)
    : BudgetsRequest(new CreateBudgetRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateBudgetRequest object.
 */
CreateBudgetRequest::CreateBudgetRequest()
    : BudgetsRequest(new CreateBudgetRequestPrivate(BudgetsRequest::CreateBudgetAction, this))
{

}

/*!
 * \reimp
 */
bool CreateBudgetRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateBudgetResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateBudgetRequest::response(QNetworkReply * const reply) const
{
    return new CreateBudgetResponse(*this, reply);
}

/*!
 * \class QtAws::Budgets::CreateBudgetRequestPrivate
 * \brief The CreateBudgetRequestPrivate class provides private implementation for CreateBudgetRequest.
 * \internal
 *
 * \inmodule QtAwsBudgets
 */

/*!
 * Constructs a CreateBudgetRequestPrivate object for Budgets \a action,
 * with public implementation \a q.
 */
CreateBudgetRequestPrivate::CreateBudgetRequestPrivate(
    const BudgetsRequest::Action action, CreateBudgetRequest * const q)
    : BudgetsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateBudgetRequest
 * class' copy constructor.
 */
CreateBudgetRequestPrivate::CreateBudgetRequestPrivate(
    const CreateBudgetRequestPrivate &other, CreateBudgetRequest * const q)
    : BudgetsRequestPrivate(other, q)
{

}

} // namespace Budgets
} // namespace QtAws
