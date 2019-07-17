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

#include "describeworkspacesrequest.h"
#include "describeworkspacesrequest_p.h"
#include "describeworkspacesresponse.h"
#include "workspacesrequest_p.h"

namespace QtAws {
namespace WorkSpaces {

/*!
 * \class QtAws::WorkSpaces::DescribeWorkspacesRequest
 * \brief The DescribeWorkspacesRequest class provides an interface for WorkSpaces DescribeWorkspaces requests.
 *
 * \inmodule QtAwsWorkSpaces
 *
 *  <fullname>Amazon WorkSpaces Service</fullname>
 * 
 *  Amazon WorkSpaces enables you to provision virtual, cloud-based Microsoft Windows and Amazon Linux desktops for your
 *
 * \sa WorkSpacesClient::describeWorkspaces
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeWorkspacesRequest::DescribeWorkspacesRequest(const DescribeWorkspacesRequest &other)
    : WorkSpacesRequest(new DescribeWorkspacesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeWorkspacesRequest object.
 */
DescribeWorkspacesRequest::DescribeWorkspacesRequest()
    : WorkSpacesRequest(new DescribeWorkspacesRequestPrivate(WorkSpacesRequest::DescribeWorkspacesAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeWorkspacesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeWorkspacesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeWorkspacesRequest::response(QNetworkReply * const reply) const
{
    return new DescribeWorkspacesResponse(*this, reply);
}

/*!
 * \class QtAws::WorkSpaces::DescribeWorkspacesRequestPrivate
 * \brief The DescribeWorkspacesRequestPrivate class provides private implementation for DescribeWorkspacesRequest.
 * \internal
 *
 * \inmodule QtAwsWorkSpaces
 */

/*!
 * Constructs a DescribeWorkspacesRequestPrivate object for WorkSpaces \a action,
 * with public implementation \a q.
 */
DescribeWorkspacesRequestPrivate::DescribeWorkspacesRequestPrivate(
    const WorkSpacesRequest::Action action, DescribeWorkspacesRequest * const q)
    : WorkSpacesRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeWorkspacesRequest
 * class' copy constructor.
 */
DescribeWorkspacesRequestPrivate::DescribeWorkspacesRequestPrivate(
    const DescribeWorkspacesRequestPrivate &other, DescribeWorkspacesRequest * const q)
    : WorkSpacesRequestPrivate(other, q)
{

}

} // namespace WorkSpaces
} // namespace QtAws
