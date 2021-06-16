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

#include "getstudiorequest.h"
#include "getstudiorequest_p.h"
#include "getstudioresponse.h"
#include "nimblestudiorequest_p.h"

namespace QtAws {
namespace NimbleStudio {

/*!
 * \class QtAws::NimbleStudio::GetStudioRequest
 * \brief The GetStudioRequest class provides an interface for NimbleStudio GetStudio requests.
 *
 * \inmodule QtAwsNimbleStudio
 *
 *
 * \sa NimbleStudioClient::getStudio
 */

/*!
 * Constructs a copy of \a other.
 */
GetStudioRequest::GetStudioRequest(const GetStudioRequest &other)
    : NimbleStudioRequest(new GetStudioRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetStudioRequest object.
 */
GetStudioRequest::GetStudioRequest()
    : NimbleStudioRequest(new GetStudioRequestPrivate(NimbleStudioRequest::GetStudioAction, this))
{

}

/*!
 * \reimp
 */
bool GetStudioRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetStudioResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetStudioRequest::response(QNetworkReply * const reply) const
{
    return new GetStudioResponse(*this, reply);
}

/*!
 * \class QtAws::NimbleStudio::GetStudioRequestPrivate
 * \brief The GetStudioRequestPrivate class provides private implementation for GetStudioRequest.
 * \internal
 *
 * \inmodule QtAwsNimbleStudio
 */

/*!
 * Constructs a GetStudioRequestPrivate object for NimbleStudio \a action,
 * with public implementation \a q.
 */
GetStudioRequestPrivate::GetStudioRequestPrivate(
    const NimbleStudioRequest::Action action, GetStudioRequest * const q)
    : NimbleStudioRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetStudioRequest
 * class' copy constructor.
 */
GetStudioRequestPrivate::GetStudioRequestPrivate(
    const GetStudioRequestPrivate &other, GetStudioRequest * const q)
    : NimbleStudioRequestPrivate(other, q)
{

}

} // namespace NimbleStudio
} // namespace QtAws
