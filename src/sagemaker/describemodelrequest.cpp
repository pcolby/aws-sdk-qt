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

#include "describemodelrequest.h"
#include "describemodelrequest_p.h"
#include "describemodelresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/**
 * @class  DescribeModelRequest
 *
 * @brief  Implements SageMaker DescribeModel requests.
 *
 * @see    SageMakerClient::describeModel
 */

/**
 * @brief  Constructs a new DescribeModelRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeModelRequest::DescribeModelRequest(const DescribeModelRequest &other)
    : SageMakerRequest(new DescribeModelRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeModelRequest object.
 */
DescribeModelRequest::DescribeModelRequest()
    : SageMakerRequest(new DescribeModelRequestPrivate(SageMakerRequest::DescribeModelAction, this))
{

}

bool DescribeModelRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeModelResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeModelResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  SageMakerClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeModelRequest::response(QNetworkReply * const reply) const
{
    return new DescribeModelResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeModelRequestPrivate
 *
 * @brief  Private implementation for DescribeModelRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeModelRequestPrivate object.
 *
 * @param  action  SageMaker action being performed.
 * @param  q       Pointer to this object's public DescribeModelRequest instance.
 */
DescribeModelRequestPrivate::DescribeModelRequestPrivate(
    const SageMakerRequest::Action action, DescribeModelRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeModelRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeModelRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeModelRequest instance.
 */
DescribeModelRequestPrivate::DescribeModelRequestPrivate(
    const DescribeModelRequestPrivate &other, DescribeModelRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
