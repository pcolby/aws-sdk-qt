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

#include "geteularequest.h"
#include "geteularequest_p.h"
#include "geteularesponse.h"
#include "nimblestudiorequest_p.h"

namespace QtAws {
namespace NimbleStudio {

/*!
 * \class QtAws::NimbleStudio::GetEulaRequest
 * \brief The GetEulaRequest class provides an interface for NimbleStudio GetEula requests.
 *
 * \inmodule QtAwsNimbleStudio
 *
 *
 * \sa NimbleStudioClient::getEula
 */

/*!
 * Constructs a copy of \a other.
 */
GetEulaRequest::GetEulaRequest(const GetEulaRequest &other)
    : NimbleStudioRequest(new GetEulaRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetEulaRequest object.
 */
GetEulaRequest::GetEulaRequest()
    : NimbleStudioRequest(new GetEulaRequestPrivate(NimbleStudioRequest::GetEulaAction, this))
{

}

/*!
 * \reimp
 */
bool GetEulaRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetEulaResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetEulaRequest::response(QNetworkReply * const reply) const
{
    return new GetEulaResponse(*this, reply);
}

/*!
 * \class QtAws::NimbleStudio::GetEulaRequestPrivate
 * \brief The GetEulaRequestPrivate class provides private implementation for GetEulaRequest.
 * \internal
 *
 * \inmodule QtAwsNimbleStudio
 */

/*!
 * Constructs a GetEulaRequestPrivate object for NimbleStudio \a action,
 * with public implementation \a q.
 */
GetEulaRequestPrivate::GetEulaRequestPrivate(
    const NimbleStudioRequest::Action action, GetEulaRequest * const q)
    : NimbleStudioRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetEulaRequest
 * class' copy constructor.
 */
GetEulaRequestPrivate::GetEulaRequestPrivate(
    const GetEulaRequestPrivate &other, GetEulaRequest * const q)
    : NimbleStudioRequestPrivate(other, q)
{

}

} // namespace NimbleStudio
} // namespace QtAws
