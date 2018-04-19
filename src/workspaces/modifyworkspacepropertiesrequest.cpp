/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "modifyworkspacepropertiesrequest.h"
#include "modifyworkspacepropertiesrequest_p.h"
#include "modifyworkspacepropertiesresponse.h"
#include "workspacesrequest_p.h"

namespace QtAws {
namespace WorkSpaces {

/*!
 * \class QtAws::WorkSpaces::ModifyWorkspacePropertiesRequest
 * \brief The ModifyWorkspacePropertiesRequest class provides an interface for WorkSpaces ModifyWorkspaceProperties requests.
 *
 * \inmodule QtAwsWorkSpaces
 *
 *  <fullname>Amazon WorkSpaces Service</fullname>
 * 
 *  Amazon WorkSpaces enables you to provision virtual, cloud-based Microsoft Windows desktops for your
 *
 * \sa WorkSpacesClient::modifyWorkspaceProperties
 */

/*!
 * Constructs a copy of \a other.
 */
ModifyWorkspacePropertiesRequest::ModifyWorkspacePropertiesRequest(const ModifyWorkspacePropertiesRequest &other)
    : WorkSpacesRequest(new ModifyWorkspacePropertiesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ModifyWorkspacePropertiesRequest object.
 */
ModifyWorkspacePropertiesRequest::ModifyWorkspacePropertiesRequest()
    : WorkSpacesRequest(new ModifyWorkspacePropertiesRequestPrivate(WorkSpacesRequest::ModifyWorkspacePropertiesAction, this))
{

}

/*!
 * \reimp
 */
bool ModifyWorkspacePropertiesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ModifyWorkspacePropertiesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ModifyWorkspacePropertiesRequest::response(QNetworkReply * const reply) const
{
    return new ModifyWorkspacePropertiesResponse(*this, reply);
}

/*!
 * \class QtAws::WorkSpaces::ModifyWorkspacePropertiesRequestPrivate
 * \brief The ModifyWorkspacePropertiesRequestPrivate class provides private implementation for ModifyWorkspacePropertiesRequest.
 * \internal
 *
 * \inmodule QtAwsWorkSpaces
 */

/*!
 *
 * Constructs a ModifyWorkspacePropertiesRequestPrivate object for WorkSpaces \a action with,
 * public implementation \a q.
 */
ModifyWorkspacePropertiesRequestPrivate::ModifyWorkspacePropertiesRequestPrivate(
    const WorkSpacesRequest::Action action, ModifyWorkspacePropertiesRequest * const q)
    : WorkSpacesRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ModifyWorkspacePropertiesRequest
 * class' copy constructor.
 */
ModifyWorkspacePropertiesRequestPrivate::ModifyWorkspacePropertiesRequestPrivate(
    const ModifyWorkspacePropertiesRequestPrivate &other, ModifyWorkspacePropertiesRequest * const q)
    : WorkSpacesRequestPrivate(other, q)
{

}

} // namespace WorkSpaces
} // namespace QtAws
