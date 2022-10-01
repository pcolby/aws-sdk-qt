// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatemedicalvocabularyrequest.h"
#include "updatemedicalvocabularyrequest_p.h"
#include "updatemedicalvocabularyresponse.h"
#include "transcriberequest_p.h"

namespace QtAws {
namespace Transcribe {

/*!
 * \class QtAws::Transcribe::UpdateMedicalVocabularyRequest
 * \brief The UpdateMedicalVocabularyRequest class provides an interface for Transcribe UpdateMedicalVocabulary requests.
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
 * \sa TranscribeClient::updateMedicalVocabulary
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateMedicalVocabularyRequest::UpdateMedicalVocabularyRequest(const UpdateMedicalVocabularyRequest &other)
    : TranscribeRequest(new UpdateMedicalVocabularyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateMedicalVocabularyRequest object.
 */
UpdateMedicalVocabularyRequest::UpdateMedicalVocabularyRequest()
    : TranscribeRequest(new UpdateMedicalVocabularyRequestPrivate(TranscribeRequest::UpdateMedicalVocabularyAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateMedicalVocabularyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateMedicalVocabularyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateMedicalVocabularyRequest::response(QNetworkReply * const reply) const
{
    return new UpdateMedicalVocabularyResponse(*this, reply);
}

/*!
 * \class QtAws::Transcribe::UpdateMedicalVocabularyRequestPrivate
 * \brief The UpdateMedicalVocabularyRequestPrivate class provides private implementation for UpdateMedicalVocabularyRequest.
 * \internal
 *
 * \inmodule QtAwsTranscribe
 */

/*!
 * Constructs a UpdateMedicalVocabularyRequestPrivate object for Transcribe \a action,
 * with public implementation \a q.
 */
UpdateMedicalVocabularyRequestPrivate::UpdateMedicalVocabularyRequestPrivate(
    const TranscribeRequest::Action action, UpdateMedicalVocabularyRequest * const q)
    : TranscribeRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateMedicalVocabularyRequest
 * class' copy constructor.
 */
UpdateMedicalVocabularyRequestPrivate::UpdateMedicalVocabularyRequestPrivate(
    const UpdateMedicalVocabularyRequestPrivate &other, UpdateMedicalVocabularyRequest * const q)
    : TranscribeRequestPrivate(other, q)
{

}

} // namespace Transcribe
} // namespace QtAws
