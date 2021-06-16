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

#include "updatepermissionsetrequest.h"
#include "updatepermissionsetrequest_p.h"
#include "updatepermissionsetresponse.h"
#include "ssoadminrequest_p.h"

namespace QtAws {
namespace SSOAdmin {

/*!
 * \class QtAws::SSOAdmin::UpdatePermissionSetRequest
 * \brief The UpdatePermissionSetRequest class provides an interface for SSOAdmin UpdatePermissionSet requests.
 *
 * \inmodule QtAwsSSOAdmin
 *
 *
 * \sa SSOAdminClient::updatePermissionSet
 */

/*!
 * Constructs a copy of \a other.
 */
UpdatePermissionSetRequest::UpdatePermissionSetRequest(const UpdatePermissionSetRequest &other)
    : SSOAdminRequest(new UpdatePermissionSetRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdatePermissionSetRequest object.
 */
UpdatePermissionSetRequest::UpdatePermissionSetRequest()
    : SSOAdminRequest(new UpdatePermissionSetRequestPrivate(SSOAdminRequest::UpdatePermissionSetAction, this))
{

}

/*!
 * \reimp
 */
bool UpdatePermissionSetRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdatePermissionSetResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdatePermissionSetRequest::response(QNetworkReply * const reply) const
{
    return new UpdatePermissionSetResponse(*this, reply);
}

/*!
 * \class QtAws::SSOAdmin::UpdatePermissionSetRequestPrivate
 * \brief The UpdatePermissionSetRequestPrivate class provides private implementation for UpdatePermissionSetRequest.
 * \internal
 *
 * \inmodule QtAwsSSOAdmin
 */

/*!
 * Constructs a UpdatePermissionSetRequestPrivate object for SSOAdmin \a action,
 * with public implementation \a q.
 */
UpdatePermissionSetRequestPrivate::UpdatePermissionSetRequestPrivate(
    const SSOAdminRequest::Action action, UpdatePermissionSetRequest * const q)
    : SSOAdminRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdatePermissionSetRequest
 * class' copy constructor.
 */
UpdatePermissionSetRequestPrivate::UpdatePermissionSetRequestPrivate(
    const UpdatePermissionSetRequestPrivate &other, UpdatePermissionSetRequest * const q)
    : SSOAdminRequestPrivate(other, q)
{

}

} // namespace SSOAdmin
} // namespace QtAws
