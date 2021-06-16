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

#include "gettranscriptrequest.h"
#include "gettranscriptrequest_p.h"
#include "gettranscriptresponse.h"
#include "connectparticipantrequest_p.h"

namespace QtAws {
namespace ConnectParticipant {

/*!
 * \class QtAws::ConnectParticipant::GetTranscriptRequest
 * \brief The GetTranscriptRequest class provides an interface for ConnectParticipant GetTranscript requests.
 *
 * \inmodule QtAwsConnectParticipant
 *
 *  Amazon Connect is a cloud-based contact center solution that makes it easy to set up and manage a customer contact
 *  center and provide reliable customer engagement at any
 * 
 *  scale>
 * 
 *  Amazon Connect enables customer contacts through voice or
 * 
 *  chat>
 * 
 *  The APIs described here are used by chat participants, such as agents and
 *
 * \sa ConnectParticipantClient::getTranscript
 */

/*!
 * Constructs a copy of \a other.
 */
GetTranscriptRequest::GetTranscriptRequest(const GetTranscriptRequest &other)
    : ConnectParticipantRequest(new GetTranscriptRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetTranscriptRequest object.
 */
GetTranscriptRequest::GetTranscriptRequest()
    : ConnectParticipantRequest(new GetTranscriptRequestPrivate(ConnectParticipantRequest::GetTranscriptAction, this))
{

}

/*!
 * \reimp
 */
bool GetTranscriptRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetTranscriptResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetTranscriptRequest::response(QNetworkReply * const reply) const
{
    return new GetTranscriptResponse(*this, reply);
}

/*!
 * \class QtAws::ConnectParticipant::GetTranscriptRequestPrivate
 * \brief The GetTranscriptRequestPrivate class provides private implementation for GetTranscriptRequest.
 * \internal
 *
 * \inmodule QtAwsConnectParticipant
 */

/*!
 * Constructs a GetTranscriptRequestPrivate object for ConnectParticipant \a action,
 * with public implementation \a q.
 */
GetTranscriptRequestPrivate::GetTranscriptRequestPrivate(
    const ConnectParticipantRequest::Action action, GetTranscriptRequest * const q)
    : ConnectParticipantRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetTranscriptRequest
 * class' copy constructor.
 */
GetTranscriptRequestPrivate::GetTranscriptRequestPrivate(
    const GetTranscriptRequestPrivate &other, GetTranscriptRequest * const q)
    : ConnectParticipantRequestPrivate(other, q)
{

}

} // namespace ConnectParticipant
} // namespace QtAws
