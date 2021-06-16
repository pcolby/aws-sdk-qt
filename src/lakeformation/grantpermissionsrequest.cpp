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

#include "grantpermissionsrequest.h"
#include "grantpermissionsrequest_p.h"
#include "grantpermissionsresponse.h"
#include "lakeformationrequest_p.h"

namespace QtAws {
namespace LakeFormation {

/*!
 * \class QtAws::LakeFormation::GrantPermissionsRequest
 * \brief The GrantPermissionsRequest class provides an interface for LakeFormation GrantPermissions requests.
 *
 * \inmodule QtAwsLakeFormation
 *
 *  <fullname>AWS Lake Formation</fullname>
 * 
 *  Defines the public endpoint for the AWS Lake Formation
 *
 * \sa LakeFormationClient::grantPermissions
 */

/*!
 * Constructs a copy of \a other.
 */
GrantPermissionsRequest::GrantPermissionsRequest(const GrantPermissionsRequest &other)
    : LakeFormationRequest(new GrantPermissionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GrantPermissionsRequest object.
 */
GrantPermissionsRequest::GrantPermissionsRequest()
    : LakeFormationRequest(new GrantPermissionsRequestPrivate(LakeFormationRequest::GrantPermissionsAction, this))
{

}

/*!
 * \reimp
 */
bool GrantPermissionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GrantPermissionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GrantPermissionsRequest::response(QNetworkReply * const reply) const
{
    return new GrantPermissionsResponse(*this, reply);
}

/*!
 * \class QtAws::LakeFormation::GrantPermissionsRequestPrivate
 * \brief The GrantPermissionsRequestPrivate class provides private implementation for GrantPermissionsRequest.
 * \internal
 *
 * \inmodule QtAwsLakeFormation
 */

/*!
 * Constructs a GrantPermissionsRequestPrivate object for LakeFormation \a action,
 * with public implementation \a q.
 */
GrantPermissionsRequestPrivate::GrantPermissionsRequestPrivate(
    const LakeFormationRequest::Action action, GrantPermissionsRequest * const q)
    : LakeFormationRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GrantPermissionsRequest
 * class' copy constructor.
 */
GrantPermissionsRequestPrivate::GrantPermissionsRequestPrivate(
    const GrantPermissionsRequestPrivate &other, GrantPermissionsRequest * const q)
    : LakeFormationRequestPrivate(other, q)
{

}

} // namespace LakeFormation
} // namespace QtAws
