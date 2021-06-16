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

#include "modifyworkspacecreationpropertiesrequest.h"
#include "modifyworkspacecreationpropertiesrequest_p.h"
#include "modifyworkspacecreationpropertiesresponse.h"
#include "workspacesrequest_p.h"

namespace QtAws {
namespace WorkSpaces {

/*!
 * \class QtAws::WorkSpaces::ModifyWorkspaceCreationPropertiesRequest
 * \brief The ModifyWorkspaceCreationPropertiesRequest class provides an interface for WorkSpaces ModifyWorkspaceCreationProperties requests.
 *
 * \inmodule QtAwsWorkSpaces
 *
 *  <fullname>Amazon WorkSpaces Service</fullname>
 * 
 *  Amazon WorkSpaces enables you to provision virtual, cloud-based Microsoft Windows and Amazon Linux desktops for your
 *
 * \sa WorkSpacesClient::modifyWorkspaceCreationProperties
 */

/*!
 * Constructs a copy of \a other.
 */
ModifyWorkspaceCreationPropertiesRequest::ModifyWorkspaceCreationPropertiesRequest(const ModifyWorkspaceCreationPropertiesRequest &other)
    : WorkSpacesRequest(new ModifyWorkspaceCreationPropertiesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ModifyWorkspaceCreationPropertiesRequest object.
 */
ModifyWorkspaceCreationPropertiesRequest::ModifyWorkspaceCreationPropertiesRequest()
    : WorkSpacesRequest(new ModifyWorkspaceCreationPropertiesRequestPrivate(WorkSpacesRequest::ModifyWorkspaceCreationPropertiesAction, this))
{

}

/*!
 * \reimp
 */
bool ModifyWorkspaceCreationPropertiesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ModifyWorkspaceCreationPropertiesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ModifyWorkspaceCreationPropertiesRequest::response(QNetworkReply * const reply) const
{
    return new ModifyWorkspaceCreationPropertiesResponse(*this, reply);
}

/*!
 * \class QtAws::WorkSpaces::ModifyWorkspaceCreationPropertiesRequestPrivate
 * \brief The ModifyWorkspaceCreationPropertiesRequestPrivate class provides private implementation for ModifyWorkspaceCreationPropertiesRequest.
 * \internal
 *
 * \inmodule QtAwsWorkSpaces
 */

/*!
 * Constructs a ModifyWorkspaceCreationPropertiesRequestPrivate object for WorkSpaces \a action,
 * with public implementation \a q.
 */
ModifyWorkspaceCreationPropertiesRequestPrivate::ModifyWorkspaceCreationPropertiesRequestPrivate(
    const WorkSpacesRequest::Action action, ModifyWorkspaceCreationPropertiesRequest * const q)
    : WorkSpacesRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ModifyWorkspaceCreationPropertiesRequest
 * class' copy constructor.
 */
ModifyWorkspaceCreationPropertiesRequestPrivate::ModifyWorkspaceCreationPropertiesRequestPrivate(
    const ModifyWorkspaceCreationPropertiesRequestPrivate &other, ModifyWorkspaceCreationPropertiesRequest * const q)
    : WorkSpacesRequestPrivate(other, q)
{

}

} // namespace WorkSpaces
} // namespace QtAws
