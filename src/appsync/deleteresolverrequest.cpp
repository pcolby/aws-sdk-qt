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

#include "deleteresolverrequest.h"
#include "deleteresolverrequest_p.h"
#include "deleteresolverresponse.h"
#include "appsyncrequest_p.h"

namespace AWS {
namespace AppSync {

/**
 * @class  DeleteResolverRequest
 *
 * @brief  Implements AppSync DeleteResolver requests.
 *
 * @see    AppSyncClient::deleteResolver
 */

/**
 * @brief  Constructs a new DeleteResolverRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteResolverRequest::DeleteResolverRequest(const DeleteResolverRequest &other)
    : AppSyncRequest(new DeleteResolverRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteResolverRequest object.
 */
DeleteResolverRequest::DeleteResolverRequest()
    : AppSyncRequest(new DeleteResolverRequestPrivate(AppSyncRequest::DeleteResolverAction, this))
{

}

bool DeleteResolverRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteResolverResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteResolverResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  AppSyncClient::send
 */
AwsAbstractResponse * DeleteResolverRequest::response(QNetworkReply * const reply) const
{
    return new DeleteResolverResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteResolverRequestPrivate
 *
 * @brief  Private implementation for DeleteResolverRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteResolverRequestPrivate object.
 *
 * @param  action  AppSync action being performed.
 * @param  q       Pointer to this object's public DeleteResolverRequest instance.
 */
DeleteResolverRequestPrivate::DeleteResolverRequestPrivate(
    const AppSyncRequest::Action action, DeleteResolverRequest * const q)
    : DeleteResolverPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteResolverRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteResolverRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteResolverRequest instance.
 */
DeleteResolverRequestPrivate::DeleteResolverRequestPrivate(
    const DeleteResolverRequestPrivate &other, DeleteResolverRequest * const q)
    : DeleteResolverPrivate(other, q)
{

}

} // namespace AppSync
} // namespace AWS
