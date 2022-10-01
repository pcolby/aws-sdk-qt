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

#include "listpermissionsrequest.h"
#include "listpermissionsrequest_p.h"
#include "listpermissionsresponse.h"
#include "lakeformationrequest_p.h"

namespace QtAws {
namespace LakeFormation {

/*!
 * \class QtAws::LakeFormation::ListPermissionsRequest
 * \brief The ListPermissionsRequest class provides an interface for LakeFormation ListPermissions requests.
 *
 * \inmodule QtAwsLakeFormation
 *
 *  <fullname>Lake Formation</fullname>
 * 
 *  Defines the public endpoint for the Lake Formation
 *
 * \sa LakeFormationClient::listPermissions
 */

/*!
 * Constructs a copy of \a other.
 */
ListPermissionsRequest::ListPermissionsRequest(const ListPermissionsRequest &other)
    : LakeFormationRequest(new ListPermissionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListPermissionsRequest object.
 */
ListPermissionsRequest::ListPermissionsRequest()
    : LakeFormationRequest(new ListPermissionsRequestPrivate(LakeFormationRequest::ListPermissionsAction, this))
{

}

/*!
 * \reimp
 */
bool ListPermissionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListPermissionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListPermissionsRequest::response(QNetworkReply * const reply) const
{
    return new ListPermissionsResponse(*this, reply);
}

/*!
 * \class QtAws::LakeFormation::ListPermissionsRequestPrivate
 * \brief The ListPermissionsRequestPrivate class provides private implementation for ListPermissionsRequest.
 * \internal
 *
 * \inmodule QtAwsLakeFormation
 */

/*!
 * Constructs a ListPermissionsRequestPrivate object for LakeFormation \a action,
 * with public implementation \a q.
 */
ListPermissionsRequestPrivate::ListPermissionsRequestPrivate(
    const LakeFormationRequest::Action action, ListPermissionsRequest * const q)
    : LakeFormationRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListPermissionsRequest
 * class' copy constructor.
 */
ListPermissionsRequestPrivate::ListPermissionsRequestPrivate(
    const ListPermissionsRequestPrivate &other, ListPermissionsRequest * const q)
    : LakeFormationRequestPrivate(other, q)
{

}

} // namespace LakeFormation
} // namespace QtAws
