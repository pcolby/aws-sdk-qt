// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
