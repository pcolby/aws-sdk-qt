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

#include "putmailboxpermissionsrequest.h"
#include "putmailboxpermissionsrequest_p.h"
#include "putmailboxpermissionsresponse.h"
#include "workmailrequest_p.h"

namespace QtAws {
namespace WorkMail {

/**
 * @class  PutMailboxPermissionsRequest
 *
 * @brief  Implements WorkMail PutMailboxPermissions requests.
 *
 * @see    WorkMailClient::putMailboxPermissions
 */

/**
 * @brief  Constructs a new PutMailboxPermissionsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
PutMailboxPermissionsRequest::PutMailboxPermissionsRequest(const PutMailboxPermissionsRequest &other)
    : WorkMailRequest(new PutMailboxPermissionsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new PutMailboxPermissionsRequest object.
 */
PutMailboxPermissionsRequest::PutMailboxPermissionsRequest()
    : WorkMailRequest(new PutMailboxPermissionsRequestPrivate(WorkMailRequest::PutMailboxPermissionsAction, this))
{

}

bool PutMailboxPermissionsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an PutMailboxPermissionsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An PutMailboxPermissionsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  WorkMailClient::send
 */
QtAws::Core::AwsAbstractResponse * PutMailboxPermissionsRequest::response(QNetworkReply * const reply) const
{
    return new PutMailboxPermissionsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  PutMailboxPermissionsRequestPrivate
 *
 * @brief  Private implementation for PutMailboxPermissionsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PutMailboxPermissionsRequestPrivate object.
 *
 * @param  action  WorkMail action being performed.
 * @param  q       Pointer to this object's public PutMailboxPermissionsRequest instance.
 */
PutMailboxPermissionsRequestPrivate::PutMailboxPermissionsRequestPrivate(
    const WorkMailRequest::Action action, PutMailboxPermissionsRequest * const q)
    : WorkMailRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new PutMailboxPermissionsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the PutMailboxPermissionsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public PutMailboxPermissionsRequest instance.
 */
PutMailboxPermissionsRequestPrivate::PutMailboxPermissionsRequestPrivate(
    const PutMailboxPermissionsRequestPrivate &other, PutMailboxPermissionsRequest * const q)
    : WorkMailRequestPrivate(other, q)
{

}

} // namespace WorkMail
} // namespace QtAws
