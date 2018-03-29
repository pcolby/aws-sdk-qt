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

#include "createresourcegrouprequest.h"
#include "createresourcegrouprequest_p.h"
#include "createresourcegroupresponse.h"
#include "inspectorrequest_p.h"

namespace QtAws {
namespace Inspector {

/**
 * @class  CreateResourceGroupRequest
 *
 * @brief  Implements Inspector CreateResourceGroup requests.
 *
 * @see    InspectorClient::createResourceGroup
 */

/**
 * @brief  Constructs a new CreateResourceGroupRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateResourceGroupRequest::CreateResourceGroupRequest(const CreateResourceGroupRequest &other)
    : InspectorRequest(new CreateResourceGroupRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateResourceGroupRequest object.
 */
CreateResourceGroupRequest::CreateResourceGroupRequest()
    : InspectorRequest(new CreateResourceGroupRequestPrivate(InspectorRequest::CreateResourceGroupAction, this))
{

}

bool CreateResourceGroupRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateResourceGroupResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateResourceGroupResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  InspectorClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateResourceGroupRequest::response(QNetworkReply * const reply) const
{
    return new CreateResourceGroupResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateResourceGroupRequestPrivate
 *
 * @brief  Private implementation for CreateResourceGroupRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateResourceGroupRequestPrivate object.
 *
 * @param  action  Inspector action being performed.
 * @param  q       Pointer to this object's public CreateResourceGroupRequest instance.
 */
CreateResourceGroupRequestPrivate::CreateResourceGroupRequestPrivate(
    const InspectorRequest::Action action, CreateResourceGroupRequest * const q)
    : InspectorRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateResourceGroupRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateResourceGroupRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateResourceGroupRequest instance.
 */
CreateResourceGroupRequestPrivate::CreateResourceGroupRequestPrivate(
    const CreateResourceGroupRequestPrivate &other, CreateResourceGroupRequest * const q)
    : InspectorRequestPrivate(other, q)
{

}

} // namespace Inspector
} // namespace QtAws
