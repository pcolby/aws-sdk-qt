// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletevocabularyrequest.h"
#include "deletevocabularyrequest_p.h"
#include "deletevocabularyresponse.h"
#include "transcriberequest_p.h"

namespace QtAws {
namespace Transcribe {

/*!
 * \class QtAws::Transcribe::DeleteVocabularyRequest
 * \brief The DeleteVocabularyRequest class provides an interface for Transcribe DeleteVocabulary requests.
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
 * \sa TranscribeClient::deleteVocabulary
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteVocabularyRequest::DeleteVocabularyRequest(const DeleteVocabularyRequest &other)
    : TranscribeRequest(new DeleteVocabularyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteVocabularyRequest object.
 */
DeleteVocabularyRequest::DeleteVocabularyRequest()
    : TranscribeRequest(new DeleteVocabularyRequestPrivate(TranscribeRequest::DeleteVocabularyAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteVocabularyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteVocabularyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteVocabularyRequest::response(QNetworkReply * const reply) const
{
    return new DeleteVocabularyResponse(*this, reply);
}

/*!
 * \class QtAws::Transcribe::DeleteVocabularyRequestPrivate
 * \brief The DeleteVocabularyRequestPrivate class provides private implementation for DeleteVocabularyRequest.
 * \internal
 *
 * \inmodule QtAwsTranscribe
 */

/*!
 * Constructs a DeleteVocabularyRequestPrivate object for Transcribe \a action,
 * with public implementation \a q.
 */
DeleteVocabularyRequestPrivate::DeleteVocabularyRequestPrivate(
    const TranscribeRequest::Action action, DeleteVocabularyRequest * const q)
    : TranscribeRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteVocabularyRequest
 * class' copy constructor.
 */
DeleteVocabularyRequestPrivate::DeleteVocabularyRequestPrivate(
    const DeleteVocabularyRequestPrivate &other, DeleteVocabularyRequest * const q)
    : TranscribeRequestPrivate(other, q)
{

}

} // namespace Transcribe
} // namespace QtAws
