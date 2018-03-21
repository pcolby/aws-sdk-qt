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

#include "deletefunctionrequest.h"
#include "deletefunctionrequest_p.h"
#include "deletefunctionresponse.h"
#include "lambdarequest_p.h"

namespace AWS {
namespace Lambda {

/**
 * @class  DeleteFunctionRequest
 *
 * @brief  Implements Lambda DeleteFunction requests.
 *
 * @see    LambdaClient::deleteFunction
 */

/**
 * @brief  Constructs a new DeleteFunctionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteFunctionResponse::DeleteFunctionResponse(

/**
 * @brief  Constructs a new DeleteFunctionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteFunctionRequest::DeleteFunctionRequest(const DeleteFunctionRequest &other)
    : LambdaRequest(new DeleteFunctionRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteFunctionRequest object.
 */
DeleteFunctionRequest::DeleteFunctionRequest()
    : LambdaRequest(new DeleteFunctionRequestPrivate(LambdaRequest::DeleteFunctionAction, this))
{

}

bool DeleteFunctionRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteFunctionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteFunctionResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  LambdaClient::send
 */
AwsAbstractResponse * DeleteFunctionRequest::response(QNetworkReply * const reply) const
{
    return new DeleteFunctionResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteFunctionRequestPrivate
 *
 * @brief  Private implementation for DeleteFunctionRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteFunctionRequestPrivate object.
 *
 * @param  action  Lambda action being performed.
 * @param  q       Pointer to this object's public DeleteFunctionRequest instance.
 */
DeleteFunctionRequestPrivate::DeleteFunctionRequestPrivate(
    const LambdaRequest::Action action, DeleteFunctionRequest * const q)
    : DeleteFunctionPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteFunctionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteFunctionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteFunctionRequest instance.
 */
DeleteFunctionRequestPrivate::DeleteFunctionRequestPrivate(
    const DeleteFunctionRequestPrivate &other, DeleteFunctionRequest * const q)
    : DeleteFunctionPrivate(other, q)
{

}
