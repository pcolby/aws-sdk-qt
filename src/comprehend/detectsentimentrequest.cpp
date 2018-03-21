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

#include "detectsentimentrequest.h"
#include "detectsentimentrequest_p.h"
#include "detectsentimentresponse.h"
#include "comprehendrequest_p.h"

namespace AWS {
namespace Comprehend {

/**
 * @class  DetectSentimentRequest
 *
 * @brief  Implements Comprehend DetectSentiment requests.
 *
 * @see    ComprehendClient::detectSentiment
 */

/**
 * @brief  Constructs a new DetectSentimentRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DetectSentimentRequest::DetectSentimentRequest(const DetectSentimentRequest &other)
    : ComprehendRequest(new DetectSentimentRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DetectSentimentRequest object.
 */
DetectSentimentRequest::DetectSentimentRequest()
    : ComprehendRequest(new DetectSentimentRequestPrivate(ComprehendRequest::DetectSentimentAction, this))
{

}

bool DetectSentimentRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DetectSentimentResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DetectSentimentResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ComprehendClient::send
 */
AwsAbstractResponse * DetectSentimentRequest::response(QNetworkReply * const reply) const
{
    return new DetectSentimentResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DetectSentimentRequestPrivate
 *
 * @brief  Private implementation for DetectSentimentRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DetectSentimentRequestPrivate object.
 *
 * @param  action  Comprehend action being performed.
 * @param  q       Pointer to this object's public DetectSentimentRequest instance.
 */
DetectSentimentRequestPrivate::DetectSentimentRequestPrivate(
    const ComprehendRequest::Action action, DetectSentimentRequest * const q)
    : DetectSentimentPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DetectSentimentRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DetectSentimentRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DetectSentimentRequest instance.
 */
DetectSentimentRequestPrivate::DetectSentimentRequestPrivate(
    const DetectSentimentRequestPrivate &other, DetectSentimentRequest * const q)
    : DetectSentimentPrivate(other, q)
{

}

} // namespace Comprehend
} // namespace AWS
