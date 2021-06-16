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

#include "getsavingsplansutilizationdetailsrequest.h"
#include "getsavingsplansutilizationdetailsrequest_p.h"
#include "getsavingsplansutilizationdetailsresponse.h"
#include "costexplorerrequest_p.h"

namespace QtAws {
namespace CostExplorer {

/*!
 * \class QtAws::CostExplorer::GetSavingsPlansUtilizationDetailsRequest
 * \brief The GetSavingsPlansUtilizationDetailsRequest class provides an interface for CostExplorer GetSavingsPlansUtilizationDetails requests.
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
 * \sa CostExplorerClient::getSavingsPlansUtilizationDetails
 */

/*!
 * Constructs a copy of \a other.
 */
GetSavingsPlansUtilizationDetailsRequest::GetSavingsPlansUtilizationDetailsRequest(const GetSavingsPlansUtilizationDetailsRequest &other)
    : CostExplorerRequest(new GetSavingsPlansUtilizationDetailsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetSavingsPlansUtilizationDetailsRequest object.
 */
GetSavingsPlansUtilizationDetailsRequest::GetSavingsPlansUtilizationDetailsRequest()
    : CostExplorerRequest(new GetSavingsPlansUtilizationDetailsRequestPrivate(CostExplorerRequest::GetSavingsPlansUtilizationDetailsAction, this))
{

}

/*!
 * \reimp
 */
bool GetSavingsPlansUtilizationDetailsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetSavingsPlansUtilizationDetailsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetSavingsPlansUtilizationDetailsRequest::response(QNetworkReply * const reply) const
{
    return new GetSavingsPlansUtilizationDetailsResponse(*this, reply);
}

/*!
 * \class QtAws::CostExplorer::GetSavingsPlansUtilizationDetailsRequestPrivate
 * \brief The GetSavingsPlansUtilizationDetailsRequestPrivate class provides private implementation for GetSavingsPlansUtilizationDetailsRequest.
 * \internal
 *
 * \inmodule QtAwsCostExplorer
 */

/*!
 * Constructs a GetSavingsPlansUtilizationDetailsRequestPrivate object for CostExplorer \a action,
 * with public implementation \a q.
 */
GetSavingsPlansUtilizationDetailsRequestPrivate::GetSavingsPlansUtilizationDetailsRequestPrivate(
    const CostExplorerRequest::Action action, GetSavingsPlansUtilizationDetailsRequest * const q)
    : CostExplorerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetSavingsPlansUtilizationDetailsRequest
 * class' copy constructor.
 */
GetSavingsPlansUtilizationDetailsRequestPrivate::GetSavingsPlansUtilizationDetailsRequestPrivate(
    const GetSavingsPlansUtilizationDetailsRequestPrivate &other, GetSavingsPlansUtilizationDetailsRequest * const q)
    : CostExplorerRequestPrivate(other, q)
{

}

} // namespace CostExplorer
} // namespace QtAws
