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

#include "getintentrequest.h"
#include "getintentrequest_p.h"
#include "getintentresponse.h"
#include "lexmodelbuildingservicerequest_p.h"

namespace AWS {
namespace LexModelBuildingService {

/**
 * @class  GetIntentRequest
 *
 * @brief  Implements LexModelBuildingService GetIntent requests.
 *
 * @see    LexModelBuildingServiceClient::getIntent
 */

/**
 * @brief  Constructs a new GetIntentResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetIntentResponse::GetIntentResponse(

/**
 * @brief  Constructs a new GetIntentRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetIntentRequest::GetIntentRequest(const GetIntentRequest &other)
    : LexModelBuildingServiceRequest(new GetIntentRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetIntentRequest object.
 */
GetIntentRequest::GetIntentRequest()
    : LexModelBuildingServiceRequest(new GetIntentRequestPrivate(LexModelBuildingServiceRequest::GetIntentAction, this))
{

}

bool GetIntentRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetIntentResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetIntentResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  LexModelBuildingServiceClient::send
 */
AwsAbstractResponse * GetIntentRequest::response(QNetworkReply * const reply) const
{
    return new GetIntentResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetIntentRequestPrivate
 *
 * @brief  Private implementation for GetIntentRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetIntentRequestPrivate object.
 *
 * @param  action  LexModelBuildingService action being performed.
 * @param  q       Pointer to this object's public GetIntentRequest instance.
 */
GetIntentRequestPrivate::GetIntentRequestPrivate(
    const LexModelBuildingServiceRequest::Action action, GetIntentRequest * const q)
    : GetIntentPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetIntentRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetIntentRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetIntentRequest instance.
 */
GetIntentRequestPrivate::GetIntentRequestPrivate(
    const GetIntentRequestPrivate &other, GetIntentRequest * const q)
    : GetIntentPrivate(other, q)
{

}
