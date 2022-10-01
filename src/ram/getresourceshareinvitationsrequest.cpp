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

#include "getresourceshareinvitationsrequest.h"
#include "getresourceshareinvitationsrequest_p.h"
#include "getresourceshareinvitationsresponse.h"
#include "ramrequest_p.h"

namespace QtAws {
namespace Ram {

/*!
 * \class QtAws::Ram::GetResourceShareInvitationsRequest
 * \brief The GetResourceShareInvitationsRequest class provides an interface for Ram GetResourceShareInvitations requests.
 *
 * \inmodule QtAwsRam
 *
 *  This is the <i>Resource Access Manager API Reference</i>. This documentation provides descriptions and syntax for each
 *  of the actions and data types in RAM. RAM is a service that helps you securely share your Amazon Web Services resources
 *  across Amazon Web Services accounts. If you have multiple Amazon Web Services accounts, you can use RAM to share those
 *  resources with other accounts. If you use Organizations to manage your accounts, then you share your resources with your
 *  organization or organizational units (OUs). For supported resource types, you can also share resources with individual
 *  Identity and Access Management (IAM) roles an users.
 * 
 *  </p
 * 
 *  To learn more about RAM, see the following
 * 
 *  resources> <ul> <li>
 * 
 *  <a href="http://aws.amazon.com/ram">Resource Access Manager product page</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/ram/latest/userguide/">Resource Access Manager User Guide</a>
 *
 * \sa RamClient::getResourceShareInvitations
 */

/*!
 * Constructs a copy of \a other.
 */
GetResourceShareInvitationsRequest::GetResourceShareInvitationsRequest(const GetResourceShareInvitationsRequest &other)
    : RamRequest(new GetResourceShareInvitationsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetResourceShareInvitationsRequest object.
 */
GetResourceShareInvitationsRequest::GetResourceShareInvitationsRequest()
    : RamRequest(new GetResourceShareInvitationsRequestPrivate(RamRequest::GetResourceShareInvitationsAction, this))
{

}

/*!
 * \reimp
 */
bool GetResourceShareInvitationsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetResourceShareInvitationsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetResourceShareInvitationsRequest::response(QNetworkReply * const reply) const
{
    return new GetResourceShareInvitationsResponse(*this, reply);
}

/*!
 * \class QtAws::Ram::GetResourceShareInvitationsRequestPrivate
 * \brief The GetResourceShareInvitationsRequestPrivate class provides private implementation for GetResourceShareInvitationsRequest.
 * \internal
 *
 * \inmodule QtAwsRam
 */

/*!
 * Constructs a GetResourceShareInvitationsRequestPrivate object for Ram \a action,
 * with public implementation \a q.
 */
GetResourceShareInvitationsRequestPrivate::GetResourceShareInvitationsRequestPrivate(
    const RamRequest::Action action, GetResourceShareInvitationsRequest * const q)
    : RamRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetResourceShareInvitationsRequest
 * class' copy constructor.
 */
GetResourceShareInvitationsRequestPrivate::GetResourceShareInvitationsRequestPrivate(
    const GetResourceShareInvitationsRequestPrivate &other, GetResourceShareInvitationsRequest * const q)
    : RamRequestPrivate(other, q)
{

}

} // namespace Ram
} // namespace QtAws
