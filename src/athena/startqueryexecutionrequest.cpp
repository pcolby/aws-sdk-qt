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

#include "startqueryexecutionrequest.h"
#include "startqueryexecutionrequest_p.h"
#include "startqueryexecutionresponse.h"
#include "athenarequest_p.h"

namespace QtAws {
namespace Athena {

/**
 * @class  StartQueryExecutionRequest
 *
 * @brief  Implements Athena StartQueryExecution requests.
 *
 * @see    AthenaClient::startQueryExecution
 */

/**
 * @brief  Constructs a new StartQueryExecutionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
StartQueryExecutionRequest::StartQueryExecutionRequest(const StartQueryExecutionRequest &other)
    : AthenaRequest(new StartQueryExecutionRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new StartQueryExecutionRequest object.
 */
StartQueryExecutionRequest::StartQueryExecutionRequest()
    : AthenaRequest(new StartQueryExecutionRequestPrivate(AthenaRequest::StartQueryExecutionAction, this))
{

}

bool StartQueryExecutionRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an StartQueryExecutionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An StartQueryExecutionResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  AthenaClient::send
 */
AwsAbstractResponse * StartQueryExecutionRequest::response(QNetworkReply * const reply) const
{
    return new StartQueryExecutionResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  StartQueryExecutionRequestPrivate
 *
 * @brief  Private implementation for StartQueryExecutionRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new StartQueryExecutionRequestPrivate object.
 *
 * @param  action  Athena action being performed.
 * @param  q       Pointer to this object's public StartQueryExecutionRequest instance.
 */
StartQueryExecutionRequestPrivate::StartQueryExecutionRequestPrivate(
    const AthenaRequest::Action action, StartQueryExecutionRequest * const q)
    : StartQueryExecutionPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new StartQueryExecutionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the StartQueryExecutionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public StartQueryExecutionRequest instance.
 */
StartQueryExecutionRequestPrivate::StartQueryExecutionRequestPrivate(
    const StartQueryExecutionRequestPrivate &other, StartQueryExecutionRequest * const q)
    : StartQueryExecutionPrivate(other, q)
{

}

} // namespace Athena
} // namespace QtAws
