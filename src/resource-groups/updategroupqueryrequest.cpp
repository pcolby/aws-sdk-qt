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

#include "updategroupqueryrequest.h"
#include "updategroupqueryrequest_p.h"
#include "updategroupqueryresponse.h"
#include "resourcegroupsrequest_p.h"

namespace AWS {
namespace ResourceGroups {

/**
 * @class  UpdateGroupQueryRequest
 *
 * @brief  Implements ResourceGroups UpdateGroupQuery requests.
 *
 * @see    ResourceGroupsClient::updateGroupQuery
 */

/**
 * @brief  Constructs a new UpdateGroupQueryResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateGroupQueryResponse::UpdateGroupQueryResponse(

/**
 * @brief  Constructs a new UpdateGroupQueryRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateGroupQueryRequest::UpdateGroupQueryRequest(const UpdateGroupQueryRequest &other)
    : ResourceGroupsRequest(new UpdateGroupQueryRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateGroupQueryRequest object.
 */
UpdateGroupQueryRequest::UpdateGroupQueryRequest()
    : ResourceGroupsRequest(new UpdateGroupQueryRequestPrivate(ResourceGroupsRequest::UpdateGroupQueryAction, this))
{

}

bool UpdateGroupQueryRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateGroupQueryResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateGroupQueryResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ResourceGroupsClient::send
 */
AwsAbstractResponse * UpdateGroupQueryRequest::response(QNetworkReply * const reply) const
{
    return new UpdateGroupQueryResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateGroupQueryRequestPrivate
 *
 * @brief  Private implementation for UpdateGroupQueryRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateGroupQueryRequestPrivate object.
 *
 * @param  action  ResourceGroups action being performed.
 * @param  q       Pointer to this object's public UpdateGroupQueryRequest instance.
 */
UpdateGroupQueryRequestPrivate::UpdateGroupQueryRequestPrivate(
    const ResourceGroupsRequest::Action action, UpdateGroupQueryRequest * const q)
    : UpdateGroupQueryPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateGroupQueryRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateGroupQueryRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateGroupQueryRequest instance.
 */
UpdateGroupQueryRequestPrivate::UpdateGroupQueryRequestPrivate(
    const UpdateGroupQueryRequestPrivate &other, UpdateGroupQueryRequest * const q)
    : UpdateGroupQueryPrivate(other, q)
{

}

} // namespace ResourceGroups
} // namespace AWS
