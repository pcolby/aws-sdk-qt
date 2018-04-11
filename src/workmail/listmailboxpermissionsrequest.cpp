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

#include "listmailboxpermissionsrequest.h"
#include "listmailboxpermissionsrequest_p.h"
#include "listmailboxpermissionsresponse.h"
#include "workmailrequest_p.h"

namespace QtAws {
namespace WorkMail {

/**
 * @class  ListMailboxPermissionsRequest
 *
 * @brief  Implements WorkMail ListMailboxPermissions requests.
 *
 * @see    WorkMailClient::listMailboxPermissions
 */

/**
 * @brief  Constructs a new ListMailboxPermissionsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListMailboxPermissionsRequest::ListMailboxPermissionsRequest(const ListMailboxPermissionsRequest &other)
    : WorkMailRequest(new ListMailboxPermissionsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListMailboxPermissionsRequest object.
 */
ListMailboxPermissionsRequest::ListMailboxPermissionsRequest()
    : WorkMailRequest(new ListMailboxPermissionsRequestPrivate(WorkMailRequest::ListMailboxPermissionsAction, this))
{

}

bool ListMailboxPermissionsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListMailboxPermissionsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListMailboxPermissionsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  WorkMailClient::send
 */
QtAws::Core::AwsAbstractResponse * ListMailboxPermissionsRequest::response(QNetworkReply * const reply) const
{
    return new ListMailboxPermissionsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListMailboxPermissionsRequestPrivate
 *
 * @brief  Private implementation for ListMailboxPermissionsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListMailboxPermissionsRequestPrivate object.
 *
 * @param  action  WorkMail action being performed.
 * @param  q       Pointer to this object's public ListMailboxPermissionsRequest instance.
 */
ListMailboxPermissionsRequestPrivate::ListMailboxPermissionsRequestPrivate(
    const WorkMailRequest::Action action, ListMailboxPermissionsRequest * const q)
    : WorkMailRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListMailboxPermissionsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListMailboxPermissionsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListMailboxPermissionsRequest instance.
 */
ListMailboxPermissionsRequestPrivate::ListMailboxPermissionsRequestPrivate(
    const ListMailboxPermissionsRequestPrivate &other, ListMailboxPermissionsRequest * const q)
    : WorkMailRequestPrivate(other, q)
{

}

} // namespace WorkMail
} // namespace QtAws
