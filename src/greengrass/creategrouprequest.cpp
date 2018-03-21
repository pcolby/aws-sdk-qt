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

#include "creategrouprequest.h"
#include "creategrouprequest_p.h"
#include "creategroupresponse.h"
#include "greengrassrequest_p.h"

namespace AWS {
namespace Greengrass {

/**
 * @class  CreateGroupRequest
 *
 * @brief  Implements Greengrass CreateGroup requests.
 *
 * @see    GreengrassClient::createGroup
 */

/**
 * @brief  Constructs a new CreateGroupRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateGroupRequest::CreateGroupRequest(const CreateGroupRequest &other)
    : GreengrassRequest(new CreateGroupRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateGroupRequest object.
 */
CreateGroupRequest::CreateGroupRequest()
    : GreengrassRequest(new CreateGroupRequestPrivate(GreengrassRequest::CreateGroupAction, this))
{

}

bool CreateGroupRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateGroupResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateGroupResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  GreengrassClient::send
 */
AwsAbstractResponse * CreateGroupRequest::response(QNetworkReply * const reply) const
{
    return new CreateGroupResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateGroupRequestPrivate
 *
 * @brief  Private implementation for CreateGroupRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateGroupRequestPrivate object.
 *
 * @param  action  Greengrass action being performed.
 * @param  q       Pointer to this object's public CreateGroupRequest instance.
 */
CreateGroupRequestPrivate::CreateGroupRequestPrivate(
    const GreengrassRequest::Action action, CreateGroupRequest * const q)
    : CreateGroupPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateGroupRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateGroupRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateGroupRequest instance.
 */
CreateGroupRequestPrivate::CreateGroupRequestPrivate(
    const CreateGroupRequestPrivate &other, CreateGroupRequest * const q)
    : CreateGroupPrivate(other, q)
{

}

} // namespace Greengrass
} // namespace AWS
