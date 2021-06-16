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

#include "getinlinepolicyforpermissionsetrequest.h"
#include "getinlinepolicyforpermissionsetrequest_p.h"
#include "getinlinepolicyforpermissionsetresponse.h"
#include "ssoadminrequest_p.h"

namespace QtAws {
namespace SSOAdmin {

/*!
 * \class QtAws::SSOAdmin::GetInlinePolicyForPermissionSetRequest
 * \brief The GetInlinePolicyForPermissionSetRequest class provides an interface for SSOAdmin GetInlinePolicyForPermissionSet requests.
 *
 * \inmodule QtAwsSSOAdmin
 *
 *
 * \sa SSOAdminClient::getInlinePolicyForPermissionSet
 */

/*!
 * Constructs a copy of \a other.
 */
GetInlinePolicyForPermissionSetRequest::GetInlinePolicyForPermissionSetRequest(const GetInlinePolicyForPermissionSetRequest &other)
    : SSOAdminRequest(new GetInlinePolicyForPermissionSetRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetInlinePolicyForPermissionSetRequest object.
 */
GetInlinePolicyForPermissionSetRequest::GetInlinePolicyForPermissionSetRequest()
    : SSOAdminRequest(new GetInlinePolicyForPermissionSetRequestPrivate(SSOAdminRequest::GetInlinePolicyForPermissionSetAction, this))
{

}

/*!
 * \reimp
 */
bool GetInlinePolicyForPermissionSetRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetInlinePolicyForPermissionSetResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetInlinePolicyForPermissionSetRequest::response(QNetworkReply * const reply) const
{
    return new GetInlinePolicyForPermissionSetResponse(*this, reply);
}

/*!
 * \class QtAws::SSOAdmin::GetInlinePolicyForPermissionSetRequestPrivate
 * \brief The GetInlinePolicyForPermissionSetRequestPrivate class provides private implementation for GetInlinePolicyForPermissionSetRequest.
 * \internal
 *
 * \inmodule QtAwsSSOAdmin
 */

/*!
 * Constructs a GetInlinePolicyForPermissionSetRequestPrivate object for SSOAdmin \a action,
 * with public implementation \a q.
 */
GetInlinePolicyForPermissionSetRequestPrivate::GetInlinePolicyForPermissionSetRequestPrivate(
    const SSOAdminRequest::Action action, GetInlinePolicyForPermissionSetRequest * const q)
    : SSOAdminRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetInlinePolicyForPermissionSetRequest
 * class' copy constructor.
 */
GetInlinePolicyForPermissionSetRequestPrivate::GetInlinePolicyForPermissionSetRequestPrivate(
    const GetInlinePolicyForPermissionSetRequestPrivate &other, GetInlinePolicyForPermissionSetRequest * const q)
    : SSOAdminRequestPrivate(other, q)
{

}

} // namespace SSOAdmin
} // namespace QtAws
