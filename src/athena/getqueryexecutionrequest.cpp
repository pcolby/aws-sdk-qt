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

#include "getqueryexecutionrequest.h"
#include "getqueryexecutionrequest_p.h"
#include "getqueryexecutionresponse.h"
#include "athenarequest_p.h"

namespace QtAws {
namespace Athena {

/**
 * @class  GetQueryExecutionRequest
 *
 * @brief  Implements Athena GetQueryExecution requests.
 *
 * @see    AthenaClient::getQueryExecution
 */

/**
 * @brief  Constructs a new GetQueryExecutionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetQueryExecutionRequest::GetQueryExecutionRequest(const GetQueryExecutionRequest &other)
    : AthenaRequest(new GetQueryExecutionRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetQueryExecutionRequest object.
 */
GetQueryExecutionRequest::GetQueryExecutionRequest()
    : AthenaRequest(new GetQueryExecutionRequestPrivate(AthenaRequest::GetQueryExecutionAction, this))
{

}

bool GetQueryExecutionRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetQueryExecutionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetQueryExecutionResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  AthenaClient::send
 */
AwsAbstractResponse * GetQueryExecutionRequest::response(QNetworkReply * const reply) const
{
    return new GetQueryExecutionResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetQueryExecutionRequestPrivate
 *
 * @brief  Private implementation for GetQueryExecutionRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetQueryExecutionRequestPrivate object.
 *
 * @param  action  Athena action being performed.
 * @param  q       Pointer to this object's public GetQueryExecutionRequest instance.
 */
GetQueryExecutionRequestPrivate::GetQueryExecutionRequestPrivate(
    const AthenaRequest::Action action, GetQueryExecutionRequest * const q)
    : GetQueryExecutionPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetQueryExecutionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetQueryExecutionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetQueryExecutionRequest instance.
 */
GetQueryExecutionRequestPrivate::GetQueryExecutionRequestPrivate(
    const GetQueryExecutionRequestPrivate &other, GetQueryExecutionRequest * const q)
    : GetQueryExecutionPrivate(other, q)
{

}

} // namespace Athena
} // namespace QtAws
