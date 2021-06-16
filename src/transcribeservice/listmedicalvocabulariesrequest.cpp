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

#include "listmedicalvocabulariesrequest.h"
#include "listmedicalvocabulariesrequest_p.h"
#include "listmedicalvocabulariesresponse.h"
#include "transcribeservicerequest_p.h"

namespace QtAws {
namespace TranscribeService {

/*!
 * \class QtAws::TranscribeService::ListMedicalVocabulariesRequest
 * \brief The ListMedicalVocabulariesRequest class provides an interface for TranscribeService ListMedicalVocabularies requests.
 *
 * \inmodule QtAwsTranscribeService
 *
 *  Operations and objects for transcribing speech to
 *
 * \sa TranscribeServiceClient::listMedicalVocabularies
 */

/*!
 * Constructs a copy of \a other.
 */
ListMedicalVocabulariesRequest::ListMedicalVocabulariesRequest(const ListMedicalVocabulariesRequest &other)
    : TranscribeServiceRequest(new ListMedicalVocabulariesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListMedicalVocabulariesRequest object.
 */
ListMedicalVocabulariesRequest::ListMedicalVocabulariesRequest()
    : TranscribeServiceRequest(new ListMedicalVocabulariesRequestPrivate(TranscribeServiceRequest::ListMedicalVocabulariesAction, this))
{

}

/*!
 * \reimp
 */
bool ListMedicalVocabulariesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListMedicalVocabulariesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListMedicalVocabulariesRequest::response(QNetworkReply * const reply) const
{
    return new ListMedicalVocabulariesResponse(*this, reply);
}

/*!
 * \class QtAws::TranscribeService::ListMedicalVocabulariesRequestPrivate
 * \brief The ListMedicalVocabulariesRequestPrivate class provides private implementation for ListMedicalVocabulariesRequest.
 * \internal
 *
 * \inmodule QtAwsTranscribeService
 */

/*!
 * Constructs a ListMedicalVocabulariesRequestPrivate object for TranscribeService \a action,
 * with public implementation \a q.
 */
ListMedicalVocabulariesRequestPrivate::ListMedicalVocabulariesRequestPrivate(
    const TranscribeServiceRequest::Action action, ListMedicalVocabulariesRequest * const q)
    : TranscribeServiceRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListMedicalVocabulariesRequest
 * class' copy constructor.
 */
ListMedicalVocabulariesRequestPrivate::ListMedicalVocabulariesRequestPrivate(
    const ListMedicalVocabulariesRequestPrivate &other, ListMedicalVocabulariesRequest * const q)
    : TranscribeServiceRequestPrivate(other, q)
{

}

} // namespace TranscribeService
} // namespace QtAws
