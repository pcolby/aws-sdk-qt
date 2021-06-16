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

#include "deletevocabularyfilterrequest.h"
#include "deletevocabularyfilterrequest_p.h"
#include "deletevocabularyfilterresponse.h"
#include "transcribeservicerequest_p.h"

namespace QtAws {
namespace TranscribeService {

/*!
 * \class QtAws::TranscribeService::DeleteVocabularyFilterRequest
 * \brief The DeleteVocabularyFilterRequest class provides an interface for TranscribeService DeleteVocabularyFilter requests.
 *
 * \inmodule QtAwsTranscribeService
 *
 *  Operations and objects for transcribing speech to
 *
 * \sa TranscribeServiceClient::deleteVocabularyFilter
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteVocabularyFilterRequest::DeleteVocabularyFilterRequest(const DeleteVocabularyFilterRequest &other)
    : TranscribeServiceRequest(new DeleteVocabularyFilterRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteVocabularyFilterRequest object.
 */
DeleteVocabularyFilterRequest::DeleteVocabularyFilterRequest()
    : TranscribeServiceRequest(new DeleteVocabularyFilterRequestPrivate(TranscribeServiceRequest::DeleteVocabularyFilterAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteVocabularyFilterRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteVocabularyFilterResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteVocabularyFilterRequest::response(QNetworkReply * const reply) const
{
    return new DeleteVocabularyFilterResponse(*this, reply);
}

/*!
 * \class QtAws::TranscribeService::DeleteVocabularyFilterRequestPrivate
 * \brief The DeleteVocabularyFilterRequestPrivate class provides private implementation for DeleteVocabularyFilterRequest.
 * \internal
 *
 * \inmodule QtAwsTranscribeService
 */

/*!
 * Constructs a DeleteVocabularyFilterRequestPrivate object for TranscribeService \a action,
 * with public implementation \a q.
 */
DeleteVocabularyFilterRequestPrivate::DeleteVocabularyFilterRequestPrivate(
    const TranscribeServiceRequest::Action action, DeleteVocabularyFilterRequest * const q)
    : TranscribeServiceRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteVocabularyFilterRequest
 * class' copy constructor.
 */
DeleteVocabularyFilterRequestPrivate::DeleteVocabularyFilterRequestPrivate(
    const DeleteVocabularyFilterRequestPrivate &other, DeleteVocabularyFilterRequest * const q)
    : TranscribeServiceRequestPrivate(other, q)
{

}

} // namespace TranscribeService
} // namespace QtAws
