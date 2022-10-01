// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatevocabularyrequest.h"
#include "updatevocabularyrequest_p.h"
#include "updatevocabularyresponse.h"
#include "transcriberequest_p.h"

namespace QtAws {
namespace Transcribe {

/*!
 * \class QtAws::Transcribe::UpdateVocabularyRequest
 * \brief The UpdateVocabularyRequest class provides an interface for Transcribe UpdateVocabulary requests.
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
 * \sa TranscribeClient::updateVocabulary
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateVocabularyRequest::UpdateVocabularyRequest(const UpdateVocabularyRequest &other)
    : TranscribeRequest(new UpdateVocabularyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateVocabularyRequest object.
 */
UpdateVocabularyRequest::UpdateVocabularyRequest()
    : TranscribeRequest(new UpdateVocabularyRequestPrivate(TranscribeRequest::UpdateVocabularyAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateVocabularyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateVocabularyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateVocabularyRequest::response(QNetworkReply * const reply) const
{
    return new UpdateVocabularyResponse(*this, reply);
}

/*!
 * \class QtAws::Transcribe::UpdateVocabularyRequestPrivate
 * \brief The UpdateVocabularyRequestPrivate class provides private implementation for UpdateVocabularyRequest.
 * \internal
 *
 * \inmodule QtAwsTranscribe
 */

/*!
 * Constructs a UpdateVocabularyRequestPrivate object for Transcribe \a action,
 * with public implementation \a q.
 */
UpdateVocabularyRequestPrivate::UpdateVocabularyRequestPrivate(
    const TranscribeRequest::Action action, UpdateVocabularyRequest * const q)
    : TranscribeRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateVocabularyRequest
 * class' copy constructor.
 */
UpdateVocabularyRequestPrivate::UpdateVocabularyRequestPrivate(
    const UpdateVocabularyRequestPrivate &other, UpdateVocabularyRequest * const q)
    : TranscribeRequestPrivate(other, q)
{

}

} // namespace Transcribe
} // namespace QtAws
