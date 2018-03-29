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

#include "describestreamprocessorrequest.h"
#include "describestreamprocessorrequest_p.h"
#include "describestreamprocessorresponse.h"
#include "rekognitionrequest_p.h"

namespace QtAws {
namespace Rekognition {

/**
 * @class  DescribeStreamProcessorRequest
 *
 * @brief  Implements Rekognition DescribeStreamProcessor requests.
 *
 * @see    RekognitionClient::describeStreamProcessor
 */

/**
 * @brief  Constructs a new DescribeStreamProcessorRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeStreamProcessorRequest::DescribeStreamProcessorRequest(const DescribeStreamProcessorRequest &other)
    : RekognitionRequest(new DescribeStreamProcessorRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeStreamProcessorRequest object.
 */
DescribeStreamProcessorRequest::DescribeStreamProcessorRequest()
    : RekognitionRequest(new DescribeStreamProcessorRequestPrivate(RekognitionRequest::DescribeStreamProcessorAction, this))
{

}

bool DescribeStreamProcessorRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeStreamProcessorResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeStreamProcessorResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  RekognitionClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeStreamProcessorRequest::response(QNetworkReply * const reply) const
{
    return new DescribeStreamProcessorResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeStreamProcessorRequestPrivate
 *
 * @brief  Private implementation for DescribeStreamProcessorRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeStreamProcessorRequestPrivate object.
 *
 * @param  action  Rekognition action being performed.
 * @param  q       Pointer to this object's public DescribeStreamProcessorRequest instance.
 */
DescribeStreamProcessorRequestPrivate::DescribeStreamProcessorRequestPrivate(
    const RekognitionRequest::Action action, DescribeStreamProcessorRequest * const q)
    : DescribeStreamProcessorPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeStreamProcessorRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeStreamProcessorRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeStreamProcessorRequest instance.
 */
DescribeStreamProcessorRequestPrivate::DescribeStreamProcessorRequestPrivate(
    const DescribeStreamProcessorRequestPrivate &other, DescribeStreamProcessorRequest * const q)
    : DescribeStreamProcessorPrivate(other, q)
{

}

} // namespace Rekognition
} // namespace QtAws
