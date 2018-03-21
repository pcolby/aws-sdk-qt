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

#include "updateparametergrouprequest.h"
#include "updateparametergrouprequest_p.h"
#include "updateparametergroupresponse.h"
#include "daxrequest_p.h"

namespace AWS {
namespace DAX {

/**
 * @class  UpdateParameterGroupRequest
 *
 * @brief  Implements DAX UpdateParameterGroup requests.
 *
 * @see    DAXClient::updateParameterGroup
 */

/**
 * @brief  Constructs a new UpdateParameterGroupResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateParameterGroupResponse::UpdateParameterGroupResponse(

/**
 * @brief  Constructs a new UpdateParameterGroupRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateParameterGroupRequest::UpdateParameterGroupRequest(const UpdateParameterGroupRequest &other)
    : DAXRequest(new UpdateParameterGroupRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateParameterGroupRequest object.
 */
UpdateParameterGroupRequest::UpdateParameterGroupRequest()
    : DAXRequest(new UpdateParameterGroupRequestPrivate(DAXRequest::UpdateParameterGroupAction, this))
{

}

bool UpdateParameterGroupRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateParameterGroupResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateParameterGroupResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  DAXClient::send
 */
AwsAbstractResponse * UpdateParameterGroupRequest::response(QNetworkReply * const reply) const
{
    return new UpdateParameterGroupResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateParameterGroupRequestPrivate
 *
 * @brief  Private implementation for UpdateParameterGroupRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateParameterGroupRequestPrivate object.
 *
 * @param  action  DAX action being performed.
 * @param  q       Pointer to this object's public UpdateParameterGroupRequest instance.
 */
UpdateParameterGroupRequestPrivate::UpdateParameterGroupRequestPrivate(
    const DAXRequest::Action action, UpdateParameterGroupRequest * const q)
    : UpdateParameterGroupPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateParameterGroupRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateParameterGroupRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateParameterGroupRequest instance.
 */
UpdateParameterGroupRequestPrivate::UpdateParameterGroupRequestPrivate(
    const UpdateParameterGroupRequestPrivate &other, UpdateParameterGroupRequest * const q)
    : UpdateParameterGroupPrivate(other, q)
{

}

} // namespace DAX
} // namespace AWS
