// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getcostandusagerequest.h"
#include "getcostandusagerequest_p.h"
#include "getcostandusageresponse.h"
#include "costexplorerrequest_p.h"

namespace QtAws {
namespace CostExplorer {

/*!
 * \class QtAws::CostExplorer::GetCostAndUsageRequest
 * \brief The GetCostAndUsageRequest class provides an interface for CostExplorer GetCostAndUsage requests.
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
 * \sa CostExplorerClient::getCostAndUsage
 */

/*!
 * Constructs a copy of \a other.
 */
GetCostAndUsageRequest::GetCostAndUsageRequest(const GetCostAndUsageRequest &other)
    : CostExplorerRequest(new GetCostAndUsageRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetCostAndUsageRequest object.
 */
GetCostAndUsageRequest::GetCostAndUsageRequest()
    : CostExplorerRequest(new GetCostAndUsageRequestPrivate(CostExplorerRequest::GetCostAndUsageAction, this))
{

}

/*!
 * \reimp
 */
bool GetCostAndUsageRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetCostAndUsageResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetCostAndUsageRequest::response(QNetworkReply * const reply) const
{
    return new GetCostAndUsageResponse(*this, reply);
}

/*!
 * \class QtAws::CostExplorer::GetCostAndUsageRequestPrivate
 * \brief The GetCostAndUsageRequestPrivate class provides private implementation for GetCostAndUsageRequest.
 * \internal
 *
 * \inmodule QtAwsCostExplorer
 */

/*!
 * Constructs a GetCostAndUsageRequestPrivate object for CostExplorer \a action,
 * with public implementation \a q.
 */
GetCostAndUsageRequestPrivate::GetCostAndUsageRequestPrivate(
    const CostExplorerRequest::Action action, GetCostAndUsageRequest * const q)
    : CostExplorerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetCostAndUsageRequest
 * class' copy constructor.
 */
GetCostAndUsageRequestPrivate::GetCostAndUsageRequestPrivate(
    const GetCostAndUsageRequestPrivate &other, GetCostAndUsageRequest * const q)
    : CostExplorerRequestPrivate(other, q)
{

}

} // namespace CostExplorer
} // namespace QtAws
