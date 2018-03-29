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

#include "deletemounttargetrequest.h"
#include "deletemounttargetrequest_p.h"
#include "deletemounttargetresponse.h"
#include "efsrequest_p.h"

namespace QtAws {
namespace EFS {

/**
 * @class  DeleteMountTargetRequest
 *
 * @brief  Implements EFS DeleteMountTarget requests.
 *
 * @see    EFSClient::deleteMountTarget
 */

/**
 * @brief  Constructs a new DeleteMountTargetRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteMountTargetRequest::DeleteMountTargetRequest(const DeleteMountTargetRequest &other)
    : EFSRequest(new DeleteMountTargetRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteMountTargetRequest object.
 */
DeleteMountTargetRequest::DeleteMountTargetRequest()
    : EFSRequest(new DeleteMountTargetRequestPrivate(EFSRequest::DeleteMountTargetAction, this))
{

}

bool DeleteMountTargetRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteMountTargetResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteMountTargetResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  EFSClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteMountTargetRequest::response(QNetworkReply * const reply) const
{
    return new DeleteMountTargetResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteMountTargetRequestPrivate
 *
 * @brief  Private implementation for DeleteMountTargetRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteMountTargetRequestPrivate object.
 *
 * @param  action  EFS action being performed.
 * @param  q       Pointer to this object's public DeleteMountTargetRequest instance.
 */
DeleteMountTargetRequestPrivate::DeleteMountTargetRequestPrivate(
    const EFSRequest::Action action, DeleteMountTargetRequest * const q)
    : DeleteMountTargetPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteMountTargetRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteMountTargetRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteMountTargetRequest instance.
 */
DeleteMountTargetRequestPrivate::DeleteMountTargetRequestPrivate(
    const DeleteMountTargetRequestPrivate &other, DeleteMountTargetRequest * const q)
    : DeleteMountTargetPrivate(other, q)
{

}

} // namespace EFS
} // namespace QtAws
