// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletemedicaltranscriptionjobrequest.h"
#include "deletemedicaltranscriptionjobrequest_p.h"
#include "deletemedicaltranscriptionjobresponse.h"
#include "transcriberequest_p.h"

namespace QtAws {
namespace Transcribe {

/*!
 * \class QtAws::Transcribe::DeleteMedicalTranscriptionJobRequest
 * \brief The DeleteMedicalTranscriptionJobRequest class provides an interface for Transcribe DeleteMedicalTranscriptionJob requests.
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
 * \sa TranscribeClient::deleteMedicalTranscriptionJob
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteMedicalTranscriptionJobRequest::DeleteMedicalTranscriptionJobRequest(const DeleteMedicalTranscriptionJobRequest &other)
    : TranscribeRequest(new DeleteMedicalTranscriptionJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteMedicalTranscriptionJobRequest object.
 */
DeleteMedicalTranscriptionJobRequest::DeleteMedicalTranscriptionJobRequest()
    : TranscribeRequest(new DeleteMedicalTranscriptionJobRequestPrivate(TranscribeRequest::DeleteMedicalTranscriptionJobAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteMedicalTranscriptionJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteMedicalTranscriptionJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteMedicalTranscriptionJobRequest::response(QNetworkReply * const reply) const
{
    return new DeleteMedicalTranscriptionJobResponse(*this, reply);
}

/*!
 * \class QtAws::Transcribe::DeleteMedicalTranscriptionJobRequestPrivate
 * \brief The DeleteMedicalTranscriptionJobRequestPrivate class provides private implementation for DeleteMedicalTranscriptionJobRequest.
 * \internal
 *
 * \inmodule QtAwsTranscribe
 */

/*!
 * Constructs a DeleteMedicalTranscriptionJobRequestPrivate object for Transcribe \a action,
 * with public implementation \a q.
 */
DeleteMedicalTranscriptionJobRequestPrivate::DeleteMedicalTranscriptionJobRequestPrivate(
    const TranscribeRequest::Action action, DeleteMedicalTranscriptionJobRequest * const q)
    : TranscribeRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteMedicalTranscriptionJobRequest
 * class' copy constructor.
 */
DeleteMedicalTranscriptionJobRequestPrivate::DeleteMedicalTranscriptionJobRequestPrivate(
    const DeleteMedicalTranscriptionJobRequestPrivate &other, DeleteMedicalTranscriptionJobRequest * const q)
    : TranscribeRequestPrivate(other, q)
{

}

} // namespace Transcribe
} // namespace QtAws
