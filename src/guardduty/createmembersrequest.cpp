/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "createmembersrequest.h"
#include "createmembersrequest_p.h"
#include "createmembersresponse.h"
#include "guarddutyrequest_p.h"

namespace QtAws {
namespace GuardDuty {

/*!
 * \class QtAws::GuardDuty::CreateMembersRequest
 * \brief The CreateMembersRequest class provides an interface for GuardDuty CreateMembers requests.
 *
 * \inmodule QtAwsGuardDuty
 *
 *
 * \sa GuardDutyClient::createMembers
 */

/*!
 * Constructs a copy of \a other.
 */
CreateMembersRequest::CreateMembersRequest(const CreateMembersRequest &other)
    : GuardDutyRequest(new CreateMembersRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateMembersRequest object.
 */
CreateMembersRequest::CreateMembersRequest()
    : GuardDutyRequest(new CreateMembersRequestPrivate(GuardDutyRequest::CreateMembersAction, this))
{

}

/*!
 * \reimp
 */
bool CreateMembersRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateMembersResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateMembersRequest::response(QNetworkReply * const reply) const
{
    return new CreateMembersResponse(*this, reply);
}

/*!
 * \class QtAws::GuardDuty::CreateMembersRequestPrivate
 * \brief The CreateMembersRequestPrivate class provides private implementation for CreateMembersRequest.
 * \internal
 *
 * \inmodule QtAwsGuardDuty
 */

/*!
 * Constructs a CreateMembersRequestPrivate object for GuardDuty \a action,
 * with public implementation \a q.
 */
CreateMembersRequestPrivate::CreateMembersRequestPrivate(
    const GuardDutyRequest::Action action, CreateMembersRequest * const q)
    : GuardDutyRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateMembersRequest
 * class' copy constructor.
 */
CreateMembersRequestPrivate::CreateMembersRequestPrivate(
    const CreateMembersRequestPrivate &other, CreateMembersRequest * const q)
    : GuardDutyRequestPrivate(other, q)
{

}

} // namespace GuardDuty
} // namespace QtAws
