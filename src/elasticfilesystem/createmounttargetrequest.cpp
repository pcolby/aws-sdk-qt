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

#include "createmounttargetrequest.h"
#include "createmounttargetrequest_p.h"
#include "createmounttargetresponse.h"
#include "efsrequest_p.h"

namespace AWS {
namespace EFS {

/**
 * @class  CreateMountTargetRequest
 *
 * @brief  Implements EFS CreateMountTarget requests.
 *
 * @see    EFSClient::createMountTarget
 */

/**
 * @brief  Constructs a new CreateMountTargetRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateMountTargetRequest::CreateMountTargetRequest(const CreateMountTargetRequest &other)
    : EFSRequest(new CreateMountTargetRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateMountTargetRequest object.
 */
CreateMountTargetRequest::CreateMountTargetRequest()
    : EFSRequest(new CreateMountTargetRequestPrivate(EFSRequest::CreateMountTargetAction, this))
{

}

bool CreateMountTargetRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateMountTargetResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateMountTargetResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  EFSClient::send
 */
AwsAbstractResponse * CreateMountTargetRequest::response(QNetworkReply * const reply) const
{
    return new CreateMountTargetResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateMountTargetRequestPrivate
 *
 * @brief  Private implementation for CreateMountTargetRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateMountTargetRequestPrivate object.
 *
 * @param  action  EFS action being performed.
 * @param  q       Pointer to this object's public CreateMountTargetRequest instance.
 */
CreateMountTargetRequestPrivate::CreateMountTargetRequestPrivate(
    const EFSRequest::Action action, CreateMountTargetRequest * const q)
    : CreateMountTargetPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateMountTargetRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateMountTargetRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateMountTargetRequest instance.
 */
CreateMountTargetRequestPrivate::CreateMountTargetRequestPrivate(
    const CreateMountTargetRequestPrivate &other, CreateMountTargetRequest * const q)
    : CreateMountTargetPrivate(other, q)
{

}

} // namespace EFS
} // namespace AWS
