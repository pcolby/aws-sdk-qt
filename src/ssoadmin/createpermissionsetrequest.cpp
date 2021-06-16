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

#include "createpermissionsetrequest.h"
#include "createpermissionsetrequest_p.h"
#include "createpermissionsetresponse.h"
#include "ssoadminrequest_p.h"

namespace QtAws {
namespace SSOAdmin {

/*!
 * \class QtAws::SSOAdmin::CreatePermissionSetRequest
 * \brief The CreatePermissionSetRequest class provides an interface for SSOAdmin CreatePermissionSet requests.
 *
 * \inmodule QtAwsSSOAdmin
 *
 *
 * \sa SSOAdminClient::createPermissionSet
 */

/*!
 * Constructs a copy of \a other.
 */
CreatePermissionSetRequest::CreatePermissionSetRequest(const CreatePermissionSetRequest &other)
    : SSOAdminRequest(new CreatePermissionSetRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreatePermissionSetRequest object.
 */
CreatePermissionSetRequest::CreatePermissionSetRequest()
    : SSOAdminRequest(new CreatePermissionSetRequestPrivate(SSOAdminRequest::CreatePermissionSetAction, this))
{

}

/*!
 * \reimp
 */
bool CreatePermissionSetRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreatePermissionSetResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreatePermissionSetRequest::response(QNetworkReply * const reply) const
{
    return new CreatePermissionSetResponse(*this, reply);
}

/*!
 * \class QtAws::SSOAdmin::CreatePermissionSetRequestPrivate
 * \brief The CreatePermissionSetRequestPrivate class provides private implementation for CreatePermissionSetRequest.
 * \internal
 *
 * \inmodule QtAwsSSOAdmin
 */

/*!
 * Constructs a CreatePermissionSetRequestPrivate object for SSOAdmin \a action,
 * with public implementation \a q.
 */
CreatePermissionSetRequestPrivate::CreatePermissionSetRequestPrivate(
    const SSOAdminRequest::Action action, CreatePermissionSetRequest * const q)
    : SSOAdminRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreatePermissionSetRequest
 * class' copy constructor.
 */
CreatePermissionSetRequestPrivate::CreatePermissionSetRequestPrivate(
    const CreatePermissionSetRequestPrivate &other, CreatePermissionSetRequest * const q)
    : SSOAdminRequestPrivate(other, q)
{

}

} // namespace SSOAdmin
} // namespace QtAws
