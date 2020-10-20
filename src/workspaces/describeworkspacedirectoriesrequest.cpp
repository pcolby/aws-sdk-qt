/*
    Copyright 2013-2020 Paul Colby

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

#include "describeworkspacedirectoriesrequest.h"
#include "describeworkspacedirectoriesrequest_p.h"
#include "describeworkspacedirectoriesresponse.h"
#include "workspacesrequest_p.h"

namespace QtAws {
namespace WorkSpaces {

/*!
 * \class QtAws::WorkSpaces::DescribeWorkspaceDirectoriesRequest
 * \brief The DescribeWorkspaceDirectoriesRequest class provides an interface for WorkSpaces DescribeWorkspaceDirectories requests.
 *
 * \inmodule QtAwsWorkSpaces
 *
 *  <fullname>Amazon WorkSpaces Service</fullname>
 * 
 *  Amazon WorkSpaces enables you to provision virtual, cloud-based Microsoft Windows and Amazon Linux desktops for your
 *
 * \sa WorkSpacesClient::describeWorkspaceDirectories
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeWorkspaceDirectoriesRequest::DescribeWorkspaceDirectoriesRequest(const DescribeWorkspaceDirectoriesRequest &other)
    : WorkSpacesRequest(new DescribeWorkspaceDirectoriesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeWorkspaceDirectoriesRequest object.
 */
DescribeWorkspaceDirectoriesRequest::DescribeWorkspaceDirectoriesRequest()
    : WorkSpacesRequest(new DescribeWorkspaceDirectoriesRequestPrivate(WorkSpacesRequest::DescribeWorkspaceDirectoriesAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeWorkspaceDirectoriesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeWorkspaceDirectoriesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeWorkspaceDirectoriesRequest::response(QNetworkReply * const reply) const
{
    return new DescribeWorkspaceDirectoriesResponse(*this, reply);
}

/*!
 * \class QtAws::WorkSpaces::DescribeWorkspaceDirectoriesRequestPrivate
 * \brief The DescribeWorkspaceDirectoriesRequestPrivate class provides private implementation for DescribeWorkspaceDirectoriesRequest.
 * \internal
 *
 * \inmodule QtAwsWorkSpaces
 */

/*!
 * Constructs a DescribeWorkspaceDirectoriesRequestPrivate object for WorkSpaces \a action,
 * with public implementation \a q.
 */
DescribeWorkspaceDirectoriesRequestPrivate::DescribeWorkspaceDirectoriesRequestPrivate(
    const WorkSpacesRequest::Action action, DescribeWorkspaceDirectoriesRequest * const q)
    : WorkSpacesRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeWorkspaceDirectoriesRequest
 * class' copy constructor.
 */
DescribeWorkspaceDirectoriesRequestPrivate::DescribeWorkspaceDirectoriesRequestPrivate(
    const DescribeWorkspaceDirectoriesRequestPrivate &other, DescribeWorkspaceDirectoriesRequest * const q)
    : WorkSpacesRequestPrivate(other, q)
{

}

} // namespace WorkSpaces
} // namespace QtAws
