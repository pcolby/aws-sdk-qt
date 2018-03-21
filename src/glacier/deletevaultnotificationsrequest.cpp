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

#include "deletevaultnotificationsrequest.h"
#include "deletevaultnotificationsrequest_p.h"
#include "deletevaultnotificationsresponse.h"
#include "glacierrequest_p.h"

namespace AWS {
namespace Glacier {

/**
 * @class  DeleteVaultNotificationsRequest
 *
 * @brief  Implements Glacier DeleteVaultNotifications requests.
 *
 * @see    GlacierClient::deleteVaultNotifications
 */

/**
 * @brief  Constructs a new DeleteVaultNotificationsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteVaultNotificationsRequest::DeleteVaultNotificationsRequest(const DeleteVaultNotificationsRequest &other)
    : GlacierRequest(new DeleteVaultNotificationsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteVaultNotificationsRequest object.
 */
DeleteVaultNotificationsRequest::DeleteVaultNotificationsRequest()
    : GlacierRequest(new DeleteVaultNotificationsRequestPrivate(GlacierRequest::DeleteVaultNotificationsAction, this))
{

}

bool DeleteVaultNotificationsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteVaultNotificationsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteVaultNotificationsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  GlacierClient::send
 */
AwsAbstractResponse * DeleteVaultNotificationsRequest::response(QNetworkReply * const reply) const
{
    return new DeleteVaultNotificationsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteVaultNotificationsRequestPrivate
 *
 * @brief  Private implementation for DeleteVaultNotificationsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteVaultNotificationsRequestPrivate object.
 *
 * @param  action  Glacier action being performed.
 * @param  q       Pointer to this object's public DeleteVaultNotificationsRequest instance.
 */
DeleteVaultNotificationsRequestPrivate::DeleteVaultNotificationsRequestPrivate(
    const GlacierRequest::Action action, DeleteVaultNotificationsRequest * const q)
    : DeleteVaultNotificationsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteVaultNotificationsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteVaultNotificationsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteVaultNotificationsRequest instance.
 */
DeleteVaultNotificationsRequestPrivate::DeleteVaultNotificationsRequestPrivate(
    const DeleteVaultNotificationsRequestPrivate &other, DeleteVaultNotificationsRequest * const q)
    : DeleteVaultNotificationsPrivate(other, q)
{

}

} // namespace Glacier
} // namespace AWS
