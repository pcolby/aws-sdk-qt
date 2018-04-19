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

#include "createvocabularyrequest.h"
#include "createvocabularyrequest_p.h"
#include "createvocabularyresponse.h"
#include "transcribeservicerequest_p.h"

namespace QtAws {
namespace TranscribeService {

/*!
 * \class QtAws::TranscribeService::CreateVocabularyRequest
 * \brief The CreateVocabularyRequest class provides an interface for TranscribeService CreateVocabulary requests.
 *
 * \inmodule QtAwsTranscribeService
 *
 *  Operations and objects for transcribing speech to
 *
 * \sa TranscribeServiceClient::createVocabulary
 */

/*!
 * Constructs a copy of \a other.
 */
CreateVocabularyRequest::CreateVocabularyRequest(const CreateVocabularyRequest &other)
    : TranscribeServiceRequest(new CreateVocabularyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateVocabularyRequest object.
 */
CreateVocabularyRequest::CreateVocabularyRequest()
    : TranscribeServiceRequest(new CreateVocabularyRequestPrivate(TranscribeServiceRequest::CreateVocabularyAction, this))
{

}

/*!
 * \reimp
 */
bool CreateVocabularyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateVocabularyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateVocabularyRequest::response(QNetworkReply * const reply) const
{
    return new CreateVocabularyResponse(*this, reply);
}

/*!
 * \class QtAws::TranscribeService::CreateVocabularyRequestPrivate
 * \brief The CreateVocabularyRequestPrivate class provides private implementation for CreateVocabularyRequest.
 * \internal
 *
 * \inmodule QtAwsTranscribeService
 */

/*!
 *
 * Constructs a CreateVocabularyRequestPrivate object for TranscribeService \a action with,
 * public implementation \a q.
 */
CreateVocabularyRequestPrivate::CreateVocabularyRequestPrivate(
    const TranscribeServiceRequest::Action action, CreateVocabularyRequest * const q)
    : TranscribeServiceRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateVocabularyRequest
 * class' copy constructor.
 */
CreateVocabularyRequestPrivate::CreateVocabularyRequestPrivate(
    const CreateVocabularyRequestPrivate &other, CreateVocabularyRequest * const q)
    : TranscribeServiceRequestPrivate(other, q)
{

}

} // namespace TranscribeService
} // namespace QtAws
