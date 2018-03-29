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

#include "getremoteaccesssessionrequest.h"
#include "getremoteaccesssessionrequest_p.h"
#include "getremoteaccesssessionresponse.h"
#include "devicefarmrequest_p.h"

namespace QtAws {
namespace DeviceFarm {

/**
 * @class  GetRemoteAccessSessionRequest
 *
 * @brief  Implements DeviceFarm GetRemoteAccessSession requests.
 *
 * @see    DeviceFarmClient::getRemoteAccessSession
 */

/**
 * @brief  Constructs a new GetRemoteAccessSessionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetRemoteAccessSessionRequest::GetRemoteAccessSessionRequest(const GetRemoteAccessSessionRequest &other)
    : DeviceFarmRequest(new GetRemoteAccessSessionRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetRemoteAccessSessionRequest object.
 */
GetRemoteAccessSessionRequest::GetRemoteAccessSessionRequest()
    : DeviceFarmRequest(new GetRemoteAccessSessionRequestPrivate(DeviceFarmRequest::GetRemoteAccessSessionAction, this))
{

}

bool GetRemoteAccessSessionRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetRemoteAccessSessionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetRemoteAccessSessionResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  DeviceFarmClient::send
 */
QtAws::Core::AwsAbstractResponse * GetRemoteAccessSessionRequest::response(QNetworkReply * const reply) const
{
    return new GetRemoteAccessSessionResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetRemoteAccessSessionRequestPrivate
 *
 * @brief  Private implementation for GetRemoteAccessSessionRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetRemoteAccessSessionRequestPrivate object.
 *
 * @param  action  DeviceFarm action being performed.
 * @param  q       Pointer to this object's public GetRemoteAccessSessionRequest instance.
 */
GetRemoteAccessSessionRequestPrivate::GetRemoteAccessSessionRequestPrivate(
    const DeviceFarmRequest::Action action, GetRemoteAccessSessionRequest * const q)
    : GetRemoteAccessSessionPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetRemoteAccessSessionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetRemoteAccessSessionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetRemoteAccessSessionRequest instance.
 */
GetRemoteAccessSessionRequestPrivate::GetRemoteAccessSessionRequestPrivate(
    const GetRemoteAccessSessionRequestPrivate &other, GetRemoteAccessSessionRequest * const q)
    : GetRemoteAccessSessionPrivate(other, q)
{

}

} // namespace DeviceFarm
} // namespace QtAws
