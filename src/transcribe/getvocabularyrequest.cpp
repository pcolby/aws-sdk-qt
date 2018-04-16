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
 *
 * \brief The GetVocabularyRequest class provides an interface for TranscribeService GetVocabulary requests.
 *
 * \ingroup TranscribeService
 *
 *  Operations and objects for transcribing speech to
 *
 * \sa TranscribeServiceClient::getVocabulary
 */

/*!
 * @brief  Constructs a new GetVocabularyRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetVocabularyRequest::GetVocabularyRequest(const GetVocabularyRequest &other)
    : TranscribeServiceRequest(new GetVocabularyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new GetVocabularyRequest object.
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
 * @brief  Construct an GetVocabularyResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetVocabularyResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  TranscribeServiceClient::send
 */
QtAws::Core::AwsAbstractResponse * GetVocabularyRequest::response(QNetworkReply * const reply) const
{
    return new GetVocabularyResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  GetVocabularyRequestPrivate
 *
 * @brief  Private implementation for GetVocabularyRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new GetVocabularyRequestPrivate object.
 *
 * @param  action  TranscribeService action being performed.
 * @param  q       Pointer to this object's public GetVocabularyRequest instance.
 */
GetVocabularyRequestPrivate::GetVocabularyRequestPrivate(
    const TranscribeServiceRequest::Action action, GetVocabularyRequest * const q)
    : TranscribeServiceRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new GetVocabularyRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetVocabularyRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetVocabularyRequest instance.
 */
GetVocabularyRequestPrivate::GetVocabularyRequestPrivate(
    const GetVocabularyRequestPrivate &other, GetVocabularyRequest * const q)
    : TranscribeServiceRequestPrivate(other, q)
{

}

} // namespace TranscribeService
} // namespace QtAws
