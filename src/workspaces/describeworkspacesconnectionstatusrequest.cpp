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

#include "describeworkspacesconnectionstatusrequest.h"
#include "describeworkspacesconnectionstatusrequest_p.h"
#include "describeworkspacesconnectionstatusresponse.h"
#include "workspacesrequest_p.h"

namespace QtAws {
namespace WorkSpaces {

/*!
 * \class QtAws::WorkSpaces::DescribeWorkspacesConnectionStatusRequest
 * \brief The DescribeWorkspacesConnectionStatusRequest class provides an interface for WorkSpaces DescribeWorkspacesConnectionStatus requests.
 *
 * \inmodule QtAwsWorkSpaces
 *
 *  <fullname>Amazon WorkSpaces Service</fullname>
 * 
 *  Amazon WorkSpaces enables you to provision virtual, cloud-based Microsoft Windows desktops for your
 *
 * \sa WorkSpacesClient::describeWorkspacesConnectionStatus
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeWorkspacesConnectionStatusRequest::DescribeWorkspacesConnectionStatusRequest(const DescribeWorkspacesConnectionStatusRequest &other)
    : WorkSpacesRequest(new DescribeWorkspacesConnectionStatusRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeWorkspacesConnectionStatusRequest object.
 */
DescribeWorkspacesConnectionStatusRequest::DescribeWorkspacesConnectionStatusRequest()
    : WorkSpacesRequest(new DescribeWorkspacesConnectionStatusRequestPrivate(WorkSpacesRequest::DescribeWorkspacesConnectionStatusAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeWorkspacesConnectionStatusRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeWorkspacesConnectionStatusResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeWorkspacesConnectionStatusRequest::response(QNetworkReply * const reply) const
{
    return new DescribeWorkspacesConnectionStatusResponse(*this, reply);
}

/*!
 * \class QtAws::WorkSpaces::DescribeWorkspacesConnectionStatusRequestPrivate
 * \brief The DescribeWorkspacesConnectionStatusRequestPrivate class provides private implementation for DescribeWorkspacesConnectionStatusRequest.
 * \internal
 *
 * \inmodule QtAwsWorkSpaces
 */

/*!
 *
 * Constructs a DescribeWorkspacesConnectionStatusRequestPrivate object for WorkSpaces \a action with,
 * public implementation \a q.
 */
DescribeWorkspacesConnectionStatusRequestPrivate::DescribeWorkspacesConnectionStatusRequestPrivate(
    const WorkSpacesRequest::Action action, DescribeWorkspacesConnectionStatusRequest * const q)
    : WorkSpacesRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeWorkspacesConnectionStatusRequest
 * class' copy constructor.
 */
DescribeWorkspacesConnectionStatusRequestPrivate::DescribeWorkspacesConnectionStatusRequestPrivate(
    const DescribeWorkspacesConnectionStatusRequestPrivate &other, DescribeWorkspacesConnectionStatusRequest * const q)
    : WorkSpacesRequestPrivate(other, q)
{

}

} // namespace WorkSpaces
} // namespace QtAws
