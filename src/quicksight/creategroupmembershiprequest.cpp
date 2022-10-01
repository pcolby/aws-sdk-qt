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

#include "creategroupmembershiprequest.h"
#include "creategroupmembershiprequest_p.h"
#include "creategroupmembershipresponse.h"
#include "quicksightrequest_p.h"

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::CreateGroupMembershipRequest
 * \brief The CreateGroupMembershipRequest class provides an interface for QuickSight CreateGroupMembership requests.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::createGroupMembership
 */

/*!
 * Constructs a copy of \a other.
 */
CreateGroupMembershipRequest::CreateGroupMembershipRequest(const CreateGroupMembershipRequest &other)
    : QuickSightRequest(new CreateGroupMembershipRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateGroupMembershipRequest object.
 */
CreateGroupMembershipRequest::CreateGroupMembershipRequest()
    : QuickSightRequest(new CreateGroupMembershipRequestPrivate(QuickSightRequest::CreateGroupMembershipAction, this))
{

}

/*!
 * \reimp
 */
bool CreateGroupMembershipRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateGroupMembershipResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateGroupMembershipRequest::response(QNetworkReply * const reply) const
{
    return new CreateGroupMembershipResponse(*this, reply);
}

/*!
 * \class QtAws::QuickSight::CreateGroupMembershipRequestPrivate
 * \brief The CreateGroupMembershipRequestPrivate class provides private implementation for CreateGroupMembershipRequest.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a CreateGroupMembershipRequestPrivate object for QuickSight \a action,
 * with public implementation \a q.
 */
CreateGroupMembershipRequestPrivate::CreateGroupMembershipRequestPrivate(
    const QuickSightRequest::Action action, CreateGroupMembershipRequest * const q)
    : QuickSightRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateGroupMembershipRequest
 * class' copy constructor.
 */
CreateGroupMembershipRequestPrivate::CreateGroupMembershipRequestPrivate(
    const CreateGroupMembershipRequestPrivate &other, CreateGroupMembershipRequest * const q)
    : QuickSightRequestPrivate(other, q)
{

}

} // namespace QuickSight
} // namespace QtAws
