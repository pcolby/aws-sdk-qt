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

#include "deletespeakerrequest.h"
#include "deletespeakerrequest_p.h"
#include "deletespeakerresponse.h"
#include "voiceidrequest_p.h"

namespace QtAws {
namespace VoiceId {

/*!
 * \class QtAws::VoiceId::DeleteSpeakerRequest
 * \brief The DeleteSpeakerRequest class provides an interface for VoiceId DeleteSpeaker requests.
 *
 * \inmodule QtAwsVoiceId
 *
 *  Amazon Connect Voice ID provides real-time caller authentication and fraud screening. This guide describes the APIs used
 *  for this service.
 *
 * \sa VoiceIdClient::deleteSpeaker
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteSpeakerRequest::DeleteSpeakerRequest(const DeleteSpeakerRequest &other)
    : VoiceIdRequest(new DeleteSpeakerRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteSpeakerRequest object.
 */
DeleteSpeakerRequest::DeleteSpeakerRequest()
    : VoiceIdRequest(new DeleteSpeakerRequestPrivate(VoiceIdRequest::DeleteSpeakerAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteSpeakerRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteSpeakerResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteSpeakerRequest::response(QNetworkReply * const reply) const
{
    return new DeleteSpeakerResponse(*this, reply);
}

/*!
 * \class QtAws::VoiceId::DeleteSpeakerRequestPrivate
 * \brief The DeleteSpeakerRequestPrivate class provides private implementation for DeleteSpeakerRequest.
 * \internal
 *
 * \inmodule QtAwsVoiceId
 */

/*!
 * Constructs a DeleteSpeakerRequestPrivate object for VoiceId \a action,
 * with public implementation \a q.
 */
DeleteSpeakerRequestPrivate::DeleteSpeakerRequestPrivate(
    const VoiceIdRequest::Action action, DeleteSpeakerRequest * const q)
    : VoiceIdRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteSpeakerRequest
 * class' copy constructor.
 */
DeleteSpeakerRequestPrivate::DeleteSpeakerRequestPrivate(
    const DeleteSpeakerRequestPrivate &other, DeleteSpeakerRequest * const q)
    : VoiceIdRequestPrivate(other, q)
{

}

} // namespace VoiceId
} // namespace QtAws
