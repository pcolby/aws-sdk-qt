// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatevocabularyfilterrequest.h"
#include "updatevocabularyfilterrequest_p.h"
#include "updatevocabularyfilterresponse.h"
#include "transcriberequest_p.h"

namespace QtAws {
namespace Transcribe {

/*!
 * \class QtAws::Transcribe::UpdateVocabularyFilterRequest
 * \brief The UpdateVocabularyFilterRequest class provides an interface for Transcribe UpdateVocabularyFilter requests.
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
 * \sa TranscribeClient::updateVocabularyFilter
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateVocabularyFilterRequest::UpdateVocabularyFilterRequest(const UpdateVocabularyFilterRequest &other)
    : TranscribeRequest(new UpdateVocabularyFilterRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateVocabularyFilterRequest object.
 */
UpdateVocabularyFilterRequest::UpdateVocabularyFilterRequest()
    : TranscribeRequest(new UpdateVocabularyFilterRequestPrivate(TranscribeRequest::UpdateVocabularyFilterAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateVocabularyFilterRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateVocabularyFilterResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateVocabularyFilterRequest::response(QNetworkReply * const reply) const
{
    return new UpdateVocabularyFilterResponse(*this, reply);
}

/*!
 * \class QtAws::Transcribe::UpdateVocabularyFilterRequestPrivate
 * \brief The UpdateVocabularyFilterRequestPrivate class provides private implementation for UpdateVocabularyFilterRequest.
 * \internal
 *
 * \inmodule QtAwsTranscribe
 */

/*!
 * Constructs a UpdateVocabularyFilterRequestPrivate object for Transcribe \a action,
 * with public implementation \a q.
 */
UpdateVocabularyFilterRequestPrivate::UpdateVocabularyFilterRequestPrivate(
    const TranscribeRequest::Action action, UpdateVocabularyFilterRequest * const q)
    : TranscribeRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateVocabularyFilterRequest
 * class' copy constructor.
 */
UpdateVocabularyFilterRequestPrivate::UpdateVocabularyFilterRequestPrivate(
    const UpdateVocabularyFilterRequestPrivate &other, UpdateVocabularyFilterRequest * const q)
    : TranscribeRequestPrivate(other, q)
{

}

} // namespace Transcribe
} // namespace QtAws
