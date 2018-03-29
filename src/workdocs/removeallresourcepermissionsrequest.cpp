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

#include "removeallresourcepermissionsrequest.h"
#include "removeallresourcepermissionsrequest_p.h"
#include "removeallresourcepermissionsresponse.h"
#include "workdocsrequest_p.h"

namespace QtAws {
namespace WorkDocs {

/**
 * @class  RemoveAllResourcePermissionsRequest
 *
 * @brief  Implements WorkDocs RemoveAllResourcePermissions requests.
 *
 * @see    WorkDocsClient::removeAllResourcePermissions
 */

/**
 * @brief  Constructs a new RemoveAllResourcePermissionsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
RemoveAllResourcePermissionsRequest::RemoveAllResourcePermissionsRequest(const RemoveAllResourcePermissionsRequest &other)
    : WorkDocsRequest(new RemoveAllResourcePermissionsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new RemoveAllResourcePermissionsRequest object.
 */
RemoveAllResourcePermissionsRequest::RemoveAllResourcePermissionsRequest()
    : WorkDocsRequest(new RemoveAllResourcePermissionsRequestPrivate(WorkDocsRequest::RemoveAllResourcePermissionsAction, this))
{

}

bool RemoveAllResourcePermissionsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an RemoveAllResourcePermissionsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An RemoveAllResourcePermissionsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  WorkDocsClient::send
 */
QtAws::Core::AwsAbstractResponse * RemoveAllResourcePermissionsRequest::response(QNetworkReply * const reply) const
{
    return new RemoveAllResourcePermissionsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  RemoveAllResourcePermissionsRequestPrivate
 *
 * @brief  Private implementation for RemoveAllResourcePermissionsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RemoveAllResourcePermissionsRequestPrivate object.
 *
 * @param  action  WorkDocs action being performed.
 * @param  q       Pointer to this object's public RemoveAllResourcePermissionsRequest instance.
 */
RemoveAllResourcePermissionsRequestPrivate::RemoveAllResourcePermissionsRequestPrivate(
    const WorkDocsRequest::Action action, RemoveAllResourcePermissionsRequest * const q)
    : WorkDocsRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new RemoveAllResourcePermissionsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the RemoveAllResourcePermissionsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public RemoveAllResourcePermissionsRequest instance.
 */
RemoveAllResourcePermissionsRequestPrivate::RemoveAllResourcePermissionsRequestPrivate(
    const RemoveAllResourcePermissionsRequestPrivate &other, RemoveAllResourcePermissionsRequest * const q)
    : WorkDocsRequestPrivate(other, q)
{

}

} // namespace WorkDocs
} // namespace QtAws
