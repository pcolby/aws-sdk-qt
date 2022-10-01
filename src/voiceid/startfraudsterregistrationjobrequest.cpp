// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "startfraudsterregistrationjobrequest.h"
#include "startfraudsterregistrationjobrequest_p.h"
#include "startfraudsterregistrationjobresponse.h"
#include "voiceidrequest_p.h"

namespace QtAws {
namespace VoiceId {

/*!
 * \class QtAws::VoiceId::StartFraudsterRegistrationJobRequest
 * \brief The StartFraudsterRegistrationJobRequest class provides an interface for VoiceId StartFraudsterRegistrationJob requests.
 *
 * \inmodule QtAwsVoiceId
 *
 *  Amazon Connect Voice ID provides real-time caller authentication and fraud screening. This guide describes the APIs used
 *  for this service.
 *
 * \sa VoiceIdClient::startFraudsterRegistrationJob
 */

/*!
 * Constructs a copy of \a other.
 */
StartFraudsterRegistrationJobRequest::StartFraudsterRegistrationJobRequest(const StartFraudsterRegistrationJobRequest &other)
    : VoiceIdRequest(new StartFraudsterRegistrationJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StartFraudsterRegistrationJobRequest object.
 */
StartFraudsterRegistrationJobRequest::StartFraudsterRegistrationJobRequest()
    : VoiceIdRequest(new StartFraudsterRegistrationJobRequestPrivate(VoiceIdRequest::StartFraudsterRegistrationJobAction, this))
{

}

/*!
 * \reimp
 */
bool StartFraudsterRegistrationJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StartFraudsterRegistrationJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StartFraudsterRegistrationJobRequest::response(QNetworkReply * const reply) const
{
    return new StartFraudsterRegistrationJobResponse(*this, reply);
}

/*!
 * \class QtAws::VoiceId::StartFraudsterRegistrationJobRequestPrivate
 * \brief The StartFraudsterRegistrationJobRequestPrivate class provides private implementation for StartFraudsterRegistrationJobRequest.
 * \internal
 *
 * \inmodule QtAwsVoiceId
 */

/*!
 * Constructs a StartFraudsterRegistrationJobRequestPrivate object for VoiceId \a action,
 * with public implementation \a q.
 */
StartFraudsterRegistrationJobRequestPrivate::StartFraudsterRegistrationJobRequestPrivate(
    const VoiceIdRequest::Action action, StartFraudsterRegistrationJobRequest * const q)
    : VoiceIdRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StartFraudsterRegistrationJobRequest
 * class' copy constructor.
 */
StartFraudsterRegistrationJobRequestPrivate::StartFraudsterRegistrationJobRequestPrivate(
    const StartFraudsterRegistrationJobRequestPrivate &other, StartFraudsterRegistrationJobRequest * const q)
    : VoiceIdRequestPrivate(other, q)
{

}

} // namespace VoiceId
} // namespace QtAws
