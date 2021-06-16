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
namespace RAM {

/*!
 * \class QtAws::RAM::GetResourceShareInvitationsRequest
 * \brief The GetResourceShareInvitationsRequest class provides an interface for RAM GetResourceShareInvitations requests.
 *
 * \inmodule QtAwsRAM
 *
 *  Use AWS Resource Access Manager to share AWS resources between AWS accounts. To share a resource, you create a resource
 *  share, associate the resource with the resource share, and specify the principals that can access the resources
 *  associated with the resource share. The following principals are supported: AWS accounts, organizational units (OU) from
 *  AWS Organizations, and organizations from AWS
 * 
 *  Organizations>
 * 
 *  For more information, see the <a href="https://docs.aws.amazon.com/ram/latest/userguide/">AWS Resource Access Manager
 *  User
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
 * \class QtAws::RAM::GetResourceShareInvitationsRequestPrivate
 * \brief The GetResourceShareInvitationsRequestPrivate class provides private implementation for GetResourceShareInvitationsRequest.
 * \internal
 *
 * \inmodule QtAwsRAM
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

} // namespace RAM
} // namespace QtAws
