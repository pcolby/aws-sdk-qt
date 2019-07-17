/*
    Copyright 2013-2019 Paul Colby

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

#include "rebootworkspacesrequest.h"
#include "rebootworkspacesrequest_p.h"
#include "rebootworkspacesresponse.h"
#include "workspacesrequest_p.h"

namespace QtAws {
namespace WorkSpaces {

/*!
 * \class QtAws::WorkSpaces::RebootWorkspacesRequest
 * \brief The RebootWorkspacesRequest class provides an interface for WorkSpaces RebootWorkspaces requests.
 *
 * \inmodule QtAwsWorkSpaces
 *
 *  <fullname>Amazon WorkSpaces Service</fullname>
 * 
 *  Amazon WorkSpaces enables you to provision virtual, cloud-based Microsoft Windows and Amazon Linux desktops for your
 *
 * \sa WorkSpacesClient::rebootWorkspaces
 */

/*!
 * Constructs a copy of \a other.
 */
RebootWorkspacesRequest::RebootWorkspacesRequest(const RebootWorkspacesRequest &other)
    : WorkSpacesRequest(new RebootWorkspacesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a RebootWorkspacesRequest object.
 */
RebootWorkspacesRequest::RebootWorkspacesRequest()
    : WorkSpacesRequest(new RebootWorkspacesRequestPrivate(WorkSpacesRequest::RebootWorkspacesAction, this))
{

}

/*!
 * \reimp
 */
bool RebootWorkspacesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a RebootWorkspacesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * RebootWorkspacesRequest::response(QNetworkReply * const reply) const
{
    return new RebootWorkspacesResponse(*this, reply);
}

/*!
 * \class QtAws::WorkSpaces::RebootWorkspacesRequestPrivate
 * \brief The RebootWorkspacesRequestPrivate class provides private implementation for RebootWorkspacesRequest.
 * \internal
 *
 * \inmodule QtAwsWorkSpaces
 */

/*!
 * Constructs a RebootWorkspacesRequestPrivate object for WorkSpaces \a action,
 * with public implementation \a q.
 */
RebootWorkspacesRequestPrivate::RebootWorkspacesRequestPrivate(
    const WorkSpacesRequest::Action action, RebootWorkspacesRequest * const q)
    : WorkSpacesRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the RebootWorkspacesRequest
 * class' copy constructor.
 */
RebootWorkspacesRequestPrivate::RebootWorkspacesRequestPrivate(
    const RebootWorkspacesRequestPrivate &other, RebootWorkspacesRequest * const q)
    : WorkSpacesRequestPrivate(other, q)
{

}

} // namespace WorkSpaces
} // namespace QtAws
