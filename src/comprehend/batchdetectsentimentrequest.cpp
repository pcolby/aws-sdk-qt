/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "batchdetectsentimentrequest.h"
#include "batchdetectsentimentrequest_p.h"
#include "batchdetectsentimentresponse.h"
#include "comprehendrequest_p.h"

namespace AWS {
namespace Comprehend {

/**
 * @class  BatchDetectSentimentRequest
 *
 * @brief  Implements Comprehend BatchDetectSentiment requests.
 *
 * @see    ComprehendClient::batchDetectSentiment
 */

/**
 * @brief  Constructs a new BatchDetectSentimentResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
BatchDetectSentimentResponse::BatchDetectSentimentResponse(

/**
 * @brief  Constructs a new BatchDetectSentimentRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
BatchDetectSentimentRequest::BatchDetectSentimentRequest(const BatchDetectSentimentRequest &other)
    : ComprehendRequest(new BatchDetectSentimentRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new BatchDetectSentimentRequest object.
 */
BatchDetectSentimentRequest::BatchDetectSentimentRequest()
    : ComprehendRequest(new BatchDetectSentimentRequestPrivate(ComprehendRequest::BatchDetectSentimentAction, this))
{

}

bool BatchDetectSentimentRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an BatchDetectSentimentResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An BatchDetectSentimentResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ComprehendClient::send
 */
AwsAbstractResponse * BatchDetectSentimentRequest::response(QNetworkReply * const reply) const
{
    return new BatchDetectSentimentResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  BatchDetectSentimentRequestPrivate
 *
 * @brief  Private implementation for BatchDetectSentimentRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new BatchDetectSentimentRequestPrivate object.
 *
 * @param  action  Comprehend action being performed.
 * @param  q       Pointer to this object's public BatchDetectSentimentRequest instance.
 */
BatchDetectSentimentRequestPrivate::BatchDetectSentimentRequestPrivate(
    const ComprehendRequest::Action action, BatchDetectSentimentRequest * const q)
    : BatchDetectSentimentPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new BatchDetectSentimentRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the BatchDetectSentimentRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public BatchDetectSentimentRequest instance.
 */
BatchDetectSentimentRequestPrivate::BatchDetectSentimentRequestPrivate(
    const BatchDetectSentimentRequestPrivate &other, BatchDetectSentimentRequest * const q)
    : BatchDetectSentimentPrivate(other, q)
{

}
