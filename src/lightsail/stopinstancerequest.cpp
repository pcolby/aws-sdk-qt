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

#include "stopinstancerequest.h"
#include "stopinstancerequest_p.h"
#include "stopinstanceresponse.h"
#include "lightsailrequest_p.h"

namespace QtAws {
namespace Lightsail {

/**
 * @class  StopInstanceRequest
 *
 * @brief  Implements Lightsail StopInstance requests.
 *
 * @see    LightsailClient::stopInstance
 */

/**
 * @brief  Constructs a new StopInstanceRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
StopInstanceRequest::StopInstanceRequest(const StopInstanceRequest &other)
    : LightsailRequest(new StopInstanceRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new StopInstanceRequest object.
 */
StopInstanceRequest::StopInstanceRequest()
    : LightsailRequest(new StopInstanceRequestPrivate(LightsailRequest::StopInstanceAction, this))
{

}

bool StopInstanceRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an StopInstanceResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An StopInstanceResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  LightsailClient::send
 */
QtAws::Core::AwsAbstractResponse * StopInstanceRequest::response(QNetworkReply * const reply) const
{
    return new StopInstanceResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  StopInstanceRequestPrivate
 *
 * @brief  Private implementation for StopInstanceRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new StopInstanceRequestPrivate object.
 *
 * @param  action  Lightsail action being performed.
 * @param  q       Pointer to this object's public StopInstanceRequest instance.
 */
StopInstanceRequestPrivate::StopInstanceRequestPrivate(
    const LightsailRequest::Action action, StopInstanceRequest * const q)
    : LightsailRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new StopInstanceRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the StopInstanceRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public StopInstanceRequest instance.
 */
StopInstanceRequestPrivate::StopInstanceRequestPrivate(
    const StopInstanceRequestPrivate &other, StopInstanceRequest * const q)
    : LightsailRequestPrivate(other, q)
{

}

} // namespace Lightsail
} // namespace QtAws
