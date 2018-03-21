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

#include "describeevaluationsrequest.h"
#include "describeevaluationsrequest_p.h"
#include "describeevaluationsresponse.h"
#include "machinelearningrequest_p.h"

namespace AWS {
namespace MachineLearning {

/**
 * @class  DescribeEvaluationsRequest
 *
 * @brief  Implements MachineLearning DescribeEvaluations requests.
 *
 * @see    MachineLearningClient::describeEvaluations
 */

/**
 * @brief  Constructs a new DescribeEvaluationsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeEvaluationsResponse::DescribeEvaluationsResponse(

/**
 * @brief  Constructs a new DescribeEvaluationsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeEvaluationsRequest::DescribeEvaluationsRequest(const DescribeEvaluationsRequest &other)
    : MachineLearningRequest(new DescribeEvaluationsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeEvaluationsRequest object.
 */
DescribeEvaluationsRequest::DescribeEvaluationsRequest()
    : MachineLearningRequest(new DescribeEvaluationsRequestPrivate(MachineLearningRequest::DescribeEvaluationsAction, this))
{

}

bool DescribeEvaluationsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeEvaluationsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeEvaluationsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  MachineLearningClient::send
 */
AwsAbstractResponse * DescribeEvaluationsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeEvaluationsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeEvaluationsRequestPrivate
 *
 * @brief  Private implementation for DescribeEvaluationsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeEvaluationsRequestPrivate object.
 *
 * @param  action  MachineLearning action being performed.
 * @param  q       Pointer to this object's public DescribeEvaluationsRequest instance.
 */
DescribeEvaluationsRequestPrivate::DescribeEvaluationsRequestPrivate(
    const MachineLearningRequest::Action action, DescribeEvaluationsRequest * const q)
    : DescribeEvaluationsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeEvaluationsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeEvaluationsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeEvaluationsRequest instance.
 */
DescribeEvaluationsRequestPrivate::DescribeEvaluationsRequestPrivate(
    const DescribeEvaluationsRequestPrivate &other, DescribeEvaluationsRequest * const q)
    : DescribeEvaluationsPrivate(other, q)
{

}
