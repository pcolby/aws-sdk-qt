// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getcostandusagewithresourcesrequest.h"
#include "getcostandusagewithresourcesrequest_p.h"
#include "getcostandusagewithresourcesresponse.h"
#include "costexplorerrequest_p.h"

namespace QtAws {
namespace CostExplorer {

/*!
 * \class QtAws::CostExplorer::GetCostAndUsageWithResourcesRequest
 * \brief The GetCostAndUsageWithResourcesRequest class provides an interface for CostExplorer GetCostAndUsageWithResources requests.
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
 * \sa CostExplorerClient::getCostAndUsageWithResources
 */

/*!
 * Constructs a copy of \a other.
 */
GetCostAndUsageWithResourcesRequest::GetCostAndUsageWithResourcesRequest(const GetCostAndUsageWithResourcesRequest &other)
    : CostExplorerRequest(new GetCostAndUsageWithResourcesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetCostAndUsageWithResourcesRequest object.
 */
GetCostAndUsageWithResourcesRequest::GetCostAndUsageWithResourcesRequest()
    : CostExplorerRequest(new GetCostAndUsageWithResourcesRequestPrivate(CostExplorerRequest::GetCostAndUsageWithResourcesAction, this))
{

}

/*!
 * \reimp
 */
bool GetCostAndUsageWithResourcesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetCostAndUsageWithResourcesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetCostAndUsageWithResourcesRequest::response(QNetworkReply * const reply) const
{
    return new GetCostAndUsageWithResourcesResponse(*this, reply);
}

/*!
 * \class QtAws::CostExplorer::GetCostAndUsageWithResourcesRequestPrivate
 * \brief The GetCostAndUsageWithResourcesRequestPrivate class provides private implementation for GetCostAndUsageWithResourcesRequest.
 * \internal
 *
 * \inmodule QtAwsCostExplorer
 */

/*!
 * Constructs a GetCostAndUsageWithResourcesRequestPrivate object for CostExplorer \a action,
 * with public implementation \a q.
 */
GetCostAndUsageWithResourcesRequestPrivate::GetCostAndUsageWithResourcesRequestPrivate(
    const CostExplorerRequest::Action action, GetCostAndUsageWithResourcesRequest * const q)
    : CostExplorerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetCostAndUsageWithResourcesRequest
 * class' copy constructor.
 */
GetCostAndUsageWithResourcesRequestPrivate::GetCostAndUsageWithResourcesRequestPrivate(
    const GetCostAndUsageWithResourcesRequestPrivate &other, GetCostAndUsageWithResourcesRequest * const q)
    : CostExplorerRequestPrivate(other, q)
{

}

} // namespace CostExplorer
} // namespace QtAws
