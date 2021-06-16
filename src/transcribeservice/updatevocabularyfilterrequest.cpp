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

#include "updatevocabularyfilterrequest.h"
#include "updatevocabularyfilterrequest_p.h"
#include "updatevocabularyfilterresponse.h"
#include "transcribeservicerequest_p.h"

namespace QtAws {
namespace TranscribeService {

/*!
 * \class QtAws::TranscribeService::UpdateVocabularyFilterRequest
 * \brief The UpdateVocabularyFilterRequest class provides an interface for TranscribeService UpdateVocabularyFilter requests.
 *
 * \inmodule QtAwsTranscribeService
 *
 *  Operations and objects for transcribing speech to
 *
 * \sa TranscribeServiceClient::updateVocabularyFilter
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateVocabularyFilterRequest::UpdateVocabularyFilterRequest(const UpdateVocabularyFilterRequest &other)
    : TranscribeServiceRequest(new UpdateVocabularyFilterRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateVocabularyFilterRequest object.
 */
UpdateVocabularyFilterRequest::UpdateVocabularyFilterRequest()
    : TranscribeServiceRequest(new UpdateVocabularyFilterRequestPrivate(TranscribeServiceRequest::UpdateVocabularyFilterAction, this))
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
 * \class QtAws::TranscribeService::UpdateVocabularyFilterRequestPrivate
 * \brief The UpdateVocabularyFilterRequestPrivate class provides private implementation for UpdateVocabularyFilterRequest.
 * \internal
 *
 * \inmodule QtAwsTranscribeService
 */

/*!
 * Constructs a UpdateVocabularyFilterRequestPrivate object for TranscribeService \a action,
 * with public implementation \a q.
 */
UpdateVocabularyFilterRequestPrivate::UpdateVocabularyFilterRequestPrivate(
    const TranscribeServiceRequest::Action action, UpdateVocabularyFilterRequest * const q)
    : TranscribeServiceRequestPrivate(action, q)
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
    : TranscribeServiceRequestPrivate(other, q)
{

}

} // namespace TranscribeService
} // namespace QtAws
