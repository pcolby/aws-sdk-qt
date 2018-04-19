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

#include "getvocabularyrequest.h"
#include "getvocabularyrequest_p.h"
#include "getvocabularyresponse.h"
#include "transcribeservicerequest_p.h"

namespace QtAws {
namespace TranscribeService {

/*!
 * \class QtAws::TranscribeService::GetVocabularyRequest
 * \brief The GetVocabularyRequest class provides an interface for TranscribeService GetVocabulary requests.
 *
 * \inmodule QtAwsTranscribeService
 *
 *  Operations and objects for transcribing speech to
 *
 * \sa TranscribeServiceClient::getVocabulary
 */

/*!
 * Constructs a copy of \a other.
 */
GetVocabularyRequest::GetVocabularyRequest(const GetVocabularyRequest &other)
    : TranscribeServiceRequest(new GetVocabularyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetVocabularyRequest object.
 */
GetVocabularyRequest::GetVocabularyRequest()
    : TranscribeServiceRequest(new GetVocabularyRequestPrivate(TranscribeServiceRequest::GetVocabularyAction, this))
{

}

/*!
 * \reimp
 */
bool GetVocabularyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetVocabularyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetVocabularyRequest::response(QNetworkReply * const reply) const
{
    return new GetVocabularyResponse(*this, reply);
}

/*!
 * \class QtAws::TranscribeService::GetVocabularyRequestPrivate
 * \brief The GetVocabularyRequestPrivate class provides private implementation for GetVocabularyRequest.
 * \internal
 *
 * \inmodule QtAwsTranscribeService
 */

/*!
 *
 * Constructs a GetVocabularyRequestPrivate object for TranscribeService \a action with,
 * public implementation \a q.
 */
GetVocabularyRequestPrivate::GetVocabularyRequestPrivate(
    const TranscribeServiceRequest::Action action, GetVocabularyRequest * const q)
    : TranscribeServiceRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetVocabularyRequest
 * class' copy constructor.
 */
GetVocabularyRequestPrivate::GetVocabularyRequestPrivate(
    const GetVocabularyRequestPrivate &other, GetVocabularyRequest * const q)
    : TranscribeServiceRequestPrivate(other, q)
{

}

} // namespace TranscribeService
} // namespace QtAws
