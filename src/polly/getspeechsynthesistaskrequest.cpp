/*
    Copyright 2013-2018 Paul Colby

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

#include "getspeechsynthesistaskrequest.h"
#include "getspeechsynthesistaskrequest_p.h"
#include "getspeechsynthesistaskresponse.h"
#include "pollyrequest_p.h"

namespace QtAws {
namespace Polly {

/*!
 * \class QtAws::Polly::GetSpeechSynthesisTaskRequest
 * \brief The GetSpeechSynthesisTaskRequest class provides an interface for Polly GetSpeechSynthesisTask requests.
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
 * \sa PollyClient::getSpeechSynthesisTask
 */

/*!
 * Constructs a copy of \a other.
 */
GetSpeechSynthesisTaskRequest::GetSpeechSynthesisTaskRequest(const GetSpeechSynthesisTaskRequest &other)
    : PollyRequest(new GetSpeechSynthesisTaskRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetSpeechSynthesisTaskRequest object.
 */
GetSpeechSynthesisTaskRequest::GetSpeechSynthesisTaskRequest()
    : PollyRequest(new GetSpeechSynthesisTaskRequestPrivate(PollyRequest::GetSpeechSynthesisTaskAction, this))
{

}

/*!
 * \reimp
 */
bool GetSpeechSynthesisTaskRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetSpeechSynthesisTaskResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetSpeechSynthesisTaskRequest::response(QNetworkReply * const reply) const
{
    return new GetSpeechSynthesisTaskResponse(*this, reply);
}

/*!
 * \class QtAws::Polly::GetSpeechSynthesisTaskRequestPrivate
 * \brief The GetSpeechSynthesisTaskRequestPrivate class provides private implementation for GetSpeechSynthesisTaskRequest.
 * \internal
 *
 * \inmodule QtAwsPolly
 */

/*!
 * Constructs a GetSpeechSynthesisTaskRequestPrivate object for Polly \a action,
 * with public implementation \a q.
 */
GetSpeechSynthesisTaskRequestPrivate::GetSpeechSynthesisTaskRequestPrivate(
    const PollyRequest::Action action, GetSpeechSynthesisTaskRequest * const q)
    : PollyRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetSpeechSynthesisTaskRequest
 * class' copy constructor.
 */
GetSpeechSynthesisTaskRequestPrivate::GetSpeechSynthesisTaskRequestPrivate(
    const GetSpeechSynthesisTaskRequestPrivate &other, GetSpeechSynthesisTaskRequest * const q)
    : PollyRequestPrivate(other, q)
{

}

} // namespace Polly
} // namespace QtAws
