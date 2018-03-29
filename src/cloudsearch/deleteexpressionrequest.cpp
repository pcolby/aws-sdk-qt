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

#include "deleteexpressionrequest.h"
#include "deleteexpressionrequest_p.h"
#include "deleteexpressionresponse.h"
#include "cloudsearchrequest_p.h"

namespace QtAws {
namespace CloudSearch {

/**
 * @class  DeleteExpressionRequest
 *
 * @brief  Implements CloudSearch DeleteExpression requests.
 *
 * @see    CloudSearchClient::deleteExpression
 */

/**
 * @brief  Constructs a new DeleteExpressionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteExpressionRequest::DeleteExpressionRequest(const DeleteExpressionRequest &other)
    : CloudSearchRequest(new DeleteExpressionRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteExpressionRequest object.
 */
DeleteExpressionRequest::DeleteExpressionRequest()
    : CloudSearchRequest(new DeleteExpressionRequestPrivate(CloudSearchRequest::DeleteExpressionAction, this))
{

}

bool DeleteExpressionRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteExpressionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteExpressionResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CloudSearchClient::send
 */
AwsAbstractResponse * DeleteExpressionRequest::response(QNetworkReply * const reply) const
{
    return new DeleteExpressionResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteExpressionRequestPrivate
 *
 * @brief  Private implementation for DeleteExpressionRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteExpressionRequestPrivate object.
 *
 * @param  action  CloudSearch action being performed.
 * @param  q       Pointer to this object's public DeleteExpressionRequest instance.
 */
DeleteExpressionRequestPrivate::DeleteExpressionRequestPrivate(
    const CloudSearchRequest::Action action, DeleteExpressionRequest * const q)
    : DeleteExpressionPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteExpressionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteExpressionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteExpressionRequest instance.
 */
DeleteExpressionRequestPrivate::DeleteExpressionRequestPrivate(
    const DeleteExpressionRequestPrivate &other, DeleteExpressionRequest * const q)
    : DeleteExpressionPrivate(other, q)
{

}

} // namespace CloudSearch
} // namespace QtAws
