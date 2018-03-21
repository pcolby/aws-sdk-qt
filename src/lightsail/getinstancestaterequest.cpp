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

#include "getinstancestaterequest.h"
#include "getinstancestaterequest_p.h"
#include "getinstancestateresponse.h"
#include "lightsailrequest_p.h"

namespace AWS {
namespace Lightsail {

/**
 * @class  GetInstanceStateRequest
 *
 * @brief  Implements Lightsail GetInstanceState requests.
 *
 * @see    LightsailClient::getInstanceState
 */

/**
 * @brief  Constructs a new GetInstanceStateRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetInstanceStateRequest::GetInstanceStateRequest(const GetInstanceStateRequest &other)
    : LightsailRequest(new GetInstanceStateRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetInstanceStateRequest object.
 */
GetInstanceStateRequest::GetInstanceStateRequest()
    : LightsailRequest(new GetInstanceStateRequestPrivate(LightsailRequest::GetInstanceStateAction, this))
{

}

bool GetInstanceStateRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetInstanceStateResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetInstanceStateResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  LightsailClient::send
 */
AwsAbstractResponse * GetInstanceStateRequest::response(QNetworkReply * const reply) const
{
    return new GetInstanceStateResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetInstanceStateRequestPrivate
 *
 * @brief  Private implementation for GetInstanceStateRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetInstanceStateRequestPrivate object.
 *
 * @param  action  Lightsail action being performed.
 * @param  q       Pointer to this object's public GetInstanceStateRequest instance.
 */
GetInstanceStateRequestPrivate::GetInstanceStateRequestPrivate(
    const LightsailRequest::Action action, GetInstanceStateRequest * const q)
    : GetInstanceStatePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetInstanceStateRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetInstanceStateRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetInstanceStateRequest instance.
 */
GetInstanceStateRequestPrivate::GetInstanceStateRequestPrivate(
    const GetInstanceStateRequestPrivate &other, GetInstanceStateRequest * const q)
    : GetInstanceStatePrivate(other, q)
{

}

} // namespace Lightsail
} // namespace AWS
