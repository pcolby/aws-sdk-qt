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

#include "deletemedicalvocabularyrequest.h"
#include "deletemedicalvocabularyrequest_p.h"
#include "deletemedicalvocabularyresponse.h"
#include "transcribeservicerequest_p.h"

namespace QtAws {
namespace TranscribeService {

/*!
 * \class QtAws::TranscribeService::DeleteMedicalVocabularyRequest
 * \brief The DeleteMedicalVocabularyRequest class provides an interface for TranscribeService DeleteMedicalVocabulary requests.
 *
 * \inmodule QtAwsTranscribeService
 *
 *  Operations and objects for transcribing speech to
 *
 * \sa TranscribeServiceClient::deleteMedicalVocabulary
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteMedicalVocabularyRequest::DeleteMedicalVocabularyRequest(const DeleteMedicalVocabularyRequest &other)
    : TranscribeServiceRequest(new DeleteMedicalVocabularyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteMedicalVocabularyRequest object.
 */
DeleteMedicalVocabularyRequest::DeleteMedicalVocabularyRequest()
    : TranscribeServiceRequest(new DeleteMedicalVocabularyRequestPrivate(TranscribeServiceRequest::DeleteMedicalVocabularyAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteMedicalVocabularyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteMedicalVocabularyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteMedicalVocabularyRequest::response(QNetworkReply * const reply) const
{
    return new DeleteMedicalVocabularyResponse(*this, reply);
}

/*!
 * \class QtAws::TranscribeService::DeleteMedicalVocabularyRequestPrivate
 * \brief The DeleteMedicalVocabularyRequestPrivate class provides private implementation for DeleteMedicalVocabularyRequest.
 * \internal
 *
 * \inmodule QtAwsTranscribeService
 */

/*!
 * Constructs a DeleteMedicalVocabularyRequestPrivate object for TranscribeService \a action,
 * with public implementation \a q.
 */
DeleteMedicalVocabularyRequestPrivate::DeleteMedicalVocabularyRequestPrivate(
    const TranscribeServiceRequest::Action action, DeleteMedicalVocabularyRequest * const q)
    : TranscribeServiceRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteMedicalVocabularyRequest
 * class' copy constructor.
 */
DeleteMedicalVocabularyRequestPrivate::DeleteMedicalVocabularyRequestPrivate(
    const DeleteMedicalVocabularyRequestPrivate &other, DeleteMedicalVocabularyRequest * const q)
    : TranscribeServiceRequestPrivate(other, q)
{

}

} // namespace TranscribeService
} // namespace QtAws
