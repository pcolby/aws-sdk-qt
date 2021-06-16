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

#include "deletestudiomemberrequest.h"
#include "deletestudiomemberrequest_p.h"
#include "deletestudiomemberresponse.h"
#include "nimblestudiorequest_p.h"

namespace QtAws {
namespace NimbleStudio {

/*!
 * \class QtAws::NimbleStudio::DeleteStudioMemberRequest
 * \brief The DeleteStudioMemberRequest class provides an interface for NimbleStudio DeleteStudioMember requests.
 *
 * \inmodule QtAwsNimbleStudio
 *
 *
 * \sa NimbleStudioClient::deleteStudioMember
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteStudioMemberRequest::DeleteStudioMemberRequest(const DeleteStudioMemberRequest &other)
    : NimbleStudioRequest(new DeleteStudioMemberRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteStudioMemberRequest object.
 */
DeleteStudioMemberRequest::DeleteStudioMemberRequest()
    : NimbleStudioRequest(new DeleteStudioMemberRequestPrivate(NimbleStudioRequest::DeleteStudioMemberAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteStudioMemberRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteStudioMemberResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteStudioMemberRequest::response(QNetworkReply * const reply) const
{
    return new DeleteStudioMemberResponse(*this, reply);
}

/*!
 * \class QtAws::NimbleStudio::DeleteStudioMemberRequestPrivate
 * \brief The DeleteStudioMemberRequestPrivate class provides private implementation for DeleteStudioMemberRequest.
 * \internal
 *
 * \inmodule QtAwsNimbleStudio
 */

/*!
 * Constructs a DeleteStudioMemberRequestPrivate object for NimbleStudio \a action,
 * with public implementation \a q.
 */
DeleteStudioMemberRequestPrivate::DeleteStudioMemberRequestPrivate(
    const NimbleStudioRequest::Action action, DeleteStudioMemberRequest * const q)
    : NimbleStudioRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteStudioMemberRequest
 * class' copy constructor.
 */
DeleteStudioMemberRequestPrivate::DeleteStudioMemberRequestPrivate(
    const DeleteStudioMemberRequestPrivate &other, DeleteStudioMemberRequest * const q)
    : NimbleStudioRequestPrivate(other, q)
{

}

} // namespace NimbleStudio
} // namespace QtAws
