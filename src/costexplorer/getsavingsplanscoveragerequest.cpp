// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getsavingsplanscoveragerequest.h"
#include "getsavingsplanscoveragerequest_p.h"
#include "getsavingsplanscoverageresponse.h"
#include "costexplorerrequest_p.h"

namespace QtAws {
namespace CostExplorer {

/*!
 * \class QtAws::CostExplorer::GetSavingsPlansCoverageRequest
 * \brief The GetSavingsPlansCoverageRequest class provides an interface for CostExplorer GetSavingsPlansCoverage requests.
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
 * \sa CostExplorerClient::getSavingsPlansCoverage
 */

/*!
 * Constructs a copy of \a other.
 */
GetSavingsPlansCoverageRequest::GetSavingsPlansCoverageRequest(const GetSavingsPlansCoverageRequest &other)
    : CostExplorerRequest(new GetSavingsPlansCoverageRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetSavingsPlansCoverageRequest object.
 */
GetSavingsPlansCoverageRequest::GetSavingsPlansCoverageRequest()
    : CostExplorerRequest(new GetSavingsPlansCoverageRequestPrivate(CostExplorerRequest::GetSavingsPlansCoverageAction, this))
{

}

/*!
 * \reimp
 */
bool GetSavingsPlansCoverageRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetSavingsPlansCoverageResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetSavingsPlansCoverageRequest::response(QNetworkReply * const reply) const
{
    return new GetSavingsPlansCoverageResponse(*this, reply);
}

/*!
 * \class QtAws::CostExplorer::GetSavingsPlansCoverageRequestPrivate
 * \brief The GetSavingsPlansCoverageRequestPrivate class provides private implementation for GetSavingsPlansCoverageRequest.
 * \internal
 *
 * \inmodule QtAwsCostExplorer
 */

/*!
 * Constructs a GetSavingsPlansCoverageRequestPrivate object for CostExplorer \a action,
 * with public implementation \a q.
 */
GetSavingsPlansCoverageRequestPrivate::GetSavingsPlansCoverageRequestPrivate(
    const CostExplorerRequest::Action action, GetSavingsPlansCoverageRequest * const q)
    : CostExplorerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetSavingsPlansCoverageRequest
 * class' copy constructor.
 */
GetSavingsPlansCoverageRequestPrivate::GetSavingsPlansCoverageRequestPrivate(
    const GetSavingsPlansCoverageRequestPrivate &other, GetSavingsPlansCoverageRequest * const q)
    : CostExplorerRequestPrivate(other, q)
{

}

} // namespace CostExplorer
} // namespace QtAws
