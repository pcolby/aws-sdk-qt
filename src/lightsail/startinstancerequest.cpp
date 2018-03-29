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

#include "startinstancerequest.h"
#include "startinstancerequest_p.h"
#include "startinstanceresponse.h"
#include "lightsailrequest_p.h"

namespace QtAws {
namespace Lightsail {

/**
 * @class  StartInstanceRequest
 *
 * @brief  Implements Lightsail StartInstance requests.
 *
 * @see    LightsailClient::startInstance
 */

/**
 * @brief  Constructs a new StartInstanceRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
StartInstanceRequest::StartInstanceRequest(const StartInstanceRequest &other)
    : LightsailRequest(new StartInstanceRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new StartInstanceRequest object.
 */
StartInstanceRequest::StartInstanceRequest()
    : LightsailRequest(new StartInstanceRequestPrivate(LightsailRequest::StartInstanceAction, this))
{

}

bool StartInstanceRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an StartInstanceResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An StartInstanceResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  LightsailClient::send
 */
AwsAbstractResponse * StartInstanceRequest::response(QNetworkReply * const reply) const
{
    return new StartInstanceResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  StartInstanceRequestPrivate
 *
 * @brief  Private implementation for StartInstanceRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new StartInstanceRequestPrivate object.
 *
 * @param  action  Lightsail action being performed.
 * @param  q       Pointer to this object's public StartInstanceRequest instance.
 */
StartInstanceRequestPrivate::StartInstanceRequestPrivate(
    const LightsailRequest::Action action, StartInstanceRequest * const q)
    : StartInstancePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new StartInstanceRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the StartInstanceRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public StartInstanceRequest instance.
 */
StartInstanceRequestPrivate::StartInstanceRequestPrivate(
    const StartInstanceRequestPrivate &other, StartInstanceRequest * const q)
    : StartInstancePrivate(other, q)
{

}

} // namespace Lightsail
} // namespace QtAws
