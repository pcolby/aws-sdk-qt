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

#include "getbuiltinintentsrequest.h"
#include "getbuiltinintentsrequest_p.h"
#include "getbuiltinintentsresponse.h"
#include "lexmodelbuildingservicerequest_p.h"

namespace AWS {
namespace LexModelBuildingService {

/**
 * @class  GetBuiltinIntentsRequest
 *
 * @brief  Implements LexModelBuildingService GetBuiltinIntents requests.
 *
 * @see    LexModelBuildingServiceClient::getBuiltinIntents
 */

/**
 * @brief  Constructs a new GetBuiltinIntentsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetBuiltinIntentsRequest::GetBuiltinIntentsRequest(const GetBuiltinIntentsRequest &other)
    : LexModelBuildingServiceRequest(new GetBuiltinIntentsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetBuiltinIntentsRequest object.
 */
GetBuiltinIntentsRequest::GetBuiltinIntentsRequest()
    : LexModelBuildingServiceRequest(new GetBuiltinIntentsRequestPrivate(LexModelBuildingServiceRequest::GetBuiltinIntentsAction, this))
{

}

bool GetBuiltinIntentsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetBuiltinIntentsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetBuiltinIntentsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  LexModelBuildingServiceClient::send
 */
AwsAbstractResponse * GetBuiltinIntentsRequest::response(QNetworkReply * const reply) const
{
    return new GetBuiltinIntentsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetBuiltinIntentsRequestPrivate
 *
 * @brief  Private implementation for GetBuiltinIntentsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetBuiltinIntentsRequestPrivate object.
 *
 * @param  action  LexModelBuildingService action being performed.
 * @param  q       Pointer to this object's public GetBuiltinIntentsRequest instance.
 */
GetBuiltinIntentsRequestPrivate::GetBuiltinIntentsRequestPrivate(
    const LexModelBuildingServiceRequest::Action action, GetBuiltinIntentsRequest * const q)
    : GetBuiltinIntentsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetBuiltinIntentsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetBuiltinIntentsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetBuiltinIntentsRequest instance.
 */
GetBuiltinIntentsRequestPrivate::GetBuiltinIntentsRequestPrivate(
    const GetBuiltinIntentsRequestPrivate &other, GetBuiltinIntentsRequest * const q)
    : GetBuiltinIntentsPrivate(other, q)
{

}

} // namespace LexModelBuildingService
} // namespace AWS
