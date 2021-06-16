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

#include "migrateworkspacerequest.h"
#include "migrateworkspacerequest_p.h"
#include "migrateworkspaceresponse.h"
#include "workspacesrequest_p.h"

namespace QtAws {
namespace WorkSpaces {

/*!
 * \class QtAws::WorkSpaces::MigrateWorkspaceRequest
 * \brief The MigrateWorkspaceRequest class provides an interface for WorkSpaces MigrateWorkspace requests.
 *
 * \inmodule QtAwsWorkSpaces
 *
 *  <fullname>Amazon WorkSpaces Service</fullname>
 * 
 *  Amazon WorkSpaces enables you to provision virtual, cloud-based Microsoft Windows and Amazon Linux desktops for your
 *
 * \sa WorkSpacesClient::migrateWorkspace
 */

/*!
 * Constructs a copy of \a other.
 */
MigrateWorkspaceRequest::MigrateWorkspaceRequest(const MigrateWorkspaceRequest &other)
    : WorkSpacesRequest(new MigrateWorkspaceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a MigrateWorkspaceRequest object.
 */
MigrateWorkspaceRequest::MigrateWorkspaceRequest()
    : WorkSpacesRequest(new MigrateWorkspaceRequestPrivate(WorkSpacesRequest::MigrateWorkspaceAction, this))
{

}

/*!
 * \reimp
 */
bool MigrateWorkspaceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a MigrateWorkspaceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * MigrateWorkspaceRequest::response(QNetworkReply * const reply) const
{
    return new MigrateWorkspaceResponse(*this, reply);
}

/*!
 * \class QtAws::WorkSpaces::MigrateWorkspaceRequestPrivate
 * \brief The MigrateWorkspaceRequestPrivate class provides private implementation for MigrateWorkspaceRequest.
 * \internal
 *
 * \inmodule QtAwsWorkSpaces
 */

/*!
 * Constructs a MigrateWorkspaceRequestPrivate object for WorkSpaces \a action,
 * with public implementation \a q.
 */
MigrateWorkspaceRequestPrivate::MigrateWorkspaceRequestPrivate(
    const WorkSpacesRequest::Action action, MigrateWorkspaceRequest * const q)
    : WorkSpacesRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the MigrateWorkspaceRequest
 * class' copy constructor.
 */
MigrateWorkspaceRequestPrivate::MigrateWorkspaceRequestPrivate(
    const MigrateWorkspaceRequestPrivate &other, MigrateWorkspaceRequest * const q)
    : WorkSpacesRequestPrivate(other, q)
{

}

} // namespace WorkSpaces
} // namespace QtAws
