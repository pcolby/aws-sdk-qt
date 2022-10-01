// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getreservationutilizationrequest.h"
#include "getreservationutilizationrequest_p.h"
#include "getreservationutilizationresponse.h"
#include "costexplorerrequest_p.h"

namespace QtAws {
namespace CostExplorer {

/*!
 * \class QtAws::CostExplorer::GetReservationUtilizationRequest
 * \brief The GetReservationUtilizationRequest class provides an interface for CostExplorer GetReservationUtilization requests.
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
 * \sa CostExplorerClient::getReservationUtilization
 */

/*!
 * Constructs a copy of \a other.
 */
GetReservationUtilizationRequest::GetReservationUtilizationRequest(const GetReservationUtilizationRequest &other)
    : CostExplorerRequest(new GetReservationUtilizationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetReservationUtilizationRequest object.
 */
GetReservationUtilizationRequest::GetReservationUtilizationRequest()
    : CostExplorerRequest(new GetReservationUtilizationRequestPrivate(CostExplorerRequest::GetReservationUtilizationAction, this))
{

}

/*!
 * \reimp
 */
bool GetReservationUtilizationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetReservationUtilizationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetReservationUtilizationRequest::response(QNetworkReply * const reply) const
{
    return new GetReservationUtilizationResponse(*this, reply);
}

/*!
 * \class QtAws::CostExplorer::GetReservationUtilizationRequestPrivate
 * \brief The GetReservationUtilizationRequestPrivate class provides private implementation for GetReservationUtilizationRequest.
 * \internal
 *
 * \inmodule QtAwsCostExplorer
 */

/*!
 * Constructs a GetReservationUtilizationRequestPrivate object for CostExplorer \a action,
 * with public implementation \a q.
 */
GetReservationUtilizationRequestPrivate::GetReservationUtilizationRequestPrivate(
    const CostExplorerRequest::Action action, GetReservationUtilizationRequest * const q)
    : CostExplorerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetReservationUtilizationRequest
 * class' copy constructor.
 */
GetReservationUtilizationRequestPrivate::GetReservationUtilizationRequestPrivate(
    const GetReservationUtilizationRequestPrivate &other, GetReservationUtilizationRequest * const q)
    : CostExplorerRequestPrivate(other, q)
{

}

} // namespace CostExplorer
} // namespace QtAws
