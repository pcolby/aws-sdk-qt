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

#include "createmedicalvocabularyrequest.h"
#include "createmedicalvocabularyrequest_p.h"
#include "createmedicalvocabularyresponse.h"
#include "transcribeservicerequest_p.h"

namespace QtAws {
namespace TranscribeService {

/*!
 * \class QtAws::TranscribeService::CreateMedicalVocabularyRequest
 * \brief The CreateMedicalVocabularyRequest class provides an interface for TranscribeService CreateMedicalVocabulary requests.
 *
 * \inmodule QtAwsTranscribeService
 *
 *  Operations and objects for transcribing speech to
 *
 * \sa TranscribeServiceClient::createMedicalVocabulary
 */

/*!
 * Constructs a copy of \a other.
 */
CreateMedicalVocabularyRequest::CreateMedicalVocabularyRequest(const CreateMedicalVocabularyRequest &other)
    : TranscribeServiceRequest(new CreateMedicalVocabularyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateMedicalVocabularyRequest object.
 */
CreateMedicalVocabularyRequest::CreateMedicalVocabularyRequest()
    : TranscribeServiceRequest(new CreateMedicalVocabularyRequestPrivate(TranscribeServiceRequest::CreateMedicalVocabularyAction, this))
{

}

/*!
 * \reimp
 */
bool CreateMedicalVocabularyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateMedicalVocabularyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateMedicalVocabularyRequest::response(QNetworkReply * const reply) const
{
    return new CreateMedicalVocabularyResponse(*this, reply);
}

/*!
 * \class QtAws::TranscribeService::CreateMedicalVocabularyRequestPrivate
 * \brief The CreateMedicalVocabularyRequestPrivate class provides private implementation for CreateMedicalVocabularyRequest.
 * \internal
 *
 * \inmodule QtAwsTranscribeService
 */

/*!
 * Constructs a CreateMedicalVocabularyRequestPrivate object for TranscribeService \a action,
 * with public implementation \a q.
 */
CreateMedicalVocabularyRequestPrivate::CreateMedicalVocabularyRequestPrivate(
    const TranscribeServiceRequest::Action action, CreateMedicalVocabularyRequest * const q)
    : TranscribeServiceRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateMedicalVocabularyRequest
 * class' copy constructor.
 */
CreateMedicalVocabularyRequestPrivate::CreateMedicalVocabularyRequestPrivate(
    const CreateMedicalVocabularyRequestPrivate &other, CreateMedicalVocabularyRequest * const q)
    : TranscribeServiceRequestPrivate(other, q)
{

}

} // namespace TranscribeService
} // namespace QtAws
