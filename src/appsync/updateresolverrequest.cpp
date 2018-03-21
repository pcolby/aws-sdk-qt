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

#include "updateresolverrequest.h"
#include "updateresolverrequest_p.h"
#include "updateresolverresponse.h"
#include "appsyncrequest_p.h"

namespace AWS {
namespace AppSync {

/**
 * @class  UpdateResolverRequest
 *
 * @brief  Implements AppSync UpdateResolver requests.
 *
 * @see    AppSyncClient::updateResolver
 */

/**
 * @brief  Constructs a new UpdateResolverResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateResolverResponse::UpdateResolverResponse(

/**
 * @brief  Constructs a new UpdateResolverRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateResolverRequest::UpdateResolverRequest(const UpdateResolverRequest &other)
    : AppSyncRequest(new UpdateResolverRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateResolverRequest object.
 */
UpdateResolverRequest::UpdateResolverRequest()
    : AppSyncRequest(new UpdateResolverRequestPrivate(AppSyncRequest::UpdateResolverAction, this))
{

}

bool UpdateResolverRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateResolverResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateResolverResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  AppSyncClient::send
 */
AwsAbstractResponse * UpdateResolverRequest::response(QNetworkReply * const reply) const
{
    return new UpdateResolverResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateResolverRequestPrivate
 *
 * @brief  Private implementation for UpdateResolverRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateResolverRequestPrivate object.
 *
 * @param  action  AppSync action being performed.
 * @param  q       Pointer to this object's public UpdateResolverRequest instance.
 */
UpdateResolverRequestPrivate::UpdateResolverRequestPrivate(
    const AppSyncRequest::Action action, UpdateResolverRequest * const q)
    : UpdateResolverPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateResolverRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateResolverRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateResolverRequest instance.
 */
UpdateResolverRequestPrivate::UpdateResolverRequestPrivate(
    const UpdateResolverRequestPrivate &other, UpdateResolverRequest * const q)
    : UpdateResolverPrivate(other, q)
{

}

} // namespace AppSync
} // namespace AWS
