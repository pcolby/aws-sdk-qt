// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
