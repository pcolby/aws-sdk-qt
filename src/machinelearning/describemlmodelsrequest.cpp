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

#include "describemlmodelsrequest.h"
#include "describemlmodelsrequest_p.h"
#include "describemlmodelsresponse.h"
#include "machinelearningrequest_p.h"

namespace AWS {
namespace MachineLearning {

/**
 * @class  DescribeMLModelsRequest
 *
 * @brief  Implements MachineLearning DescribeMLModels requests.
 *
 * @see    MachineLearningClient::describeMLModels
 */

/**
 * @brief  Constructs a new DescribeMLModelsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeMLModelsResponse::DescribeMLModelsResponse(

/**
 * @brief  Constructs a new DescribeMLModelsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeMLModelsRequest::DescribeMLModelsRequest(const DescribeMLModelsRequest &other)
    : MachineLearningRequest(new DescribeMLModelsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeMLModelsRequest object.
 */
DescribeMLModelsRequest::DescribeMLModelsRequest()
    : MachineLearningRequest(new DescribeMLModelsRequestPrivate(MachineLearningRequest::DescribeMLModelsAction, this))
{

}

bool DescribeMLModelsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeMLModelsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeMLModelsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  MachineLearningClient::send
 */
AwsAbstractResponse * DescribeMLModelsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeMLModelsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeMLModelsRequestPrivate
 *
 * @brief  Private implementation for DescribeMLModelsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeMLModelsRequestPrivate object.
 *
 * @param  action  MachineLearning action being performed.
 * @param  q       Pointer to this object's public DescribeMLModelsRequest instance.
 */
DescribeMLModelsRequestPrivate::DescribeMLModelsRequestPrivate(
    const MachineLearningRequest::Action action, DescribeMLModelsRequest * const q)
    : DescribeMLModelsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeMLModelsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeMLModelsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeMLModelsRequest instance.
 */
DescribeMLModelsRequestPrivate::DescribeMLModelsRequestPrivate(
    const DescribeMLModelsRequestPrivate &other, DescribeMLModelsRequest * const q)
    : DescribeMLModelsPrivate(other, q)
{

}

} // namespace MachineLearning
} // namespace AWS
