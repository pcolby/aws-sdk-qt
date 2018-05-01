/*
    Copyright 2013-2018 Paul Colby

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

#include "deleteipgrouprequest.h"
#include "deleteipgrouprequest_p.h"
#include "deleteipgroupresponse.h"
#include "workspacesrequest_p.h"

namespace QtAws {
namespace WorkSpaces {

/*!
 * \class QtAws::WorkSpaces::DeleteIpGroupRequest
 * \brief The DeleteIpGroupRequest class provides an interface for WorkSpaces DeleteIpGroup requests.
 *
 * \inmodule QtAwsWorkSpaces
 *
 *  <fullname>Amazon WorkSpaces Service</fullname>
 * 
 *  Amazon WorkSpaces enables you to provision virtual, cloud-based Microsoft Windows desktops for your
 *
 * \sa WorkSpacesClient::deleteIpGroup
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteIpGroupRequest::DeleteIpGroupRequest(const DeleteIpGroupRequest &other)
    : WorkSpacesRequest(new DeleteIpGroupRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteIpGroupRequest object.
 */
DeleteIpGroupRequest::DeleteIpGroupRequest()
    : WorkSpacesRequest(new DeleteIpGroupRequestPrivate(WorkSpacesRequest::DeleteIpGroupAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteIpGroupRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteIpGroupResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteIpGroupRequest::response(QNetworkReply * const reply) const
{
    return new DeleteIpGroupResponse(*this, reply);
}

/*!
 * \class QtAws::WorkSpaces::DeleteIpGroupRequestPrivate
 * \brief The DeleteIpGroupRequestPrivate class provides private implementation for DeleteIpGroupRequest.
 * \internal
 *
 * \inmodule QtAwsWorkSpaces
 */

/*!
 * Constructs a DeleteIpGroupRequestPrivate object for WorkSpaces \a action,
 * with public implementation \a q.
 */
DeleteIpGroupRequestPrivate::DeleteIpGroupRequestPrivate(
    const WorkSpacesRequest::Action action, DeleteIpGroupRequest * const q)
    : WorkSpacesRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteIpGroupRequest
 * class' copy constructor.
 */
DeleteIpGroupRequestPrivate::DeleteIpGroupRequestPrivate(
    const DeleteIpGroupRequestPrivate &other, DeleteIpGroupRequest * const q)
    : WorkSpacesRequestPrivate(other, q)
{

}

} // namespace WorkSpaces
} // namespace QtAws
