// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "startspeakerenrollmentjobrequest.h"
#include "startspeakerenrollmentjobrequest_p.h"
#include "startspeakerenrollmentjobresponse.h"
#include "voiceidrequest_p.h"

namespace QtAws {
namespace VoiceId {

/*!
 * \class QtAws::VoiceId::StartSpeakerEnrollmentJobRequest
 * \brief The StartSpeakerEnrollmentJobRequest class provides an interface for VoiceId StartSpeakerEnrollmentJob requests.
 *
 * \inmodule QtAwsVoiceId
 *
 *  Amazon Connect Voice ID provides real-time caller authentication and fraud screening. This guide describes the APIs used
 *  for this service.
 *
 * \sa VoiceIdClient::startSpeakerEnrollmentJob
 */

/*!
 * Constructs a copy of \a other.
 */
StartSpeakerEnrollmentJobRequest::StartSpeakerEnrollmentJobRequest(const StartSpeakerEnrollmentJobRequest &other)
    : VoiceIdRequest(new StartSpeakerEnrollmentJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StartSpeakerEnrollmentJobRequest object.
 */
StartSpeakerEnrollmentJobRequest::StartSpeakerEnrollmentJobRequest()
    : VoiceIdRequest(new StartSpeakerEnrollmentJobRequestPrivate(VoiceIdRequest::StartSpeakerEnrollmentJobAction, this))
{

}

/*!
 * \reimp
 */
bool StartSpeakerEnrollmentJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StartSpeakerEnrollmentJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StartSpeakerEnrollmentJobRequest::response(QNetworkReply * const reply) const
{
    return new StartSpeakerEnrollmentJobResponse(*this, reply);
}

/*!
 * \class QtAws::VoiceId::StartSpeakerEnrollmentJobRequestPrivate
 * \brief The StartSpeakerEnrollmentJobRequestPrivate class provides private implementation for StartSpeakerEnrollmentJobRequest.
 * \internal
 *
 * \inmodule QtAwsVoiceId
 */

/*!
 * Constructs a StartSpeakerEnrollmentJobRequestPrivate object for VoiceId \a action,
 * with public implementation \a q.
 */
StartSpeakerEnrollmentJobRequestPrivate::StartSpeakerEnrollmentJobRequestPrivate(
    const VoiceIdRequest::Action action, StartSpeakerEnrollmentJobRequest * const q)
    : VoiceIdRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StartSpeakerEnrollmentJobRequest
 * class' copy constructor.
 */
StartSpeakerEnrollmentJobRequestPrivate::StartSpeakerEnrollmentJobRequestPrivate(
    const StartSpeakerEnrollmentJobRequestPrivate &other, StartSpeakerEnrollmentJobRequest * const q)
    : VoiceIdRequestPrivate(other, q)
{

}

} // namespace VoiceId
} // namespace QtAws
