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

#include "putstudiomembersrequest.h"
#include "putstudiomembersrequest_p.h"
#include "putstudiomembersresponse.h"
#include "nimblestudiorequest_p.h"

namespace QtAws {
namespace NimbleStudio {

/*!
 * \class QtAws::NimbleStudio::PutStudioMembersRequest
 * \brief The PutStudioMembersRequest class provides an interface for NimbleStudio PutStudioMembers requests.
 *
 * \inmodule QtAwsNimbleStudio
 *
 *
 * \sa NimbleStudioClient::putStudioMembers
 */

/*!
 * Constructs a copy of \a other.
 */
PutStudioMembersRequest::PutStudioMembersRequest(const PutStudioMembersRequest &other)
    : NimbleStudioRequest(new PutStudioMembersRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutStudioMembersRequest object.
 */
PutStudioMembersRequest::PutStudioMembersRequest()
    : NimbleStudioRequest(new PutStudioMembersRequestPrivate(NimbleStudioRequest::PutStudioMembersAction, this))
{

}

/*!
 * \reimp
 */
bool PutStudioMembersRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutStudioMembersResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutStudioMembersRequest::response(QNetworkReply * const reply) const
{
    return new PutStudioMembersResponse(*this, reply);
}

/*!
 * \class QtAws::NimbleStudio::PutStudioMembersRequestPrivate
 * \brief The PutStudioMembersRequestPrivate class provides private implementation for PutStudioMembersRequest.
 * \internal
 *
 * \inmodule QtAwsNimbleStudio
 */

/*!
 * Constructs a PutStudioMembersRequestPrivate object for NimbleStudio \a action,
 * with public implementation \a q.
 */
PutStudioMembersRequestPrivate::PutStudioMembersRequestPrivate(
    const NimbleStudioRequest::Action action, PutStudioMembersRequest * const q)
    : NimbleStudioRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutStudioMembersRequest
 * class' copy constructor.
 */
PutStudioMembersRequestPrivate::PutStudioMembersRequestPrivate(
    const PutStudioMembersRequestPrivate &other, PutStudioMembersRequest * const q)
    : NimbleStudioRequestPrivate(other, q)
{

}

} // namespace NimbleStudio
} // namespace QtAws
