/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "attachmanagedpolicytopermissionsetrequest.h"
#include "attachmanagedpolicytopermissionsetrequest_p.h"
#include "attachmanagedpolicytopermissionsetresponse.h"
#include "ssoadminrequest_p.h"

namespace QtAws {
namespace SSOAdmin {

/*!
 * \class QtAws::SSOAdmin::AttachManagedPolicyToPermissionSetRequest
 * \brief The AttachManagedPolicyToPermissionSetRequest class provides an interface for SSOAdmin AttachManagedPolicyToPermissionSet requests.
 *
 * \inmodule QtAwsSSOAdmin
 *
 *
 * \sa SSOAdminClient::attachManagedPolicyToPermissionSet
 */

/*!
 * Constructs a copy of \a other.
 */
AttachManagedPolicyToPermissionSetRequest::AttachManagedPolicyToPermissionSetRequest(const AttachManagedPolicyToPermissionSetRequest &other)
    : SSOAdminRequest(new AttachManagedPolicyToPermissionSetRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a AttachManagedPolicyToPermissionSetRequest object.
 */
AttachManagedPolicyToPermissionSetRequest::AttachManagedPolicyToPermissionSetRequest()
    : SSOAdminRequest(new AttachManagedPolicyToPermissionSetRequestPrivate(SSOAdminRequest::AttachManagedPolicyToPermissionSetAction, this))
{

}

/*!
 * \reimp
 */
bool AttachManagedPolicyToPermissionSetRequest::isValid() const
{
    return false;
}


/*!
 * Returns a AttachManagedPolicyToPermissionSetResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * AttachManagedPolicyToPermissionSetRequest::response(QNetworkReply * const reply) const
{
    return new AttachManagedPolicyToPermissionSetResponse(*this, reply);
}

/*!
 * \class QtAws::SSOAdmin::AttachManagedPolicyToPermissionSetRequestPrivate
 * \brief The AttachManagedPolicyToPermissionSetRequestPrivate class provides private implementation for AttachManagedPolicyToPermissionSetRequest.
 * \internal
 *
 * \inmodule QtAwsSSOAdmin
 */

/*!
 * Constructs a AttachManagedPolicyToPermissionSetRequestPrivate object for SSOAdmin \a action,
 * with public implementation \a q.
 */
AttachManagedPolicyToPermissionSetRequestPrivate::AttachManagedPolicyToPermissionSetRequestPrivate(
    const SSOAdminRequest::Action action, AttachManagedPolicyToPermissionSetRequest * const q)
    : SSOAdminRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the AttachManagedPolicyToPermissionSetRequest
 * class' copy constructor.
 */
AttachManagedPolicyToPermissionSetRequestPrivate::AttachManagedPolicyToPermissionSetRequestPrivate(
    const AttachManagedPolicyToPermissionSetRequestPrivate &other, AttachManagedPolicyToPermissionSetRequest * const q)
    : SSOAdminRequestPrivate(other, q)
{

}

} // namespace SSOAdmin
} // namespace QtAws
