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

#include "deletemailboxpermissionsrequest.h"
#include "deletemailboxpermissionsrequest_p.h"
#include "deletemailboxpermissionsresponse.h"
#include "workmailrequest_p.h"

namespace QtAws {
namespace WorkMail {

/**
 * @class  DeleteMailboxPermissionsRequest
 *
 * @brief  Implements WorkMail DeleteMailboxPermissions requests.
 *
 * @see    WorkMailClient::deleteMailboxPermissions
 */

/**
 * @brief  Constructs a new DeleteMailboxPermissionsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteMailboxPermissionsRequest::DeleteMailboxPermissionsRequest(const DeleteMailboxPermissionsRequest &other)
    : WorkMailRequest(new DeleteMailboxPermissionsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteMailboxPermissionsRequest object.
 */
DeleteMailboxPermissionsRequest::DeleteMailboxPermissionsRequest()
    : WorkMailRequest(new DeleteMailboxPermissionsRequestPrivate(WorkMailRequest::DeleteMailboxPermissionsAction, this))
{

}

bool DeleteMailboxPermissionsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteMailboxPermissionsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteMailboxPermissionsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  WorkMailClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteMailboxPermissionsRequest::response(QNetworkReply * const reply) const
{
    return new DeleteMailboxPermissionsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteMailboxPermissionsRequestPrivate
 *
 * @brief  Private implementation for DeleteMailboxPermissionsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteMailboxPermissionsRequestPrivate object.
 *
 * @param  action  WorkMail action being performed.
 * @param  q       Pointer to this object's public DeleteMailboxPermissionsRequest instance.
 */
DeleteMailboxPermissionsRequestPrivate::DeleteMailboxPermissionsRequestPrivate(
    const WorkMailRequest::Action action, DeleteMailboxPermissionsRequest * const q)
    : WorkMailRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteMailboxPermissionsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteMailboxPermissionsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteMailboxPermissionsRequest instance.
 */
DeleteMailboxPermissionsRequestPrivate::DeleteMailboxPermissionsRequestPrivate(
    const DeleteMailboxPermissionsRequestPrivate &other, DeleteMailboxPermissionsRequest * const q)
    : WorkMailRequestPrivate(other, q)
{

}

} // namespace WorkMail
} // namespace QtAws
