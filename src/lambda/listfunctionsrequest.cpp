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

#include "listfunctionsrequest.h"
#include "listfunctionsrequest_p.h"
#include "listfunctionsresponse.h"
#include "lambdarequest_p.h"

namespace AWS {
namespace Lambda {

/**
 * @class  ListFunctionsRequest
 *
 * @brief  Implements Lambda ListFunctions requests.
 *
 * @see    LambdaClient::listFunctions
 */

/**
 * @brief  Constructs a new ListFunctionsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListFunctionsRequest::ListFunctionsRequest(const ListFunctionsRequest &other)
    : LambdaRequest(new ListFunctionsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListFunctionsRequest object.
 */
ListFunctionsRequest::ListFunctionsRequest()
    : LambdaRequest(new ListFunctionsRequestPrivate(LambdaRequest::ListFunctionsAction, this))
{

}

bool ListFunctionsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListFunctionsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListFunctionsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  LambdaClient::send
 */
AwsAbstractResponse * ListFunctionsRequest::response(QNetworkReply * const reply) const
{
    return new ListFunctionsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListFunctionsRequestPrivate
 *
 * @brief  Private implementation for ListFunctionsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListFunctionsRequestPrivate object.
 *
 * @param  action  Lambda action being performed.
 * @param  q       Pointer to this object's public ListFunctionsRequest instance.
 */
ListFunctionsRequestPrivate::ListFunctionsRequestPrivate(
    const LambdaRequest::Action action, ListFunctionsRequest * const q)
    : ListFunctionsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListFunctionsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListFunctionsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListFunctionsRequest instance.
 */
ListFunctionsRequestPrivate::ListFunctionsRequestPrivate(
    const ListFunctionsRequestPrivate &other, ListFunctionsRequest * const q)
    : ListFunctionsPrivate(other, q)
{

}

} // namespace Lambda
} // namespace AWS
