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

#include "createtrafficpolicyinstancerequest.h"
#include "createtrafficpolicyinstancerequest_p.h"
#include "createtrafficpolicyinstanceresponse.h"
#include "route53request_p.h"

namespace QtAws {
namespace Route53 {

/**
 * @class  CreateTrafficPolicyInstanceRequest
 *
 * @brief  Implements Route53 CreateTrafficPolicyInstance requests.
 *
 * @see    Route53Client::createTrafficPolicyInstance
 */

/**
 * @brief  Constructs a new CreateTrafficPolicyInstanceRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateTrafficPolicyInstanceRequest::CreateTrafficPolicyInstanceRequest(const CreateTrafficPolicyInstanceRequest &other)
    : Route53Request(new CreateTrafficPolicyInstanceRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateTrafficPolicyInstanceRequest object.
 */
CreateTrafficPolicyInstanceRequest::CreateTrafficPolicyInstanceRequest()
    : Route53Request(new CreateTrafficPolicyInstanceRequestPrivate(Route53Request::CreateTrafficPolicyInstanceAction, this))
{

}

bool CreateTrafficPolicyInstanceRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateTrafficPolicyInstanceResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateTrafficPolicyInstanceResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  Route53Client::send
 */
AwsAbstractResponse * CreateTrafficPolicyInstanceRequest::response(QNetworkReply * const reply) const
{
    return new CreateTrafficPolicyInstanceResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateTrafficPolicyInstanceRequestPrivate
 *
 * @brief  Private implementation for CreateTrafficPolicyInstanceRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateTrafficPolicyInstanceRequestPrivate object.
 *
 * @param  action  Route53 action being performed.
 * @param  q       Pointer to this object's public CreateTrafficPolicyInstanceRequest instance.
 */
CreateTrafficPolicyInstanceRequestPrivate::CreateTrafficPolicyInstanceRequestPrivate(
    const Route53Request::Action action, CreateTrafficPolicyInstanceRequest * const q)
    : CreateTrafficPolicyInstancePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateTrafficPolicyInstanceRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateTrafficPolicyInstanceRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateTrafficPolicyInstanceRequest instance.
 */
CreateTrafficPolicyInstanceRequestPrivate::CreateTrafficPolicyInstanceRequestPrivate(
    const CreateTrafficPolicyInstanceRequestPrivate &other, CreateTrafficPolicyInstanceRequest * const q)
    : CreateTrafficPolicyInstancePrivate(other, q)
{

}

} // namespace Route53
} // namespace QtAws
