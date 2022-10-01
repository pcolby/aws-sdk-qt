// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateanomalymonitorrequest.h"
#include "updateanomalymonitorrequest_p.h"
#include "updateanomalymonitorresponse.h"
#include "costexplorerrequest_p.h"

namespace QtAws {
namespace CostExplorer {

/*!
 * \class QtAws::CostExplorer::UpdateAnomalyMonitorRequest
 * \brief The UpdateAnomalyMonitorRequest class provides an interface for CostExplorer UpdateAnomalyMonitor requests.
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
 * \sa CostExplorerClient::updateAnomalyMonitor
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateAnomalyMonitorRequest::UpdateAnomalyMonitorRequest(const UpdateAnomalyMonitorRequest &other)
    : CostExplorerRequest(new UpdateAnomalyMonitorRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateAnomalyMonitorRequest object.
 */
UpdateAnomalyMonitorRequest::UpdateAnomalyMonitorRequest()
    : CostExplorerRequest(new UpdateAnomalyMonitorRequestPrivate(CostExplorerRequest::UpdateAnomalyMonitorAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateAnomalyMonitorRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateAnomalyMonitorResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateAnomalyMonitorRequest::response(QNetworkReply * const reply) const
{
    return new UpdateAnomalyMonitorResponse(*this, reply);
}

/*!
 * \class QtAws::CostExplorer::UpdateAnomalyMonitorRequestPrivate
 * \brief The UpdateAnomalyMonitorRequestPrivate class provides private implementation for UpdateAnomalyMonitorRequest.
 * \internal
 *
 * \inmodule QtAwsCostExplorer
 */

/*!
 * Constructs a UpdateAnomalyMonitorRequestPrivate object for CostExplorer \a action,
 * with public implementation \a q.
 */
UpdateAnomalyMonitorRequestPrivate::UpdateAnomalyMonitorRequestPrivate(
    const CostExplorerRequest::Action action, UpdateAnomalyMonitorRequest * const q)
    : CostExplorerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateAnomalyMonitorRequest
 * class' copy constructor.
 */
UpdateAnomalyMonitorRequestPrivate::UpdateAnomalyMonitorRequestPrivate(
    const UpdateAnomalyMonitorRequestPrivate &other, UpdateAnomalyMonitorRequest * const q)
    : CostExplorerRequestPrivate(other, q)
{

}

} // namespace CostExplorer
} // namespace QtAws
