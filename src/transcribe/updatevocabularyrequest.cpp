/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "updatevocabularyrequest.h"
#include "updatevocabularyrequest_p.h"
#include "updatevocabularyresponse.h"
#include "transcribeservicerequest_p.h"

namespace QtAws {
namespace TranscribeService {

/*!
 * \class QtAws::TranscribeService::UpdateVocabularyRequest
 * \brief The UpdateVocabularyRequest class provides an interface for TranscribeService UpdateVocabulary requests.
 *
 * \inmodule QtAwsTranscribeService
 *
 *  Operations and objects for transcribing speech to
 *
 * \sa TranscribeServiceClient::updateVocabulary
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateVocabularyRequest::UpdateVocabularyRequest(const UpdateVocabularyRequest &other)
    : TranscribeServiceRequest(new UpdateVocabularyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateVocabularyRequest object.
 */
UpdateVocabularyRequest::UpdateVocabularyRequest()
    : TranscribeServiceRequest(new UpdateVocabularyRequestPrivate(TranscribeServiceRequest::UpdateVocabularyAction, this))
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
 * \class QtAws::TranscribeService::UpdateVocabularyRequestPrivate
 * \brief The UpdateVocabularyRequestPrivate class provides private implementation for UpdateVocabularyRequest.
 * \internal
 *
 * \inmodule QtAwsTranscribeService
 */

/*!
 * Constructs a UpdateVocabularyRequestPrivate object for TranscribeService \a action,
 * with public implementation \a q.
 */
UpdateVocabularyRequestPrivate::UpdateVocabularyRequestPrivate(
    const TranscribeServiceRequest::Action action, UpdateVocabularyRequest * const q)
    : TranscribeServiceRequestPrivate(action, q)
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
    : TranscribeServiceRequestPrivate(other, q)
{

}

} // namespace TranscribeService
} // namespace QtAws
