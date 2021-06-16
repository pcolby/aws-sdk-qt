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

#include "detachmanagedpolicyfrompermissionsetrequest.h"
#include "detachmanagedpolicyfrompermissionsetrequest_p.h"
#include "detachmanagedpolicyfrompermissionsetresponse.h"
#include "ssoadminrequest_p.h"

namespace QtAws {
namespace SSOAdmin {

/*!
 * \class QtAws::SSOAdmin::DetachManagedPolicyFromPermissionSetRequest
 * \brief The DetachManagedPolicyFromPermissionSetRequest class provides an interface for SSOAdmin DetachManagedPolicyFromPermissionSet requests.
 *
 * \inmodule QtAwsSSOAdmin
 *
 *
 * \sa SSOAdminClient::detachManagedPolicyFromPermissionSet
 */

/*!
 * Constructs a copy of \a other.
 */
DetachManagedPolicyFromPermissionSetRequest::DetachManagedPolicyFromPermissionSetRequest(const DetachManagedPolicyFromPermissionSetRequest &other)
    : SSOAdminRequest(new DetachManagedPolicyFromPermissionSetRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DetachManagedPolicyFromPermissionSetRequest object.
 */
DetachManagedPolicyFromPermissionSetRequest::DetachManagedPolicyFromPermissionSetRequest()
    : SSOAdminRequest(new DetachManagedPolicyFromPermissionSetRequestPrivate(SSOAdminRequest::DetachManagedPolicyFromPermissionSetAction, this))
{

}

/*!
 * \reimp
 */
bool DetachManagedPolicyFromPermissionSetRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DetachManagedPolicyFromPermissionSetResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DetachManagedPolicyFromPermissionSetRequest::response(QNetworkReply * const reply) const
{
    return new DetachManagedPolicyFromPermissionSetResponse(*this, reply);
}

/*!
 * \class QtAws::SSOAdmin::DetachManagedPolicyFromPermissionSetRequestPrivate
 * \brief The DetachManagedPolicyFromPermissionSetRequestPrivate class provides private implementation for DetachManagedPolicyFromPermissionSetRequest.
 * \internal
 *
 * \inmodule QtAwsSSOAdmin
 */

/*!
 * Constructs a DetachManagedPolicyFromPermissionSetRequestPrivate object for SSOAdmin \a action,
 * with public implementation \a q.
 */
DetachManagedPolicyFromPermissionSetRequestPrivate::DetachManagedPolicyFromPermissionSetRequestPrivate(
    const SSOAdminRequest::Action action, DetachManagedPolicyFromPermissionSetRequest * const q)
    : SSOAdminRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DetachManagedPolicyFromPermissionSetRequest
 * class' copy constructor.
 */
DetachManagedPolicyFromPermissionSetRequestPrivate::DetachManagedPolicyFromPermissionSetRequestPrivate(
    const DetachManagedPolicyFromPermissionSetRequestPrivate &other, DetachManagedPolicyFromPermissionSetRequest * const q)
    : SSOAdminRequestPrivate(other, q)
{

}

} // namespace SSOAdmin
} // namespace QtAws
