/*
    Copyright 2013-2020 Paul Colby

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

#include "deletevocabularyrequest.h"
#include "deletevocabularyrequest_p.h"
#include "deletevocabularyresponse.h"
#include "transcribeservicerequest_p.h"

namespace QtAws {
namespace TranscribeService {

/*!
 * \class QtAws::TranscribeService::DeleteVocabularyRequest
 * \brief The DeleteVocabularyRequest class provides an interface for TranscribeService DeleteVocabulary requests.
 *
 * \inmodule QtAwsTranscribeService
 *
 *  Operations and objects for transcribing speech to
 *
 * \sa TranscribeServiceClient::deleteVocabulary
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteVocabularyRequest::DeleteVocabularyRequest(const DeleteVocabularyRequest &other)
    : TranscribeServiceRequest(new DeleteVocabularyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteVocabularyRequest object.
 */
DeleteVocabularyRequest::DeleteVocabularyRequest()
    : TranscribeServiceRequest(new DeleteVocabularyRequestPrivate(TranscribeServiceRequest::DeleteVocabularyAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteVocabularyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteVocabularyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteVocabularyRequest::response(QNetworkReply * const reply) const
{
    return new DeleteVocabularyResponse(*this, reply);
}

/*!
 * \class QtAws::TranscribeService::DeleteVocabularyRequestPrivate
 * \brief The DeleteVocabularyRequestPrivate class provides private implementation for DeleteVocabularyRequest.
 * \internal
 *
 * \inmodule QtAwsTranscribeService
 */

/*!
 * Constructs a DeleteVocabularyRequestPrivate object for TranscribeService \a action,
 * with public implementation \a q.
 */
DeleteVocabularyRequestPrivate::DeleteVocabularyRequestPrivate(
    const TranscribeServiceRequest::Action action, DeleteVocabularyRequest * const q)
    : TranscribeServiceRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteVocabularyRequest
 * class' copy constructor.
 */
DeleteVocabularyRequestPrivate::DeleteVocabularyRequestPrivate(
    const DeleteVocabularyRequestPrivate &other, DeleteVocabularyRequest * const q)
    : TranscribeServiceRequestPrivate(other, q)
{

}

} // namespace TranscribeService
} // namespace QtAws
