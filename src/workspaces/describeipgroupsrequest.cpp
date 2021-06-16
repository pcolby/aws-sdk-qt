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

#include "describeipgroupsrequest.h"
#include "describeipgroupsrequest_p.h"
#include "describeipgroupsresponse.h"
#include "workspacesrequest_p.h"

namespace QtAws {
namespace WorkSpaces {

/*!
 * \class QtAws::WorkSpaces::DescribeIpGroupsRequest
 * \brief The DescribeIpGroupsRequest class provides an interface for WorkSpaces DescribeIpGroups requests.
 *
 * \inmodule QtAwsWorkSpaces
 *
 *  <fullname>Amazon WorkSpaces Service</fullname>
 * 
 *  Amazon WorkSpaces enables you to provision virtual, cloud-based Microsoft Windows and Amazon Linux desktops for your
 *
 * \sa WorkSpacesClient::describeIpGroups
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeIpGroupsRequest::DescribeIpGroupsRequest(const DescribeIpGroupsRequest &other)
    : WorkSpacesRequest(new DescribeIpGroupsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeIpGroupsRequest object.
 */
DescribeIpGroupsRequest::DescribeIpGroupsRequest()
    : WorkSpacesRequest(new DescribeIpGroupsRequestPrivate(WorkSpacesRequest::DescribeIpGroupsAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeIpGroupsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeIpGroupsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeIpGroupsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeIpGroupsResponse(*this, reply);
}

/*!
 * \class QtAws::WorkSpaces::DescribeIpGroupsRequestPrivate
 * \brief The DescribeIpGroupsRequestPrivate class provides private implementation for DescribeIpGroupsRequest.
 * \internal
 *
 * \inmodule QtAwsWorkSpaces
 */

/*!
 * Constructs a DescribeIpGroupsRequestPrivate object for WorkSpaces \a action,
 * with public implementation \a q.
 */
DescribeIpGroupsRequestPrivate::DescribeIpGroupsRequestPrivate(
    const WorkSpacesRequest::Action action, DescribeIpGroupsRequest * const q)
    : WorkSpacesRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeIpGroupsRequest
 * class' copy constructor.
 */
DescribeIpGroupsRequestPrivate::DescribeIpGroupsRequestPrivate(
    const DescribeIpGroupsRequestPrivate &other, DescribeIpGroupsRequest * const q)
    : WorkSpacesRequestPrivate(other, q)
{

}

} // namespace WorkSpaces
} // namespace QtAws
