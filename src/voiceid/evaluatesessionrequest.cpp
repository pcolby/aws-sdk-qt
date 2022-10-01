// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "evaluatesessionrequest.h"
#include "evaluatesessionrequest_p.h"
#include "evaluatesessionresponse.h"
#include "voiceidrequest_p.h"

namespace QtAws {
namespace VoiceId {

/*!
 * \class QtAws::VoiceId::EvaluateSessionRequest
 * \brief The EvaluateSessionRequest class provides an interface for VoiceId EvaluateSession requests.
 *
 * \inmodule QtAwsVoiceId
 *
 *  Amazon Connect Voice ID provides real-time caller authentication and fraud screening. This guide describes the APIs used
 *  for this service.
 *
 * \sa VoiceIdClient::evaluateSession
 */

/*!
 * Constructs a copy of \a other.
 */
EvaluateSessionRequest::EvaluateSessionRequest(const EvaluateSessionRequest &other)
    : VoiceIdRequest(new EvaluateSessionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a EvaluateSessionRequest object.
 */
EvaluateSessionRequest::EvaluateSessionRequest()
    : VoiceIdRequest(new EvaluateSessionRequestPrivate(VoiceIdRequest::EvaluateSessionAction, this))
{

}

/*!
 * \reimp
 */
bool EvaluateSessionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a EvaluateSessionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * EvaluateSessionRequest::response(QNetworkReply * const reply) const
{
    return new EvaluateSessionResponse(*this, reply);
}

/*!
 * \class QtAws::VoiceId::EvaluateSessionRequestPrivate
 * \brief The EvaluateSessionRequestPrivate class provides private implementation for EvaluateSessionRequest.
 * \internal
 *
 * \inmodule QtAwsVoiceId
 */

/*!
 * Constructs a EvaluateSessionRequestPrivate object for VoiceId \a action,
 * with public implementation \a q.
 */
EvaluateSessionRequestPrivate::EvaluateSessionRequestPrivate(
    const VoiceIdRequest::Action action, EvaluateSessionRequest * const q)
    : VoiceIdRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the EvaluateSessionRequest
 * class' copy constructor.
 */
EvaluateSessionRequestPrivate::EvaluateSessionRequestPrivate(
    const EvaluateSessionRequestPrivate &other, EvaluateSessionRequest * const q)
    : VoiceIdRequestPrivate(other, q)
{

}

} // namespace VoiceId
} // namespace QtAws
