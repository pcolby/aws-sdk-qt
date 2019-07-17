/*
    Copyright 2013-2019 Paul Colby

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

#include "startspeechsynthesistaskrequest.h"
#include "startspeechsynthesistaskrequest_p.h"
#include "startspeechsynthesistaskresponse.h"
#include "pollyrequest_p.h"

namespace QtAws {
namespace Polly {

/*!
 * \class QtAws::Polly::StartSpeechSynthesisTaskRequest
 * \brief The StartSpeechSynthesisTaskRequest class provides an interface for Polly StartSpeechSynthesisTask requests.
 *
 * \inmodule QtAwsPolly
 *
 *  Amazon Polly is a web service that makes it easy to synthesize speech from
 * 
 *  text>
 * 
 *  The Amazon Polly service provides API operations for synthesizing high-quality speech from plain text and Speech
 *  Synthesis Markup Language (SSML), along with managing pronunciations lexicons that enable you to get the best results
 *  for your application
 *
 * \sa PollyClient::startSpeechSynthesisTask
 */

/*!
 * Constructs a copy of \a other.
 */
StartSpeechSynthesisTaskRequest::StartSpeechSynthesisTaskRequest(const StartSpeechSynthesisTaskRequest &other)
    : PollyRequest(new StartSpeechSynthesisTaskRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StartSpeechSynthesisTaskRequest object.
 */
StartSpeechSynthesisTaskRequest::StartSpeechSynthesisTaskRequest()
    : PollyRequest(new StartSpeechSynthesisTaskRequestPrivate(PollyRequest::StartSpeechSynthesisTaskAction, this))
{

}

/*!
 * \reimp
 */
bool StartSpeechSynthesisTaskRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StartSpeechSynthesisTaskResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StartSpeechSynthesisTaskRequest::response(QNetworkReply * const reply) const
{
    return new StartSpeechSynthesisTaskResponse(*this, reply);
}

/*!
 * \class QtAws::Polly::StartSpeechSynthesisTaskRequestPrivate
 * \brief The StartSpeechSynthesisTaskRequestPrivate class provides private implementation for StartSpeechSynthesisTaskRequest.
 * \internal
 *
 * \inmodule QtAwsPolly
 */

/*!
 * Constructs a StartSpeechSynthesisTaskRequestPrivate object for Polly \a action,
 * with public implementation \a q.
 */
StartSpeechSynthesisTaskRequestPrivate::StartSpeechSynthesisTaskRequestPrivate(
    const PollyRequest::Action action, StartSpeechSynthesisTaskRequest * const q)
    : PollyRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StartSpeechSynthesisTaskRequest
 * class' copy constructor.
 */
StartSpeechSynthesisTaskRequestPrivate::StartSpeechSynthesisTaskRequestPrivate(
    const StartSpeechSynthesisTaskRequestPrivate &other, StartSpeechSynthesisTaskRequest * const q)
    : PollyRequestPrivate(other, q)
{

}

} // namespace Polly
} // namespace QtAws
