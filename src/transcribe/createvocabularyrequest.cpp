// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createvocabularyrequest.h"
#include "createvocabularyrequest_p.h"
#include "createvocabularyresponse.h"
#include "transcriberequest_p.h"

namespace QtAws {
namespace Transcribe {

/*!
 * \class QtAws::Transcribe::CreateVocabularyRequest
 * \brief The CreateVocabularyRequest class provides an interface for Transcribe CreateVocabulary requests.
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
 * \sa TranscribeClient::createVocabulary
 */

/*!
 * Constructs a copy of \a other.
 */
CreateVocabularyRequest::CreateVocabularyRequest(const CreateVocabularyRequest &other)
    : TranscribeRequest(new CreateVocabularyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateVocabularyRequest object.
 */
CreateVocabularyRequest::CreateVocabularyRequest()
    : TranscribeRequest(new CreateVocabularyRequestPrivate(TranscribeRequest::CreateVocabularyAction, this))
{

}

/*!
 * \reimp
 */
bool CreateVocabularyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateVocabularyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateVocabularyRequest::response(QNetworkReply * const reply) const
{
    return new CreateVocabularyResponse(*this, reply);
}

/*!
 * \class QtAws::Transcribe::CreateVocabularyRequestPrivate
 * \brief The CreateVocabularyRequestPrivate class provides private implementation for CreateVocabularyRequest.
 * \internal
 *
 * \inmodule QtAwsTranscribe
 */

/*!
 * Constructs a CreateVocabularyRequestPrivate object for Transcribe \a action,
 * with public implementation \a q.
 */
CreateVocabularyRequestPrivate::CreateVocabularyRequestPrivate(
    const TranscribeRequest::Action action, CreateVocabularyRequest * const q)
    : TranscribeRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateVocabularyRequest
 * class' copy constructor.
 */
CreateVocabularyRequestPrivate::CreateVocabularyRequestPrivate(
    const CreateVocabularyRequestPrivate &other, CreateVocabularyRequest * const q)
    : TranscribeRequestPrivate(other, q)
{

}

} // namespace Transcribe
} // namespace QtAws
