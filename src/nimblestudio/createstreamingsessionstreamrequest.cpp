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

#include "createstreamingsessionstreamrequest.h"
#include "createstreamingsessionstreamrequest_p.h"
#include "createstreamingsessionstreamresponse.h"
#include "nimblestudiorequest_p.h"

namespace QtAws {
namespace NimbleStudio {

/*!
 * \class QtAws::NimbleStudio::CreateStreamingSessionStreamRequest
 * \brief The CreateStreamingSessionStreamRequest class provides an interface for NimbleStudio CreateStreamingSessionStream requests.
 *
 * \inmodule QtAwsNimbleStudio
 *
 *
 * \sa NimbleStudioClient::createStreamingSessionStream
 */

/*!
 * Constructs a copy of \a other.
 */
CreateStreamingSessionStreamRequest::CreateStreamingSessionStreamRequest(const CreateStreamingSessionStreamRequest &other)
    : NimbleStudioRequest(new CreateStreamingSessionStreamRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateStreamingSessionStreamRequest object.
 */
CreateStreamingSessionStreamRequest::CreateStreamingSessionStreamRequest()
    : NimbleStudioRequest(new CreateStreamingSessionStreamRequestPrivate(NimbleStudioRequest::CreateStreamingSessionStreamAction, this))
{

}

/*!
 * \reimp
 */
bool CreateStreamingSessionStreamRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateStreamingSessionStreamResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateStreamingSessionStreamRequest::response(QNetworkReply * const reply) const
{
    return new CreateStreamingSessionStreamResponse(*this, reply);
}

/*!
 * \class QtAws::NimbleStudio::CreateStreamingSessionStreamRequestPrivate
 * \brief The CreateStreamingSessionStreamRequestPrivate class provides private implementation for CreateStreamingSessionStreamRequest.
 * \internal
 *
 * \inmodule QtAwsNimbleStudio
 */

/*!
 * Constructs a CreateStreamingSessionStreamRequestPrivate object for NimbleStudio \a action,
 * with public implementation \a q.
 */
CreateStreamingSessionStreamRequestPrivate::CreateStreamingSessionStreamRequestPrivate(
    const NimbleStudioRequest::Action action, CreateStreamingSessionStreamRequest * const q)
    : NimbleStudioRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateStreamingSessionStreamRequest
 * class' copy constructor.
 */
CreateStreamingSessionStreamRequestPrivate::CreateStreamingSessionStreamRequestPrivate(
    const CreateStreamingSessionStreamRequestPrivate &other, CreateStreamingSessionStreamRequest * const q)
    : NimbleStudioRequestPrivate(other, q)
{

}

} // namespace NimbleStudio
} // namespace QtAws
