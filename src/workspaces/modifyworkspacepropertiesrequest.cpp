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

#include "modifyworkspacepropertiesrequest.h"
#include "modifyworkspacepropertiesrequest_p.h"
#include "modifyworkspacepropertiesresponse.h"
#include "workspacesrequest_p.h"

namespace AWS {
namespace WorkSpaces {

/**
 * @class  ModifyWorkspacePropertiesRequest
 *
 * @brief  Implements WorkSpaces ModifyWorkspaceProperties requests.
 *
 * @see    WorkSpacesClient::modifyWorkspaceProperties
 */

/**
 * @brief  Constructs a new ModifyWorkspacePropertiesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ModifyWorkspacePropertiesResponse::ModifyWorkspacePropertiesResponse(

/**
 * @brief  Constructs a new ModifyWorkspacePropertiesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ModifyWorkspacePropertiesRequest::ModifyWorkspacePropertiesRequest(const ModifyWorkspacePropertiesRequest &other)
    : WorkSpacesRequest(new ModifyWorkspacePropertiesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ModifyWorkspacePropertiesRequest object.
 */
ModifyWorkspacePropertiesRequest::ModifyWorkspacePropertiesRequest()
    : WorkSpacesRequest(new ModifyWorkspacePropertiesRequestPrivate(WorkSpacesRequest::ModifyWorkspacePropertiesAction, this))
{

}

bool ModifyWorkspacePropertiesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ModifyWorkspacePropertiesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ModifyWorkspacePropertiesResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  WorkSpacesClient::send
 */
AwsAbstractResponse * ModifyWorkspacePropertiesRequest::response(QNetworkReply * const reply) const
{
    return new ModifyWorkspacePropertiesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ModifyWorkspacePropertiesRequestPrivate
 *
 * @brief  Private implementation for ModifyWorkspacePropertiesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ModifyWorkspacePropertiesRequestPrivate object.
 *
 * @param  action  WorkSpaces action being performed.
 * @param  q       Pointer to this object's public ModifyWorkspacePropertiesRequest instance.
 */
ModifyWorkspacePropertiesRequestPrivate::ModifyWorkspacePropertiesRequestPrivate(
    const WorkSpacesRequest::Action action, ModifyWorkspacePropertiesRequest * const q)
    : ModifyWorkspacePropertiesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ModifyWorkspacePropertiesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ModifyWorkspacePropertiesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ModifyWorkspacePropertiesRequest instance.
 */
ModifyWorkspacePropertiesRequestPrivate::ModifyWorkspacePropertiesRequestPrivate(
    const ModifyWorkspacePropertiesRequestPrivate &other, ModifyWorkspacePropertiesRequest * const q)
    : ModifyWorkspacePropertiesPrivate(other, q)
{

}

} // namespace WorkSpaces
} // namespace AWS
