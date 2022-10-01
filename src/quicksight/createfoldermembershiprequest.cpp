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

#include "createfoldermembershiprequest.h"
#include "createfoldermembershiprequest_p.h"
#include "createfoldermembershipresponse.h"
#include "quicksightrequest_p.h"

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::CreateFolderMembershipRequest
 * \brief The CreateFolderMembershipRequest class provides an interface for QuickSight CreateFolderMembership requests.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::createFolderMembership
 */

/*!
 * Constructs a copy of \a other.
 */
CreateFolderMembershipRequest::CreateFolderMembershipRequest(const CreateFolderMembershipRequest &other)
    : QuickSightRequest(new CreateFolderMembershipRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateFolderMembershipRequest object.
 */
CreateFolderMembershipRequest::CreateFolderMembershipRequest()
    : QuickSightRequest(new CreateFolderMembershipRequestPrivate(QuickSightRequest::CreateFolderMembershipAction, this))
{

}

/*!
 * \reimp
 */
bool CreateFolderMembershipRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateFolderMembershipResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateFolderMembershipRequest::response(QNetworkReply * const reply) const
{
    return new CreateFolderMembershipResponse(*this, reply);
}

/*!
 * \class QtAws::QuickSight::CreateFolderMembershipRequestPrivate
 * \brief The CreateFolderMembershipRequestPrivate class provides private implementation for CreateFolderMembershipRequest.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a CreateFolderMembershipRequestPrivate object for QuickSight \a action,
 * with public implementation \a q.
 */
CreateFolderMembershipRequestPrivate::CreateFolderMembershipRequestPrivate(
    const QuickSightRequest::Action action, CreateFolderMembershipRequest * const q)
    : QuickSightRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateFolderMembershipRequest
 * class' copy constructor.
 */
CreateFolderMembershipRequestPrivate::CreateFolderMembershipRequestPrivate(
    const CreateFolderMembershipRequestPrivate &other, CreateFolderMembershipRequest * const q)
    : QuickSightRequestPrivate(other, q)
{

}

} // namespace QuickSight
} // namespace QtAws
