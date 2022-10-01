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

#include "createvocabularyfilterrequest.h"
#include "createvocabularyfilterrequest_p.h"
#include "createvocabularyfilterresponse.h"
#include "transcriberequest_p.h"

namespace QtAws {
namespace Transcribe {

/*!
 * \class QtAws::Transcribe::CreateVocabularyFilterRequest
 * \brief The CreateVocabularyFilterRequest class provides an interface for Transcribe CreateVocabularyFilter requests.
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
 * \sa TranscribeClient::createVocabularyFilter
 */

/*!
 * Constructs a copy of \a other.
 */
CreateVocabularyFilterRequest::CreateVocabularyFilterRequest(const CreateVocabularyFilterRequest &other)
    : TranscribeRequest(new CreateVocabularyFilterRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateVocabularyFilterRequest object.
 */
CreateVocabularyFilterRequest::CreateVocabularyFilterRequest()
    : TranscribeRequest(new CreateVocabularyFilterRequestPrivate(TranscribeRequest::CreateVocabularyFilterAction, this))
{

}

/*!
 * \reimp
 */
bool CreateVocabularyFilterRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateVocabularyFilterResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateVocabularyFilterRequest::response(QNetworkReply * const reply) const
{
    return new CreateVocabularyFilterResponse(*this, reply);
}

/*!
 * \class QtAws::Transcribe::CreateVocabularyFilterRequestPrivate
 * \brief The CreateVocabularyFilterRequestPrivate class provides private implementation for CreateVocabularyFilterRequest.
 * \internal
 *
 * \inmodule QtAwsTranscribe
 */

/*!
 * Constructs a CreateVocabularyFilterRequestPrivate object for Transcribe \a action,
 * with public implementation \a q.
 */
CreateVocabularyFilterRequestPrivate::CreateVocabularyFilterRequestPrivate(
    const TranscribeRequest::Action action, CreateVocabularyFilterRequest * const q)
    : TranscribeRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateVocabularyFilterRequest
 * class' copy constructor.
 */
CreateVocabularyFilterRequestPrivate::CreateVocabularyFilterRequestPrivate(
    const CreateVocabularyFilterRequestPrivate &other, CreateVocabularyFilterRequest * const q)
    : TranscribeRequestPrivate(other, q)
{

}

} // namespace Transcribe
} // namespace QtAws
