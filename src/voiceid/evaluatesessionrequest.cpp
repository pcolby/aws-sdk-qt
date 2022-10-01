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
