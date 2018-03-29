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

#include "batchdetectkeyphrasesrequest.h"
#include "batchdetectkeyphrasesrequest_p.h"
#include "batchdetectkeyphrasesresponse.h"
#include "comprehendrequest_p.h"

namespace AWS {
namespace Comprehend {

/**
 * @class  BatchDetectKeyPhrasesRequest
 *
 * @brief  Implements Comprehend BatchDetectKeyPhrases requests.
 *
 * @see    ComprehendClient::batchDetectKeyPhrases
 */

/**
 * @brief  Constructs a new BatchDetectKeyPhrasesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
BatchDetectKeyPhrasesRequest::BatchDetectKeyPhrasesRequest(const BatchDetectKeyPhrasesRequest &other)
    : ComprehendRequest(new BatchDetectKeyPhrasesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new BatchDetectKeyPhrasesRequest object.
 */
BatchDetectKeyPhrasesRequest::BatchDetectKeyPhrasesRequest()
    : ComprehendRequest(new BatchDetectKeyPhrasesRequestPrivate(ComprehendRequest::BatchDetectKeyPhrasesAction, this))
{

}

bool BatchDetectKeyPhrasesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an BatchDetectKeyPhrasesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An BatchDetectKeyPhrasesResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ComprehendClient::send
 */
AwsAbstractResponse * BatchDetectKeyPhrasesRequest::response(QNetworkReply * const reply) const
{
    return new BatchDetectKeyPhrasesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  BatchDetectKeyPhrasesRequestPrivate
 *
 * @brief  Private implementation for BatchDetectKeyPhrasesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new BatchDetectKeyPhrasesRequestPrivate object.
 *
 * @param  action  Comprehend action being performed.
 * @param  q       Pointer to this object's public BatchDetectKeyPhrasesRequest instance.
 */
BatchDetectKeyPhrasesRequestPrivate::BatchDetectKeyPhrasesRequestPrivate(
    const ComprehendRequest::Action action, BatchDetectKeyPhrasesRequest * const q)
    : BatchDetectKeyPhrasesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new BatchDetectKeyPhrasesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the BatchDetectKeyPhrasesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public BatchDetectKeyPhrasesRequest instance.
 */
BatchDetectKeyPhrasesRequestPrivate::BatchDetectKeyPhrasesRequestPrivate(
    const BatchDetectKeyPhrasesRequestPrivate &other, BatchDetectKeyPhrasesRequest * const q)
    : BatchDetectKeyPhrasesPrivate(other, q)
{

}

} // namespace Comprehend
} // namespace AWS
