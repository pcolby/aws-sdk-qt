// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
