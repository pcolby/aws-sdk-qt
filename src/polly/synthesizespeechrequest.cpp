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

#include "synthesizespeechrequest.h"
#include "synthesizespeechrequest_p.h"
#include "synthesizespeechresponse.h"
#include "pollyrequest_p.h"

namespace QtAws {
namespace Polly {

/*!
 * \class QtAws::Polly::SynthesizeSpeechRequest
 * \brief The SynthesizeSpeechRequest class provides an interface for Polly SynthesizeSpeech requests.
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
 * \sa PollyClient::synthesizeSpeech
 */

/*!
 * Constructs a copy of \a other.
 */
SynthesizeSpeechRequest::SynthesizeSpeechRequest(const SynthesizeSpeechRequest &other)
    : PollyRequest(new SynthesizeSpeechRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a SynthesizeSpeechRequest object.
 */
SynthesizeSpeechRequest::SynthesizeSpeechRequest()
    : PollyRequest(new SynthesizeSpeechRequestPrivate(PollyRequest::SynthesizeSpeechAction, this))
{

}

/*!
 * \reimp
 */
bool SynthesizeSpeechRequest::isValid() const
{
    return false;
}


/*!
 * Returns a SynthesizeSpeechResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * SynthesizeSpeechRequest::response(QNetworkReply * const reply) const
{
    return new SynthesizeSpeechResponse(*this, reply);
}

/*!
 * \class QtAws::Polly::SynthesizeSpeechRequestPrivate
 * \brief The SynthesizeSpeechRequestPrivate class provides private implementation for SynthesizeSpeechRequest.
 * \internal
 *
 * \inmodule QtAwsPolly
 */

/*!
 * Constructs a SynthesizeSpeechRequestPrivate object for Polly \a action,
 * with public implementation \a q.
 */
SynthesizeSpeechRequestPrivate::SynthesizeSpeechRequestPrivate(
    const PollyRequest::Action action, SynthesizeSpeechRequest * const q)
    : PollyRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the SynthesizeSpeechRequest
 * class' copy constructor.
 */
SynthesizeSpeechRequestPrivate::SynthesizeSpeechRequestPrivate(
    const SynthesizeSpeechRequestPrivate &other, SynthesizeSpeechRequest * const q)
    : PollyRequestPrivate(other, q)
{

}

} // namespace Polly
} // namespace QtAws
