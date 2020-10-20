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

#include "createipgrouprequest.h"
#include "createipgrouprequest_p.h"
#include "createipgroupresponse.h"
#include "workspacesrequest_p.h"

namespace QtAws {
namespace WorkSpaces {

/*!
 * \class QtAws::WorkSpaces::CreateIpGroupRequest
 * \brief The CreateIpGroupRequest class provides an interface for WorkSpaces CreateIpGroup requests.
 *
 * \inmodule QtAwsWorkSpaces
 *
 *  <fullname>Amazon WorkSpaces Service</fullname>
 * 
 *  Amazon WorkSpaces enables you to provision virtual, cloud-based Microsoft Windows and Amazon Linux desktops for your
 *
 * \sa WorkSpacesClient::createIpGroup
 */

/*!
 * Constructs a copy of \a other.
 */
CreateIpGroupRequest::CreateIpGroupRequest(const CreateIpGroupRequest &other)
    : WorkSpacesRequest(new CreateIpGroupRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateIpGroupRequest object.
 */
CreateIpGroupRequest::CreateIpGroupRequest()
    : WorkSpacesRequest(new CreateIpGroupRequestPrivate(WorkSpacesRequest::CreateIpGroupAction, this))
{

}

/*!
 * \reimp
 */
bool CreateIpGroupRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateIpGroupResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateIpGroupRequest::response(QNetworkReply * const reply) const
{
    return new CreateIpGroupResponse(*this, reply);
}

/*!
 * \class QtAws::WorkSpaces::CreateIpGroupRequestPrivate
 * \brief The CreateIpGroupRequestPrivate class provides private implementation for CreateIpGroupRequest.
 * \internal
 *
 * \inmodule QtAwsWorkSpaces
 */

/*!
 * Constructs a CreateIpGroupRequestPrivate object for WorkSpaces \a action,
 * with public implementation \a q.
 */
CreateIpGroupRequestPrivate::CreateIpGroupRequestPrivate(
    const WorkSpacesRequest::Action action, CreateIpGroupRequest * const q)
    : WorkSpacesRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateIpGroupRequest
 * class' copy constructor.
 */
CreateIpGroupRequestPrivate::CreateIpGroupRequestPrivate(
    const CreateIpGroupRequestPrivate &other, CreateIpGroupRequest * const q)
    : WorkSpacesRequestPrivate(other, q)
{

}

} // namespace WorkSpaces
} // namespace QtAws
