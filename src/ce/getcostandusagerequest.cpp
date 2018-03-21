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

#include "getcostandusagerequest.h"
#include "getcostandusagerequest_p.h"
#include "getcostandusageresponse.h"
#include "costexplorerrequest_p.h"

namespace AWS {
namespace CostExplorer {

/**
 * @class  GetCostAndUsageRequest
 *
 * @brief  Implements CostExplorer GetCostAndUsage requests.
 *
 * @see    CostExplorerClient::getCostAndUsage
 */

/**
 * @brief  Constructs a new GetCostAndUsageResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetCostAndUsageResponse::GetCostAndUsageResponse(

/**
 * @brief  Constructs a new GetCostAndUsageRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetCostAndUsageRequest::GetCostAndUsageRequest(const GetCostAndUsageRequest &other)
    : CostExplorerRequest(new GetCostAndUsageRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetCostAndUsageRequest object.
 */
GetCostAndUsageRequest::GetCostAndUsageRequest()
    : CostExplorerRequest(new GetCostAndUsageRequestPrivate(CostExplorerRequest::GetCostAndUsageAction, this))
{

}

bool GetCostAndUsageRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetCostAndUsageResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetCostAndUsageResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CostExplorerClient::send
 */
AwsAbstractResponse * GetCostAndUsageRequest::response(QNetworkReply * const reply) const
{
    return new GetCostAndUsageResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetCostAndUsageRequestPrivate
 *
 * @brief  Private implementation for GetCostAndUsageRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetCostAndUsageRequestPrivate object.
 *
 * @param  action  CostExplorer action being performed.
 * @param  q       Pointer to this object's public GetCostAndUsageRequest instance.
 */
GetCostAndUsageRequestPrivate::GetCostAndUsageRequestPrivate(
    const CostExplorerRequest::Action action, GetCostAndUsageRequest * const q)
    : GetCostAndUsagePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetCostAndUsageRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetCostAndUsageRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetCostAndUsageRequest instance.
 */
GetCostAndUsageRequestPrivate::GetCostAndUsageRequestPrivate(
    const GetCostAndUsageRequestPrivate &other, GetCostAndUsageRequest * const q)
    : GetCostAndUsagePrivate(other, q)
{

}

} // namespace CostExplorer
} // namespace AWS
