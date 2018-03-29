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

#include "deletealiasrequest.h"
#include "deletealiasrequest_p.h"
#include "deletealiasresponse.h"
#include "lambdarequest_p.h"

namespace QtAws {
namespace Lambda {

/**
 * @class  DeleteAliasRequest
 *
 * @brief  Implements Lambda DeleteAlias requests.
 *
 * @see    LambdaClient::deleteAlias
 */

/**
 * @brief  Constructs a new DeleteAliasRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteAliasRequest::DeleteAliasRequest(const DeleteAliasRequest &other)
    : LambdaRequest(new DeleteAliasRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteAliasRequest object.
 */
DeleteAliasRequest::DeleteAliasRequest()
    : LambdaRequest(new DeleteAliasRequestPrivate(LambdaRequest::DeleteAliasAction, this))
{

}

bool DeleteAliasRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteAliasResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteAliasResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  LambdaClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteAliasRequest::response(QNetworkReply * const reply) const
{
    return new DeleteAliasResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteAliasRequestPrivate
 *
 * @brief  Private implementation for DeleteAliasRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteAliasRequestPrivate object.
 *
 * @param  action  Lambda action being performed.
 * @param  q       Pointer to this object's public DeleteAliasRequest instance.
 */
DeleteAliasRequestPrivate::DeleteAliasRequestPrivate(
    const LambdaRequest::Action action, DeleteAliasRequest * const q)
    : LambdaRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteAliasRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteAliasRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteAliasRequest instance.
 */
DeleteAliasRequestPrivate::DeleteAliasRequestPrivate(
    const DeleteAliasRequestPrivate &other, DeleteAliasRequest * const q)
    : LambdaRequestPrivate(other, q)
{

}

} // namespace Lambda
} // namespace QtAws
