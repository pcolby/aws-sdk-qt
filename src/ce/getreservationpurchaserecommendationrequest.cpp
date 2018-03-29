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

/**
 * @class  GetReservationPurchaseRecommendationRequest
 *
 * @brief  Implements CostExplorer GetReservationPurchaseRecommendation requests.
 *
 * @see    CostExplorerClient::getReservationPurchaseRecommendation
 */

/**
 * @brief  Constructs a new GetReservationPurchaseRecommendationRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetReservationPurchaseRecommendationRequest::GetReservationPurchaseRecommendationRequest(const GetReservationPurchaseRecommendationRequest &other)
    : CostExplorerRequest(new GetReservationPurchaseRecommendationRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetReservationPurchaseRecommendationRequest object.
 */
GetReservationPurchaseRecommendationRequest::GetReservationPurchaseRecommendationRequest()
    : CostExplorerRequest(new GetReservationPurchaseRecommendationRequestPrivate(CostExplorerRequest::GetReservationPurchaseRecommendationAction, this))
{

}

bool GetReservationPurchaseRecommendationRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetReservationPurchaseRecommendationResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetReservationPurchaseRecommendationResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CostExplorerClient::send
 */
AwsAbstractResponse * GetReservationPurchaseRecommendationRequest::response(QNetworkReply * const reply) const
{
    return new GetReservationPurchaseRecommendationResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetReservationPurchaseRecommendationRequestPrivate
 *
 * @brief  Private implementation for GetReservationPurchaseRecommendationRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetReservationPurchaseRecommendationRequestPrivate object.
 *
 * @param  action  CostExplorer action being performed.
 * @param  q       Pointer to this object's public GetReservationPurchaseRecommendationRequest instance.
 */
GetReservationPurchaseRecommendationRequestPrivate::GetReservationPurchaseRecommendationRequestPrivate(
    const CostExplorerRequest::Action action, GetReservationPurchaseRecommendationRequest * const q)
    : GetReservationPurchaseRecommendationPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetReservationPurchaseRecommendationRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetReservationPurchaseRecommendationRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetReservationPurchaseRecommendationRequest instance.
 */
GetReservationPurchaseRecommendationRequestPrivate::GetReservationPurchaseRecommendationRequestPrivate(
    const GetReservationPurchaseRecommendationRequestPrivate &other, GetReservationPurchaseRecommendationRequest * const q)
    : GetReservationPurchaseRecommendationPrivate(other, q)
{

}

} // namespace CostExplorer
} // namespace QtAws
