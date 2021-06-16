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

#include "getvocabularyfilterrequest.h"
#include "getvocabularyfilterrequest_p.h"
#include "getvocabularyfilterresponse.h"
#include "transcribeservicerequest_p.h"

namespace QtAws {
namespace TranscribeService {

/*!
 * \class QtAws::TranscribeService::GetVocabularyFilterRequest
 * \brief The GetVocabularyFilterRequest class provides an interface for TranscribeService GetVocabularyFilter requests.
 *
 * \inmodule QtAwsTranscribeService
 *
 *  Operations and objects for transcribing speech to
 *
 * \sa TranscribeServiceClient::getVocabularyFilter
 */

/*!
 * Constructs a copy of \a other.
 */
GetVocabularyFilterRequest::GetVocabularyFilterRequest(const GetVocabularyFilterRequest &other)
    : TranscribeServiceRequest(new GetVocabularyFilterRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetVocabularyFilterRequest object.
 */
GetVocabularyFilterRequest::GetVocabularyFilterRequest()
    : TranscribeServiceRequest(new GetVocabularyFilterRequestPrivate(TranscribeServiceRequest::GetVocabularyFilterAction, this))
{

}

/*!
 * \reimp
 */
bool GetVocabularyFilterRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetVocabularyFilterResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetVocabularyFilterRequest::response(QNetworkReply * const reply) const
{
    return new GetVocabularyFilterResponse(*this, reply);
}

/*!
 * \class QtAws::TranscribeService::GetVocabularyFilterRequestPrivate
 * \brief The GetVocabularyFilterRequestPrivate class provides private implementation for GetVocabularyFilterRequest.
 * \internal
 *
 * \inmodule QtAwsTranscribeService
 */

/*!
 * Constructs a GetVocabularyFilterRequestPrivate object for TranscribeService \a action,
 * with public implementation \a q.
 */
GetVocabularyFilterRequestPrivate::GetVocabularyFilterRequestPrivate(
    const TranscribeServiceRequest::Action action, GetVocabularyFilterRequest * const q)
    : TranscribeServiceRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetVocabularyFilterRequest
 * class' copy constructor.
 */
GetVocabularyFilterRequestPrivate::GetVocabularyFilterRequestPrivate(
    const GetVocabularyFilterRequestPrivate &other, GetVocabularyFilterRequest * const q)
    : TranscribeServiceRequestPrivate(other, q)
{

}

} // namespace TranscribeService
} // namespace QtAws
