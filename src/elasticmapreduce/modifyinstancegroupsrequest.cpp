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

#include "modifyinstancegroupsrequest.h"
#include "modifyinstancegroupsrequest_p.h"
#include "modifyinstancegroupsresponse.h"
#include "emrrequest_p.h"

namespace AWS {
namespace EMR {

/**
 * @class  ModifyInstanceGroupsRequest
 *
 * @brief  Implements EMR ModifyInstanceGroups requests.
 *
 * @see    EMRClient::modifyInstanceGroups
 */

/**
 * @brief  Constructs a new ModifyInstanceGroupsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ModifyInstanceGroupsResponse::ModifyInstanceGroupsResponse(

/**
 * @brief  Constructs a new ModifyInstanceGroupsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ModifyInstanceGroupsRequest::ModifyInstanceGroupsRequest(const ModifyInstanceGroupsRequest &other)
    : EMRRequest(new ModifyInstanceGroupsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ModifyInstanceGroupsRequest object.
 */
ModifyInstanceGroupsRequest::ModifyInstanceGroupsRequest()
    : EMRRequest(new ModifyInstanceGroupsRequestPrivate(EMRRequest::ModifyInstanceGroupsAction, this))
{

}

bool ModifyInstanceGroupsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ModifyInstanceGroupsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ModifyInstanceGroupsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  EMRClient::send
 */
AwsAbstractResponse * ModifyInstanceGroupsRequest::response(QNetworkReply * const reply) const
{
    return new ModifyInstanceGroupsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ModifyInstanceGroupsRequestPrivate
 *
 * @brief  Private implementation for ModifyInstanceGroupsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ModifyInstanceGroupsRequestPrivate object.
 *
 * @param  action  EMR action being performed.
 * @param  q       Pointer to this object's public ModifyInstanceGroupsRequest instance.
 */
ModifyInstanceGroupsRequestPrivate::ModifyInstanceGroupsRequestPrivate(
    const EMRRequest::Action action, ModifyInstanceGroupsRequest * const q)
    : ModifyInstanceGroupsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ModifyInstanceGroupsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ModifyInstanceGroupsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ModifyInstanceGroupsRequest instance.
 */
ModifyInstanceGroupsRequestPrivate::ModifyInstanceGroupsRequestPrivate(
    const ModifyInstanceGroupsRequestPrivate &other, ModifyInstanceGroupsRequest * const q)
    : ModifyInstanceGroupsPrivate(other, q)
{

}

} // namespace EMR
} // namespace AWS
