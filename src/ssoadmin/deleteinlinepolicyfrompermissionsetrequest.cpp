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

#include "deleteinlinepolicyfrompermissionsetrequest.h"
#include "deleteinlinepolicyfrompermissionsetrequest_p.h"
#include "deleteinlinepolicyfrompermissionsetresponse.h"
#include "ssoadminrequest_p.h"

namespace QtAws {
namespace SSOAdmin {

/*!
 * \class QtAws::SSOAdmin::DeleteInlinePolicyFromPermissionSetRequest
 * \brief The DeleteInlinePolicyFromPermissionSetRequest class provides an interface for SSOAdmin DeleteInlinePolicyFromPermissionSet requests.
 *
 * \inmodule QtAwsSSOAdmin
 *
 *
 * \sa SSOAdminClient::deleteInlinePolicyFromPermissionSet
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteInlinePolicyFromPermissionSetRequest::DeleteInlinePolicyFromPermissionSetRequest(const DeleteInlinePolicyFromPermissionSetRequest &other)
    : SSOAdminRequest(new DeleteInlinePolicyFromPermissionSetRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteInlinePolicyFromPermissionSetRequest object.
 */
DeleteInlinePolicyFromPermissionSetRequest::DeleteInlinePolicyFromPermissionSetRequest()
    : SSOAdminRequest(new DeleteInlinePolicyFromPermissionSetRequestPrivate(SSOAdminRequest::DeleteInlinePolicyFromPermissionSetAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteInlinePolicyFromPermissionSetRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteInlinePolicyFromPermissionSetResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteInlinePolicyFromPermissionSetRequest::response(QNetworkReply * const reply) const
{
    return new DeleteInlinePolicyFromPermissionSetResponse(*this, reply);
}

/*!
 * \class QtAws::SSOAdmin::DeleteInlinePolicyFromPermissionSetRequestPrivate
 * \brief The DeleteInlinePolicyFromPermissionSetRequestPrivate class provides private implementation for DeleteInlinePolicyFromPermissionSetRequest.
 * \internal
 *
 * \inmodule QtAwsSSOAdmin
 */

/*!
 * Constructs a DeleteInlinePolicyFromPermissionSetRequestPrivate object for SSOAdmin \a action,
 * with public implementation \a q.
 */
DeleteInlinePolicyFromPermissionSetRequestPrivate::DeleteInlinePolicyFromPermissionSetRequestPrivate(
    const SSOAdminRequest::Action action, DeleteInlinePolicyFromPermissionSetRequest * const q)
    : SSOAdminRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteInlinePolicyFromPermissionSetRequest
 * class' copy constructor.
 */
DeleteInlinePolicyFromPermissionSetRequestPrivate::DeleteInlinePolicyFromPermissionSetRequestPrivate(
    const DeleteInlinePolicyFromPermissionSetRequestPrivate &other, DeleteInlinePolicyFromPermissionSetRequest * const q)
    : SSOAdminRequestPrivate(other, q)
{

}

} // namespace SSOAdmin
} // namespace QtAws
