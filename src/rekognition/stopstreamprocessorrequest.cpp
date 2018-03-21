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

#include "stopstreamprocessorrequest.h"
#include "stopstreamprocessorrequest_p.h"
#include "stopstreamprocessorresponse.h"
#include "rekognitionrequest_p.h"

namespace AWS {
namespace Rekognition {

/**
 * @class  StopStreamProcessorRequest
 *
 * @brief  Implements Rekognition StopStreamProcessor requests.
 *
 * @see    RekognitionClient::stopStreamProcessor
 */

/**
 * @brief  Constructs a new StopStreamProcessorRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
StopStreamProcessorRequest::StopStreamProcessorRequest(const StopStreamProcessorRequest &other)
    : RekognitionRequest(new StopStreamProcessorRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new StopStreamProcessorRequest object.
 */
StopStreamProcessorRequest::StopStreamProcessorRequest()
    : RekognitionRequest(new StopStreamProcessorRequestPrivate(RekognitionRequest::StopStreamProcessorAction, this))
{

}

bool StopStreamProcessorRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an StopStreamProcessorResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An StopStreamProcessorResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  RekognitionClient::send
 */
AwsAbstractResponse * StopStreamProcessorRequest::response(QNetworkReply * const reply) const
{
    return new StopStreamProcessorResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  StopStreamProcessorRequestPrivate
 *
 * @brief  Private implementation for StopStreamProcessorRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new StopStreamProcessorRequestPrivate object.
 *
 * @param  action  Rekognition action being performed.
 * @param  q       Pointer to this object's public StopStreamProcessorRequest instance.
 */
StopStreamProcessorRequestPrivate::StopStreamProcessorRequestPrivate(
    const RekognitionRequest::Action action, StopStreamProcessorRequest * const q)
    : StopStreamProcessorPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new StopStreamProcessorRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the StopStreamProcessorRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public StopStreamProcessorRequest instance.
 */
StopStreamProcessorRequestPrivate::StopStreamProcessorRequestPrivate(
    const StopStreamProcessorRequestPrivate &other, StopStreamProcessorRequest * const q)
    : StopStreamProcessorPrivate(other, q)
{

}

} // namespace Rekognition
} // namespace AWS
