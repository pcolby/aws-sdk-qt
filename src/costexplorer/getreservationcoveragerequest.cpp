/*
    Copyright 2013-2019 Paul Colby

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

#include "getreservationcoveragerequest.h"
#include "getreservationcoveragerequest_p.h"
#include "getreservationcoverageresponse.h"
#include "costexplorerrequest_p.h"

namespace QtAws {
namespace CostExplorer {

/*!
 * \class QtAws::CostExplorer::GetReservationCoverageRequest
 * \brief The GetReservationCoverageRequest class provides an interface for CostExplorer GetReservationCoverage requests.
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
 *  href="https://aws.amazon.com/aws-cost-management/pricing/">AWS Cost Management
 *
 * \sa CostExplorerClient::getReservationCoverage
 */

/*!
 * Constructs a copy of \a other.
 */
GetReservationCoverageRequest::GetReservationCoverageRequest(const GetReservationCoverageRequest &other)
    : CostExplorerRequest(new GetReservationCoverageRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetReservationCoverageRequest object.
 */
GetReservationCoverageRequest::GetReservationCoverageRequest()
    : CostExplorerRequest(new GetReservationCoverageRequestPrivate(CostExplorerRequest::GetReservationCoverageAction, this))
{

}

/*!
 * \reimp
 */
bool GetReservationCoverageRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetReservationCoverageResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetReservationCoverageRequest::response(QNetworkReply * const reply) const
{
    return new GetReservationCoverageResponse(*this, reply);
}

/*!
 * \class QtAws::CostExplorer::GetReservationCoverageRequestPrivate
 * \brief The GetReservationCoverageRequestPrivate class provides private implementation for GetReservationCoverageRequest.
 * \internal
 *
 * \inmodule QtAwsCostExplorer
 */

/*!
 * Constructs a GetReservationCoverageRequestPrivate object for CostExplorer \a action,
 * with public implementation \a q.
 */
GetReservationCoverageRequestPrivate::GetReservationCoverageRequestPrivate(
    const CostExplorerRequest::Action action, GetReservationCoverageRequest * const q)
    : CostExplorerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetReservationCoverageRequest
 * class' copy constructor.
 */
GetReservationCoverageRequestPrivate::GetReservationCoverageRequestPrivate(
    const GetReservationCoverageRequestPrivate &other, GetReservationCoverageRequest * const q)
    : CostExplorerRequestPrivate(other, q)
{

}

} // namespace CostExplorer
} // namespace QtAws
