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

#include "evaluateexpressionrequest.h"
#include "evaluateexpressionrequest_p.h"
#include "evaluateexpressionresponse.h"
#include "datapipelinerequest_p.h"

namespace AWS {
namespace DataPipeline {

/**
 * @class  EvaluateExpressionRequest
 *
 * @brief  Implements DataPipeline EvaluateExpression requests.
 *
 * @see    DataPipelineClient::evaluateExpression
 */

/**
 * @brief  Constructs a new EvaluateExpressionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
EvaluateExpressionResponse::EvaluateExpressionResponse(

/**
 * @brief  Constructs a new EvaluateExpressionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
EvaluateExpressionRequest::EvaluateExpressionRequest(const EvaluateExpressionRequest &other)
    : DataPipelineRequest(new EvaluateExpressionRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new EvaluateExpressionRequest object.
 */
EvaluateExpressionRequest::EvaluateExpressionRequest()
    : DataPipelineRequest(new EvaluateExpressionRequestPrivate(DataPipelineRequest::EvaluateExpressionAction, this))
{

}

bool EvaluateExpressionRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an EvaluateExpressionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An EvaluateExpressionResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  DataPipelineClient::send
 */
AwsAbstractResponse * EvaluateExpressionRequest::response(QNetworkReply * const reply) const
{
    return new EvaluateExpressionResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  EvaluateExpressionRequestPrivate
 *
 * @brief  Private implementation for EvaluateExpressionRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new EvaluateExpressionRequestPrivate object.
 *
 * @param  action  DataPipeline action being performed.
 * @param  q       Pointer to this object's public EvaluateExpressionRequest instance.
 */
EvaluateExpressionRequestPrivate::EvaluateExpressionRequestPrivate(
    const DataPipelineRequest::Action action, EvaluateExpressionRequest * const q)
    : EvaluateExpressionPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new EvaluateExpressionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the EvaluateExpressionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public EvaluateExpressionRequest instance.
 */
EvaluateExpressionRequestPrivate::EvaluateExpressionRequestPrivate(
    const EvaluateExpressionRequestPrivate &other, EvaluateExpressionRequest * const q)
    : EvaluateExpressionPrivate(other, q)
{

}

} // namespace DataPipeline
} // namespace AWS
