// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describelanguagemodelrequest.h"
#include "describelanguagemodelrequest_p.h"
#include "describelanguagemodelresponse.h"
#include "transcriberequest_p.h"

namespace QtAws {
namespace Transcribe {

/*!
 * \class QtAws::Transcribe::DescribeLanguageModelRequest
 * \brief The DescribeLanguageModelRequest class provides an interface for Transcribe DescribeLanguageModel requests.
 *
 * \inmodule QtAwsTranscribe
 *
 *  Amazon Transcribe offers three main types of batch transcription: <b>Standard</b>, <b>Medical</b>, and <b>Call
 * 
 *  Analytics</b>> <ul> <li>
 * 
 *  <b>Standard transcriptions</b> are the most common option. Refer to for
 * 
 *  details> </li> <li>
 * 
 *  <b>Medical transcriptions</b> are tailored to medical professionals and incorporate medical terms. A common use case for
 *  this service is transcribing doctor-patient dialogue into after-visit notes. Refer to for
 * 
 *  details> </li> <li>
 * 
 *  <b>Call Analytics transcriptions</b> are designed for use with call center audio on two different channels; if you're
 *  looking for insight into customer service calls, use this option. Refer to for
 *
 * \sa TranscribeClient::describeLanguageModel
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeLanguageModelRequest::DescribeLanguageModelRequest(const DescribeLanguageModelRequest &other)
    : TranscribeRequest(new DescribeLanguageModelRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeLanguageModelRequest object.
 */
DescribeLanguageModelRequest::DescribeLanguageModelRequest()
    : TranscribeRequest(new DescribeLanguageModelRequestPrivate(TranscribeRequest::DescribeLanguageModelAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeLanguageModelRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeLanguageModelResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeLanguageModelRequest::response(QNetworkReply * const reply) const
{
    return new DescribeLanguageModelResponse(*this, reply);
}

/*!
 * \class QtAws::Transcribe::DescribeLanguageModelRequestPrivate
 * \brief The DescribeLanguageModelRequestPrivate class provides private implementation for DescribeLanguageModelRequest.
 * \internal
 *
 * \inmodule QtAwsTranscribe
 */

/*!
 * Constructs a DescribeLanguageModelRequestPrivate object for Transcribe \a action,
 * with public implementation \a q.
 */
DescribeLanguageModelRequestPrivate::DescribeLanguageModelRequestPrivate(
    const TranscribeRequest::Action action, DescribeLanguageModelRequest * const q)
    : TranscribeRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeLanguageModelRequest
 * class' copy constructor.
 */
DescribeLanguageModelRequestPrivate::DescribeLanguageModelRequestPrivate(
    const DescribeLanguageModelRequestPrivate &other, DescribeLanguageModelRequest * const q)
    : TranscribeRequestPrivate(other, q)
{

}

} // namespace Transcribe
} // namespace QtAws
