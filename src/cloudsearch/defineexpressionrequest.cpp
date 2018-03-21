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

#include "defineexpressionrequest.h"
#include "defineexpressionrequest_p.h"
#include "defineexpressionresponse.h"
#include "cloudsearchrequest_p.h"

namespace AWS {
namespace CloudSearch {

/**
 * @class  DefineExpressionRequest
 *
 * @brief  Implements CloudSearch DefineExpression requests.
 *
 * @see    CloudSearchClient::defineExpression
 */

/**
 * @brief  Constructs a new DefineExpressionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DefineExpressionRequest::DefineExpressionRequest(const DefineExpressionRequest &other)
    : CloudSearchRequest(new DefineExpressionRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DefineExpressionRequest object.
 */
DefineExpressionRequest::DefineExpressionRequest()
    : CloudSearchRequest(new DefineExpressionRequestPrivate(CloudSearchRequest::DefineExpressionAction, this))
{

}

bool DefineExpressionRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DefineExpressionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DefineExpressionResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CloudSearchClient::send
 */
AwsAbstractResponse * DefineExpressionRequest::response(QNetworkReply * const reply) const
{
    return new DefineExpressionResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DefineExpressionRequestPrivate
 *
 * @brief  Private implementation for DefineExpressionRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DefineExpressionRequestPrivate object.
 *
 * @param  action  CloudSearch action being performed.
 * @param  q       Pointer to this object's public DefineExpressionRequest instance.
 */
DefineExpressionRequestPrivate::DefineExpressionRequestPrivate(
    const CloudSearchRequest::Action action, DefineExpressionRequest * const q)
    : DefineExpressionPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DefineExpressionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DefineExpressionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DefineExpressionRequest instance.
 */
DefineExpressionRequestPrivate::DefineExpressionRequestPrivate(
    const DefineExpressionRequestPrivate &other, DefineExpressionRequest * const q)
    : DefineExpressionPrivate(other, q)
{

}

} // namespace CloudSearch
} // namespace AWS
