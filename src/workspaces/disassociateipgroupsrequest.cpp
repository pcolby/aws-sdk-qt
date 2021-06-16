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

#include "disassociateipgroupsrequest.h"
#include "disassociateipgroupsrequest_p.h"
#include "disassociateipgroupsresponse.h"
#include "workspacesrequest_p.h"

namespace QtAws {
namespace WorkSpaces {

/*!
 * \class QtAws::WorkSpaces::DisassociateIpGroupsRequest
 * \brief The DisassociateIpGroupsRequest class provides an interface for WorkSpaces DisassociateIpGroups requests.
 *
 * \inmodule QtAwsWorkSpaces
 *
 *  <fullname>Amazon WorkSpaces Service</fullname>
 * 
 *  Amazon WorkSpaces enables you to provision virtual, cloud-based Microsoft Windows and Amazon Linux desktops for your
 *
 * \sa WorkSpacesClient::disassociateIpGroups
 */

/*!
 * Constructs a copy of \a other.
 */
DisassociateIpGroupsRequest::DisassociateIpGroupsRequest(const DisassociateIpGroupsRequest &other)
    : WorkSpacesRequest(new DisassociateIpGroupsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DisassociateIpGroupsRequest object.
 */
DisassociateIpGroupsRequest::DisassociateIpGroupsRequest()
    : WorkSpacesRequest(new DisassociateIpGroupsRequestPrivate(WorkSpacesRequest::DisassociateIpGroupsAction, this))
{

}

/*!
 * \reimp
 */
bool DisassociateIpGroupsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DisassociateIpGroupsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DisassociateIpGroupsRequest::response(QNetworkReply * const reply) const
{
    return new DisassociateIpGroupsResponse(*this, reply);
}

/*!
 * \class QtAws::WorkSpaces::DisassociateIpGroupsRequestPrivate
 * \brief The DisassociateIpGroupsRequestPrivate class provides private implementation for DisassociateIpGroupsRequest.
 * \internal
 *
 * \inmodule QtAwsWorkSpaces
 */

/*!
 * Constructs a DisassociateIpGroupsRequestPrivate object for WorkSpaces \a action,
 * with public implementation \a q.
 */
DisassociateIpGroupsRequestPrivate::DisassociateIpGroupsRequestPrivate(
    const WorkSpacesRequest::Action action, DisassociateIpGroupsRequest * const q)
    : WorkSpacesRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DisassociateIpGroupsRequest
 * class' copy constructor.
 */
DisassociateIpGroupsRequestPrivate::DisassociateIpGroupsRequestPrivate(
    const DisassociateIpGroupsRequestPrivate &other, DisassociateIpGroupsRequest * const q)
    : WorkSpacesRequestPrivate(other, q)
{

}

} // namespace WorkSpaces
} // namespace QtAws
