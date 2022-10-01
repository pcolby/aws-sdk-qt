/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

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
