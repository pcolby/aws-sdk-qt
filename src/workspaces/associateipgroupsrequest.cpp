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

#include "associateipgroupsrequest.h"
#include "associateipgroupsrequest_p.h"
#include "associateipgroupsresponse.h"
#include "workspacesrequest_p.h"

namespace QtAws {
namespace WorkSpaces {

/*!
 * \class QtAws::WorkSpaces::AssociateIpGroupsRequest
 * \brief The AssociateIpGroupsRequest class provides an interface for WorkSpaces AssociateIpGroups requests.
 *
 * \inmodule QtAwsWorkSpaces
 *
 *  <fullname>Amazon WorkSpaces Service</fullname>
 * 
 *  Amazon WorkSpaces enables you to provision virtual, cloud-based Microsoft Windows and Amazon Linux desktops for your
 *
 * \sa WorkSpacesClient::associateIpGroups
 */

/*!
 * Constructs a copy of \a other.
 */
AssociateIpGroupsRequest::AssociateIpGroupsRequest(const AssociateIpGroupsRequest &other)
    : WorkSpacesRequest(new AssociateIpGroupsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a AssociateIpGroupsRequest object.
 */
AssociateIpGroupsRequest::AssociateIpGroupsRequest()
    : WorkSpacesRequest(new AssociateIpGroupsRequestPrivate(WorkSpacesRequest::AssociateIpGroupsAction, this))
{

}

/*!
 * \reimp
 */
bool AssociateIpGroupsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a AssociateIpGroupsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * AssociateIpGroupsRequest::response(QNetworkReply * const reply) const
{
    return new AssociateIpGroupsResponse(*this, reply);
}

/*!
 * \class QtAws::WorkSpaces::AssociateIpGroupsRequestPrivate
 * \brief The AssociateIpGroupsRequestPrivate class provides private implementation for AssociateIpGroupsRequest.
 * \internal
 *
 * \inmodule QtAwsWorkSpaces
 */

/*!
 * Constructs a AssociateIpGroupsRequestPrivate object for WorkSpaces \a action,
 * with public implementation \a q.
 */
AssociateIpGroupsRequestPrivate::AssociateIpGroupsRequestPrivate(
    const WorkSpacesRequest::Action action, AssociateIpGroupsRequest * const q)
    : WorkSpacesRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the AssociateIpGroupsRequest
 * class' copy constructor.
 */
AssociateIpGroupsRequestPrivate::AssociateIpGroupsRequestPrivate(
    const AssociateIpGroupsRequestPrivate &other, AssociateIpGroupsRequest * const q)
    : WorkSpacesRequestPrivate(other, q)
{

}

} // namespace WorkSpaces
} // namespace QtAws
