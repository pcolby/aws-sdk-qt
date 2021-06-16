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

#include "getmedicalvocabularyrequest.h"
#include "getmedicalvocabularyrequest_p.h"
#include "getmedicalvocabularyresponse.h"
#include "transcribeservicerequest_p.h"

namespace QtAws {
namespace TranscribeService {

/*!
 * \class QtAws::TranscribeService::GetMedicalVocabularyRequest
 * \brief The GetMedicalVocabularyRequest class provides an interface for TranscribeService GetMedicalVocabulary requests.
 *
 * \inmodule QtAwsTranscribeService
 *
 *  Operations and objects for transcribing speech to
 *
 * \sa TranscribeServiceClient::getMedicalVocabulary
 */

/*!
 * Constructs a copy of \a other.
 */
GetMedicalVocabularyRequest::GetMedicalVocabularyRequest(const GetMedicalVocabularyRequest &other)
    : TranscribeServiceRequest(new GetMedicalVocabularyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetMedicalVocabularyRequest object.
 */
GetMedicalVocabularyRequest::GetMedicalVocabularyRequest()
    : TranscribeServiceRequest(new GetMedicalVocabularyRequestPrivate(TranscribeServiceRequest::GetMedicalVocabularyAction, this))
{

}

/*!
 * \reimp
 */
bool GetMedicalVocabularyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetMedicalVocabularyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetMedicalVocabularyRequest::response(QNetworkReply * const reply) const
{
    return new GetMedicalVocabularyResponse(*this, reply);
}

/*!
 * \class QtAws::TranscribeService::GetMedicalVocabularyRequestPrivate
 * \brief The GetMedicalVocabularyRequestPrivate class provides private implementation for GetMedicalVocabularyRequest.
 * \internal
 *
 * \inmodule QtAwsTranscribeService
 */

/*!
 * Constructs a GetMedicalVocabularyRequestPrivate object for TranscribeService \a action,
 * with public implementation \a q.
 */
GetMedicalVocabularyRequestPrivate::GetMedicalVocabularyRequestPrivate(
    const TranscribeServiceRequest::Action action, GetMedicalVocabularyRequest * const q)
    : TranscribeServiceRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetMedicalVocabularyRequest
 * class' copy constructor.
 */
GetMedicalVocabularyRequestPrivate::GetMedicalVocabularyRequestPrivate(
    const GetMedicalVocabularyRequestPrivate &other, GetMedicalVocabularyRequest * const q)
    : TranscribeServiceRequestPrivate(other, q)
{

}

} // namespace TranscribeService
} // namespace QtAws
