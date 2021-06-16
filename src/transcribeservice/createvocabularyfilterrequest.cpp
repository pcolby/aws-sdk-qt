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

#include "createvocabularyfilterrequest.h"
#include "createvocabularyfilterrequest_p.h"
#include "createvocabularyfilterresponse.h"
#include "transcribeservicerequest_p.h"

namespace QtAws {
namespace TranscribeService {

/*!
 * \class QtAws::TranscribeService::CreateVocabularyFilterRequest
 * \brief The CreateVocabularyFilterRequest class provides an interface for TranscribeService CreateVocabularyFilter requests.
 *
 * \inmodule QtAwsTranscribeService
 *
 *  Operations and objects for transcribing speech to
 *
 * \sa TranscribeServiceClient::createVocabularyFilter
 */

/*!
 * Constructs a copy of \a other.
 */
CreateVocabularyFilterRequest::CreateVocabularyFilterRequest(const CreateVocabularyFilterRequest &other)
    : TranscribeServiceRequest(new CreateVocabularyFilterRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateVocabularyFilterRequest object.
 */
CreateVocabularyFilterRequest::CreateVocabularyFilterRequest()
    : TranscribeServiceRequest(new CreateVocabularyFilterRequestPrivate(TranscribeServiceRequest::CreateVocabularyFilterAction, this))
{

}

/*!
 * \reimp
 */
bool CreateVocabularyFilterRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateVocabularyFilterResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateVocabularyFilterRequest::response(QNetworkReply * const reply) const
{
    return new CreateVocabularyFilterResponse(*this, reply);
}

/*!
 * \class QtAws::TranscribeService::CreateVocabularyFilterRequestPrivate
 * \brief The CreateVocabularyFilterRequestPrivate class provides private implementation for CreateVocabularyFilterRequest.
 * \internal
 *
 * \inmodule QtAwsTranscribeService
 */

/*!
 * Constructs a CreateVocabularyFilterRequestPrivate object for TranscribeService \a action,
 * with public implementation \a q.
 */
CreateVocabularyFilterRequestPrivate::CreateVocabularyFilterRequestPrivate(
    const TranscribeServiceRequest::Action action, CreateVocabularyFilterRequest * const q)
    : TranscribeServiceRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateVocabularyFilterRequest
 * class' copy constructor.
 */
CreateVocabularyFilterRequestPrivate::CreateVocabularyFilterRequestPrivate(
    const CreateVocabularyFilterRequestPrivate &other, CreateVocabularyFilterRequest * const q)
    : TranscribeServiceRequestPrivate(other, q)
{

}

} // namespace TranscribeService
} // namespace QtAws
