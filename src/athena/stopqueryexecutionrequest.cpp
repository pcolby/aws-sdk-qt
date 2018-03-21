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

#include "stopqueryexecutionrequest.h"
#include "stopqueryexecutionrequest_p.h"
#include "stopqueryexecutionresponse.h"
#include "athenarequest_p.h"

namespace AWS {
namespace Athena {

/**
 * @class  StopQueryExecutionRequest
 *
 * @brief  Implements Athena StopQueryExecution requests.
 *
 * @see    AthenaClient::stopQueryExecution
 */

/**
 * @brief  Constructs a new StopQueryExecutionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
StopQueryExecutionResponse::StopQueryExecutionResponse(

/**
 * @brief  Constructs a new StopQueryExecutionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
StopQueryExecutionRequest::StopQueryExecutionRequest(const StopQueryExecutionRequest &other)
    : AthenaRequest(new StopQueryExecutionRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new StopQueryExecutionRequest object.
 */
StopQueryExecutionRequest::StopQueryExecutionRequest()
    : AthenaRequest(new StopQueryExecutionRequestPrivate(AthenaRequest::StopQueryExecutionAction, this))
{

}

bool StopQueryExecutionRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an StopQueryExecutionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An StopQueryExecutionResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  AthenaClient::send
 */
AwsAbstractResponse * StopQueryExecutionRequest::response(QNetworkReply * const reply) const
{
    return new StopQueryExecutionResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  StopQueryExecutionRequestPrivate
 *
 * @brief  Private implementation for StopQueryExecutionRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new StopQueryExecutionRequestPrivate object.
 *
 * @param  action  Athena action being performed.
 * @param  q       Pointer to this object's public StopQueryExecutionRequest instance.
 */
StopQueryExecutionRequestPrivate::StopQueryExecutionRequestPrivate(
    const AthenaRequest::Action action, StopQueryExecutionRequest * const q)
    : StopQueryExecutionPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new StopQueryExecutionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the StopQueryExecutionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public StopQueryExecutionRequest instance.
 */
StopQueryExecutionRequestPrivate::StopQueryExecutionRequestPrivate(
    const StopQueryExecutionRequestPrivate &other, StopQueryExecutionRequest * const q)
    : StopQueryExecutionPrivate(other, q)
{

}

} // namespace Athena
} // namespace AWS
