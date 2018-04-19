/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

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
 *  The Cost Explorer API allows you to programmatically query your cost and usage data. You can query for aggregated data
 *  such as total monthly costs or total daily usage. You can also query for granular data, such as the number of daily
 *  write operations for DynamoDB database tables in your production environment.
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
 *
 * Constructs a GetReservationPurchaseRecommendationRequestPrivate object for CostExplorer \a action with,
 * public implementation \a q.
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
