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

#include "getvaultnotificationsrequest.h"
#include "getvaultnotificationsrequest_p.h"
#include "getvaultnotificationsresponse.h"
#include "glacierrequest_p.h"

namespace AWS {
namespace Glacier {

/**
 * @class  GetVaultNotificationsRequest
 *
 * @brief  Implements Glacier GetVaultNotifications requests.
 *
 * @see    GlacierClient::getVaultNotifications
 */

/**
 * @brief  Constructs a new GetVaultNotificationsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetVaultNotificationsResponse::GetVaultNotificationsResponse(

/**
 * @brief  Constructs a new GetVaultNotificationsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetVaultNotificationsRequest::GetVaultNotificationsRequest(const GetVaultNotificationsRequest &other)
    : GlacierRequest(new GetVaultNotificationsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetVaultNotificationsRequest object.
 */
GetVaultNotificationsRequest::GetVaultNotificationsRequest()
    : GlacierRequest(new GetVaultNotificationsRequestPrivate(GlacierRequest::GetVaultNotificationsAction, this))
{

}

bool GetVaultNotificationsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetVaultNotificationsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetVaultNotificationsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  GlacierClient::send
 */
AwsAbstractResponse * GetVaultNotificationsRequest::response(QNetworkReply * const reply) const
{
    return new GetVaultNotificationsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetVaultNotificationsRequestPrivate
 *
 * @brief  Private implementation for GetVaultNotificationsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetVaultNotificationsRequestPrivate object.
 *
 * @param  action  Glacier action being performed.
 * @param  q       Pointer to this object's public GetVaultNotificationsRequest instance.
 */
GetVaultNotificationsRequestPrivate::GetVaultNotificationsRequestPrivate(
    const GlacierRequest::Action action, GetVaultNotificationsRequest * const q)
    : GetVaultNotificationsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetVaultNotificationsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetVaultNotificationsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetVaultNotificationsRequest instance.
 */
GetVaultNotificationsRequestPrivate::GetVaultNotificationsRequestPrivate(
    const GetVaultNotificationsRequestPrivate &other, GetVaultNotificationsRequest * const q)
    : GetVaultNotificationsPrivate(other, q)
{

}
