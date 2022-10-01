// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getreservationpurchaserecommendationrequest.h"
#include "getreservationpurchaserecommendationrequest_p.h"
#include "getreservationpurchaserecommendationresponse.h"
#include "costexplorerrequest_p.h"

namespace QtAws {
namespace CostExplorer {

/*!
 * \class QtAws::CostExplorer::GetReservationPurchaseRecommendationRequest
 * \brief The GetReservationPurchaseRecommendationRequest class provides an interface for CostExplorer GetReservationPurchaseRecommendation requests.
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
 * \sa CostExplorerClient::getReservationPurchaseRecommendation
 */

/*!
 * Constructs a copy of \a other.
 */
GetReservationPurchaseRecommendationRequest::GetReservationPurchaseRecommendationRequest(const GetReservationPurchaseRecommendationRequest &other)
    : CostExplorerRequest(new GetReservationPurchaseRecommendationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetReservationPurchaseRecommendationRequest object.
 */
GetReservationPurchaseRecommendationRequest::GetReservationPurchaseRecommendationRequest()
    : CostExplorerRequest(new GetReservationPurchaseRecommendationRequestPrivate(CostExplorerRequest::GetReservationPurchaseRecommendationAction, this))
{

}

/*!
 * \reimp
 */
bool GetReservationPurchaseRecommendationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetReservationPurchaseRecommendationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetReservationPurchaseRecommendationRequest::response(QNetworkReply * const reply) const
{
    return new GetReservationPurchaseRecommendationResponse(*this, reply);
}

/*!
 * \class QtAws::CostExplorer::GetReservationPurchaseRecommendationRequestPrivate
 * \brief The GetReservationPurchaseRecommendationRequestPrivate class provides private implementation for GetReservationPurchaseRecommendationRequest.
 * \internal
 *
 * \inmodule QtAwsCostExplorer
 */

/*!
 * Constructs a GetReservationPurchaseRecommendationRequestPrivate object for CostExplorer \a action,
 * with public implementation \a q.
 */
GetReservationPurchaseRecommendationRequestPrivate::GetReservationPurchaseRecommendationRequestPrivate(
    const CostExplorerRequest::Action action, GetReservationPurchaseRecommendationRequest * const q)
    : CostExplorerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetReservationPurchaseRecommendationRequest
 * class' copy constructor.
 */
GetReservationPurchaseRecommendationRequestPrivate::GetReservationPurchaseRecommendationRequestPrivate(
    const GetReservationPurchaseRecommendationRequestPrivate &other, GetReservationPurchaseRecommendationRequest * const q)
    : CostExplorerRequestPrivate(other, q)
{

}

} // namespace CostExplorer
} // namespace QtAws
