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

#include "updatetrafficpolicyinstancerequest.h"
#include "updatetrafficpolicyinstancerequest_p.h"
#include "updatetrafficpolicyinstanceresponse.h"
#include "route53request_p.h"

namespace QtAws {
namespace Route53 {

/**
 * @class  UpdateTrafficPolicyInstanceRequest
 *
 * @brief  Implements Route53 UpdateTrafficPolicyInstance requests.
 *
 * @see    Route53Client::updateTrafficPolicyInstance
 */

/**
 * @brief  Constructs a new UpdateTrafficPolicyInstanceRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateTrafficPolicyInstanceRequest::UpdateTrafficPolicyInstanceRequest(const UpdateTrafficPolicyInstanceRequest &other)
    : Route53Request(new UpdateTrafficPolicyInstanceRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateTrafficPolicyInstanceRequest object.
 */
UpdateTrafficPolicyInstanceRequest::UpdateTrafficPolicyInstanceRequest()
    : Route53Request(new UpdateTrafficPolicyInstanceRequestPrivate(Route53Request::UpdateTrafficPolicyInstanceAction, this))
{

}

bool UpdateTrafficPolicyInstanceRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateTrafficPolicyInstanceResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateTrafficPolicyInstanceResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  Route53Client::send
 */
AwsAbstractResponse * UpdateTrafficPolicyInstanceRequest::response(QNetworkReply * const reply) const
{
    return new UpdateTrafficPolicyInstanceResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateTrafficPolicyInstanceRequestPrivate
 *
 * @brief  Private implementation for UpdateTrafficPolicyInstanceRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateTrafficPolicyInstanceRequestPrivate object.
 *
 * @param  action  Route53 action being performed.
 * @param  q       Pointer to this object's public UpdateTrafficPolicyInstanceRequest instance.
 */
UpdateTrafficPolicyInstanceRequestPrivate::UpdateTrafficPolicyInstanceRequestPrivate(
    const Route53Request::Action action, UpdateTrafficPolicyInstanceRequest * const q)
    : UpdateTrafficPolicyInstancePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateTrafficPolicyInstanceRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateTrafficPolicyInstanceRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateTrafficPolicyInstanceRequest instance.
 */
UpdateTrafficPolicyInstanceRequestPrivate::UpdateTrafficPolicyInstanceRequestPrivate(
    const UpdateTrafficPolicyInstanceRequestPrivate &other, UpdateTrafficPolicyInstanceRequest * const q)
    : UpdateTrafficPolicyInstancePrivate(other, q)
{

}

} // namespace Route53
} // namespace QtAws
