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

#include "createstreamingsessionrequest.h"
#include "createstreamingsessionrequest_p.h"
#include "createstreamingsessionresponse.h"
#include "nimblestudiorequest_p.h"

namespace QtAws {
namespace NimbleStudio {

/*!
 * \class QtAws::NimbleStudio::CreateStreamingSessionRequest
 * \brief The CreateStreamingSessionRequest class provides an interface for NimbleStudio CreateStreamingSession requests.
 *
 * \inmodule QtAwsNimbleStudio
 *
 *
 * \sa NimbleStudioClient::createStreamingSession
 */

/*!
 * Constructs a copy of \a other.
 */
CreateStreamingSessionRequest::CreateStreamingSessionRequest(const CreateStreamingSessionRequest &other)
    : NimbleStudioRequest(new CreateStreamingSessionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateStreamingSessionRequest object.
 */
CreateStreamingSessionRequest::CreateStreamingSessionRequest()
    : NimbleStudioRequest(new CreateStreamingSessionRequestPrivate(NimbleStudioRequest::CreateStreamingSessionAction, this))
{

}

/*!
 * \reimp
 */
bool CreateStreamingSessionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateStreamingSessionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateStreamingSessionRequest::response(QNetworkReply * const reply) const
{
    return new CreateStreamingSessionResponse(*this, reply);
}

/*!
 * \class QtAws::NimbleStudio::CreateStreamingSessionRequestPrivate
 * \brief The CreateStreamingSessionRequestPrivate class provides private implementation for CreateStreamingSessionRequest.
 * \internal
 *
 * \inmodule QtAwsNimbleStudio
 */

/*!
 * Constructs a CreateStreamingSessionRequestPrivate object for NimbleStudio \a action,
 * with public implementation \a q.
 */
CreateStreamingSessionRequestPrivate::CreateStreamingSessionRequestPrivate(
    const NimbleStudioRequest::Action action, CreateStreamingSessionRequest * const q)
    : NimbleStudioRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateStreamingSessionRequest
 * class' copy constructor.
 */
CreateStreamingSessionRequestPrivate::CreateStreamingSessionRequestPrivate(
    const CreateStreamingSessionRequestPrivate &other, CreateStreamingSessionRequest * const q)
    : NimbleStudioRequestPrivate(other, q)
{

}

} // namespace NimbleStudio
} // namespace QtAws
