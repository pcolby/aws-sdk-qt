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

#include "accepteulasrequest.h"
#include "accepteulasrequest_p.h"
#include "accepteulasresponse.h"
#include "nimblestudiorequest_p.h"

namespace QtAws {
namespace NimbleStudio {

/*!
 * \class QtAws::NimbleStudio::AcceptEulasRequest
 * \brief The AcceptEulasRequest class provides an interface for NimbleStudio AcceptEulas requests.
 *
 * \inmodule QtAwsNimbleStudio
 *
 *
 * \sa NimbleStudioClient::acceptEulas
 */

/*!
 * Constructs a copy of \a other.
 */
AcceptEulasRequest::AcceptEulasRequest(const AcceptEulasRequest &other)
    : NimbleStudioRequest(new AcceptEulasRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a AcceptEulasRequest object.
 */
AcceptEulasRequest::AcceptEulasRequest()
    : NimbleStudioRequest(new AcceptEulasRequestPrivate(NimbleStudioRequest::AcceptEulasAction, this))
{

}

/*!
 * \reimp
 */
bool AcceptEulasRequest::isValid() const
{
    return false;
}


/*!
 * Returns a AcceptEulasResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * AcceptEulasRequest::response(QNetworkReply * const reply) const
{
    return new AcceptEulasResponse(*this, reply);
}

/*!
 * \class QtAws::NimbleStudio::AcceptEulasRequestPrivate
 * \brief The AcceptEulasRequestPrivate class provides private implementation for AcceptEulasRequest.
 * \internal
 *
 * \inmodule QtAwsNimbleStudio
 */

/*!
 * Constructs a AcceptEulasRequestPrivate object for NimbleStudio \a action,
 * with public implementation \a q.
 */
AcceptEulasRequestPrivate::AcceptEulasRequestPrivate(
    const NimbleStudioRequest::Action action, AcceptEulasRequest * const q)
    : NimbleStudioRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the AcceptEulasRequest
 * class' copy constructor.
 */
AcceptEulasRequestPrivate::AcceptEulasRequestPrivate(
    const AcceptEulasRequestPrivate &other, AcceptEulasRequest * const q)
    : NimbleStudioRequestPrivate(other, q)
{

}

} // namespace NimbleStudio
} // namespace QtAws
