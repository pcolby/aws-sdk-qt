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

#include "putfunctionconcurrencyrequest.h"
#include "putfunctionconcurrencyrequest_p.h"
#include "putfunctionconcurrencyresponse.h"
#include "lambdarequest_p.h"

namespace AWS {
namespace Lambda {

/**
 * @class  PutFunctionConcurrencyRequest
 *
 * @brief  Implements Lambda PutFunctionConcurrency requests.
 *
 * @see    LambdaClient::putFunctionConcurrency
 */

/**
 * @brief  Constructs a new PutFunctionConcurrencyResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
PutFunctionConcurrencyResponse::PutFunctionConcurrencyResponse(

/**
 * @brief  Constructs a new PutFunctionConcurrencyRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
PutFunctionConcurrencyRequest::PutFunctionConcurrencyRequest(const PutFunctionConcurrencyRequest &other)
    : LambdaRequest(new PutFunctionConcurrencyRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new PutFunctionConcurrencyRequest object.
 */
PutFunctionConcurrencyRequest::PutFunctionConcurrencyRequest()
    : LambdaRequest(new PutFunctionConcurrencyRequestPrivate(LambdaRequest::PutFunctionConcurrencyAction, this))
{

}

bool PutFunctionConcurrencyRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an PutFunctionConcurrencyResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An PutFunctionConcurrencyResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  LambdaClient::send
 */
AwsAbstractResponse * PutFunctionConcurrencyRequest::response(QNetworkReply * const reply) const
{
    return new PutFunctionConcurrencyResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  PutFunctionConcurrencyRequestPrivate
 *
 * @brief  Private implementation for PutFunctionConcurrencyRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PutFunctionConcurrencyRequestPrivate object.
 *
 * @param  action  Lambda action being performed.
 * @param  q       Pointer to this object's public PutFunctionConcurrencyRequest instance.
 */
PutFunctionConcurrencyRequestPrivate::PutFunctionConcurrencyRequestPrivate(
    const LambdaRequest::Action action, PutFunctionConcurrencyRequest * const q)
    : PutFunctionConcurrencyPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new PutFunctionConcurrencyRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the PutFunctionConcurrencyRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public PutFunctionConcurrencyRequest instance.
 */
PutFunctionConcurrencyRequestPrivate::PutFunctionConcurrencyRequestPrivate(
    const PutFunctionConcurrencyRequestPrivate &other, PutFunctionConcurrencyRequest * const q)
    : PutFunctionConcurrencyPrivate(other, q)
{

}
