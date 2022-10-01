// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "gettranscriptionjobrequest.h"
#include "gettranscriptionjobrequest_p.h"
#include "gettranscriptionjobresponse.h"
#include "transcriberequest_p.h"

namespace QtAws {
namespace Transcribe {

/*!
 * \class QtAws::Transcribe::GetTranscriptionJobRequest
 * \brief The GetTranscriptionJobRequest class provides an interface for Transcribe GetTranscriptionJob requests.
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
 * \sa TranscribeClient::getTranscriptionJob
 */

/*!
 * Constructs a copy of \a other.
 */
GetTranscriptionJobRequest::GetTranscriptionJobRequest(const GetTranscriptionJobRequest &other)
    : TranscribeRequest(new GetTranscriptionJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetTranscriptionJobRequest object.
 */
GetTranscriptionJobRequest::GetTranscriptionJobRequest()
    : TranscribeRequest(new GetTranscriptionJobRequestPrivate(TranscribeRequest::GetTranscriptionJobAction, this))
{

}

/*!
 * \reimp
 */
bool GetTranscriptionJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetTranscriptionJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetTranscriptionJobRequest::response(QNetworkReply * const reply) const
{
    return new GetTranscriptionJobResponse(*this, reply);
}

/*!
 * \class QtAws::Transcribe::GetTranscriptionJobRequestPrivate
 * \brief The GetTranscriptionJobRequestPrivate class provides private implementation for GetTranscriptionJobRequest.
 * \internal
 *
 * \inmodule QtAwsTranscribe
 */

/*!
 * Constructs a GetTranscriptionJobRequestPrivate object for Transcribe \a action,
 * with public implementation \a q.
 */
GetTranscriptionJobRequestPrivate::GetTranscriptionJobRequestPrivate(
    const TranscribeRequest::Action action, GetTranscriptionJobRequest * const q)
    : TranscribeRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetTranscriptionJobRequest
 * class' copy constructor.
 */
GetTranscriptionJobRequestPrivate::GetTranscriptionJobRequestPrivate(
    const GetTranscriptionJobRequestPrivate &other, GetTranscriptionJobRequest * const q)
    : TranscribeRequestPrivate(other, q)
{

}

} // namespace Transcribe
} // namespace QtAws
