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

#include "getstudiomemberrequest.h"
#include "getstudiomemberrequest_p.h"
#include "getstudiomemberresponse.h"
#include "nimblestudiorequest_p.h"

namespace QtAws {
namespace NimbleStudio {

/*!
 * \class QtAws::NimbleStudio::GetStudioMemberRequest
 * \brief The GetStudioMemberRequest class provides an interface for NimbleStudio GetStudioMember requests.
 *
 * \inmodule QtAwsNimbleStudio
 *
 *
 * \sa NimbleStudioClient::getStudioMember
 */

/*!
 * Constructs a copy of \a other.
 */
GetStudioMemberRequest::GetStudioMemberRequest(const GetStudioMemberRequest &other)
    : NimbleStudioRequest(new GetStudioMemberRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetStudioMemberRequest object.
 */
GetStudioMemberRequest::GetStudioMemberRequest()
    : NimbleStudioRequest(new GetStudioMemberRequestPrivate(NimbleStudioRequest::GetStudioMemberAction, this))
{

}

/*!
 * \reimp
 */
bool GetStudioMemberRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetStudioMemberResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetStudioMemberRequest::response(QNetworkReply * const reply) const
{
    return new GetStudioMemberResponse(*this, reply);
}

/*!
 * \class QtAws::NimbleStudio::GetStudioMemberRequestPrivate
 * \brief The GetStudioMemberRequestPrivate class provides private implementation for GetStudioMemberRequest.
 * \internal
 *
 * \inmodule QtAwsNimbleStudio
 */

/*!
 * Constructs a GetStudioMemberRequestPrivate object for NimbleStudio \a action,
 * with public implementation \a q.
 */
GetStudioMemberRequestPrivate::GetStudioMemberRequestPrivate(
    const NimbleStudioRequest::Action action, GetStudioMemberRequest * const q)
    : NimbleStudioRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetStudioMemberRequest
 * class' copy constructor.
 */
GetStudioMemberRequestPrivate::GetStudioMemberRequestPrivate(
    const GetStudioMemberRequestPrivate &other, GetStudioMemberRequest * const q)
    : NimbleStudioRequestPrivate(other, q)
{

}

} // namespace NimbleStudio
} // namespace QtAws
