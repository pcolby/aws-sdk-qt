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
