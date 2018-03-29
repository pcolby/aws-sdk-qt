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

#include "createparametergrouprequest.h"
#include "createparametergrouprequest_p.h"
#include "createparametergroupresponse.h"
#include "daxrequest_p.h"

namespace QtAws {
namespace DAX {

/**
 * @class  CreateParameterGroupRequest
 *
 * @brief  Implements DAX CreateParameterGroup requests.
 *
 * @see    DAXClient::createParameterGroup
 */

/**
 * @brief  Constructs a new CreateParameterGroupRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateParameterGroupRequest::CreateParameterGroupRequest(const CreateParameterGroupRequest &other)
    : DAXRequest(new CreateParameterGroupRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateParameterGroupRequest object.
 */
CreateParameterGroupRequest::CreateParameterGroupRequest()
    : DAXRequest(new CreateParameterGroupRequestPrivate(DAXRequest::CreateParameterGroupAction, this))
{

}

bool CreateParameterGroupRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateParameterGroupResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateParameterGroupResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  DAXClient::send
 */
AwsAbstractResponse * CreateParameterGroupRequest::response(QNetworkReply * const reply) const
{
    return new CreateParameterGroupResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateParameterGroupRequestPrivate
 *
 * @brief  Private implementation for CreateParameterGroupRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateParameterGroupRequestPrivate object.
 *
 * @param  action  DAX action being performed.
 * @param  q       Pointer to this object's public CreateParameterGroupRequest instance.
 */
CreateParameterGroupRequestPrivate::CreateParameterGroupRequestPrivate(
    const DAXRequest::Action action, CreateParameterGroupRequest * const q)
    : CreateParameterGroupPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateParameterGroupRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateParameterGroupRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateParameterGroupRequest instance.
 */
CreateParameterGroupRequestPrivate::CreateParameterGroupRequestPrivate(
    const CreateParameterGroupRequestPrivate &other, CreateParameterGroupRequest * const q)
    : CreateParameterGroupPrivate(other, q)
{

}

} // namespace DAX
} // namespace QtAws
