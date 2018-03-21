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

#include "deletefunctionconcurrencyrequest.h"
#include "deletefunctionconcurrencyrequest_p.h"
#include "deletefunctionconcurrencyresponse.h"
#include "lambdarequest_p.h"

namespace AWS {
namespace Lambda {

/**
 * @class  DeleteFunctionConcurrencyRequest
 *
 * @brief  Implements Lambda DeleteFunctionConcurrency requests.
 *
 * @see    LambdaClient::deleteFunctionConcurrency
 */

/**
 * @brief  Constructs a new DeleteFunctionConcurrencyResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteFunctionConcurrencyResponse::DeleteFunctionConcurrencyResponse(

/**
 * @brief  Constructs a new DeleteFunctionConcurrencyRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteFunctionConcurrencyRequest::DeleteFunctionConcurrencyRequest(const DeleteFunctionConcurrencyRequest &other)
    : LambdaRequest(new DeleteFunctionConcurrencyRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteFunctionConcurrencyRequest object.
 */
DeleteFunctionConcurrencyRequest::DeleteFunctionConcurrencyRequest()
    : LambdaRequest(new DeleteFunctionConcurrencyRequestPrivate(LambdaRequest::DeleteFunctionConcurrencyAction, this))
{

}

bool DeleteFunctionConcurrencyRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteFunctionConcurrencyResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteFunctionConcurrencyResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  LambdaClient::send
 */
AwsAbstractResponse * DeleteFunctionConcurrencyRequest::response(QNetworkReply * const reply) const
{
    return new DeleteFunctionConcurrencyResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteFunctionConcurrencyRequestPrivate
 *
 * @brief  Private implementation for DeleteFunctionConcurrencyRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteFunctionConcurrencyRequestPrivate object.
 *
 * @param  action  Lambda action being performed.
 * @param  q       Pointer to this object's public DeleteFunctionConcurrencyRequest instance.
 */
DeleteFunctionConcurrencyRequestPrivate::DeleteFunctionConcurrencyRequestPrivate(
    const LambdaRequest::Action action, DeleteFunctionConcurrencyRequest * const q)
    : DeleteFunctionConcurrencyPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteFunctionConcurrencyRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteFunctionConcurrencyRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteFunctionConcurrencyRequest instance.
 */
DeleteFunctionConcurrencyRequestPrivate::DeleteFunctionConcurrencyRequestPrivate(
    const DeleteFunctionConcurrencyRequestPrivate &other, DeleteFunctionConcurrencyRequest * const q)
    : DeleteFunctionConcurrencyPrivate(other, q)
{

}
