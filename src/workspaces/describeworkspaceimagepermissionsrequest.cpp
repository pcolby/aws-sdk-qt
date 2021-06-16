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

#include "describeworkspaceimagepermissionsrequest.h"
#include "describeworkspaceimagepermissionsrequest_p.h"
#include "describeworkspaceimagepermissionsresponse.h"
#include "workspacesrequest_p.h"

namespace QtAws {
namespace WorkSpaces {

/*!
 * \class QtAws::WorkSpaces::DescribeWorkspaceImagePermissionsRequest
 * \brief The DescribeWorkspaceImagePermissionsRequest class provides an interface for WorkSpaces DescribeWorkspaceImagePermissions requests.
 *
 * \inmodule QtAwsWorkSpaces
 *
 *  <fullname>Amazon WorkSpaces Service</fullname>
 * 
 *  Amazon WorkSpaces enables you to provision virtual, cloud-based Microsoft Windows and Amazon Linux desktops for your
 *
 * \sa WorkSpacesClient::describeWorkspaceImagePermissions
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeWorkspaceImagePermissionsRequest::DescribeWorkspaceImagePermissionsRequest(const DescribeWorkspaceImagePermissionsRequest &other)
    : WorkSpacesRequest(new DescribeWorkspaceImagePermissionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeWorkspaceImagePermissionsRequest object.
 */
DescribeWorkspaceImagePermissionsRequest::DescribeWorkspaceImagePermissionsRequest()
    : WorkSpacesRequest(new DescribeWorkspaceImagePermissionsRequestPrivate(WorkSpacesRequest::DescribeWorkspaceImagePermissionsAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeWorkspaceImagePermissionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeWorkspaceImagePermissionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeWorkspaceImagePermissionsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeWorkspaceImagePermissionsResponse(*this, reply);
}

/*!
 * \class QtAws::WorkSpaces::DescribeWorkspaceImagePermissionsRequestPrivate
 * \brief The DescribeWorkspaceImagePermissionsRequestPrivate class provides private implementation for DescribeWorkspaceImagePermissionsRequest.
 * \internal
 *
 * \inmodule QtAwsWorkSpaces
 */

/*!
 * Constructs a DescribeWorkspaceImagePermissionsRequestPrivate object for WorkSpaces \a action,
 * with public implementation \a q.
 */
DescribeWorkspaceImagePermissionsRequestPrivate::DescribeWorkspaceImagePermissionsRequestPrivate(
    const WorkSpacesRequest::Action action, DescribeWorkspaceImagePermissionsRequest * const q)
    : WorkSpacesRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeWorkspaceImagePermissionsRequest
 * class' copy constructor.
 */
DescribeWorkspaceImagePermissionsRequestPrivate::DescribeWorkspaceImagePermissionsRequestPrivate(
    const DescribeWorkspaceImagePermissionsRequestPrivate &other, DescribeWorkspaceImagePermissionsRequest * const q)
    : WorkSpacesRequestPrivate(other, q)
{

}

} // namespace WorkSpaces
} // namespace QtAws
