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

#include "getbuiltinintentrequest.h"
#include "getbuiltinintentrequest_p.h"
#include "getbuiltinintentresponse.h"
#include "lexmodelbuildingservicerequest_p.h"

namespace AWS {
namespace LexModelBuildingService {

/**
 * @class  GetBuiltinIntentRequest
 *
 * @brief  Implements LexModelBuildingService GetBuiltinIntent requests.
 *
 * @see    LexModelBuildingServiceClient::getBuiltinIntent
 */

/**
 * @brief  Constructs a new GetBuiltinIntentResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetBuiltinIntentResponse::GetBuiltinIntentResponse(

/**
 * @brief  Constructs a new GetBuiltinIntentRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetBuiltinIntentRequest::GetBuiltinIntentRequest(const GetBuiltinIntentRequest &other)
    : LexModelBuildingServiceRequest(new GetBuiltinIntentRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetBuiltinIntentRequest object.
 */
GetBuiltinIntentRequest::GetBuiltinIntentRequest()
    : LexModelBuildingServiceRequest(new GetBuiltinIntentRequestPrivate(LexModelBuildingServiceRequest::GetBuiltinIntentAction, this))
{

}

bool GetBuiltinIntentRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetBuiltinIntentResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetBuiltinIntentResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  LexModelBuildingServiceClient::send
 */
AwsAbstractResponse * GetBuiltinIntentRequest::response(QNetworkReply * const reply) const
{
    return new GetBuiltinIntentResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetBuiltinIntentRequestPrivate
 *
 * @brief  Private implementation for GetBuiltinIntentRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetBuiltinIntentRequestPrivate object.
 *
 * @param  action  LexModelBuildingService action being performed.
 * @param  q       Pointer to this object's public GetBuiltinIntentRequest instance.
 */
GetBuiltinIntentRequestPrivate::GetBuiltinIntentRequestPrivate(
    const LexModelBuildingServiceRequest::Action action, GetBuiltinIntentRequest * const q)
    : GetBuiltinIntentPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetBuiltinIntentRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetBuiltinIntentRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetBuiltinIntentRequest instance.
 */
GetBuiltinIntentRequestPrivate::GetBuiltinIntentRequestPrivate(
    const GetBuiltinIntentRequestPrivate &other, GetBuiltinIntentRequest * const q)
    : GetBuiltinIntentPrivate(other, q)
{

}
