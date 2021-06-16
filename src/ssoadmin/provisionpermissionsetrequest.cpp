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

#include "provisionpermissionsetrequest.h"
#include "provisionpermissionsetrequest_p.h"
#include "provisionpermissionsetresponse.h"
#include "ssoadminrequest_p.h"

namespace QtAws {
namespace SSOAdmin {

/*!
 * \class QtAws::SSOAdmin::ProvisionPermissionSetRequest
 * \brief The ProvisionPermissionSetRequest class provides an interface for SSOAdmin ProvisionPermissionSet requests.
 *
 * \inmodule QtAwsSSOAdmin
 *
 *
 * \sa SSOAdminClient::provisionPermissionSet
 */

/*!
 * Constructs a copy of \a other.
 */
ProvisionPermissionSetRequest::ProvisionPermissionSetRequest(const ProvisionPermissionSetRequest &other)
    : SSOAdminRequest(new ProvisionPermissionSetRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ProvisionPermissionSetRequest object.
 */
ProvisionPermissionSetRequest::ProvisionPermissionSetRequest()
    : SSOAdminRequest(new ProvisionPermissionSetRequestPrivate(SSOAdminRequest::ProvisionPermissionSetAction, this))
{

}

/*!
 * \reimp
 */
bool ProvisionPermissionSetRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ProvisionPermissionSetResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ProvisionPermissionSetRequest::response(QNetworkReply * const reply) const
{
    return new ProvisionPermissionSetResponse(*this, reply);
}

/*!
 * \class QtAws::SSOAdmin::ProvisionPermissionSetRequestPrivate
 * \brief The ProvisionPermissionSetRequestPrivate class provides private implementation for ProvisionPermissionSetRequest.
 * \internal
 *
 * \inmodule QtAwsSSOAdmin
 */

/*!
 * Constructs a ProvisionPermissionSetRequestPrivate object for SSOAdmin \a action,
 * with public implementation \a q.
 */
ProvisionPermissionSetRequestPrivate::ProvisionPermissionSetRequestPrivate(
    const SSOAdminRequest::Action action, ProvisionPermissionSetRequest * const q)
    : SSOAdminRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ProvisionPermissionSetRequest
 * class' copy constructor.
 */
ProvisionPermissionSetRequestPrivate::ProvisionPermissionSetRequestPrivate(
    const ProvisionPermissionSetRequestPrivate &other, ProvisionPermissionSetRequest * const q)
    : SSOAdminRequestPrivate(other, q)
{

}

} // namespace SSOAdmin
} // namespace QtAws
