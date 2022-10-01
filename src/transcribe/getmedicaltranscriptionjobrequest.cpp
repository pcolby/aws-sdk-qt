// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getmedicaltranscriptionjobrequest.h"
#include "getmedicaltranscriptionjobrequest_p.h"
#include "getmedicaltranscriptionjobresponse.h"
#include "transcriberequest_p.h"

namespace QtAws {
namespace Transcribe {

/*!
 * \class QtAws::Transcribe::GetMedicalTranscriptionJobRequest
 * \brief The GetMedicalTranscriptionJobRequest class provides an interface for Transcribe GetMedicalTranscriptionJob requests.
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
 * \sa TranscribeClient::getMedicalTranscriptionJob
 */

/*!
 * Constructs a copy of \a other.
 */
GetMedicalTranscriptionJobRequest::GetMedicalTranscriptionJobRequest(const GetMedicalTranscriptionJobRequest &other)
    : TranscribeRequest(new GetMedicalTranscriptionJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetMedicalTranscriptionJobRequest object.
 */
GetMedicalTranscriptionJobRequest::GetMedicalTranscriptionJobRequest()
    : TranscribeRequest(new GetMedicalTranscriptionJobRequestPrivate(TranscribeRequest::GetMedicalTranscriptionJobAction, this))
{

}

/*!
 * \reimp
 */
bool GetMedicalTranscriptionJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetMedicalTranscriptionJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetMedicalTranscriptionJobRequest::response(QNetworkReply * const reply) const
{
    return new GetMedicalTranscriptionJobResponse(*this, reply);
}

/*!
 * \class QtAws::Transcribe::GetMedicalTranscriptionJobRequestPrivate
 * \brief The GetMedicalTranscriptionJobRequestPrivate class provides private implementation for GetMedicalTranscriptionJobRequest.
 * \internal
 *
 * \inmodule QtAwsTranscribe
 */

/*!
 * Constructs a GetMedicalTranscriptionJobRequestPrivate object for Transcribe \a action,
 * with public implementation \a q.
 */
GetMedicalTranscriptionJobRequestPrivate::GetMedicalTranscriptionJobRequestPrivate(
    const TranscribeRequest::Action action, GetMedicalTranscriptionJobRequest * const q)
    : TranscribeRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetMedicalTranscriptionJobRequest
 * class' copy constructor.
 */
GetMedicalTranscriptionJobRequestPrivate::GetMedicalTranscriptionJobRequestPrivate(
    const GetMedicalTranscriptionJobRequestPrivate &other, GetMedicalTranscriptionJobRequest * const q)
    : TranscribeRequestPrivate(other, q)
{

}

} // namespace Transcribe
} // namespace QtAws
