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

#include "getstudiocomponentrequest.h"
#include "getstudiocomponentrequest_p.h"
#include "getstudiocomponentresponse.h"
#include "nimblestudiorequest_p.h"

namespace QtAws {
namespace NimbleStudio {

/*!
 * \class QtAws::NimbleStudio::GetStudioComponentRequest
 * \brief The GetStudioComponentRequest class provides an interface for NimbleStudio GetStudioComponent requests.
 *
 * \inmodule QtAwsNimbleStudio
 *
 *
 * \sa NimbleStudioClient::getStudioComponent
 */

/*!
 * Constructs a copy of \a other.
 */
GetStudioComponentRequest::GetStudioComponentRequest(const GetStudioComponentRequest &other)
    : NimbleStudioRequest(new GetStudioComponentRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetStudioComponentRequest object.
 */
GetStudioComponentRequest::GetStudioComponentRequest()
    : NimbleStudioRequest(new GetStudioComponentRequestPrivate(NimbleStudioRequest::GetStudioComponentAction, this))
{

}

/*!
 * \reimp
 */
bool GetStudioComponentRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetStudioComponentResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetStudioComponentRequest::response(QNetworkReply * const reply) const
{
    return new GetStudioComponentResponse(*this, reply);
}

/*!
 * \class QtAws::NimbleStudio::GetStudioComponentRequestPrivate
 * \brief The GetStudioComponentRequestPrivate class provides private implementation for GetStudioComponentRequest.
 * \internal
 *
 * \inmodule QtAwsNimbleStudio
 */

/*!
 * Constructs a GetStudioComponentRequestPrivate object for NimbleStudio \a action,
 * with public implementation \a q.
 */
GetStudioComponentRequestPrivate::GetStudioComponentRequestPrivate(
    const NimbleStudioRequest::Action action, GetStudioComponentRequest * const q)
    : NimbleStudioRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetStudioComponentRequest
 * class' copy constructor.
 */
GetStudioComponentRequestPrivate::GetStudioComponentRequestPrivate(
    const GetStudioComponentRequestPrivate &other, GetStudioComponentRequest * const q)
    : NimbleStudioRequestPrivate(other, q)
{

}

} // namespace NimbleStudio
} // namespace QtAws
