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

#include "describeworkspacesnapshotsrequest.h"
#include "describeworkspacesnapshotsrequest_p.h"
#include "describeworkspacesnapshotsresponse.h"
#include "workspacesrequest_p.h"

namespace QtAws {
namespace WorkSpaces {

/*!
 * \class QtAws::WorkSpaces::DescribeWorkspaceSnapshotsRequest
 * \brief The DescribeWorkspaceSnapshotsRequest class provides an interface for WorkSpaces DescribeWorkspaceSnapshots requests.
 *
 * \inmodule QtAwsWorkSpaces
 *
 *  <fullname>Amazon WorkSpaces Service</fullname>
 * 
 *  Amazon WorkSpaces enables you to provision virtual, cloud-based Microsoft Windows and Amazon Linux desktops for your
 *
 * \sa WorkSpacesClient::describeWorkspaceSnapshots
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeWorkspaceSnapshotsRequest::DescribeWorkspaceSnapshotsRequest(const DescribeWorkspaceSnapshotsRequest &other)
    : WorkSpacesRequest(new DescribeWorkspaceSnapshotsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeWorkspaceSnapshotsRequest object.
 */
DescribeWorkspaceSnapshotsRequest::DescribeWorkspaceSnapshotsRequest()
    : WorkSpacesRequest(new DescribeWorkspaceSnapshotsRequestPrivate(WorkSpacesRequest::DescribeWorkspaceSnapshotsAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeWorkspaceSnapshotsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeWorkspaceSnapshotsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeWorkspaceSnapshotsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeWorkspaceSnapshotsResponse(*this, reply);
}

/*!
 * \class QtAws::WorkSpaces::DescribeWorkspaceSnapshotsRequestPrivate
 * \brief The DescribeWorkspaceSnapshotsRequestPrivate class provides private implementation for DescribeWorkspaceSnapshotsRequest.
 * \internal
 *
 * \inmodule QtAwsWorkSpaces
 */

/*!
 * Constructs a DescribeWorkspaceSnapshotsRequestPrivate object for WorkSpaces \a action,
 * with public implementation \a q.
 */
DescribeWorkspaceSnapshotsRequestPrivate::DescribeWorkspaceSnapshotsRequestPrivate(
    const WorkSpacesRequest::Action action, DescribeWorkspaceSnapshotsRequest * const q)
    : WorkSpacesRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeWorkspaceSnapshotsRequest
 * class' copy constructor.
 */
DescribeWorkspaceSnapshotsRequestPrivate::DescribeWorkspaceSnapshotsRequestPrivate(
    const DescribeWorkspaceSnapshotsRequestPrivate &other, DescribeWorkspaceSnapshotsRequest * const q)
    : WorkSpacesRequestPrivate(other, q)
{

}

} // namespace WorkSpaces
} // namespace QtAws
