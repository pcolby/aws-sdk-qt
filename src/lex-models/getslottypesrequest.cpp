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

#include "getslottypesrequest.h"
#include "getslottypesrequest_p.h"
#include "getslottypesresponse.h"
#include "lexmodelbuildingservicerequest_p.h"

namespace AWS {
namespace LexModelBuildingService {

/**
 * @class  GetSlotTypesRequest
 *
 * @brief  Implements LexModelBuildingService GetSlotTypes requests.
 *
 * @see    LexModelBuildingServiceClient::getSlotTypes
 */

/**
 * @brief  Constructs a new GetSlotTypesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetSlotTypesRequest::GetSlotTypesRequest(const GetSlotTypesRequest &other)
    : LexModelBuildingServiceRequest(new GetSlotTypesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetSlotTypesRequest object.
 */
GetSlotTypesRequest::GetSlotTypesRequest()
    : LexModelBuildingServiceRequest(new GetSlotTypesRequestPrivate(LexModelBuildingServiceRequest::GetSlotTypesAction, this))
{

}

bool GetSlotTypesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetSlotTypesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetSlotTypesResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  LexModelBuildingServiceClient::send
 */
AwsAbstractResponse * GetSlotTypesRequest::response(QNetworkReply * const reply) const
{
    return new GetSlotTypesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetSlotTypesRequestPrivate
 *
 * @brief  Private implementation for GetSlotTypesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetSlotTypesRequestPrivate object.
 *
 * @param  action  LexModelBuildingService action being performed.
 * @param  q       Pointer to this object's public GetSlotTypesRequest instance.
 */
GetSlotTypesRequestPrivate::GetSlotTypesRequestPrivate(
    const LexModelBuildingServiceRequest::Action action, GetSlotTypesRequest * const q)
    : GetSlotTypesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetSlotTypesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetSlotTypesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetSlotTypesRequest instance.
 */
GetSlotTypesRequestPrivate::GetSlotTypesRequestPrivate(
    const GetSlotTypesRequestPrivate &other, GetSlotTypesRequest * const q)
    : GetSlotTypesPrivate(other, q)
{

}

} // namespace LexModelBuildingService
} // namespace AWS
