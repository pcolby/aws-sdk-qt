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

#include "modifyselfservicepermissionsrequest.h"
#include "modifyselfservicepermissionsrequest_p.h"
#include "modifyselfservicepermissionsresponse.h"
#include "workspacesrequest_p.h"

namespace QtAws {
namespace WorkSpaces {

/*!
 * \class QtAws::WorkSpaces::ModifySelfservicePermissionsRequest
 * \brief The ModifySelfservicePermissionsRequest class provides an interface for WorkSpaces ModifySelfservicePermissions requests.
 *
 * \inmodule QtAwsWorkSpaces
 *
 *  <fullname>Amazon WorkSpaces Service</fullname>
 * 
 *  Amazon WorkSpaces enables you to provision virtual, cloud-based Microsoft Windows and Amazon Linux desktops for your
 *
 * \sa WorkSpacesClient::modifySelfservicePermissions
 */

/*!
 * Constructs a copy of \a other.
 */
ModifySelfservicePermissionsRequest::ModifySelfservicePermissionsRequest(const ModifySelfservicePermissionsRequest &other)
    : WorkSpacesRequest(new ModifySelfservicePermissionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ModifySelfservicePermissionsRequest object.
 */
ModifySelfservicePermissionsRequest::ModifySelfservicePermissionsRequest()
    : WorkSpacesRequest(new ModifySelfservicePermissionsRequestPrivate(WorkSpacesRequest::ModifySelfservicePermissionsAction, this))
{

}

/*!
 * \reimp
 */
bool ModifySelfservicePermissionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ModifySelfservicePermissionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ModifySelfservicePermissionsRequest::response(QNetworkReply * const reply) const
{
    return new ModifySelfservicePermissionsResponse(*this, reply);
}

/*!
 * \class QtAws::WorkSpaces::ModifySelfservicePermissionsRequestPrivate
 * \brief The ModifySelfservicePermissionsRequestPrivate class provides private implementation for ModifySelfservicePermissionsRequest.
 * \internal
 *
 * \inmodule QtAwsWorkSpaces
 */

/*!
 * Constructs a ModifySelfservicePermissionsRequestPrivate object for WorkSpaces \a action,
 * with public implementation \a q.
 */
ModifySelfservicePermissionsRequestPrivate::ModifySelfservicePermissionsRequestPrivate(
    const WorkSpacesRequest::Action action, ModifySelfservicePermissionsRequest * const q)
    : WorkSpacesRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ModifySelfservicePermissionsRequest
 * class' copy constructor.
 */
ModifySelfservicePermissionsRequestPrivate::ModifySelfservicePermissionsRequestPrivate(
    const ModifySelfservicePermissionsRequestPrivate &other, ModifySelfservicePermissionsRequest * const q)
    : WorkSpacesRequestPrivate(other, q)
{

}

} // namespace WorkSpaces
} // namespace QtAws
