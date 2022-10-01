// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getanomaliesrequest.h"
#include "getanomaliesrequest_p.h"
#include "getanomaliesresponse.h"
#include "costexplorerrequest_p.h"

namespace QtAws {
namespace CostExplorer {

/*!
 * \class QtAws::CostExplorer::GetAnomaliesRequest
 * \brief The GetAnomaliesRequest class provides an interface for CostExplorer GetAnomalies requests.
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
 * \sa CostExplorerClient::getAnomalies
 */

/*!
 * Constructs a copy of \a other.
 */
GetAnomaliesRequest::GetAnomaliesRequest(const GetAnomaliesRequest &other)
    : CostExplorerRequest(new GetAnomaliesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetAnomaliesRequest object.
 */
GetAnomaliesRequest::GetAnomaliesRequest()
    : CostExplorerRequest(new GetAnomaliesRequestPrivate(CostExplorerRequest::GetAnomaliesAction, this))
{

}

/*!
 * \reimp
 */
bool GetAnomaliesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetAnomaliesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetAnomaliesRequest::response(QNetworkReply * const reply) const
{
    return new GetAnomaliesResponse(*this, reply);
}

/*!
 * \class QtAws::CostExplorer::GetAnomaliesRequestPrivate
 * \brief The GetAnomaliesRequestPrivate class provides private implementation for GetAnomaliesRequest.
 * \internal
 *
 * \inmodule QtAwsCostExplorer
 */

/*!
 * Constructs a GetAnomaliesRequestPrivate object for CostExplorer \a action,
 * with public implementation \a q.
 */
GetAnomaliesRequestPrivate::GetAnomaliesRequestPrivate(
    const CostExplorerRequest::Action action, GetAnomaliesRequest * const q)
    : CostExplorerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetAnomaliesRequest
 * class' copy constructor.
 */
GetAnomaliesRequestPrivate::GetAnomaliesRequestPrivate(
    const GetAnomaliesRequestPrivate &other, GetAnomaliesRequest * const q)
    : CostExplorerRequestPrivate(other, q)
{

}

} // namespace CostExplorer
} // namespace QtAws
