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

#include "createservicelinkedrolerequest.h"
#include "createservicelinkedrolerequest_p.h"
#include "createservicelinkedroleresponse.h"
#include "iamrequest_p.h"

namespace QtAws {
namespace IAM {

/**
 * @class  CreateServiceLinkedRoleRequest
 *
 * @brief  Implements IAM CreateServiceLinkedRole requests.
 *
 * @see    IAMClient::createServiceLinkedRole
 */

/**
 * @brief  Constructs a new CreateServiceLinkedRoleRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateServiceLinkedRoleRequest::CreateServiceLinkedRoleRequest(const CreateServiceLinkedRoleRequest &other)
    : IAMRequest(new CreateServiceLinkedRoleRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateServiceLinkedRoleRequest object.
 */
CreateServiceLinkedRoleRequest::CreateServiceLinkedRoleRequest()
    : IAMRequest(new CreateServiceLinkedRoleRequestPrivate(IAMRequest::CreateServiceLinkedRoleAction, this))
{

}

bool CreateServiceLinkedRoleRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateServiceLinkedRoleResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateServiceLinkedRoleResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  IAMClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateServiceLinkedRoleRequest::response(QNetworkReply * const reply) const
{
    return new CreateServiceLinkedRoleResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateServiceLinkedRoleRequestPrivate
 *
 * @brief  Private implementation for CreateServiceLinkedRoleRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateServiceLinkedRoleRequestPrivate object.
 *
 * @param  action  IAM action being performed.
 * @param  q       Pointer to this object's public CreateServiceLinkedRoleRequest instance.
 */
CreateServiceLinkedRoleRequestPrivate::CreateServiceLinkedRoleRequestPrivate(
    const IAMRequest::Action action, CreateServiceLinkedRoleRequest * const q)
    : CreateServiceLinkedRolePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateServiceLinkedRoleRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateServiceLinkedRoleRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateServiceLinkedRoleRequest instance.
 */
CreateServiceLinkedRoleRequestPrivate::CreateServiceLinkedRoleRequestPrivate(
    const CreateServiceLinkedRoleRequestPrivate &other, CreateServiceLinkedRoleRequest * const q)
    : CreateServiceLinkedRolePrivate(other, q)
{

}

} // namespace IAM
} // namespace QtAws
