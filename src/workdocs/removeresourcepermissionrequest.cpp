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

#include "removeresourcepermissionrequest.h"
#include "removeresourcepermissionrequest_p.h"
#include "removeresourcepermissionresponse.h"
#include "workdocsrequest_p.h"

namespace QtAws {
namespace WorkDocs {

/**
 * @class  RemoveResourcePermissionRequest
 *
 * @brief  Implements WorkDocs RemoveResourcePermission requests.
 *
 * @see    WorkDocsClient::removeResourcePermission
 */

/**
 * @brief  Constructs a new RemoveResourcePermissionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
RemoveResourcePermissionRequest::RemoveResourcePermissionRequest(const RemoveResourcePermissionRequest &other)
    : WorkDocsRequest(new RemoveResourcePermissionRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new RemoveResourcePermissionRequest object.
 */
RemoveResourcePermissionRequest::RemoveResourcePermissionRequest()
    : WorkDocsRequest(new RemoveResourcePermissionRequestPrivate(WorkDocsRequest::RemoveResourcePermissionAction, this))
{

}

bool RemoveResourcePermissionRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an RemoveResourcePermissionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An RemoveResourcePermissionResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  WorkDocsClient::send
 */
QtAws::Core::AwsAbstractResponse * RemoveResourcePermissionRequest::response(QNetworkReply * const reply) const
{
    return new RemoveResourcePermissionResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  RemoveResourcePermissionRequestPrivate
 *
 * @brief  Private implementation for RemoveResourcePermissionRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RemoveResourcePermissionRequestPrivate object.
 *
 * @param  action  WorkDocs action being performed.
 * @param  q       Pointer to this object's public RemoveResourcePermissionRequest instance.
 */
RemoveResourcePermissionRequestPrivate::RemoveResourcePermissionRequestPrivate(
    const WorkDocsRequest::Action action, RemoveResourcePermissionRequest * const q)
    : WorkDocsRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new RemoveResourcePermissionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the RemoveResourcePermissionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public RemoveResourcePermissionRequest instance.
 */
RemoveResourcePermissionRequestPrivate::RemoveResourcePermissionRequestPrivate(
    const RemoveResourcePermissionRequestPrivate &other, RemoveResourcePermissionRequest * const q)
    : WorkDocsRequestPrivate(other, q)
{

}

} // namespace WorkDocs
} // namespace QtAws
