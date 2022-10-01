// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getcostforecastrequest.h"
#include "getcostforecastrequest_p.h"
#include "getcostforecastresponse.h"
#include "costexplorerrequest_p.h"

namespace QtAws {
namespace CostExplorer {

/*!
 * \class QtAws::CostExplorer::GetCostForecastRequest
 * \brief The GetCostForecastRequest class provides an interface for CostExplorer GetCostForecast requests.
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
 * \sa CostExplorerClient::getCostForecast
 */

/*!
 * Constructs a copy of \a other.
 */
GetCostForecastRequest::GetCostForecastRequest(const GetCostForecastRequest &other)
    : CostExplorerRequest(new GetCostForecastRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetCostForecastRequest object.
 */
GetCostForecastRequest::GetCostForecastRequest()
    : CostExplorerRequest(new GetCostForecastRequestPrivate(CostExplorerRequest::GetCostForecastAction, this))
{

}

/*!
 * \reimp
 */
bool GetCostForecastRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetCostForecastResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetCostForecastRequest::response(QNetworkReply * const reply) const
{
    return new GetCostForecastResponse(*this, reply);
}

/*!
 * \class QtAws::CostExplorer::GetCostForecastRequestPrivate
 * \brief The GetCostForecastRequestPrivate class provides private implementation for GetCostForecastRequest.
 * \internal
 *
 * \inmodule QtAwsCostExplorer
 */

/*!
 * Constructs a GetCostForecastRequestPrivate object for CostExplorer \a action,
 * with public implementation \a q.
 */
GetCostForecastRequestPrivate::GetCostForecastRequestPrivate(
    const CostExplorerRequest::Action action, GetCostForecastRequest * const q)
    : CostExplorerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetCostForecastRequest
 * class' copy constructor.
 */
GetCostForecastRequestPrivate::GetCostForecastRequestPrivate(
    const GetCostForecastRequestPrivate &other, GetCostForecastRequest * const q)
    : CostExplorerRequestPrivate(other, q)
{

}

} // namespace CostExplorer
} // namespace QtAws
