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

#include "removepermissionrequest.h"
#include "removepermissionrequest_p.h"
#include "removepermissionresponse.h"
#include "lambdarequest_p.h"

namespace QtAws {
namespace Lambda {

/**
 * @class  RemovePermissionRequest
 *
 * @brief  Implements Lambda RemovePermission requests.
 *
 * @see    LambdaClient::removePermission
 */

/**
 * @brief  Constructs a new RemovePermissionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
RemovePermissionRequest::RemovePermissionRequest(const RemovePermissionRequest &other)
    : LambdaRequest(new RemovePermissionRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new RemovePermissionRequest object.
 */
RemovePermissionRequest::RemovePermissionRequest()
    : LambdaRequest(new RemovePermissionRequestPrivate(LambdaRequest::RemovePermissionAction, this))
{

}

bool RemovePermissionRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an RemovePermissionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An RemovePermissionResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  LambdaClient::send
 */
QtAws::Core::AwsAbstractResponse * RemovePermissionRequest::response(QNetworkReply * const reply) const
{
    return new RemovePermissionResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  RemovePermissionRequestPrivate
 *
 * @brief  Private implementation for RemovePermissionRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RemovePermissionRequestPrivate object.
 *
 * @param  action  Lambda action being performed.
 * @param  q       Pointer to this object's public RemovePermissionRequest instance.
 */
RemovePermissionRequestPrivate::RemovePermissionRequestPrivate(
    const LambdaRequest::Action action, RemovePermissionRequest * const q)
    : RemovePermissionPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new RemovePermissionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the RemovePermissionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public RemovePermissionRequest instance.
 */
RemovePermissionRequestPrivate::RemovePermissionRequestPrivate(
    const RemovePermissionRequestPrivate &other, RemovePermissionRequest * const q)
    : RemovePermissionPrivate(other, q)
{

}

} // namespace Lambda
} // namespace QtAws
