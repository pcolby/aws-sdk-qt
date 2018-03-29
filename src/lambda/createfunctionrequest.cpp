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

#include "createfunctionrequest.h"
#include "createfunctionrequest_p.h"
#include "createfunctionresponse.h"
#include "lambdarequest_p.h"

namespace QtAws {
namespace Lambda {

/**
 * @class  CreateFunctionRequest
 *
 * @brief  Implements Lambda CreateFunction requests.
 *
 * @see    LambdaClient::createFunction
 */

/**
 * @brief  Constructs a new CreateFunctionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateFunctionRequest::CreateFunctionRequest(const CreateFunctionRequest &other)
    : LambdaRequest(new CreateFunctionRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateFunctionRequest object.
 */
CreateFunctionRequest::CreateFunctionRequest()
    : LambdaRequest(new CreateFunctionRequestPrivate(LambdaRequest::CreateFunctionAction, this))
{

}

bool CreateFunctionRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateFunctionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateFunctionResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  LambdaClient::send
 */
AwsAbstractResponse * CreateFunctionRequest::response(QNetworkReply * const reply) const
{
    return new CreateFunctionResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateFunctionRequestPrivate
 *
 * @brief  Private implementation for CreateFunctionRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateFunctionRequestPrivate object.
 *
 * @param  action  Lambda action being performed.
 * @param  q       Pointer to this object's public CreateFunctionRequest instance.
 */
CreateFunctionRequestPrivate::CreateFunctionRequestPrivate(
    const LambdaRequest::Action action, CreateFunctionRequest * const q)
    : CreateFunctionPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateFunctionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateFunctionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateFunctionRequest instance.
 */
CreateFunctionRequestPrivate::CreateFunctionRequestPrivate(
    const CreateFunctionRequestPrivate &other, CreateFunctionRequest * const q)
    : CreateFunctionPrivate(other, q)
{

}

} // namespace Lambda
} // namespace QtAws
