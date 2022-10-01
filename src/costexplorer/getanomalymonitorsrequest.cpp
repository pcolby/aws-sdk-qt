// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getanomalymonitorsrequest.h"
#include "getanomalymonitorsrequest_p.h"
#include "getanomalymonitorsresponse.h"
#include "costexplorerrequest_p.h"

namespace QtAws {
namespace CostExplorer {

/*!
 * \class QtAws::CostExplorer::GetAnomalyMonitorsRequest
 * \brief The GetAnomalyMonitorsRequest class provides an interface for CostExplorer GetAnomalyMonitors requests.
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
 * \sa CostExplorerClient::getAnomalyMonitors
 */

/*!
 * Constructs a copy of \a other.
 */
GetAnomalyMonitorsRequest::GetAnomalyMonitorsRequest(const GetAnomalyMonitorsRequest &other)
    : CostExplorerRequest(new GetAnomalyMonitorsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetAnomalyMonitorsRequest object.
 */
GetAnomalyMonitorsRequest::GetAnomalyMonitorsRequest()
    : CostExplorerRequest(new GetAnomalyMonitorsRequestPrivate(CostExplorerRequest::GetAnomalyMonitorsAction, this))
{

}

/*!
 * \reimp
 */
bool GetAnomalyMonitorsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetAnomalyMonitorsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetAnomalyMonitorsRequest::response(QNetworkReply * const reply) const
{
    return new GetAnomalyMonitorsResponse(*this, reply);
}

/*!
 * \class QtAws::CostExplorer::GetAnomalyMonitorsRequestPrivate
 * \brief The GetAnomalyMonitorsRequestPrivate class provides private implementation for GetAnomalyMonitorsRequest.
 * \internal
 *
 * \inmodule QtAwsCostExplorer
 */

/*!
 * Constructs a GetAnomalyMonitorsRequestPrivate object for CostExplorer \a action,
 * with public implementation \a q.
 */
GetAnomalyMonitorsRequestPrivate::GetAnomalyMonitorsRequestPrivate(
    const CostExplorerRequest::Action action, GetAnomalyMonitorsRequest * const q)
    : CostExplorerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetAnomalyMonitorsRequest
 * class' copy constructor.
 */
GetAnomalyMonitorsRequestPrivate::GetAnomalyMonitorsRequestPrivate(
    const GetAnomalyMonitorsRequestPrivate &other, GetAnomalyMonitorsRequest * const q)
    : CostExplorerRequestPrivate(other, q)
{

}

} // namespace CostExplorer
} // namespace QtAws
