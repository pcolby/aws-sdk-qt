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

#include "geteventsourcemappingrequest.h"
#include "geteventsourcemappingrequest_p.h"
#include "geteventsourcemappingresponse.h"
#include "lambdarequest_p.h"

namespace AWS {
namespace Lambda {

/**
 * @class  GetEventSourceMappingRequest
 *
 * @brief  Implements Lambda GetEventSourceMapping requests.
 *
 * @see    LambdaClient::getEventSourceMapping
 */

/**
 * @brief  Constructs a new GetEventSourceMappingResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetEventSourceMappingResponse::GetEventSourceMappingResponse(

/**
 * @brief  Constructs a new GetEventSourceMappingRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetEventSourceMappingRequest::GetEventSourceMappingRequest(const GetEventSourceMappingRequest &other)
    : LambdaRequest(new GetEventSourceMappingRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetEventSourceMappingRequest object.
 */
GetEventSourceMappingRequest::GetEventSourceMappingRequest()
    : LambdaRequest(new GetEventSourceMappingRequestPrivate(LambdaRequest::GetEventSourceMappingAction, this))
{

}

bool GetEventSourceMappingRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetEventSourceMappingResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetEventSourceMappingResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  LambdaClient::send
 */
AwsAbstractResponse * GetEventSourceMappingRequest::response(QNetworkReply * const reply) const
{
    return new GetEventSourceMappingResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetEventSourceMappingRequestPrivate
 *
 * @brief  Private implementation for GetEventSourceMappingRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetEventSourceMappingRequestPrivate object.
 *
 * @param  action  Lambda action being performed.
 * @param  q       Pointer to this object's public GetEventSourceMappingRequest instance.
 */
GetEventSourceMappingRequestPrivate::GetEventSourceMappingRequestPrivate(
    const LambdaRequest::Action action, GetEventSourceMappingRequest * const q)
    : GetEventSourceMappingPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetEventSourceMappingRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetEventSourceMappingRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetEventSourceMappingRequest instance.
 */
GetEventSourceMappingRequestPrivate::GetEventSourceMappingRequestPrivate(
    const GetEventSourceMappingRequestPrivate &other, GetEventSourceMappingRequest * const q)
    : GetEventSourceMappingPrivate(other, q)
{

}

} // namespace Lambda
} // namespace AWS
