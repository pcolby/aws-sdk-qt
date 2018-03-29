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

#include "installtoremoteaccesssessionrequest.h"
#include "installtoremoteaccesssessionrequest_p.h"
#include "installtoremoteaccesssessionresponse.h"
#include "devicefarmrequest_p.h"

namespace QtAws {
namespace DeviceFarm {

/**
 * @class  InstallToRemoteAccessSessionRequest
 *
 * @brief  Implements DeviceFarm InstallToRemoteAccessSession requests.
 *
 * @see    DeviceFarmClient::installToRemoteAccessSession
 */

/**
 * @brief  Constructs a new InstallToRemoteAccessSessionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
InstallToRemoteAccessSessionRequest::InstallToRemoteAccessSessionRequest(const InstallToRemoteAccessSessionRequest &other)
    : DeviceFarmRequest(new InstallToRemoteAccessSessionRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new InstallToRemoteAccessSessionRequest object.
 */
InstallToRemoteAccessSessionRequest::InstallToRemoteAccessSessionRequest()
    : DeviceFarmRequest(new InstallToRemoteAccessSessionRequestPrivate(DeviceFarmRequest::InstallToRemoteAccessSessionAction, this))
{

}

bool InstallToRemoteAccessSessionRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an InstallToRemoteAccessSessionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An InstallToRemoteAccessSessionResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  DeviceFarmClient::send
 */
AwsAbstractResponse * InstallToRemoteAccessSessionRequest::response(QNetworkReply * const reply) const
{
    return new InstallToRemoteAccessSessionResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  InstallToRemoteAccessSessionRequestPrivate
 *
 * @brief  Private implementation for InstallToRemoteAccessSessionRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new InstallToRemoteAccessSessionRequestPrivate object.
 *
 * @param  action  DeviceFarm action being performed.
 * @param  q       Pointer to this object's public InstallToRemoteAccessSessionRequest instance.
 */
InstallToRemoteAccessSessionRequestPrivate::InstallToRemoteAccessSessionRequestPrivate(
    const DeviceFarmRequest::Action action, InstallToRemoteAccessSessionRequest * const q)
    : InstallToRemoteAccessSessionPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new InstallToRemoteAccessSessionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the InstallToRemoteAccessSessionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public InstallToRemoteAccessSessionRequest instance.
 */
InstallToRemoteAccessSessionRequestPrivate::InstallToRemoteAccessSessionRequestPrivate(
    const InstallToRemoteAccessSessionRequestPrivate &other, InstallToRemoteAccessSessionRequest * const q)
    : InstallToRemoteAccessSessionPrivate(other, q)
{

}

} // namespace DeviceFarm
} // namespace QtAws
