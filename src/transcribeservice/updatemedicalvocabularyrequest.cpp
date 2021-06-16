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

#include "updatemedicalvocabularyrequest.h"
#include "updatemedicalvocabularyrequest_p.h"
#include "updatemedicalvocabularyresponse.h"
#include "transcribeservicerequest_p.h"

namespace QtAws {
namespace TranscribeService {

/*!
 * \class QtAws::TranscribeService::UpdateMedicalVocabularyRequest
 * \brief The UpdateMedicalVocabularyRequest class provides an interface for TranscribeService UpdateMedicalVocabulary requests.
 *
 * \inmodule QtAwsTranscribeService
 *
 *  Operations and objects for transcribing speech to
 *
 * \sa TranscribeServiceClient::updateMedicalVocabulary
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateMedicalVocabularyRequest::UpdateMedicalVocabularyRequest(const UpdateMedicalVocabularyRequest &other)
    : TranscribeServiceRequest(new UpdateMedicalVocabularyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateMedicalVocabularyRequest object.
 */
UpdateMedicalVocabularyRequest::UpdateMedicalVocabularyRequest()
    : TranscribeServiceRequest(new UpdateMedicalVocabularyRequestPrivate(TranscribeServiceRequest::UpdateMedicalVocabularyAction, this))
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
 * \class QtAws::TranscribeService::UpdateMedicalVocabularyRequestPrivate
 * \brief The UpdateMedicalVocabularyRequestPrivate class provides private implementation for UpdateMedicalVocabularyRequest.
 * \internal
 *
 * \inmodule QtAwsTranscribeService
 */

/*!
 * Constructs a UpdateMedicalVocabularyRequestPrivate object for TranscribeService \a action,
 * with public implementation \a q.
 */
UpdateMedicalVocabularyRequestPrivate::UpdateMedicalVocabularyRequestPrivate(
    const TranscribeServiceRequest::Action action, UpdateMedicalVocabularyRequest * const q)
    : TranscribeServiceRequestPrivate(action, q)
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
    : TranscribeServiceRequestPrivate(other, q)
{

}

} // namespace TranscribeService
} // namespace QtAws
