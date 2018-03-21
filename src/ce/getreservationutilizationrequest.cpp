/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "getreservationutilizationrequest.h"
#include "getreservationutilizationrequest_p.h"
#include "getreservationutilizationresponse.h"
#include "costexplorerrequest_p.h"

namespace AWS {
namespace CostExplorer {

/**
 * @class  GetReservationUtilizationRequest
 *
 * @brief  Implements CostExplorer GetReservationUtilization requests.
 *
 * @see    CostExplorerClient::getReservationUtilization
 */

/**
 * @brief  Constructs a new GetReservationUtilizationResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetReservationUtilizationResponse::GetReservationUtilizationResponse(

/**
 * @brief  Constructs a new GetReservationUtilizationRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetReservationUtilizationRequest::GetReservationUtilizationRequest(const GetReservationUtilizationRequest &other)
    : CostExplorerRequest(new GetReservationUtilizationRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetReservationUtilizationRequest object.
 */
GetReservationUtilizationRequest::GetReservationUtilizationRequest()
    : CostExplorerRequest(new GetReservationUtilizationRequestPrivate(CostExplorerRequest::GetReservationUtilizationAction, this))
{

}

bool GetReservationUtilizationRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetReservationUtilizationResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetReservationUtilizationResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CostExplorerClient::send
 */
AwsAbstractResponse * GetReservationUtilizationRequest::response(QNetworkReply * const reply) const
{
    return new GetReservationUtilizationResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetReservationUtilizationRequestPrivate
 *
 * @brief  Private implementation for GetReservationUtilizationRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetReservationUtilizationRequestPrivate object.
 *
 * @param  action  CostExplorer action being performed.
 * @param  q       Pointer to this object's public GetReservationUtilizationRequest instance.
 */
GetReservationUtilizationRequestPrivate::GetReservationUtilizationRequestPrivate(
    const CostExplorerRequest::Action action, GetReservationUtilizationRequest * const q)
    : GetReservationUtilizationPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetReservationUtilizationRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetReservationUtilizationRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetReservationUtilizationRequest instance.
 */
GetReservationUtilizationRequestPrivate::GetReservationUtilizationRequestPrivate(
    const GetReservationUtilizationRequestPrivate &other, GetReservationUtilizationRequest * const q)
    : GetReservationUtilizationPrivate(other, q)
{

}
