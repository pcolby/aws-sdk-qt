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

#include "deletevocabularyrequest.h"
#include "deletevocabularyrequest_p.h"
#include "deletevocabularyresponse.h"
#include "transcribeservicerequest_p.h"

namespace QtAws {
namespace TranscribeService {

/**
 * @class  DeleteVocabularyRequest
 *
 * @brief  Implements TranscribeService DeleteVocabulary requests.
 *
 * @see    TranscribeServiceClient::deleteVocabulary
 */

/**
 * @brief  Constructs a new DeleteVocabularyRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteVocabularyRequest::DeleteVocabularyRequest(const DeleteVocabularyRequest &other)
    : TranscribeServiceRequest(new DeleteVocabularyRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteVocabularyRequest object.
 */
DeleteVocabularyRequest::DeleteVocabularyRequest()
    : TranscribeServiceRequest(new DeleteVocabularyRequestPrivate(TranscribeServiceRequest::DeleteVocabularyAction, this))
{

}

bool DeleteVocabularyRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteVocabularyResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteVocabularyResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  TranscribeServiceClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteVocabularyRequest::response(QNetworkReply * const reply) const
{
    return new DeleteVocabularyResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteVocabularyRequestPrivate
 *
 * @brief  Private implementation for DeleteVocabularyRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteVocabularyRequestPrivate object.
 *
 * @param  action  TranscribeService action being performed.
 * @param  q       Pointer to this object's public DeleteVocabularyRequest instance.
 */
DeleteVocabularyRequestPrivate::DeleteVocabularyRequestPrivate(
    const TranscribeServiceRequest::Action action, DeleteVocabularyRequest * const q)
    : TranscribeServiceRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteVocabularyRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteVocabularyRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteVocabularyRequest instance.
 */
DeleteVocabularyRequestPrivate::DeleteVocabularyRequestPrivate(
    const DeleteVocabularyRequestPrivate &other, DeleteVocabularyRequest * const q)
    : TranscribeServiceRequestPrivate(other, q)
{

}

} // namespace TranscribeService
} // namespace QtAws
