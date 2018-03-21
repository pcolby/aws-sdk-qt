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

#include "deleteprojectrequest.h"
#include "deleteprojectrequest_p.h"
#include "deleteprojectresponse.h"
#include "mobilerequest_p.h"

namespace AWS {
namespace Mobile {

/**
 * @class  DeleteProjectRequest
 *
 * @brief  Implements Mobile DeleteProject requests.
 *
 * @see    MobileClient::deleteProject
 */

/**
 * @brief  Constructs a new DeleteProjectResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteProjectResponse::DeleteProjectResponse(

/**
 * @brief  Constructs a new DeleteProjectRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteProjectRequest::DeleteProjectRequest(const DeleteProjectRequest &other)
    : MobileRequest(new DeleteProjectRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteProjectRequest object.
 */
DeleteProjectRequest::DeleteProjectRequest()
    : MobileRequest(new DeleteProjectRequestPrivate(MobileRequest::DeleteProjectAction, this))
{

}

bool DeleteProjectRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteProjectResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteProjectResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  MobileClient::send
 */
AwsAbstractResponse * DeleteProjectRequest::response(QNetworkReply * const reply) const
{
    return new DeleteProjectResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteProjectRequestPrivate
 *
 * @brief  Private implementation for DeleteProjectRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteProjectRequestPrivate object.
 *
 * @param  action  Mobile action being performed.
 * @param  q       Pointer to this object's public DeleteProjectRequest instance.
 */
DeleteProjectRequestPrivate::DeleteProjectRequestPrivate(
    const MobileRequest::Action action, DeleteProjectRequest * const q)
    : DeleteProjectPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteProjectRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteProjectRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteProjectRequest instance.
 */
DeleteProjectRequestPrivate::DeleteProjectRequestPrivate(
    const DeleteProjectRequestPrivate &other, DeleteProjectRequest * const q)
    : DeleteProjectPrivate(other, q)
{

}

} // namespace Mobile
} // namespace AWS
