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

#include "listvocabularyfiltersrequest.h"
#include "listvocabularyfiltersrequest_p.h"
#include "listvocabularyfiltersresponse.h"
#include "transcribeservicerequest_p.h"

namespace QtAws {
namespace TranscribeService {

/*!
 * \class QtAws::TranscribeService::ListVocabularyFiltersRequest
 * \brief The ListVocabularyFiltersRequest class provides an interface for TranscribeService ListVocabularyFilters requests.
 *
 * \inmodule QtAwsTranscribeService
 *
 *  Operations and objects for transcribing speech to
 *
 * \sa TranscribeServiceClient::listVocabularyFilters
 */

/*!
 * Constructs a copy of \a other.
 */
ListVocabularyFiltersRequest::ListVocabularyFiltersRequest(const ListVocabularyFiltersRequest &other)
    : TranscribeServiceRequest(new ListVocabularyFiltersRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListVocabularyFiltersRequest object.
 */
ListVocabularyFiltersRequest::ListVocabularyFiltersRequest()
    : TranscribeServiceRequest(new ListVocabularyFiltersRequestPrivate(TranscribeServiceRequest::ListVocabularyFiltersAction, this))
{

}

/*!
 * \reimp
 */
bool ListVocabularyFiltersRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListVocabularyFiltersResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListVocabularyFiltersRequest::response(QNetworkReply * const reply) const
{
    return new ListVocabularyFiltersResponse(*this, reply);
}

/*!
 * \class QtAws::TranscribeService::ListVocabularyFiltersRequestPrivate
 * \brief The ListVocabularyFiltersRequestPrivate class provides private implementation for ListVocabularyFiltersRequest.
 * \internal
 *
 * \inmodule QtAwsTranscribeService
 */

/*!
 * Constructs a ListVocabularyFiltersRequestPrivate object for TranscribeService \a action,
 * with public implementation \a q.
 */
ListVocabularyFiltersRequestPrivate::ListVocabularyFiltersRequestPrivate(
    const TranscribeServiceRequest::Action action, ListVocabularyFiltersRequest * const q)
    : TranscribeServiceRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListVocabularyFiltersRequest
 * class' copy constructor.
 */
ListVocabularyFiltersRequestPrivate::ListVocabularyFiltersRequestPrivate(
    const ListVocabularyFiltersRequestPrivate &other, ListVocabularyFiltersRequest * const q)
    : TranscribeServiceRequestPrivate(other, q)
{

}

} // namespace TranscribeService
} // namespace QtAws
