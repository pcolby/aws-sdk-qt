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

#include "modifyworkspaceaccesspropertiesrequest.h"
#include "modifyworkspaceaccesspropertiesrequest_p.h"
#include "modifyworkspaceaccesspropertiesresponse.h"
#include "workspacesrequest_p.h"

namespace QtAws {
namespace WorkSpaces {

/*!
 * \class QtAws::WorkSpaces::ModifyWorkspaceAccessPropertiesRequest
 * \brief The ModifyWorkspaceAccessPropertiesRequest class provides an interface for WorkSpaces ModifyWorkspaceAccessProperties requests.
 *
 * \inmodule QtAwsWorkSpaces
 *
 *  <fullname>Amazon WorkSpaces Service</fullname>
 * 
 *  Amazon WorkSpaces enables you to provision virtual, cloud-based Microsoft Windows and Amazon Linux desktops for your
 *
 * \sa WorkSpacesClient::modifyWorkspaceAccessProperties
 */

/*!
 * Constructs a copy of \a other.
 */
ModifyWorkspaceAccessPropertiesRequest::ModifyWorkspaceAccessPropertiesRequest(const ModifyWorkspaceAccessPropertiesRequest &other)
    : WorkSpacesRequest(new ModifyWorkspaceAccessPropertiesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ModifyWorkspaceAccessPropertiesRequest object.
 */
ModifyWorkspaceAccessPropertiesRequest::ModifyWorkspaceAccessPropertiesRequest()
    : WorkSpacesRequest(new ModifyWorkspaceAccessPropertiesRequestPrivate(WorkSpacesRequest::ModifyWorkspaceAccessPropertiesAction, this))
{

}

/*!
 * \reimp
 */
bool ModifyWorkspaceAccessPropertiesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ModifyWorkspaceAccessPropertiesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ModifyWorkspaceAccessPropertiesRequest::response(QNetworkReply * const reply) const
{
    return new ModifyWorkspaceAccessPropertiesResponse(*this, reply);
}

/*!
 * \class QtAws::WorkSpaces::ModifyWorkspaceAccessPropertiesRequestPrivate
 * \brief The ModifyWorkspaceAccessPropertiesRequestPrivate class provides private implementation for ModifyWorkspaceAccessPropertiesRequest.
 * \internal
 *
 * \inmodule QtAwsWorkSpaces
 */

/*!
 * Constructs a ModifyWorkspaceAccessPropertiesRequestPrivate object for WorkSpaces \a action,
 * with public implementation \a q.
 */
ModifyWorkspaceAccessPropertiesRequestPrivate::ModifyWorkspaceAccessPropertiesRequestPrivate(
    const WorkSpacesRequest::Action action, ModifyWorkspaceAccessPropertiesRequest * const q)
    : WorkSpacesRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ModifyWorkspaceAccessPropertiesRequest
 * class' copy constructor.
 */
ModifyWorkspaceAccessPropertiesRequestPrivate::ModifyWorkspaceAccessPropertiesRequestPrivate(
    const ModifyWorkspaceAccessPropertiesRequestPrivate &other, ModifyWorkspaceAccessPropertiesRequest * const q)
    : WorkSpacesRequestPrivate(other, q)
{

}

} // namespace WorkSpaces
} // namespace QtAws
