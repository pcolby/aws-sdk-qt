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

#include "describepipelinesrequest.h"
#include "describepipelinesrequest_p.h"
#include "describepipelinesresponse.h"
#include "datapipelinerequest_p.h"

namespace QtAws {
namespace DataPipeline {

/**
 * @class  DescribePipelinesRequest
 *
 * @brief  Implements DataPipeline DescribePipelines requests.
 *
 * @see    DataPipelineClient::describePipelines
 */

/**
 * @brief  Constructs a new DescribePipelinesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribePipelinesRequest::DescribePipelinesRequest(const DescribePipelinesRequest &other)
    : DataPipelineRequest(new DescribePipelinesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribePipelinesRequest object.
 */
DescribePipelinesRequest::DescribePipelinesRequest()
    : DataPipelineRequest(new DescribePipelinesRequestPrivate(DataPipelineRequest::DescribePipelinesAction, this))
{

}

bool DescribePipelinesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribePipelinesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribePipelinesResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  DataPipelineClient::send
 */
AwsAbstractResponse * DescribePipelinesRequest::response(QNetworkReply * const reply) const
{
    return new DescribePipelinesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribePipelinesRequestPrivate
 *
 * @brief  Private implementation for DescribePipelinesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribePipelinesRequestPrivate object.
 *
 * @param  action  DataPipeline action being performed.
 * @param  q       Pointer to this object's public DescribePipelinesRequest instance.
 */
DescribePipelinesRequestPrivate::DescribePipelinesRequestPrivate(
    const DataPipelineRequest::Action action, DescribePipelinesRequest * const q)
    : DescribePipelinesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribePipelinesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribePipelinesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribePipelinesRequest instance.
 */
DescribePipelinesRequestPrivate::DescribePipelinesRequestPrivate(
    const DescribePipelinesRequestPrivate &other, DescribePipelinesRequest * const q)
    : DescribePipelinesPrivate(other, q)
{

}

} // namespace DataPipeline
} // namespace QtAws
