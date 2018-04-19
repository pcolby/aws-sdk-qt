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

#include "listvocabulariesrequest.h"
#include "listvocabulariesrequest_p.h"
#include "listvocabulariesresponse.h"
#include "transcribeservicerequest_p.h"

namespace QtAws {
namespace TranscribeService {

/*!
 * \class QtAws::TranscribeService::ListVocabulariesRequest
 * \brief The ListVocabulariesRequest class provides an interface for TranscribeService ListVocabularies requests.
 *
 * \inmodule QtAwsTranscribeService
 *
 *  Operations and objects for transcribing speech to
 *
 * \sa TranscribeServiceClient::listVocabularies
 */

/*!
 * Constructs a copy of \a other.
 */
ListVocabulariesRequest::ListVocabulariesRequest(const ListVocabulariesRequest &other)
    : TranscribeServiceRequest(new ListVocabulariesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListVocabulariesRequest object.
 */
ListVocabulariesRequest::ListVocabulariesRequest()
    : TranscribeServiceRequest(new ListVocabulariesRequestPrivate(TranscribeServiceRequest::ListVocabulariesAction, this))
{

}

/*!
 * \reimp
 */
bool ListVocabulariesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListVocabulariesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListVocabulariesRequest::response(QNetworkReply * const reply) const
{
    return new ListVocabulariesResponse(*this, reply);
}

/*!
 * \class QtAws::TranscribeService::ListVocabulariesRequestPrivate
 * \brief The ListVocabulariesRequestPrivate class provides private implementation for ListVocabulariesRequest.
 * \internal
 *
 * \inmodule QtAwsTranscribeService
 */

/*!
 *
 * Constructs a ListVocabulariesRequestPrivate object for TranscribeService \a action with,
 * public implementation \a q.
 */
ListVocabulariesRequestPrivate::ListVocabulariesRequestPrivate(
    const TranscribeServiceRequest::Action action, ListVocabulariesRequest * const q)
    : TranscribeServiceRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListVocabulariesRequest
 * class' copy constructor.
 */
ListVocabulariesRequestPrivate::ListVocabulariesRequestPrivate(
    const ListVocabulariesRequestPrivate &other, ListVocabulariesRequest * const q)
    : TranscribeServiceRequestPrivate(other, q)
{

}

} // namespace TranscribeService
} // namespace QtAws
