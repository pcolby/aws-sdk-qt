// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getsavingsplansutilizationrequest.h"
#include "getsavingsplansutilizationrequest_p.h"
#include "getsavingsplansutilizationresponse.h"
#include "costexplorerrequest_p.h"

namespace QtAws {
namespace CostExplorer {

/*!
 * \class QtAws::CostExplorer::GetSavingsPlansUtilizationRequest
 * \brief The GetSavingsPlansUtilizationRequest class provides an interface for CostExplorer GetSavingsPlansUtilization requests.
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
 * \sa CostExplorerClient::getSavingsPlansUtilization
 */

/*!
 * Constructs a copy of \a other.
 */
GetSavingsPlansUtilizationRequest::GetSavingsPlansUtilizationRequest(const GetSavingsPlansUtilizationRequest &other)
    : CostExplorerRequest(new GetSavingsPlansUtilizationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetSavingsPlansUtilizationRequest object.
 */
GetSavingsPlansUtilizationRequest::GetSavingsPlansUtilizationRequest()
    : CostExplorerRequest(new GetSavingsPlansUtilizationRequestPrivate(CostExplorerRequest::GetSavingsPlansUtilizationAction, this))
{

}

/*!
 * \reimp
 */
bool GetSavingsPlansUtilizationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetSavingsPlansUtilizationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetSavingsPlansUtilizationRequest::response(QNetworkReply * const reply) const
{
    return new GetSavingsPlansUtilizationResponse(*this, reply);
}

/*!
 * \class QtAws::CostExplorer::GetSavingsPlansUtilizationRequestPrivate
 * \brief The GetSavingsPlansUtilizationRequestPrivate class provides private implementation for GetSavingsPlansUtilizationRequest.
 * \internal
 *
 * \inmodule QtAwsCostExplorer
 */

/*!
 * Constructs a GetSavingsPlansUtilizationRequestPrivate object for CostExplorer \a action,
 * with public implementation \a q.
 */
GetSavingsPlansUtilizationRequestPrivate::GetSavingsPlansUtilizationRequestPrivate(
    const CostExplorerRequest::Action action, GetSavingsPlansUtilizationRequest * const q)
    : CostExplorerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetSavingsPlansUtilizationRequest
 * class' copy constructor.
 */
GetSavingsPlansUtilizationRequestPrivate::GetSavingsPlansUtilizationRequestPrivate(
    const GetSavingsPlansUtilizationRequestPrivate &other, GetSavingsPlansUtilizationRequest * const q)
    : CostExplorerRequestPrivate(other, q)
{

}

} // namespace CostExplorer
} // namespace QtAws
