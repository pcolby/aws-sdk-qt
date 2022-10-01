// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteanomalysubscriptionrequest.h"
#include "deleteanomalysubscriptionrequest_p.h"
#include "deleteanomalysubscriptionresponse.h"
#include "costexplorerrequest_p.h"

namespace QtAws {
namespace CostExplorer {

/*!
 * \class QtAws::CostExplorer::DeleteAnomalySubscriptionRequest
 * \brief The DeleteAnomalySubscriptionRequest class provides an interface for CostExplorer DeleteAnomalySubscription requests.
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
 * \sa CostExplorerClient::deleteAnomalySubscription
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteAnomalySubscriptionRequest::DeleteAnomalySubscriptionRequest(const DeleteAnomalySubscriptionRequest &other)
    : CostExplorerRequest(new DeleteAnomalySubscriptionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteAnomalySubscriptionRequest object.
 */
DeleteAnomalySubscriptionRequest::DeleteAnomalySubscriptionRequest()
    : CostExplorerRequest(new DeleteAnomalySubscriptionRequestPrivate(CostExplorerRequest::DeleteAnomalySubscriptionAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteAnomalySubscriptionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteAnomalySubscriptionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteAnomalySubscriptionRequest::response(QNetworkReply * const reply) const
{
    return new DeleteAnomalySubscriptionResponse(*this, reply);
}

/*!
 * \class QtAws::CostExplorer::DeleteAnomalySubscriptionRequestPrivate
 * \brief The DeleteAnomalySubscriptionRequestPrivate class provides private implementation for DeleteAnomalySubscriptionRequest.
 * \internal
 *
 * \inmodule QtAwsCostExplorer
 */

/*!
 * Constructs a DeleteAnomalySubscriptionRequestPrivate object for CostExplorer \a action,
 * with public implementation \a q.
 */
DeleteAnomalySubscriptionRequestPrivate::DeleteAnomalySubscriptionRequestPrivate(
    const CostExplorerRequest::Action action, DeleteAnomalySubscriptionRequest * const q)
    : CostExplorerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteAnomalySubscriptionRequest
 * class' copy constructor.
 */
DeleteAnomalySubscriptionRequestPrivate::DeleteAnomalySubscriptionRequestPrivate(
    const DeleteAnomalySubscriptionRequestPrivate &other, DeleteAnomalySubscriptionRequest * const q)
    : CostExplorerRequestPrivate(other, q)
{

}

} // namespace CostExplorer
} // namespace QtAws
