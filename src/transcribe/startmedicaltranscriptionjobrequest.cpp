// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "startmedicaltranscriptionjobrequest.h"
#include "startmedicaltranscriptionjobrequest_p.h"
#include "startmedicaltranscriptionjobresponse.h"
#include "transcriberequest_p.h"

namespace QtAws {
namespace Transcribe {

/*!
 * \class QtAws::Transcribe::StartMedicalTranscriptionJobRequest
 * \brief The StartMedicalTranscriptionJobRequest class provides an interface for Transcribe StartMedicalTranscriptionJob requests.
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
 * \sa TranscribeClient::startMedicalTranscriptionJob
 */

/*!
 * Constructs a copy of \a other.
 */
StartMedicalTranscriptionJobRequest::StartMedicalTranscriptionJobRequest(const StartMedicalTranscriptionJobRequest &other)
    : TranscribeRequest(new StartMedicalTranscriptionJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StartMedicalTranscriptionJobRequest object.
 */
StartMedicalTranscriptionJobRequest::StartMedicalTranscriptionJobRequest()
    : TranscribeRequest(new StartMedicalTranscriptionJobRequestPrivate(TranscribeRequest::StartMedicalTranscriptionJobAction, this))
{

}

/*!
 * \reimp
 */
bool StartMedicalTranscriptionJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StartMedicalTranscriptionJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StartMedicalTranscriptionJobRequest::response(QNetworkReply * const reply) const
{
    return new StartMedicalTranscriptionJobResponse(*this, reply);
}

/*!
 * \class QtAws::Transcribe::StartMedicalTranscriptionJobRequestPrivate
 * \brief The StartMedicalTranscriptionJobRequestPrivate class provides private implementation for StartMedicalTranscriptionJobRequest.
 * \internal
 *
 * \inmodule QtAwsTranscribe
 */

/*!
 * Constructs a StartMedicalTranscriptionJobRequestPrivate object for Transcribe \a action,
 * with public implementation \a q.
 */
StartMedicalTranscriptionJobRequestPrivate::StartMedicalTranscriptionJobRequestPrivate(
    const TranscribeRequest::Action action, StartMedicalTranscriptionJobRequest * const q)
    : TranscribeRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StartMedicalTranscriptionJobRequest
 * class' copy constructor.
 */
StartMedicalTranscriptionJobRequestPrivate::StartMedicalTranscriptionJobRequestPrivate(
    const StartMedicalTranscriptionJobRequestPrivate &other, StartMedicalTranscriptionJobRequest * const q)
    : TranscribeRequestPrivate(other, q)
{

}

} // namespace Transcribe
} // namespace QtAws
