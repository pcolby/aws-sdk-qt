// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateanomalysubscriptionrequest.h"
#include "updateanomalysubscriptionrequest_p.h"
#include "updateanomalysubscriptionresponse.h"
#include "costexplorerrequest_p.h"

namespace QtAws {
namespace CostExplorer {

/*!
 * \class QtAws::CostExplorer::UpdateAnomalySubscriptionRequest
 * \brief The UpdateAnomalySubscriptionRequest class provides an interface for CostExplorer UpdateAnomalySubscription requests.
 *
 * \inmodule QtAwsCostExplorer
 *
 *  You can use the Cost Explorer API to programmatically query your cost and usage data. You can query for aggregated data
 *  such as total monthly costs or total daily usage. You can also query for granular data. This might include the number of
 *  daily write operations for Amazon DynamoDB database tables in your production environment.
 * 
 *  </p
 * 
 *  Service
 * 
 *  Endpoin>
 * 
 *  The Cost Explorer API provides the following
 * 
 *  endpoint> <ul> <li>
 * 
 *  <code>https://ce.us-east-1.amazonaws.com</code>
 * 
 *  </p </li> </ul>
 * 
 *  For information about the costs that are associated with the Cost Explorer API, see <a
 *  href="http://aws.amazon.com/aws-cost-management/pricing/">Amazon Web Services Cost Management
 *
 * \sa CostExplorerClient::updateAnomalySubscription
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateAnomalySubscriptionRequest::UpdateAnomalySubscriptionRequest(const UpdateAnomalySubscriptionRequest &other)
    : CostExplorerRequest(new UpdateAnomalySubscriptionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateAnomalySubscriptionRequest object.
 */
UpdateAnomalySubscriptionRequest::UpdateAnomalySubscriptionRequest()
    : CostExplorerRequest(new UpdateAnomalySubscriptionRequestPrivate(CostExplorerRequest::UpdateAnomalySubscriptionAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateAnomalySubscriptionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateAnomalySubscriptionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateAnomalySubscriptionRequest::response(QNetworkReply * const reply) const
{
    return new UpdateAnomalySubscriptionResponse(*this, reply);
}

/*!
 * \class QtAws::CostExplorer::UpdateAnomalySubscriptionRequestPrivate
 * \brief The UpdateAnomalySubscriptionRequestPrivate class provides private implementation for UpdateAnomalySubscriptionRequest.
 * \internal
 *
 * \inmodule QtAwsCostExplorer
 */

/*!
 * Constructs a UpdateAnomalySubscriptionRequestPrivate object for CostExplorer \a action,
 * with public implementation \a q.
 */
UpdateAnomalySubscriptionRequestPrivate::UpdateAnomalySubscriptionRequestPrivate(
    const CostExplorerRequest::Action action, UpdateAnomalySubscriptionRequest * const q)
    : CostExplorerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateAnomalySubscriptionRequest
 * class' copy constructor.
 */
UpdateAnomalySubscriptionRequestPrivate::UpdateAnomalySubscriptionRequestPrivate(
    const UpdateAnomalySubscriptionRequestPrivate &other, UpdateAnomalySubscriptionRequest * const q)
    : CostExplorerRequestPrivate(other, q)
{

}

} // namespace CostExplorer
} // namespace QtAws
