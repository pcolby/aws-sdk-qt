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

#include "getfunctionrequest.h"
#include "getfunctionrequest_p.h"
#include "getfunctionresponse.h"
#include "lambdarequest_p.h"

namespace QtAws {
namespace Lambda {

/**
 * @class  GetFunctionRequest
 *
 * @brief  Implements Lambda GetFunction requests.
 *
 * @see    LambdaClient::getFunction
 */

/**
 * @brief  Constructs a new GetFunctionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetFunctionRequest::GetFunctionRequest(const GetFunctionRequest &other)
    : LambdaRequest(new GetFunctionRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetFunctionRequest object.
 */
GetFunctionRequest::GetFunctionRequest()
    : LambdaRequest(new GetFunctionRequestPrivate(LambdaRequest::GetFunctionAction, this))
{

}

bool GetFunctionRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetFunctionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetFunctionResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  LambdaClient::send
 */
AwsAbstractResponse * GetFunctionRequest::response(QNetworkReply * const reply) const
{
    return new GetFunctionResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetFunctionRequestPrivate
 *
 * @brief  Private implementation for GetFunctionRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetFunctionRequestPrivate object.
 *
 * @param  action  Lambda action being performed.
 * @param  q       Pointer to this object's public GetFunctionRequest instance.
 */
GetFunctionRequestPrivate::GetFunctionRequestPrivate(
    const LambdaRequest::Action action, GetFunctionRequest * const q)
    : GetFunctionPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetFunctionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetFunctionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetFunctionRequest instance.
 */
GetFunctionRequestPrivate::GetFunctionRequestPrivate(
    const GetFunctionRequestPrivate &other, GetFunctionRequest * const q)
    : GetFunctionPrivate(other, q)
{

}

} // namespace Lambda
} // namespace QtAws
