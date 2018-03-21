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

#include "deleteremoteaccesssessionrequest.h"
#include "deleteremoteaccesssessionrequest_p.h"
#include "deleteremoteaccesssessionresponse.h"
#include "devicefarmrequest_p.h"

namespace AWS {
namespace DeviceFarm {

/**
 * @class  DeleteRemoteAccessSessionRequest
 *
 * @brief  Implements DeviceFarm DeleteRemoteAccessSession requests.
 *
 * @see    DeviceFarmClient::deleteRemoteAccessSession
 */

/**
 * @brief  Constructs a new DeleteRemoteAccessSessionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteRemoteAccessSessionResponse::DeleteRemoteAccessSessionResponse(

/**
 * @brief  Constructs a new DeleteRemoteAccessSessionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteRemoteAccessSessionRequest::DeleteRemoteAccessSessionRequest(const DeleteRemoteAccessSessionRequest &other)
    : DeviceFarmRequest(new DeleteRemoteAccessSessionRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteRemoteAccessSessionRequest object.
 */
DeleteRemoteAccessSessionRequest::DeleteRemoteAccessSessionRequest()
    : DeviceFarmRequest(new DeleteRemoteAccessSessionRequestPrivate(DeviceFarmRequest::DeleteRemoteAccessSessionAction, this))
{

}

bool DeleteRemoteAccessSessionRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteRemoteAccessSessionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteRemoteAccessSessionResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  DeviceFarmClient::send
 */
AwsAbstractResponse * DeleteRemoteAccessSessionRequest::response(QNetworkReply * const reply) const
{
    return new DeleteRemoteAccessSessionResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteRemoteAccessSessionRequestPrivate
 *
 * @brief  Private implementation for DeleteRemoteAccessSessionRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteRemoteAccessSessionRequestPrivate object.
 *
 * @param  action  DeviceFarm action being performed.
 * @param  q       Pointer to this object's public DeleteRemoteAccessSessionRequest instance.
 */
DeleteRemoteAccessSessionRequestPrivate::DeleteRemoteAccessSessionRequestPrivate(
    const DeviceFarmRequest::Action action, DeleteRemoteAccessSessionRequest * const q)
    : DeleteRemoteAccessSessionPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteRemoteAccessSessionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteRemoteAccessSessionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteRemoteAccessSessionRequest instance.
 */
DeleteRemoteAccessSessionRequestPrivate::DeleteRemoteAccessSessionRequestPrivate(
    const DeleteRemoteAccessSessionRequestPrivate &other, DeleteRemoteAccessSessionRequest * const q)
    : DeleteRemoteAccessSessionPrivate(other, q)
{

}
