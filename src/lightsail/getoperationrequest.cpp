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

#include "getoperationrequest.h"
#include "getoperationrequest_p.h"
#include "getoperationresponse.h"
#include "lightsailrequest_p.h"

namespace AWS {
namespace Lightsail {

/**
 * @class  GetOperationRequest
 *
 * @brief  Implements Lightsail GetOperation requests.
 *
 * @see    LightsailClient::getOperation
 */

/**
 * @brief  Constructs a new GetOperationResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetOperationResponse::GetOperationResponse(

/**
 * @brief  Constructs a new GetOperationRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetOperationRequest::GetOperationRequest(const GetOperationRequest &other)
    : LightsailRequest(new GetOperationRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetOperationRequest object.
 */
GetOperationRequest::GetOperationRequest()
    : LightsailRequest(new GetOperationRequestPrivate(LightsailRequest::GetOperationAction, this))
{

}

bool GetOperationRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetOperationResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetOperationResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  LightsailClient::send
 */
AwsAbstractResponse * GetOperationRequest::response(QNetworkReply * const reply) const
{
    return new GetOperationResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetOperationRequestPrivate
 *
 * @brief  Private implementation for GetOperationRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetOperationRequestPrivate object.
 *
 * @param  action  Lightsail action being performed.
 * @param  q       Pointer to this object's public GetOperationRequest instance.
 */
GetOperationRequestPrivate::GetOperationRequestPrivate(
    const LightsailRequest::Action action, GetOperationRequest * const q)
    : GetOperationPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetOperationRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetOperationRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetOperationRequest instance.
 */
GetOperationRequestPrivate::GetOperationRequestPrivate(
    const GetOperationRequestPrivate &other, GetOperationRequest * const q)
    : GetOperationPrivate(other, q)
{

}

} // namespace Lightsail
} // namespace AWS
