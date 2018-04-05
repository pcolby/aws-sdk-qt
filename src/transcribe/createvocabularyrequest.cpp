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

/**
 * @class  CreateVocabularyRequest
 *
 * @brief  Implements TranscribeService CreateVocabulary requests.
 *
 * @see    TranscribeServiceClient::createVocabulary
 */

/**
 * @brief  Constructs a new CreateVocabularyRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateVocabularyRequest::CreateVocabularyRequest(const CreateVocabularyRequest &other)
    : TranscribeServiceRequest(new CreateVocabularyRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateVocabularyRequest object.
 */
CreateVocabularyRequest::CreateVocabularyRequest()
    : TranscribeServiceRequest(new CreateVocabularyRequestPrivate(TranscribeServiceRequest::CreateVocabularyAction, this))
{

}

bool CreateVocabularyRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateVocabularyResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateVocabularyResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  TranscribeServiceClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateVocabularyRequest::response(QNetworkReply * const reply) const
{
    return new CreateVocabularyResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateVocabularyRequestPrivate
 *
 * @brief  Private implementation for CreateVocabularyRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateVocabularyRequestPrivate object.
 *
 * @param  action  TranscribeService action being performed.
 * @param  q       Pointer to this object's public CreateVocabularyRequest instance.
 */
CreateVocabularyRequestPrivate::CreateVocabularyRequestPrivate(
    const TranscribeServiceRequest::Action action, CreateVocabularyRequest * const q)
    : TranscribeServiceRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateVocabularyRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateVocabularyRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateVocabularyRequest instance.
 */
CreateVocabularyRequestPrivate::CreateVocabularyRequestPrivate(
    const CreateVocabularyRequestPrivate &other, CreateVocabularyRequest * const q)
    : TranscribeServiceRequestPrivate(other, q)
{

}

} // namespace TranscribeService
} // namespace QtAws
