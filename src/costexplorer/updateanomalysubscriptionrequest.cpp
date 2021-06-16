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
 *  The Cost Explorer API enables you to programmatically query your cost and usage data. You can query for aggregated data
 *  such as total monthly costs or total daily usage. You can also query for granular data, such as the number of daily
 *  write operations for Amazon DynamoDB database tables in your production environment.
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
 *  For information about costs associated with the Cost Explorer API, see <a
 *  href="http://aws.amazon.com/aws-cost-management/pricing/">AWS Cost Management
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
