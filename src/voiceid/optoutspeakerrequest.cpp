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

#include "optoutspeakerrequest.h"
#include "optoutspeakerrequest_p.h"
#include "optoutspeakerresponse.h"
#include "voiceidrequest_p.h"

namespace QtAws {
namespace VoiceId {

/*!
 * \class QtAws::VoiceId::OptOutSpeakerRequest
 * \brief The OptOutSpeakerRequest class provides an interface for VoiceId OptOutSpeaker requests.
 *
 * \inmodule QtAwsVoiceId
 *
 *  Amazon Connect Voice ID provides real-time caller authentication and fraud screening. This guide describes the APIs used
 *  for this service.
 *
 * \sa VoiceIdClient::optOutSpeaker
 */

/*!
 * Constructs a copy of \a other.
 */
OptOutSpeakerRequest::OptOutSpeakerRequest(const OptOutSpeakerRequest &other)
    : VoiceIdRequest(new OptOutSpeakerRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a OptOutSpeakerRequest object.
 */
OptOutSpeakerRequest::OptOutSpeakerRequest()
    : VoiceIdRequest(new OptOutSpeakerRequestPrivate(VoiceIdRequest::OptOutSpeakerAction, this))
{

}

/*!
 * \reimp
 */
bool OptOutSpeakerRequest::isValid() const
{
    return false;
}


/*!
 * Returns a OptOutSpeakerResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * OptOutSpeakerRequest::response(QNetworkReply * const reply) const
{
    return new OptOutSpeakerResponse(*this, reply);
}

/*!
 * \class QtAws::VoiceId::OptOutSpeakerRequestPrivate
 * \brief The OptOutSpeakerRequestPrivate class provides private implementation for OptOutSpeakerRequest.
 * \internal
 *
 * \inmodule QtAwsVoiceId
 */

/*!
 * Constructs a OptOutSpeakerRequestPrivate object for VoiceId \a action,
 * with public implementation \a q.
 */
OptOutSpeakerRequestPrivate::OptOutSpeakerRequestPrivate(
    const VoiceIdRequest::Action action, OptOutSpeakerRequest * const q)
    : VoiceIdRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the OptOutSpeakerRequest
 * class' copy constructor.
 */
OptOutSpeakerRequestPrivate::OptOutSpeakerRequestPrivate(
    const OptOutSpeakerRequestPrivate &other, OptOutSpeakerRequest * const q)
    : VoiceIdRequestPrivate(other, q)
{

}

} // namespace VoiceId
} // namespace QtAws
